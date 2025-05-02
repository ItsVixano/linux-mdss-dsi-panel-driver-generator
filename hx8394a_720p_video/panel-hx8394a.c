// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2025 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2013, The Linux Foundation. All rights reserved. (FIXME)

#include <linux/delay.h>
#include <linux/gpio/consumer.h>
#include <linux/mod_devicetable.h>
#include <linux/module.h>

#include <drm/drm_mipi_dsi.h>
#include <drm/drm_modes.h>
#include <drm/drm_panel.h>
#include <drm/drm_probe_helper.h>

struct hx8394a {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
};

static inline struct hx8394a *to_hx8394a(struct drm_panel *panel)
{
	return container_of(panel, struct hx8394a, panel);
}

static void hx8394a_reset(struct hx8394a *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	usleep_range(1000, 2000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int hx8394a_on(struct hx8394a *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb9, 0xff, 0x83, 0x94);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc7, 0x00, 0x10, 0x00, 0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xbc, 0x07);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xba, 0x13);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb1,
				     0x01, 0x00, 0x07, 0x83, 0x01, 0x12, 0x0f,
				     0x32, 0x38, 0x29, 0x29, 0x50, 0x02, 0x00,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb2,
				     0x00, 0xc8, 0x09, 0x05, 0x00, 0x71);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xcc, 0x05);
	mipi_dsi_dcs_nop_multi(&dsi_ctx);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xd5,
				     0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x01,
				     0x00, 0x00, 0x00, 0x33, 0x00, 0x23, 0x45,
				     0x67, 0x01, 0x01, 0x23, 0x88, 0x88, 0x88,
				     0x88, 0x88, 0x88, 0x88, 0x99, 0x99, 0x99,
				     0x88, 0x88, 0x99, 0x88, 0x54, 0x32, 0x10,
				     0x76, 0x32, 0x10, 0x88, 0x88, 0x88, 0x88,
				     0x88, 0x88, 0x88, 0x99, 0x99, 0x99, 0x88,
				     0x88, 0x88, 0x99);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb4,
				     0x80, 0x08, 0x32, 0x10, 0x00, 0x32, 0x15,
				     0x08, 0x32, 0x12, 0x20, 0x33, 0x05, 0x4c,
				     0x05, 0x37, 0x05, 0x3f, 0x1e, 0x5f, 0x5f,
				     0x06);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb6, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xe0,
				     0x01, 0x05, 0x07, 0x25, 0x35, 0x3f, 0x0b,
				     0x32, 0x04, 0x09, 0x0e, 0x10, 0x13, 0x10,
				     0x14, 0x16, 0x1b, 0x01, 0x05, 0x07, 0x25,
				     0x35, 0x3f, 0x0b, 0x32, 0x04, 0x09, 0x0e,
				     0x10, 0x13, 0x10, 0x14, 0x16, 0x1b);
	mipi_dsi_dcs_nop_multi(&dsi_ctx);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xbf, 0x06, 0x00, 0x10);
	mipi_dsi_dcs_exit_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 200);
	mipi_dsi_dcs_set_display_on_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 50);

	return dsi_ctx.accum_err;
}

static int hx8394a_off(struct hx8394a *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_set_display_off_multi(&dsi_ctx);
	mipi_dsi_usleep_range(&dsi_ctx, 10000, 11000);
	mipi_dsi_dcs_enter_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 150);

	return dsi_ctx.accum_err;
}

static int hx8394a_prepare(struct drm_panel *panel)
{
	struct hx8394a *ctx = to_hx8394a(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	hx8394a_reset(ctx);

	ret = hx8394a_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	return 0;
}

static int hx8394a_unprepare(struct drm_panel *panel)
{
	struct hx8394a *ctx = to_hx8394a(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = hx8394a_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	return 0;
}

static const struct drm_display_mode hx8394a_mode = {
	.clock = (720 + 79 + 60 + 59) * (1280 + 7 + 2 + 10) * 60 / 1000,
	.hdisplay = 720,
	.hsync_start = 720 + 79,
	.hsync_end = 720 + 79 + 60,
	.htotal = 720 + 79 + 60 + 59,
	.vdisplay = 1280,
	.vsync_start = 1280 + 7,
	.vsync_end = 1280 + 7 + 2,
	.vtotal = 1280 + 7 + 2 + 10,
	.width_mm = 59,
	.height_mm = 104,
	.type = DRM_MODE_TYPE_DRIVER,
};

static int hx8394a_get_modes(struct drm_panel *panel,
			     struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &hx8394a_mode);
}

static const struct drm_panel_funcs hx8394a_panel_funcs = {
	.prepare = hx8394a_prepare,
	.unprepare = hx8394a_unprepare,
	.get_modes = hx8394a_get_modes,
};

static int hx8394a_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct hx8394a *ctx;
	int ret;

	ctx = devm_kzalloc(dev, sizeof(*ctx), GFP_KERNEL);
	if (!ctx)
		return -ENOMEM;

	ctx->reset_gpio = devm_gpiod_get(dev, "reset", GPIOD_OUT_HIGH);
	if (IS_ERR(ctx->reset_gpio))
		return dev_err_probe(dev, PTR_ERR(ctx->reset_gpio),
				     "Failed to get reset-gpios\n");

	ctx->dsi = dsi;
	mipi_dsi_set_drvdata(dsi, ctx);

	dsi->lanes = 4;
	dsi->format = MIPI_DSI_FMT_RGB888;
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
			  MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_MODE_NO_EOT_PACKET |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS;

	drm_panel_init(&ctx->panel, dev, &hx8394a_panel_funcs,
		       DRM_MODE_CONNECTOR_DSI);
	ctx->panel.prepare_prev_first = true;

	ret = drm_panel_of_backlight(&ctx->panel);
	if (ret)
		return dev_err_probe(dev, ret, "Failed to get backlight\n");

	drm_panel_add(&ctx->panel);

	ret = mipi_dsi_attach(dsi);
	if (ret < 0) {
		drm_panel_remove(&ctx->panel);
		return dev_err_probe(dev, ret, "Failed to attach to DSI host\n");
	}

	return 0;
}

static void hx8394a_remove(struct mipi_dsi_device *dsi)
{
	struct hx8394a *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id hx8394a_of_match[] = {
	{ .compatible = "mdss,hx8394a" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, hx8394a_of_match);

static struct mipi_dsi_driver hx8394a_driver = {
	.probe = hx8394a_probe,
	.remove = hx8394a_remove,
	.driver = {
		.name = "panel-hx8394a",
		.of_match_table = hx8394a_of_match,
	},
};
module_mipi_dsi_driver(hx8394a_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for hx8394a 720p video mode dsi panel");
MODULE_LICENSE("GPL");

// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2025 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2013, The Linux Foundation. All rights reserved. (FIXME)

#include <linux/delay.h>
#include <linux/gpio/consumer.h>
#include <linux/mod_devicetable.h>
#include <linux/module.h>

#include <video/mipi_display.h>

#include <drm/drm_mipi_dsi.h>
#include <drm/drm_modes.h>
#include <drm/drm_panel.h>
#include <drm/drm_probe_helper.h>

struct ssd2080m {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
};

static inline struct ssd2080m *to_ssd2080m(struct drm_panel *panel)
{
	return container_of(panel, struct ssd2080m, panel);
}

static void ssd2080m_reset(struct ssd2080m *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	usleep_range(2000, 3000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int ssd2080m_on(struct ssd2080m *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xff, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x53, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc6,
					 0x63, 0x00, 0x81, 0x31);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcb,
					 0xe7, 0x80, 0x73, 0x33);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xec, 0xd2);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb3, 0x04, 0x9f);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb2, 0x16, 0x26, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb4, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc1, 0x04);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc2, 0xbe, 0x00, 0x58);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc3,
					 0x01, 0x22, 0x11, 0x21, 0x0e, 0x80,
					 0x80, 0x24);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb6,
					 0x09, 0x16, 0x42, 0x01, 0x13, 0x00,
					 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb7, 0x24, 0x26, 0x43);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb8,
					 0x16, 0x08, 0x25, 0x44, 0x08);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb9,
					 0x06, 0x08, 0x07, 0x09, 0x00, 0x00,
					 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xba,
					 0x0e, 0x10, 0x0a, 0x0c, 0x16, 0x05,
					 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbb,
					 0xa1, 0xa1, 0xa1, 0xa1, 0x00, 0x00,
					 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbc,
					 0x0f, 0x11, 0x0b, 0x0d, 0x16, 0x05,
					 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbd,
					 0xa1, 0xa1, 0xa1, 0xa1, 0x00, 0x00,
					 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe6, 0xff, 0xff, 0x0f);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc7, 0x3f);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb5,
					 0x47, 0x00, 0x00, 0x08, 0x00, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc4,
					 0xdf, 0xc2, 0x0c, 0x0c, 0x63, 0xe3,
					 0x99);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd0,
					 0x0a, 0x00, 0x06, 0x09, 0x10, 0x20);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd1,
					 0x1d, 0x32, 0x1b, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd2,
					 0x0a, 0x00, 0x06, 0x09, 0x10, 0x20);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd3,
					 0x1d, 0x32, 0x1b, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd4,
					 0x0a, 0x00, 0x06, 0x09, 0x10, 0x20);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd5,
					 0x1d, 0x32, 0x1b, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd6,
					 0x0a, 0x00, 0x06, 0x09, 0x10, 0x20);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd7,
					 0x1d, 0x32, 0x1b, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd8,
					 0x0a, 0x00, 0x06, 0x09, 0x10, 0x20);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd9,
					 0x1d, 0x32, 0x1b, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xda,
					 0x0a, 0x00, 0x06, 0x09, 0x10, 0x20);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xdb,
					 0x1d, 0x32, 0x1b, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc, 0x10, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xce, 0x4e, 0x55, 0xa5);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe0, 0x01, 0x02, 0x02);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf6,
					 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf7,
					 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe1, 0x90, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xde,
					 0x95, 0xcf, 0xe2, 0xce, 0x11, 0x15);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcf, 0x46);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc5, 0x66);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xed, 0x00, 0x20);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_CONTROL_DISPLAY,
				     0x2c);
	mipi_dsi_dcs_exit_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 32);
	mipi_dsi_dcs_set_display_on_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 32);

	return dsi_ctx.accum_err;
}

static int ssd2080m_off(struct ssd2080m *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_enter_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 50);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_CONTROL_DISPLAY,
				     0x00);
	mipi_dsi_msleep(&dsi_ctx, 32);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc2, 0x00);
	mipi_dsi_msleep(&dsi_ctx, 32);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xcf, 0x40);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xde, 0x84, 0x00);
	mipi_dsi_msleep(&dsi_ctx, 32);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xcb, 0x22);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc3, 0x00);

	return dsi_ctx.accum_err;
}

static int ssd2080m_prepare(struct drm_panel *panel)
{
	struct ssd2080m *ctx = to_ssd2080m(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ssd2080m_reset(ctx);

	ret = ssd2080m_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	return 0;
}

static int ssd2080m_unprepare(struct drm_panel *panel)
{
	struct ssd2080m *ctx = to_ssd2080m(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = ssd2080m_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	return 0;
}

static const struct drm_display_mode ssd2080m_mode = {
	.clock = (720 + 80 + 14 + 24) * (1280 + 25 + 2 + 14) * 60 / 1000,
	.hdisplay = 720,
	.hsync_start = 720 + 80,
	.hsync_end = 720 + 80 + 14,
	.htotal = 720 + 80 + 14 + 24,
	.vdisplay = 1280,
	.vsync_start = 1280 + 25,
	.vsync_end = 1280 + 25 + 2,
	.vtotal = 1280 + 25 + 2 + 14,
	.width_mm = 0,
	.height_mm = 0,
	.type = DRM_MODE_TYPE_DRIVER,
};

static int ssd2080m_get_modes(struct drm_panel *panel,
			      struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &ssd2080m_mode);
}

static const struct drm_panel_funcs ssd2080m_panel_funcs = {
	.prepare = ssd2080m_prepare,
	.unprepare = ssd2080m_unprepare,
	.get_modes = ssd2080m_get_modes,
};

static int ssd2080m_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct ssd2080m *ctx;
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

	drm_panel_init(&ctx->panel, dev, &ssd2080m_panel_funcs,
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

static void ssd2080m_remove(struct mipi_dsi_device *dsi)
{
	struct ssd2080m *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id ssd2080m_of_match[] = {
	{ .compatible = "mdss,ssd2080m" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, ssd2080m_of_match);

static struct mipi_dsi_driver ssd2080m_driver = {
	.probe = ssd2080m_probe,
	.remove = ssd2080m_remove,
	.driver = {
		.name = "panel-ssd2080m",
		.of_match_table = ssd2080m_of_match,
	},
};
module_mipi_dsi_driver(ssd2080m_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for ssd2080m 720p video mode dsi panel");
MODULE_LICENSE("GPL");

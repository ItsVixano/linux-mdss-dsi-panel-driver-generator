// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2025 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2013, The Linux Foundation. All rights reserved. (FIXME)

#include <linux/backlight.h>
#include <linux/delay.h>
#include <linux/gpio/consumer.h>
#include <linux/mod_devicetable.h>
#include <linux/module.h>

#include <video/mipi_display.h>

#include <drm/drm_mipi_dsi.h>
#include <drm/drm_modes.h>
#include <drm/drm_panel.h>
#include <drm/drm_probe_helper.h>

struct truly {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
};

static inline struct truly *to_truly(struct drm_panel *panel)
{
	return container_of(panel, struct truly, panel);
}

static void truly_reset(struct truly *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	usleep_range(1000, 2000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	usleep_range(1000, 2000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	usleep_range(6000, 7000);
}

static int truly_on(struct truly *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xff, 0x96, 0x05, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x80);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xff, 0x96, 0x05);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x90);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc5,
					 0x96, 0x86, 0x06, 0x33, 0x33, 0x33,
					 0x31);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x92);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc5, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd8, 0xaf, 0xaf);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xb2);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf5,
					 0x15, 0x00, 0x15, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x93);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc5, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xb1);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc5, 0x28);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xb4);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc0, 0x50);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xc5);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb0, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xc0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc5,
					 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x80);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc1, 0x36, 0x66);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x89);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc0, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x80);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc4, 0x9c);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xc7);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcf, 0x80, 0x00, 0x02);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xa0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc1, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xc0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcf, 0x3d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xc7);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcf, 0x80, 0x00, 0x05);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xc0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc5, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x83);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb2, 0x80);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xb5);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc0, 0x18);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xec,
					 0x40, 0x56, 0x33, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x44, 0x24, 0x41,
					 0x44, 0x24, 0x02);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xed,
					 0x40, 0x44, 0x44, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
					 0x44, 0x24, 0x02);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xee,
					 0x61, 0x88, 0x56, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
					 0x44, 0x44, 0x44, 0x33, 0x13, 0x41,
					 0x44, 0x44, 0x04);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe1,
					 0x00, 0x0c, 0x11, 0x0e, 0x07, 0x0e,
					 0x08, 0x05, 0x0c, 0x0e, 0x0a, 0x00,
					 0x06, 0x0e, 0x06, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe2,
					 0x00, 0x0c, 0x11, 0x0e, 0x07, 0x0e,
					 0x08, 0x05, 0x0c, 0x0e, 0x0a, 0x00,
					 0x06, 0x0e, 0x06, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x80);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xce,
					 0x8b, 0x03, 0x28, 0x8a, 0x03, 0x28,
					 0x89, 0x03, 0x28, 0x88, 0x03, 0x28);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x90);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xce,
					 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00,
					 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00,
					 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xa0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xce,
					 0x38, 0x07, 0x03, 0xc0, 0x00, 0x18,
					 0x00, 0x38, 0x06, 0x03, 0xc1, 0x00,
					 0x18, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xb0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xce,
					 0x38, 0x05, 0x03, 0xc2, 0x00, 0x18,
					 0x00, 0x38, 0x04, 0x03, 0xc3, 0x00,
					 0x18, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xc0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xce,
					 0x38, 0x03, 0x03, 0xc4, 0x00, 0x18,
					 0x00, 0x38, 0x02, 0x03, 0xc5, 0x00,
					 0x18, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xd0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xce,
					 0x38, 0x01, 0x03, 0xc6, 0x00, 0x18,
					 0x00, 0x38, 0x00, 0x03, 0xc7, 0x00,
					 0x18, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xc0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcb,
					 0x04, 0x04, 0x04, 0x04, 0x00, 0x04,
					 0x00, 0x04, 0x00, 0x04, 0x00, 0x04,
					 0x04, 0x04, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xd0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcb,
					 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
					 0x04, 0x04, 0x04, 0x00, 0x04, 0x00,
					 0x04, 0x00, 0x04);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xe0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcb,
					 0x00, 0x04, 0x04, 0x04, 0x00, 0x00,
					 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xf0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcb,
					 0x00, 0xcc, 0xcc, 0x00, 0x00, 0x00,
					 0xcc, 0xcc, 0x0f, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x80);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc,
					 0x26, 0x25, 0x21, 0x22, 0x00, 0x0c,
					 0x00, 0x0a, 0x00, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x90);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc,
					 0x00, 0x0e, 0x02, 0x04, 0x00, 0x00,
					 0x00, 0x00, 0x00, 0x00, 0x26, 0x25,
					 0x21, 0x22, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xa0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc,
					 0x0b, 0x00, 0x09, 0x00, 0x0f, 0x00,
					 0x0d, 0x01, 0x03, 0x00, 0x00, 0x00,
					 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xb0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc,
					 0x25, 0x26, 0x21, 0x22, 0x00, 0x0d,
					 0x00, 0x0f, 0x00, 0x09);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xc0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc,
					 0x00, 0x0b, 0x03, 0x01, 0x00, 0x00,
					 0x00, 0x00, 0x00, 0x00, 0x25, 0x26,
					 0x21, 0x22, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0xd0);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc,
					 0x0e, 0x00, 0x10, 0x00, 0x0a, 0x00,
					 0x0c, 0x04, 0x02, 0x00, 0x00, 0x00,
					 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xff, 0xff, 0xff, 0xff);
	mipi_dsi_dcs_exit_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 120);
	mipi_dsi_dcs_set_display_on_multi(&dsi_ctx);
	mipi_dsi_usleep_range(&dsi_ctx, 10000, 11000);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_CONTROL_DISPLAY,
				     0x2c);
	mipi_dsi_usleep_range(&dsi_ctx, 10000, 11000);
	mipi_dsi_dcs_set_display_brightness_multi(&dsi_ctx, 0x0050);
	mipi_dsi_usleep_range(&dsi_ctx, 10000, 11000);

	return dsi_ctx.accum_err;
}

static int truly_off(struct truly *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_set_display_off_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 150);
	mipi_dsi_dcs_enter_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 150);

	return dsi_ctx.accum_err;
}

static int truly_prepare(struct drm_panel *panel)
{
	struct truly *ctx = to_truly(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	truly_reset(ctx);

	ret = truly_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	return 0;
}

static int truly_unprepare(struct drm_panel *panel)
{
	struct truly *ctx = to_truly(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = truly_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	return 0;
}

static const struct drm_display_mode truly_mode = {
	.clock = (540 + 130 + 2 + 30) * (960 + 56 + 2 + 16) * 60 / 1000,
	.hdisplay = 540,
	.hsync_start = 540 + 130,
	.hsync_end = 540 + 130 + 2,
	.htotal = 540 + 130 + 2 + 30,
	.vdisplay = 960,
	.vsync_start = 960 + 56,
	.vsync_end = 960 + 56 + 2,
	.vtotal = 960 + 56 + 2 + 16,
	.width_mm = 59,
	.height_mm = 104,
	.type = DRM_MODE_TYPE_DRIVER,
};

static int truly_get_modes(struct drm_panel *panel,
			   struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &truly_mode);
}

static const struct drm_panel_funcs truly_panel_funcs = {
	.prepare = truly_prepare,
	.unprepare = truly_unprepare,
	.get_modes = truly_get_modes,
};

static int truly_bl_update_status(struct backlight_device *bl)
{
	struct mipi_dsi_device *dsi = bl_get_data(bl);
	u16 brightness = backlight_get_brightness(bl);
	int ret;

	dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	ret = mipi_dsi_dcs_set_display_brightness(dsi, brightness);
	if (ret < 0)
		return ret;

	dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	return 0;
}

// TODO: Check if /sys/class/backlight/.../actual_brightness actually returns
// correct values. If not, remove this function.
static int truly_bl_get_brightness(struct backlight_device *bl)
{
	struct mipi_dsi_device *dsi = bl_get_data(bl);
	u16 brightness;
	int ret;

	dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	ret = mipi_dsi_dcs_get_display_brightness(dsi, &brightness);
	if (ret < 0)
		return ret;

	dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	return brightness & 0xff;
}

static const struct backlight_ops truly_bl_ops = {
	.update_status = truly_bl_update_status,
	.get_brightness = truly_bl_get_brightness,
};

static struct backlight_device *
truly_create_backlight(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	const struct backlight_properties props = {
		.type = BACKLIGHT_RAW,
		.brightness = 255,
		.max_brightness = 255,
	};

	return devm_backlight_device_register(dev, dev_name(dev), dev, dsi,
					      &truly_bl_ops, &props);
}

static int truly_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct truly *ctx;
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

	dsi->lanes = 2;
	dsi->format = MIPI_DSI_FMT_RGB888;
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
			  MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_MODE_NO_EOT_PACKET |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS |
			  MIPI_DSI_MODE_VIDEO_NO_HFP;

	drm_panel_init(&ctx->panel, dev, &truly_panel_funcs,
		       DRM_MODE_CONNECTOR_DSI);
	ctx->panel.prepare_prev_first = true;

	ctx->panel.backlight = truly_create_backlight(dsi);
	if (IS_ERR(ctx->panel.backlight))
		return dev_err_probe(dev, PTR_ERR(ctx->panel.backlight),
				     "Failed to create backlight\n");

	drm_panel_add(&ctx->panel);

	ret = mipi_dsi_attach(dsi);
	if (ret < 0) {
		drm_panel_remove(&ctx->panel);
		return dev_err_probe(dev, ret, "Failed to attach to DSI host\n");
	}

	return 0;
}

static void truly_remove(struct mipi_dsi_device *dsi)
{
	struct truly *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id truly_of_match[] = {
	{ .compatible = "truly" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, truly_of_match);

static struct mipi_dsi_driver truly_driver = {
	.probe = truly_probe,
	.remove = truly_remove,
	.driver = {
		.name = "panel-truly",
		.of_match_table = truly_of_match,
	},
};
module_mipi_dsi_driver(truly_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for truly QHD video mode dsi panel,speed up, 0423-V2-Gamma ,0318 power saving");
MODULE_LICENSE("GPL");

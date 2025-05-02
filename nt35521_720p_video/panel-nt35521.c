// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2025 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2013, The Linux Foundation. All rights reserved. (FIXME)

#include <linux/backlight.h>
#include <linux/delay.h>
#include <linux/gpio/consumer.h>
#include <linux/mod_devicetable.h>
#include <linux/module.h>

#include <drm/drm_mipi_dsi.h>
#include <drm/drm_modes.h>
#include <drm/drm_panel.h>
#include <drm/drm_probe_helper.h>

struct nt35521 {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
};

static inline struct nt35521 *to_nt35521(struct drm_panel *panel)
{
	return container_of(panel, struct nt35521, panel);
}

static void nt35521_reset(struct nt35521 *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	usleep_range(1000, 2000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int nt35521_on(struct nt35521 *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf0,
					 0x55, 0xaa, 0x52, 0x08, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb1, 0x68, 0x21);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb5, 0xc8);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb6, 0x0f);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb8,
					 0x00, 0x00, 0x0a, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb9, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xba, 0x02);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbb, 0x63, 0x63);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbc, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbd,
					 0x02, 0x7f, 0x0d, 0x0b, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc,
					 0x41, 0x36, 0x87, 0x54, 0x46, 0x65,
					 0x10, 0x12, 0x14, 0x10, 0x12, 0x14,
					 0x40, 0x08, 0x15, 0x05);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd0, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd1,
					 0x00, 0x04, 0x08, 0x0c, 0x10, 0x14,
					 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c,
					 0x30, 0x34, 0x38, 0x3c);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd3, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd6, 0x44, 0x44);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd7,
					 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd8,
					 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd9, 0x03, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe5, 0x00, 0xff);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe6,
					 0xf3, 0xec, 0xe7, 0xdf);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe7,
					 0xf3, 0xd9, 0xcc, 0xcd, 0xb3, 0xa6,
					 0x99, 0x99, 0x99, 0x95);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe8,
					 0xf3, 0xd9, 0xcc, 0xcd, 0xb3, 0xa6,
					 0x99, 0x99, 0x99, 0x95);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe9, 0x00, 0x04);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xea, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xee,
					 0x87, 0x78, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xef, 0x07, 0xff);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf0,
					 0x55, 0xaa, 0x52, 0x08, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb0, 0x0d, 0x0d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb1, 0x0d, 0x0d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb3, 0x2d, 0x2d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb4, 0x19, 0x19);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb5, 0x06, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb6, 0x05, 0x05);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb7, 0x05, 0x05);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb8, 0x05, 0x05);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb9, 0x44, 0x44);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xba, 0x36, 0x36);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbc, 0x50, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbd, 0x50, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbe, 0x39);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbf, 0x39);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc0, 0x0c);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc1, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc2, 0x19, 0x19);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc3, 0x0a, 0x0a);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc4, 0x23, 0x23);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc7, 0x00, 0x80, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc9,
					 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xca, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcb, 0x0b, 0x53);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcd, 0x0b, 0x52, 0x53);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xce, 0x44);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcf, 0x00, 0x50, 0x50);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd0, 0x50, 0x50);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd1, 0x50, 0x50);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd2, 0x39);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd3, 0x39);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf0,
					 0x55, 0xaa, 0x52, 0x08, 0x02);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb0,
					 0x00, 0xac, 0x00, 0xba, 0x00, 0xd9,
					 0x00, 0xed, 0x01, 0x01, 0x01, 0x1e,
					 0x01, 0x3a, 0x01, 0x62);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb1,
					 0x01, 0x85, 0x01, 0xb8, 0x01, 0xe4,
					 0x02, 0x27, 0x02, 0x5b, 0x02, 0x5d,
					 0x02, 0x8c, 0x02, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb2,
					 0x02, 0xdf, 0x03, 0x0c, 0x03, 0x2a,
					 0x03, 0x51, 0x03, 0x6d, 0x03, 0x8d,
					 0x03, 0xa4, 0x03, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb3,
					 0x03, 0xcc, 0x03, 0xcc);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb4,
					 0x00, 0xac, 0x00, 0xba, 0x00, 0xd9,
					 0x00, 0xed, 0x01, 0x01, 0x01, 0x1e,
					 0x01, 0x3a, 0x01, 0x62);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb5,
					 0x01, 0x85, 0x01, 0xb8, 0x01, 0xe4,
					 0x02, 0x27, 0x02, 0x5b, 0x02, 0x5d,
					 0x02, 0x8c, 0x02, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb6,
					 0x02, 0xdf, 0x03, 0x0c, 0x03, 0x2a,
					 0x03, 0x51, 0x03, 0x6d, 0x03, 0x8d,
					 0x03, 0xa4, 0x03, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb7,
					 0x03, 0xcc, 0x03, 0xcc);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb8,
					 0x00, 0xac, 0x00, 0xba, 0x00, 0xd9,
					 0x00, 0xed, 0x01, 0x01, 0x01, 0x1e,
					 0x01, 0x3a, 0x01, 0x62);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb9,
					 0x01, 0x85, 0x01, 0xb8, 0x01, 0xe4,
					 0x02, 0x27, 0x02, 0x5b, 0x02, 0x5d,
					 0x02, 0x8c, 0x02, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xba,
					 0x02, 0xdf, 0x03, 0x0c, 0x03, 0x2a,
					 0x03, 0x51, 0x03, 0x6d, 0x03, 0x8d,
					 0x03, 0xa4, 0x03, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbb,
					 0x03, 0xcc, 0x03, 0xcc);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbc,
					 0x00, 0xac, 0x00, 0xba, 0x00, 0xd9,
					 0x00, 0xed, 0x01, 0x01, 0x01, 0x1e,
					 0x01, 0x3a, 0x01, 0x62);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbd,
					 0x01, 0x85, 0x01, 0xb8, 0x01, 0xe4,
					 0x02, 0x27, 0x02, 0x5b, 0x02, 0x5d,
					 0x02, 0x8c, 0x02, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbe,
					 0x02, 0xdf, 0x03, 0x0c, 0x03, 0x2a,
					 0x03, 0x51, 0x03, 0x6d, 0x03, 0x8d,
					 0x03, 0xa4, 0x03, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbf,
					 0x03, 0xcc, 0x03, 0xcc);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc0,
					 0x00, 0xac, 0x00, 0xba, 0x00, 0xd9,
					 0x00, 0xed, 0x01, 0x01, 0x01, 0x1e,
					 0x01, 0x3a, 0x01, 0x62);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc1,
					 0x01, 0x85, 0x01, 0xb8, 0x01, 0xe4,
					 0x02, 0x27, 0x02, 0x5b, 0x02, 0x5d,
					 0x02, 0x8c, 0x02, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc2,
					 0x02, 0xdf, 0x03, 0x0c, 0x03, 0x2a,
					 0x03, 0x51, 0x03, 0x6d, 0x03, 0x8d,
					 0x03, 0xa4, 0x03, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc3,
					 0x03, 0xcc, 0x03, 0xcc);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc4,
					 0x00, 0xac, 0x00, 0xba, 0x00, 0xd9,
					 0x00, 0xed, 0x01, 0x01, 0x01, 0x1e,
					 0x01, 0x3a, 0x01, 0x62);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc5,
					 0x01, 0x85, 0x01, 0xb8, 0x01, 0xe4,
					 0x02, 0x27, 0x02, 0x5b, 0x02, 0x5d,
					 0x02, 0x8c, 0x02, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc6,
					 0x02, 0xdf, 0x03, 0x0c, 0x03, 0x2a,
					 0x03, 0x51, 0x03, 0x6d, 0x03, 0x8d,
					 0x03, 0xa4, 0x03, 0xbe);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc7,
					 0x03, 0xcc, 0x03, 0xcc);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xee, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf0,
					 0x55, 0xaa, 0x52, 0x08, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb0, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb1, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb2,
					 0x03, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb3,
					 0x03, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb4,
					 0x03, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb5,
					 0x03, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb6,
					 0x03, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb7,
					 0x03, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb8,
					 0x03, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb9,
					 0x03, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xba,
					 0x35, 0x10, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbb,
					 0x35, 0x10, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbc,
					 0x35, 0x10, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbd,
					 0x35, 0x10, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc0,
					 0x00, 0x34, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc1,
					 0x00, 0x34, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc2,
					 0x00, 0x34, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc3,
					 0x00, 0x34, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc4, 0x40);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc5, 0x40);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc6, 0x40);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc7, 0x40);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xef, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf0,
					 0x55, 0xaa, 0x52, 0x08, 0x05);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb0, 0x1b, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb1, 0x1b, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb2, 0x1b, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb3, 0x1b, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb4, 0x1b, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb5, 0x1b, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb6, 0x1b, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb7, 0x1b, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb8, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb9, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xba, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbb, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbc, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbd,
					 0x03, 0x03, 0x03, 0x00, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc0, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc1, 0x05);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc2, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc3, 0x05);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc4, 0x80);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc5, 0xa2);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc6, 0x80);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc7, 0xa2);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc8, 0x01, 0x20);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc9, 0x00, 0x20);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xca, 0x01, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcb, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc, 0x00, 0x00, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcd, 0x00, 0x00, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xce, 0x00, 0x00, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcf, 0x00, 0x00, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd0, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd1,
					 0x03, 0x00, 0x00, 0x07, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd2,
					 0x13, 0x00, 0x00, 0x07, 0x11);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd3,
					 0x23, 0x00, 0x00, 0x07, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd4,
					 0x33, 0x00, 0x00, 0x07, 0x11);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe5, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe6, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe7, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe8, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe9, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xea, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xeb, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xec, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xed, 0x31);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf0,
					 0x55, 0xaa, 0x52, 0x08, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb0, 0x10, 0x11);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb1, 0x12, 0x13);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb2, 0x08, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb3, 0x2d, 0x2d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb4, 0x2d, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb5, 0x34, 0x2d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb6, 0x2d, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb7, 0x34, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb8, 0x02, 0x0a);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb9, 0x00, 0x08);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xba, 0x09, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbb, 0x0b, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbc, 0x34, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbd, 0x34, 0x2d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbe, 0x2d, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbf, 0x34, 0x2d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc0, 0x2d, 0x2d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc1, 0x01, 0x09);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc2, 0x19, 0x18);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc3, 0x17, 0x16);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc4, 0x19, 0x18);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc5, 0x17, 0x16);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc6, 0x01, 0x09);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc7, 0x2d, 0x2d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc8, 0x2d, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc9, 0x34, 0x2d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xca, 0x2d, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcb, 0x34, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc, 0x0b, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcd, 0x09, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xce, 0x00, 0x08);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcf, 0x02, 0x0a);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd0, 0x34, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd1, 0x34, 0x2d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd2, 0x2d, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd3, 0x34, 0x2d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd4, 0x2d, 0x2d);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd5, 0x08, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd6, 0x10, 0x11);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd7, 0x12, 0x13);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd8,
					 0x55, 0x55, 0x55, 0x55, 0x55);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd9,
					 0x55, 0x55, 0x55, 0x55, 0x55);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe5, 0x34, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe6, 0x34, 0x34);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe7, 0x05);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf0,
					 0x55, 0xaa, 0x52, 0x00, 0x00);
	mipi_dsi_dcs_exit_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_dcs_set_display_on_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 20);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf0,
					 0x55, 0xaa, 0x52, 0x08, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf0,
					 0x55, 0xaa, 0x52, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x53, 0x2c);

	return dsi_ctx.accum_err;
}

static int nt35521_off(struct nt35521 *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_set_display_off_multi(&dsi_ctx);
	mipi_dsi_dcs_enter_sleep_mode_multi(&dsi_ctx);

	return dsi_ctx.accum_err;
}

static int nt35521_prepare(struct drm_panel *panel)
{
	struct nt35521 *ctx = to_nt35521(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	nt35521_reset(ctx);

	ret = nt35521_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	return 0;
}

static int nt35521_unprepare(struct drm_panel *panel)
{
	struct nt35521 *ctx = to_nt35521(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = nt35521_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	return 0;
}

static const struct drm_display_mode nt35521_mode = {
	.clock = (720 + 44 + 11 + 55) * (1280 + 14 + 1 + 15) * 60 / 1000,
	.hdisplay = 720,
	.hsync_start = 720 + 44,
	.hsync_end = 720 + 44 + 11,
	.htotal = 720 + 44 + 11 + 55,
	.vdisplay = 1280,
	.vsync_start = 1280 + 14,
	.vsync_end = 1280 + 14 + 1,
	.vtotal = 1280 + 14 + 1 + 15,
	.width_mm = 0,
	.height_mm = 0,
	.type = DRM_MODE_TYPE_DRIVER,
};

static int nt35521_get_modes(struct drm_panel *panel,
			     struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &nt35521_mode);
}

static const struct drm_panel_funcs nt35521_panel_funcs = {
	.prepare = nt35521_prepare,
	.unprepare = nt35521_unprepare,
	.get_modes = nt35521_get_modes,
};

static int nt35521_bl_update_status(struct backlight_device *bl)
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
static int nt35521_bl_get_brightness(struct backlight_device *bl)
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

static const struct backlight_ops nt35521_bl_ops = {
	.update_status = nt35521_bl_update_status,
	.get_brightness = nt35521_bl_get_brightness,
};

static struct backlight_device *
nt35521_create_backlight(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	const struct backlight_properties props = {
		.type = BACKLIGHT_RAW,
		.brightness = 255,
		.max_brightness = 255,
	};

	return devm_backlight_device_register(dev, dev_name(dev), dev, dsi,
					      &nt35521_bl_ops, &props);
}

static int nt35521_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct nt35521 *ctx;
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

	drm_panel_init(&ctx->panel, dev, &nt35521_panel_funcs,
		       DRM_MODE_CONNECTOR_DSI);
	ctx->panel.prepare_prev_first = true;

	ctx->panel.backlight = nt35521_create_backlight(dsi);
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

static void nt35521_remove(struct mipi_dsi_device *dsi)
{
	struct nt35521 *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id nt35521_of_match[] = {
	{ .compatible = "mdss,nt35521" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, nt35521_of_match);

static struct mipi_dsi_driver nt35521_driver = {
	.probe = nt35521_probe,
	.remove = nt35521_remove,
	.driver = {
		.name = "panel-nt35521",
		.of_match_table = nt35521_of_match,
	},
};
module_mipi_dsi_driver(nt35521_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for nt35521 720p video mode dsi panel");
MODULE_LICENSE("GPL");

// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode nt35596_mode = {
	.clock = (1080 + 32 + 8 + 32) * (1920 + 2 + 2 + 18) * 60 / 1000,
	.hdisplay = 1080,
	.hsync_start = 1080 + 32,
	.hsync_end = 1080 + 32 + 8,
	.htotal = 1080 + 32 + 8 + 32,
	.vdisplay = 1920,
	.vsync_start = 1920 + 2,
	.vsync_end = 1920 + 2 + 2,
	.vtotal = 1920 + 2 + 2 + 18,
	.width_mm = 0,
	.height_mm = 0,
	.type = DRM_MODE_TYPE_DRIVER,
};

static const struct panel_desc_dsi nt35596 = {
	.desc = {
		.modes = &nt35596_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 0,
			.height = 0,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
		 MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_MODE_NO_EOT_PACKET |
		 MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};

// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

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

static const struct panel_desc_dsi nt35521 = {
	.desc = {
		.modes = &nt35521_mode,
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

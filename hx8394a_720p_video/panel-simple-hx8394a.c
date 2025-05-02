// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

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

static const struct panel_desc_dsi hx8394a = {
	.desc = {
		.modes = &hx8394a_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 59,
			.height = 104,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
		 MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_MODE_NO_EOT_PACKET |
		 MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};

// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

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

static const struct panel_desc_dsi ssd2080m = {
	.desc = {
		.modes = &ssd2080m_mode,
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

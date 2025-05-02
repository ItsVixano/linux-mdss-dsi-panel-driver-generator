// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode innolux_mode = {
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

static const struct panel_desc_dsi innolux = {
	.desc = {
		.modes = &innolux_mode,
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
		 MIPI_DSI_CLOCK_NON_CONTINUOUS | MIPI_DSI_MODE_VIDEO_NO_HFP,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 2,
};

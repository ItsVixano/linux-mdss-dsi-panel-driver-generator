// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode jdi_mode = {
	.clock = (1080 + 96 + 16 + 64) * (1920 + 4 + 1 + 16) * 60 / 1000,
	.hdisplay = 1080,
	.hsync_start = 1080 + 96,
	.hsync_end = 1080 + 96 + 16,
	.htotal = 1080 + 96 + 16 + 64,
	.vdisplay = 1920,
	.vsync_start = 1920 + 4,
	.vsync_end = 1920 + 4 + 1,
	.vtotal = 1920 + 4 + 1 + 16,
	.width_mm = 61,
	.height_mm = 110,
	.type = DRM_MODE_TYPE_DRIVER,
};

static const struct panel_desc_dsi jdi = {
	.desc = {
		.modes = &jdi_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 61,
			.height = 110,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
		 MIPI_DSI_MODE_NO_EOT_PACKET | MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};

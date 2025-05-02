// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2025 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_JDI_1080P_VIDEO_H_
#define _PANEL_JDI_1080P_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config jdi_1080p_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_jdi_1080p_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution jdi_1080p_video_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 96,
	.hback_porch = 64,
	.hpulse_width = 16,
	.hsync_skew = 0,
	.vfront_porch = 4,
	.vback_porch = 16,
	.vpulse_width = 1,
	/* Borders not supported yet */
};

static struct color_info jdi_1080p_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char jdi_1080p_video_on_cmd_0[] = {
	0x55, 0x00, 0x15, 0x80
};
static char jdi_1080p_video_on_cmd_1[] = {
	0x53, 0x2c, 0x15, 0x80
};
static char jdi_1080p_video_on_cmd_2[] = {
	0x35, 0x00, 0x15, 0x80
};
static char jdi_1080p_video_on_cmd_3[] = {
	0x29, 0x00, 0x05, 0x80
};
static char jdi_1080p_video_on_cmd_4[] = {
	0x11, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd jdi_1080p_video_on_command[] = {
	{ sizeof(jdi_1080p_video_on_cmd_0), jdi_1080p_video_on_cmd_0, 0 },
	{ sizeof(jdi_1080p_video_on_cmd_1), jdi_1080p_video_on_cmd_1, 0 },
	{ sizeof(jdi_1080p_video_on_cmd_2), jdi_1080p_video_on_cmd_2, 0 },
	{ sizeof(jdi_1080p_video_on_cmd_3), jdi_1080p_video_on_cmd_3, 120 },
	{ sizeof(jdi_1080p_video_on_cmd_4), jdi_1080p_video_on_cmd_4, 120 },
};

static char jdi_1080p_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char jdi_1080p_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd jdi_1080p_video_off_command[] = {
	{ sizeof(jdi_1080p_video_off_cmd_0), jdi_1080p_video_off_cmd_0, 2 },
	{ sizeof(jdi_1080p_video_off_cmd_1), jdi_1080p_video_off_cmd_1, 121 },
};

static struct command_state jdi_1080p_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info jdi_1080p_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info jdi_1080p_video_video_panel = {
	.hsync_pulse = 0,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration jdi_1080p_video_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t jdi_1080p_video_timings[] = {
	0xe7, 0x36, 0x24, 0x00, 0x66, 0x6a, 0x2a, 0x3a, 0x2d, 0x03, 0x04, 0x00
};

static struct panel_timing jdi_1080p_video_timing_info = {
	.tclk_post = 0x04,
	.tclk_pre = 0x1b,
};

static struct panel_reset_sequence jdi_1080p_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 200, 20 },
	.pin_direction = 2,
};

static struct backlight jdi_1080p_video_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_jdi_1080p_video_select(struct panel_struct *panel,
						struct msm_panel_info *pinfo,
						struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &jdi_1080p_video_panel_data;
	panel->panelres = &jdi_1080p_video_panel_res;
	panel->color = &jdi_1080p_video_color;
	panel->videopanel = &jdi_1080p_video_video_panel;
	panel->commandpanel = &jdi_1080p_video_command_panel;
	panel->state = &jdi_1080p_video_state;
	panel->laneconfig = &jdi_1080p_video_lane_config;
	panel->paneltiminginfo = &jdi_1080p_video_timing_info;
	panel->panelresetseq = &jdi_1080p_video_reset_seq;
	panel->backlightinfo = &jdi_1080p_video_backlight;
	pinfo->mipi.panel_on_cmds = jdi_1080p_video_on_command;
	pinfo->mipi.panel_off_cmds = jdi_1080p_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(jdi_1080p_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(jdi_1080p_video_off_command);
	memcpy(phy_db->timing, jdi_1080p_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_JDI_1080P_VIDEO_H_ */

// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2025 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_SSD2080M_720P_VIDEO_H_
#define _PANEL_SSD2080M_720P_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config ssd2080m_720p_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_ssd2080m_720p_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 1,
	.panel_init_delay = 50000,
};

static struct panel_resolution ssd2080m_720p_video_panel_res = {
	.panel_width = 720,
	.panel_height = 1280,
	.hfront_porch = 80,
	.hback_porch = 24,
	.hpulse_width = 14,
	.hsync_skew = 0,
	.vfront_porch = 25,
	.vback_porch = 14,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info ssd2080m_720p_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char ssd2080m_720p_video_on_cmd_0[] = {
	0xff, 0x01, 0x15, 0x80
};
static char ssd2080m_720p_video_on_cmd_1[] = {
	0x02, 0x00, 0x29, 0xc0, 0x53, 0x00, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_2[] = {
	0x05, 0x00, 0x29, 0xc0, 0xc6, 0x63, 0x00, 0x81,
	0x31, 0xff, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_3[] = {
	0x05, 0x00, 0x29, 0xc0, 0xcb, 0xe7, 0x80, 0x73,
	0x33, 0xff, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_4[] = {
	0x02, 0x00, 0x29, 0xc0, 0xec, 0xd2, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_5[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb3, 0x04, 0x9f, 0xff
};
static char ssd2080m_720p_video_on_cmd_6[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb2, 0x16, 0x26, 0x10
};
static char ssd2080m_720p_video_on_cmd_7[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb4, 0x00, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_8[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc1, 0x04, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_9[] = {
	0x04, 0x00, 0x29, 0xc0, 0xc2, 0xbe, 0x00, 0x58
};
static char ssd2080m_720p_video_on_cmd_10[] = {
	0x09, 0x00, 0x29, 0xc0, 0xc3, 0x01, 0x22, 0x11,
	0x21, 0x0e, 0x80, 0x80, 0x24, 0xff, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_11[] = {
	0x08, 0x00, 0x29, 0xc0, 0xb6, 0x09, 0x16, 0x42,
	0x01, 0x13, 0x00, 0x00
};
static char ssd2080m_720p_video_on_cmd_12[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb7, 0x24, 0x26, 0x43
};
static char ssd2080m_720p_video_on_cmd_13[] = {
	0x06, 0x00, 0x29, 0xc0, 0xb8, 0x16, 0x08, 0x25,
	0x44, 0x08, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_14[] = {
	0x09, 0x00, 0x29, 0xc0, 0xb9, 0x06, 0x08, 0x07,
	0x09, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_15[] = {
	0x09, 0x00, 0x29, 0xc0, 0xba, 0x0e, 0x10, 0x0a,
	0x0c, 0x16, 0x05, 0x00, 0x00, 0xff, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_16[] = {
	0x09, 0x00, 0x29, 0xc0, 0xbb, 0xa1, 0xa1, 0xa1,
	0xa1, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_17[] = {
	0x09, 0x00, 0x29, 0xc0, 0xbc, 0x0f, 0x11, 0x0b,
	0x0d, 0x16, 0x05, 0x00, 0x00, 0xff, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_18[] = {
	0x09, 0x00, 0x29, 0xc0, 0xbd, 0xa1, 0xa1, 0xa1,
	0xa1, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_19[] = {
	0x04, 0x00, 0x29, 0xc0, 0xe6, 0xff, 0xff, 0x0f
};
static char ssd2080m_720p_video_on_cmd_20[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc7, 0x3f, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_21[] = {
	0x07, 0x00, 0x29, 0xc0, 0xb5, 0x47, 0x00, 0x00,
	0x08, 0x00, 0x01, 0xff
};
static char ssd2080m_720p_video_on_cmd_22[] = {
	0x08, 0x00, 0x29, 0xc0, 0xc4, 0xdf, 0xc2, 0x0c,
	0x0c, 0x63, 0xe3, 0x99
};
static char ssd2080m_720p_video_on_cmd_23[] = {
	0x07, 0x00, 0x29, 0xc0, 0xd0, 0x0a, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xff
};
static char ssd2080m_720p_video_on_cmd_24[] = {
	0x06, 0x00, 0x29, 0xc0, 0xd1, 0x1d, 0x32, 0x1b,
	0x00, 0x00, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_25[] = {
	0x07, 0x00, 0x29, 0xc0, 0xd2, 0x0a, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xff
};
static char ssd2080m_720p_video_on_cmd_26[] = {
	0x06, 0x00, 0x29, 0xc0, 0xd3, 0x1d, 0x32, 0x1b,
	0x00, 0x00, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_27[] = {
	0x07, 0x00, 0x29, 0xc0, 0xd4, 0x0a, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xff
};
static char ssd2080m_720p_video_on_cmd_28[] = {
	0x06, 0x00, 0x29, 0xc0, 0xd5, 0x1d, 0x32, 0x1b,
	0x00, 0x00, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_29[] = {
	0x07, 0x00, 0x29, 0xc0, 0xd6, 0x0a, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xff
};
static char ssd2080m_720p_video_on_cmd_30[] = {
	0x06, 0x00, 0x29, 0xc0, 0xd7, 0x1d, 0x32, 0x1b,
	0x00, 0x00, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_31[] = {
	0x07, 0x00, 0x29, 0xc0, 0xd8, 0x0a, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xff
};
static char ssd2080m_720p_video_on_cmd_32[] = {
	0x06, 0x00, 0x29, 0xc0, 0xd9, 0x1d, 0x32, 0x1b,
	0x00, 0x00, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_33[] = {
	0x07, 0x00, 0x29, 0xc0, 0xda, 0x0a, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xff
};
static char ssd2080m_720p_video_on_cmd_34[] = {
	0x06, 0x00, 0x29, 0xc0, 0xdb, 0x1d, 0x32, 0x1b,
	0x00, 0x00, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_35[] = {
	0x03, 0x00, 0x29, 0xc0, 0xcc, 0x10, 0x00, 0xff
};
static char ssd2080m_720p_video_on_cmd_36[] = {
	0x04, 0x00, 0x29, 0xc0, 0xce, 0x4e, 0x55, 0xa5
};
static char ssd2080m_720p_video_on_cmd_37[] = {
	0x04, 0x00, 0x29, 0xc0, 0xe0, 0x01, 0x02, 0x02
};
static char ssd2080m_720p_video_on_cmd_38[] = {
	0x05, 0x00, 0x29, 0xc0, 0xf6, 0x00, 0x00, 0x00,
	0x00, 0xff, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_39[] = {
	0x05, 0x00, 0x29, 0xc0, 0xf7, 0x00, 0x00, 0x00,
	0x00, 0xff, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_40[] = {
	0x03, 0x00, 0x29, 0xc0, 0xe1, 0x90, 0x00, 0xff
};
static char ssd2080m_720p_video_on_cmd_41[] = {
	0x07, 0x00, 0x29, 0xc0, 0xde, 0x95, 0xcf, 0xe2,
	0xce, 0x11, 0x15, 0xff
};
static char ssd2080m_720p_video_on_cmd_42[] = {
	0x02, 0x00, 0x29, 0xc0, 0xcf, 0x46, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_43[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0x66, 0xff, 0xff
};
static char ssd2080m_720p_video_on_cmd_44[] = {
	0x03, 0x00, 0x29, 0xc0, 0xed, 0x00, 0x20, 0xff
};
static char ssd2080m_720p_video_on_cmd_45[] = {
	0x53, 0x2c, 0x15, 0x80
};
static char ssd2080m_720p_video_on_cmd_46[] = {
	0x11, 0x00, 0x05, 0x80
};
static char ssd2080m_720p_video_on_cmd_47[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd ssd2080m_720p_video_on_command[] = {
	{ sizeof(ssd2080m_720p_video_on_cmd_0), ssd2080m_720p_video_on_cmd_0, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_1), ssd2080m_720p_video_on_cmd_1, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_2), ssd2080m_720p_video_on_cmd_2, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_3), ssd2080m_720p_video_on_cmd_3, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_4), ssd2080m_720p_video_on_cmd_4, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_5), ssd2080m_720p_video_on_cmd_5, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_6), ssd2080m_720p_video_on_cmd_6, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_7), ssd2080m_720p_video_on_cmd_7, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_8), ssd2080m_720p_video_on_cmd_8, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_9), ssd2080m_720p_video_on_cmd_9, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_10), ssd2080m_720p_video_on_cmd_10, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_11), ssd2080m_720p_video_on_cmd_11, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_12), ssd2080m_720p_video_on_cmd_12, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_13), ssd2080m_720p_video_on_cmd_13, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_14), ssd2080m_720p_video_on_cmd_14, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_15), ssd2080m_720p_video_on_cmd_15, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_16), ssd2080m_720p_video_on_cmd_16, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_17), ssd2080m_720p_video_on_cmd_17, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_18), ssd2080m_720p_video_on_cmd_18, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_19), ssd2080m_720p_video_on_cmd_19, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_20), ssd2080m_720p_video_on_cmd_20, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_21), ssd2080m_720p_video_on_cmd_21, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_22), ssd2080m_720p_video_on_cmd_22, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_23), ssd2080m_720p_video_on_cmd_23, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_24), ssd2080m_720p_video_on_cmd_24, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_25), ssd2080m_720p_video_on_cmd_25, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_26), ssd2080m_720p_video_on_cmd_26, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_27), ssd2080m_720p_video_on_cmd_27, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_28), ssd2080m_720p_video_on_cmd_28, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_29), ssd2080m_720p_video_on_cmd_29, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_30), ssd2080m_720p_video_on_cmd_30, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_31), ssd2080m_720p_video_on_cmd_31, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_32), ssd2080m_720p_video_on_cmd_32, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_33), ssd2080m_720p_video_on_cmd_33, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_34), ssd2080m_720p_video_on_cmd_34, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_35), ssd2080m_720p_video_on_cmd_35, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_36), ssd2080m_720p_video_on_cmd_36, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_37), ssd2080m_720p_video_on_cmd_37, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_38), ssd2080m_720p_video_on_cmd_38, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_39), ssd2080m_720p_video_on_cmd_39, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_40), ssd2080m_720p_video_on_cmd_40, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_41), ssd2080m_720p_video_on_cmd_41, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_42), ssd2080m_720p_video_on_cmd_42, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_43), ssd2080m_720p_video_on_cmd_43, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_44), ssd2080m_720p_video_on_cmd_44, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_45), ssd2080m_720p_video_on_cmd_45, 0 },
	{ sizeof(ssd2080m_720p_video_on_cmd_46), ssd2080m_720p_video_on_cmd_46, 32 },
	{ sizeof(ssd2080m_720p_video_on_cmd_47), ssd2080m_720p_video_on_cmd_47, 32 },
};

static char ssd2080m_720p_video_off_cmd_0[] = {
	0x10, 0x00, 0x05, 0x80
};
static char ssd2080m_720p_video_off_cmd_1[] = {
	0x02, 0x00, 0x39, 0xc0, 0x53, 0x00, 0xff, 0xff
};
static char ssd2080m_720p_video_off_cmd_2[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc2, 0x00, 0xff, 0xff
};
static char ssd2080m_720p_video_off_cmd_3[] = {
	0x02, 0x00, 0x39, 0xc0, 0xcf, 0x40, 0xff, 0xff
};
static char ssd2080m_720p_video_off_cmd_4[] = {
	0x03, 0x00, 0x39, 0xc0, 0xde, 0x84, 0x00, 0xff
};
static char ssd2080m_720p_video_off_cmd_5[] = {
	0x02, 0x00, 0x39, 0xc0, 0xcb, 0x22, 0xff, 0xff
};
static char ssd2080m_720p_video_off_cmd_6[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc3, 0x00, 0xff, 0xff
};

static struct mipi_dsi_cmd ssd2080m_720p_video_off_command[] = {
	{ sizeof(ssd2080m_720p_video_off_cmd_0), ssd2080m_720p_video_off_cmd_0, 50 },
	{ sizeof(ssd2080m_720p_video_off_cmd_1), ssd2080m_720p_video_off_cmd_1, 32 },
	{ sizeof(ssd2080m_720p_video_off_cmd_2), ssd2080m_720p_video_off_cmd_2, 32 },
	{ sizeof(ssd2080m_720p_video_off_cmd_3), ssd2080m_720p_video_off_cmd_3, 0 },
	{ sizeof(ssd2080m_720p_video_off_cmd_4), ssd2080m_720p_video_off_cmd_4, 32 },
	{ sizeof(ssd2080m_720p_video_off_cmd_5), ssd2080m_720p_video_off_cmd_5, 0 },
	{ sizeof(ssd2080m_720p_video_off_cmd_6), ssd2080m_720p_video_off_cmd_6, 0 },
};

static struct command_state ssd2080m_720p_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info ssd2080m_720p_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info ssd2080m_720p_video_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 0,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 0 << 0,
};

static struct lane_configuration ssd2080m_720p_video_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t ssd2080m_720p_video_timings[] = {
	0x68, 0x1d, 0x15, 0x00, 0x2e, 0x2d, 0x19, 0x1f, 0x24, 0x03, 0x04, 0x00
};

static struct panel_timing ssd2080m_720p_video_timing_info = {
	.tclk_post = 0x20,
	.tclk_pre = 0x2f,
};

static struct panel_reset_sequence ssd2080m_720p_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 2, 20 },
	.pin_direction = 2,
};

static struct backlight ssd2080m_720p_video_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_ssd2080m_720p_video_select(struct panel_struct *panel,
						    struct msm_panel_info *pinfo,
						    struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &ssd2080m_720p_video_panel_data;
	panel->panelres = &ssd2080m_720p_video_panel_res;
	panel->color = &ssd2080m_720p_video_color;
	panel->videopanel = &ssd2080m_720p_video_video_panel;
	panel->commandpanel = &ssd2080m_720p_video_command_panel;
	panel->state = &ssd2080m_720p_video_state;
	panel->laneconfig = &ssd2080m_720p_video_lane_config;
	panel->paneltiminginfo = &ssd2080m_720p_video_timing_info;
	panel->panelresetseq = &ssd2080m_720p_video_reset_seq;
	panel->backlightinfo = &ssd2080m_720p_video_backlight;
	pinfo->mipi.panel_on_cmds = ssd2080m_720p_video_on_command;
	pinfo->mipi.panel_off_cmds = ssd2080m_720p_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(ssd2080m_720p_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(ssd2080m_720p_video_off_command);
	memcpy(phy_db->timing, ssd2080m_720p_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_SSD2080M_720P_VIDEO_H_ */

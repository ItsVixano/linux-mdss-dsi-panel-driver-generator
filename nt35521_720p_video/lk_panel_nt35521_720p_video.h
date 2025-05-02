// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2025 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_NT35521_720P_VIDEO_H_
#define _PANEL_NT35521_720P_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config nt35521_720p_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_nt35521_720p_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution nt35521_720p_video_panel_res = {
	.panel_width = 720,
	.panel_height = 1280,
	.hfront_porch = 44,
	.hback_porch = 55,
	.hpulse_width = 11,
	.hsync_skew = 0,
	.vfront_porch = 14,
	.vback_porch = 15,
	.vpulse_width = 1,
	/* Borders not supported yet */
};

static struct color_info nt35521_720p_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char nt35521_720p_video_on_cmd_0[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_1[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb1, 0x68, 0x21, 0xff
};
static char nt35521_720p_video_on_cmd_2[] = {
	0xb5, 0xc8, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_3[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb6, 0x0f, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_4[] = {
	0x05, 0x00, 0x29, 0xc0, 0xb8, 0x00, 0x00, 0x0a,
	0x00, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_5[] = {
	0xb9, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_6[] = {
	0xba, 0x02, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_7[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbb, 0x63, 0x63, 0xff
};
static char nt35521_720p_video_on_cmd_8[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbc, 0x00, 0x00, 0xff
};
static char nt35521_720p_video_on_cmd_9[] = {
	0x06, 0x00, 0x29, 0xc0, 0xbd, 0x02, 0x7f, 0x0d,
	0x0b, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_10[] = {
	0x11, 0x00, 0x29, 0xc0, 0xcc, 0x41, 0x36, 0x87,
	0x54, 0x46, 0x65, 0x10, 0x12, 0x14, 0x10, 0x12,
	0x14, 0x40, 0x08, 0x15, 0x05, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_11[] = {
	0xd0, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_12[] = {
	0x11, 0x00, 0x29, 0xc0, 0xd1, 0x00, 0x04, 0x08,
	0x0c, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28,
	0x2c, 0x30, 0x34, 0x38, 0x3c, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_13[] = {
	0xd3, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_14[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd6, 0x44, 0x44, 0xff
};
static char nt35521_720p_video_on_cmd_15[] = {
	0x0d, 0x00, 0x29, 0xc0, 0xd7, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_16[] = {
	0x0e, 0x00, 0x29, 0xc0, 0xd8, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_17[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd9, 0x03, 0x06, 0xff
};
static char nt35521_720p_video_on_cmd_18[] = {
	0x03, 0x00, 0x29, 0xc0, 0xe5, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_19[] = {
	0x05, 0x00, 0x29, 0xc0, 0xe6, 0xf3, 0xec, 0xe7,
	0xdf, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_20[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xe7, 0xf3, 0xd9, 0xcc,
	0xcd, 0xb3, 0xa6, 0x99, 0x99, 0x99, 0x95, 0xff
};
static char nt35521_720p_video_on_cmd_21[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xe8, 0xf3, 0xd9, 0xcc,
	0xcd, 0xb3, 0xa6, 0x99, 0x99, 0x99, 0x95, 0xff
};
static char nt35521_720p_video_on_cmd_22[] = {
	0x03, 0x00, 0x29, 0xc0, 0xe9, 0x00, 0x04, 0xff
};
static char nt35521_720p_video_on_cmd_23[] = {
	0xea, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_24[] = {
	0x05, 0x00, 0x29, 0xc0, 0xee, 0x87, 0x78, 0x00,
	0x00, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_25[] = {
	0x03, 0x00, 0x29, 0xc0, 0xef, 0x07, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_26[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x01, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_27[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb0, 0x0d, 0x0d, 0xff
};
static char nt35521_720p_video_on_cmd_28[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb1, 0x0d, 0x0d, 0xff
};
static char nt35521_720p_video_on_cmd_29[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb3, 0x2d, 0x2d, 0xff
};
static char nt35521_720p_video_on_cmd_30[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb4, 0x19, 0x19, 0xff
};
static char nt35521_720p_video_on_cmd_31[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb5, 0x06, 0x06, 0xff
};
static char nt35521_720p_video_on_cmd_32[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb6, 0x05, 0x05, 0xff
};
static char nt35521_720p_video_on_cmd_33[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb7, 0x05, 0x05, 0xff
};
static char nt35521_720p_video_on_cmd_34[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb8, 0x05, 0x05, 0xff
};
static char nt35521_720p_video_on_cmd_35[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb9, 0x44, 0x44, 0xff
};
static char nt35521_720p_video_on_cmd_36[] = {
	0x03, 0x00, 0x29, 0xc0, 0xba, 0x36, 0x36, 0xff
};
static char nt35521_720p_video_on_cmd_37[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbc, 0x50, 0x00, 0xff
};
static char nt35521_720p_video_on_cmd_38[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbd, 0x50, 0x00, 0xff
};
static char nt35521_720p_video_on_cmd_39[] = {
	0xbe, 0x39, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_40[] = {
	0xbf, 0x39, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_41[] = {
	0xc0, 0x0c, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_42[] = {
	0xc1, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_43[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc2, 0x19, 0x19, 0xff
};
static char nt35521_720p_video_on_cmd_44[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc3, 0x0a, 0x0a, 0xff
};
static char nt35521_720p_video_on_cmd_45[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc4, 0x23, 0x23, 0xff
};
static char nt35521_720p_video_on_cmd_46[] = {
	0x04, 0x00, 0x29, 0xc0, 0xc7, 0x00, 0x80, 0x00
};
static char nt35521_720p_video_on_cmd_47[] = {
	0x07, 0x00, 0x29, 0xc0, 0xc9, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xff
};
static char nt35521_720p_video_on_cmd_48[] = {
	0xca, 0x01, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_49[] = {
	0x03, 0x00, 0x29, 0xc0, 0xcb, 0x0b, 0x53, 0xff
};
static char nt35521_720p_video_on_cmd_50[] = {
	0xcc, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_51[] = {
	0x04, 0x00, 0x29, 0xc0, 0xcd, 0x0b, 0x52, 0x53
};
static char nt35521_720p_video_on_cmd_52[] = {
	0xce, 0x44, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_53[] = {
	0x04, 0x00, 0x29, 0xc0, 0xcf, 0x00, 0x50, 0x50
};
static char nt35521_720p_video_on_cmd_54[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd0, 0x50, 0x50, 0xff
};
static char nt35521_720p_video_on_cmd_55[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd1, 0x50, 0x50, 0xff
};
static char nt35521_720p_video_on_cmd_56[] = {
	0xd2, 0x39, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_57[] = {
	0xd3, 0x39, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_58[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x02, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_59[] = {
	0x11, 0x00, 0x29, 0xc0, 0xb0, 0x00, 0xac, 0x00,
	0xba, 0x00, 0xd9, 0x00, 0xed, 0x01, 0x01, 0x01,
	0x1e, 0x01, 0x3a, 0x01, 0x62, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_60[] = {
	0x11, 0x00, 0x29, 0xc0, 0xb1, 0x01, 0x85, 0x01,
	0xb8, 0x01, 0xe4, 0x02, 0x27, 0x02, 0x5b, 0x02,
	0x5d, 0x02, 0x8c, 0x02, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_61[] = {
	0x11, 0x00, 0x29, 0xc0, 0xb2, 0x02, 0xdf, 0x03,
	0x0c, 0x03, 0x2a, 0x03, 0x51, 0x03, 0x6d, 0x03,
	0x8d, 0x03, 0xa4, 0x03, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_62[] = {
	0x05, 0x00, 0x29, 0xc0, 0xb3, 0x03, 0xcc, 0x03,
	0xcc, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_63[] = {
	0x11, 0x00, 0x29, 0xc0, 0xb4, 0x00, 0xac, 0x00,
	0xba, 0x00, 0xd9, 0x00, 0xed, 0x01, 0x01, 0x01,
	0x1e, 0x01, 0x3a, 0x01, 0x62, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_64[] = {
	0x11, 0x00, 0x29, 0xc0, 0xb5, 0x01, 0x85, 0x01,
	0xb8, 0x01, 0xe4, 0x02, 0x27, 0x02, 0x5b, 0x02,
	0x5d, 0x02, 0x8c, 0x02, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_65[] = {
	0x11, 0x00, 0x29, 0xc0, 0xb6, 0x02, 0xdf, 0x03,
	0x0c, 0x03, 0x2a, 0x03, 0x51, 0x03, 0x6d, 0x03,
	0x8d, 0x03, 0xa4, 0x03, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_66[] = {
	0x05, 0x00, 0x29, 0xc0, 0xb7, 0x03, 0xcc, 0x03,
	0xcc, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_67[] = {
	0x11, 0x00, 0x29, 0xc0, 0xb8, 0x00, 0xac, 0x00,
	0xba, 0x00, 0xd9, 0x00, 0xed, 0x01, 0x01, 0x01,
	0x1e, 0x01, 0x3a, 0x01, 0x62, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_68[] = {
	0x11, 0x00, 0x29, 0xc0, 0xb9, 0x01, 0x85, 0x01,
	0xb8, 0x01, 0xe4, 0x02, 0x27, 0x02, 0x5b, 0x02,
	0x5d, 0x02, 0x8c, 0x02, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_69[] = {
	0x11, 0x00, 0x29, 0xc0, 0xba, 0x02, 0xdf, 0x03,
	0x0c, 0x03, 0x2a, 0x03, 0x51, 0x03, 0x6d, 0x03,
	0x8d, 0x03, 0xa4, 0x03, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_70[] = {
	0x05, 0x00, 0x29, 0xc0, 0xbb, 0x03, 0xcc, 0x03,
	0xcc, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_71[] = {
	0x11, 0x00, 0x29, 0xc0, 0xbc, 0x00, 0xac, 0x00,
	0xba, 0x00, 0xd9, 0x00, 0xed, 0x01, 0x01, 0x01,
	0x1e, 0x01, 0x3a, 0x01, 0x62, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_72[] = {
	0x11, 0x00, 0x29, 0xc0, 0xbd, 0x01, 0x85, 0x01,
	0xb8, 0x01, 0xe4, 0x02, 0x27, 0x02, 0x5b, 0x02,
	0x5d, 0x02, 0x8c, 0x02, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_73[] = {
	0x11, 0x00, 0x29, 0xc0, 0xbe, 0x02, 0xdf, 0x03,
	0x0c, 0x03, 0x2a, 0x03, 0x51, 0x03, 0x6d, 0x03,
	0x8d, 0x03, 0xa4, 0x03, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_74[] = {
	0x05, 0x00, 0x29, 0xc0, 0xbf, 0x03, 0xcc, 0x03,
	0xcc, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_75[] = {
	0x11, 0x00, 0x29, 0xc0, 0xc0, 0x00, 0xac, 0x00,
	0xba, 0x00, 0xd9, 0x00, 0xed, 0x01, 0x01, 0x01,
	0x1e, 0x01, 0x3a, 0x01, 0x62, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_76[] = {
	0x11, 0x00, 0x29, 0xc0, 0xc1, 0x01, 0x85, 0x01,
	0xb8, 0x01, 0xe4, 0x02, 0x27, 0x02, 0x5b, 0x02,
	0x5d, 0x02, 0x8c, 0x02, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_77[] = {
	0x11, 0x00, 0x29, 0xc0, 0xc2, 0x02, 0xdf, 0x03,
	0x0c, 0x03, 0x2a, 0x03, 0x51, 0x03, 0x6d, 0x03,
	0x8d, 0x03, 0xa4, 0x03, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_78[] = {
	0x05, 0x00, 0x29, 0xc0, 0xc3, 0x03, 0xcc, 0x03,
	0xcc, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_79[] = {
	0x11, 0x00, 0x29, 0xc0, 0xc4, 0x00, 0xac, 0x00,
	0xba, 0x00, 0xd9, 0x00, 0xed, 0x01, 0x01, 0x01,
	0x1e, 0x01, 0x3a, 0x01, 0x62, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_80[] = {
	0x11, 0x00, 0x29, 0xc0, 0xc5, 0x01, 0x85, 0x01,
	0xb8, 0x01, 0xe4, 0x02, 0x27, 0x02, 0x5b, 0x02,
	0x5d, 0x02, 0x8c, 0x02, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_81[] = {
	0x11, 0x00, 0x29, 0xc0, 0xc6, 0x02, 0xdf, 0x03,
	0x0c, 0x03, 0x2a, 0x03, 0x51, 0x03, 0x6d, 0x03,
	0x8d, 0x03, 0xa4, 0x03, 0xbe, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_82[] = {
	0x05, 0x00, 0x29, 0xc0, 0xc7, 0x03, 0xcc, 0x03,
	0xcc, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_83[] = {
	0xee, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_84[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x03, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_85[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb0, 0x00, 0x00, 0xff
};
static char nt35521_720p_video_on_cmd_86[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb1, 0x00, 0x00, 0xff
};
static char nt35521_720p_video_on_cmd_87[] = {
	0x06, 0x00, 0x29, 0xc0, 0xb2, 0x03, 0x00, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_88[] = {
	0x06, 0x00, 0x29, 0xc0, 0xb3, 0x03, 0x00, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_89[] = {
	0x06, 0x00, 0x29, 0xc0, 0xb4, 0x03, 0x00, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_90[] = {
	0x06, 0x00, 0x29, 0xc0, 0xb5, 0x03, 0x00, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_91[] = {
	0x06, 0x00, 0x29, 0xc0, 0xb6, 0x03, 0x00, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_92[] = {
	0x06, 0x00, 0x29, 0xc0, 0xb7, 0x03, 0x00, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_93[] = {
	0x06, 0x00, 0x29, 0xc0, 0xb8, 0x03, 0x00, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_94[] = {
	0x06, 0x00, 0x29, 0xc0, 0xb9, 0x03, 0x00, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_95[] = {
	0x06, 0x00, 0x29, 0xc0, 0xba, 0x35, 0x10, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_96[] = {
	0x06, 0x00, 0x29, 0xc0, 0xbb, 0x35, 0x10, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_97[] = {
	0x06, 0x00, 0x29, 0xc0, 0xbc, 0x35, 0x10, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_98[] = {
	0x06, 0x00, 0x29, 0xc0, 0xbd, 0x35, 0x10, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_99[] = {
	0x05, 0x00, 0x29, 0xc0, 0xc0, 0x00, 0x34, 0x00,
	0x00, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_100[] = {
	0x05, 0x00, 0x29, 0xc0, 0xc1, 0x00, 0x34, 0x00,
	0x00, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_101[] = {
	0x05, 0x00, 0x29, 0xc0, 0xc2, 0x00, 0x34, 0x00,
	0x00, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_102[] = {
	0x05, 0x00, 0x29, 0xc0, 0xc3, 0x00, 0x34, 0x00,
	0x00, 0xff, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_103[] = {
	0xc4, 0x40, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_104[] = {
	0xc5, 0x40, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_105[] = {
	0xc6, 0x40, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_106[] = {
	0xc7, 0x40, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_107[] = {
	0xef, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_108[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x05, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_109[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb0, 0x1b, 0x10, 0xff
};
static char nt35521_720p_video_on_cmd_110[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb1, 0x1b, 0x10, 0xff
};
static char nt35521_720p_video_on_cmd_111[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb2, 0x1b, 0x10, 0xff
};
static char nt35521_720p_video_on_cmd_112[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb3, 0x1b, 0x10, 0xff
};
static char nt35521_720p_video_on_cmd_113[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb4, 0x1b, 0x10, 0xff
};
static char nt35521_720p_video_on_cmd_114[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb5, 0x1b, 0x10, 0xff
};
static char nt35521_720p_video_on_cmd_115[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb6, 0x1b, 0x10, 0xff
};
static char nt35521_720p_video_on_cmd_116[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb7, 0x1b, 0x10, 0xff
};
static char nt35521_720p_video_on_cmd_117[] = {
	0xb8, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_118[] = {
	0xb9, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_119[] = {
	0xba, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_120[] = {
	0xbb, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_121[] = {
	0xbc, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_122[] = {
	0x06, 0x00, 0x29, 0xc0, 0xbd, 0x03, 0x03, 0x03,
	0x00, 0x01, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_123[] = {
	0xc0, 0x03, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_124[] = {
	0xc1, 0x05, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_125[] = {
	0xc2, 0x03, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_126[] = {
	0xc3, 0x05, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_127[] = {
	0xc4, 0x80, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_128[] = {
	0xc5, 0xa2, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_129[] = {
	0xc6, 0x80, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_130[] = {
	0xc7, 0xa2, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_131[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc8, 0x01, 0x20, 0xff
};
static char nt35521_720p_video_on_cmd_132[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc9, 0x00, 0x20, 0xff
};
static char nt35521_720p_video_on_cmd_133[] = {
	0x03, 0x00, 0x29, 0xc0, 0xca, 0x01, 0x00, 0xff
};
static char nt35521_720p_video_on_cmd_134[] = {
	0x03, 0x00, 0x29, 0xc0, 0xcb, 0x00, 0x00, 0xff
};
static char nt35521_720p_video_on_cmd_135[] = {
	0x04, 0x00, 0x29, 0xc0, 0xcc, 0x00, 0x00, 0x01
};
static char nt35521_720p_video_on_cmd_136[] = {
	0x04, 0x00, 0x29, 0xc0, 0xcd, 0x00, 0x00, 0x01
};
static char nt35521_720p_video_on_cmd_137[] = {
	0x04, 0x00, 0x29, 0xc0, 0xce, 0x00, 0x00, 0x01
};
static char nt35521_720p_video_on_cmd_138[] = {
	0x04, 0x00, 0x29, 0xc0, 0xcf, 0x00, 0x00, 0x01
};
static char nt35521_720p_video_on_cmd_139[] = {
	0xd0, 0x00, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_140[] = {
	0x06, 0x00, 0x29, 0xc0, 0xd1, 0x03, 0x00, 0x00,
	0x07, 0x10, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_141[] = {
	0x06, 0x00, 0x29, 0xc0, 0xd2, 0x13, 0x00, 0x00,
	0x07, 0x11, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_142[] = {
	0x06, 0x00, 0x29, 0xc0, 0xd3, 0x23, 0x00, 0x00,
	0x07, 0x10, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_143[] = {
	0x06, 0x00, 0x29, 0xc0, 0xd4, 0x33, 0x00, 0x00,
	0x07, 0x11, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_144[] = {
	0xe5, 0x06, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_145[] = {
	0xe6, 0x06, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_146[] = {
	0xe7, 0x06, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_147[] = {
	0xe8, 0x06, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_148[] = {
	0xe9, 0x06, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_149[] = {
	0xea, 0x06, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_150[] = {
	0xeb, 0x06, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_151[] = {
	0xec, 0x06, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_152[] = {
	0xed, 0x31, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_153[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x06, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_154[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb0, 0x10, 0x11, 0xff
};
static char nt35521_720p_video_on_cmd_155[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb1, 0x12, 0x13, 0xff
};
static char nt35521_720p_video_on_cmd_156[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb2, 0x08, 0x00, 0xff
};
static char nt35521_720p_video_on_cmd_157[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb3, 0x2d, 0x2d, 0xff
};
static char nt35521_720p_video_on_cmd_158[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb4, 0x2d, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_159[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb5, 0x34, 0x2d, 0xff
};
static char nt35521_720p_video_on_cmd_160[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb6, 0x2d, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_161[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb7, 0x34, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_162[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb8, 0x02, 0x0a, 0xff
};
static char nt35521_720p_video_on_cmd_163[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb9, 0x00, 0x08, 0xff
};
static char nt35521_720p_video_on_cmd_164[] = {
	0x03, 0x00, 0x29, 0xc0, 0xba, 0x09, 0x01, 0xff
};
static char nt35521_720p_video_on_cmd_165[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbb, 0x0b, 0x03, 0xff
};
static char nt35521_720p_video_on_cmd_166[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbc, 0x34, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_167[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbd, 0x34, 0x2d, 0xff
};
static char nt35521_720p_video_on_cmd_168[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbe, 0x2d, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_169[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbf, 0x34, 0x2d, 0xff
};
static char nt35521_720p_video_on_cmd_170[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc0, 0x2d, 0x2d, 0xff
};
static char nt35521_720p_video_on_cmd_171[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc1, 0x01, 0x09, 0xff
};
static char nt35521_720p_video_on_cmd_172[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc2, 0x19, 0x18, 0xff
};
static char nt35521_720p_video_on_cmd_173[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc3, 0x17, 0x16, 0xff
};
static char nt35521_720p_video_on_cmd_174[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc4, 0x19, 0x18, 0xff
};
static char nt35521_720p_video_on_cmd_175[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc5, 0x17, 0x16, 0xff
};
static char nt35521_720p_video_on_cmd_176[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc6, 0x01, 0x09, 0xff
};
static char nt35521_720p_video_on_cmd_177[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc7, 0x2d, 0x2d, 0xff
};
static char nt35521_720p_video_on_cmd_178[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc8, 0x2d, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_179[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc9, 0x34, 0x2d, 0xff
};
static char nt35521_720p_video_on_cmd_180[] = {
	0x03, 0x00, 0x29, 0xc0, 0xca, 0x2d, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_181[] = {
	0x03, 0x00, 0x29, 0xc0, 0xcb, 0x34, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_182[] = {
	0x03, 0x00, 0x29, 0xc0, 0xcc, 0x0b, 0x03, 0xff
};
static char nt35521_720p_video_on_cmd_183[] = {
	0x03, 0x00, 0x29, 0xc0, 0xcd, 0x09, 0x01, 0xff
};
static char nt35521_720p_video_on_cmd_184[] = {
	0x03, 0x00, 0x29, 0xc0, 0xce, 0x00, 0x08, 0xff
};
static char nt35521_720p_video_on_cmd_185[] = {
	0x03, 0x00, 0x29, 0xc0, 0xcf, 0x02, 0x0a, 0xff
};
static char nt35521_720p_video_on_cmd_186[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd0, 0x34, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_187[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd1, 0x34, 0x2d, 0xff
};
static char nt35521_720p_video_on_cmd_188[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd2, 0x2d, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_189[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd3, 0x34, 0x2d, 0xff
};
static char nt35521_720p_video_on_cmd_190[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd4, 0x2d, 0x2d, 0xff
};
static char nt35521_720p_video_on_cmd_191[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd5, 0x08, 0x00, 0xff
};
static char nt35521_720p_video_on_cmd_192[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd6, 0x10, 0x11, 0xff
};
static char nt35521_720p_video_on_cmd_193[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd7, 0x12, 0x13, 0xff
};
static char nt35521_720p_video_on_cmd_194[] = {
	0x06, 0x00, 0x29, 0xc0, 0xd8, 0x55, 0x55, 0x55,
	0x55, 0x55, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_195[] = {
	0x06, 0x00, 0x29, 0xc0, 0xd9, 0x55, 0x55, 0x55,
	0x55, 0x55, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_196[] = {
	0x03, 0x00, 0x29, 0xc0, 0xe5, 0x34, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_197[] = {
	0x03, 0x00, 0x29, 0xc0, 0xe6, 0x34, 0x34, 0xff
};
static char nt35521_720p_video_on_cmd_198[] = {
	0xe7, 0x05, 0x23, 0x80
};
static char nt35521_720p_video_on_cmd_199[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_200[] = {
	0x11, 0x00, 0x05, 0x80
};
static char nt35521_720p_video_on_cmd_201[] = {
	0x29, 0x00, 0x05, 0x80
};
static char nt35521_720p_video_on_cmd_202[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x01, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_203[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x00, 0x00, 0xff, 0xff
};
static char nt35521_720p_video_on_cmd_204[] = {
	0x02, 0x00, 0x29, 0xc0, 0x53, 0x2c, 0xff, 0xff
};

static struct mipi_dsi_cmd nt35521_720p_video_on_command[] = {
	{ sizeof(nt35521_720p_video_on_cmd_0), nt35521_720p_video_on_cmd_0, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_1), nt35521_720p_video_on_cmd_1, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_2), nt35521_720p_video_on_cmd_2, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_3), nt35521_720p_video_on_cmd_3, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_4), nt35521_720p_video_on_cmd_4, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_5), nt35521_720p_video_on_cmd_5, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_6), nt35521_720p_video_on_cmd_6, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_7), nt35521_720p_video_on_cmd_7, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_8), nt35521_720p_video_on_cmd_8, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_9), nt35521_720p_video_on_cmd_9, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_10), nt35521_720p_video_on_cmd_10, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_11), nt35521_720p_video_on_cmd_11, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_12), nt35521_720p_video_on_cmd_12, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_13), nt35521_720p_video_on_cmd_13, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_14), nt35521_720p_video_on_cmd_14, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_15), nt35521_720p_video_on_cmd_15, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_16), nt35521_720p_video_on_cmd_16, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_17), nt35521_720p_video_on_cmd_17, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_18), nt35521_720p_video_on_cmd_18, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_19), nt35521_720p_video_on_cmd_19, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_20), nt35521_720p_video_on_cmd_20, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_21), nt35521_720p_video_on_cmd_21, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_22), nt35521_720p_video_on_cmd_22, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_23), nt35521_720p_video_on_cmd_23, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_24), nt35521_720p_video_on_cmd_24, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_25), nt35521_720p_video_on_cmd_25, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_26), nt35521_720p_video_on_cmd_26, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_27), nt35521_720p_video_on_cmd_27, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_28), nt35521_720p_video_on_cmd_28, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_29), nt35521_720p_video_on_cmd_29, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_30), nt35521_720p_video_on_cmd_30, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_31), nt35521_720p_video_on_cmd_31, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_32), nt35521_720p_video_on_cmd_32, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_33), nt35521_720p_video_on_cmd_33, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_34), nt35521_720p_video_on_cmd_34, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_35), nt35521_720p_video_on_cmd_35, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_36), nt35521_720p_video_on_cmd_36, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_37), nt35521_720p_video_on_cmd_37, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_38), nt35521_720p_video_on_cmd_38, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_39), nt35521_720p_video_on_cmd_39, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_40), nt35521_720p_video_on_cmd_40, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_41), nt35521_720p_video_on_cmd_41, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_42), nt35521_720p_video_on_cmd_42, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_43), nt35521_720p_video_on_cmd_43, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_44), nt35521_720p_video_on_cmd_44, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_45), nt35521_720p_video_on_cmd_45, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_46), nt35521_720p_video_on_cmd_46, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_47), nt35521_720p_video_on_cmd_47, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_48), nt35521_720p_video_on_cmd_48, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_49), nt35521_720p_video_on_cmd_49, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_50), nt35521_720p_video_on_cmd_50, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_51), nt35521_720p_video_on_cmd_51, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_52), nt35521_720p_video_on_cmd_52, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_53), nt35521_720p_video_on_cmd_53, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_54), nt35521_720p_video_on_cmd_54, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_55), nt35521_720p_video_on_cmd_55, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_56), nt35521_720p_video_on_cmd_56, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_57), nt35521_720p_video_on_cmd_57, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_58), nt35521_720p_video_on_cmd_58, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_59), nt35521_720p_video_on_cmd_59, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_60), nt35521_720p_video_on_cmd_60, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_61), nt35521_720p_video_on_cmd_61, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_62), nt35521_720p_video_on_cmd_62, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_63), nt35521_720p_video_on_cmd_63, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_64), nt35521_720p_video_on_cmd_64, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_65), nt35521_720p_video_on_cmd_65, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_66), nt35521_720p_video_on_cmd_66, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_67), nt35521_720p_video_on_cmd_67, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_68), nt35521_720p_video_on_cmd_68, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_69), nt35521_720p_video_on_cmd_69, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_70), nt35521_720p_video_on_cmd_70, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_71), nt35521_720p_video_on_cmd_71, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_72), nt35521_720p_video_on_cmd_72, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_73), nt35521_720p_video_on_cmd_73, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_74), nt35521_720p_video_on_cmd_74, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_75), nt35521_720p_video_on_cmd_75, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_76), nt35521_720p_video_on_cmd_76, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_77), nt35521_720p_video_on_cmd_77, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_78), nt35521_720p_video_on_cmd_78, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_79), nt35521_720p_video_on_cmd_79, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_80), nt35521_720p_video_on_cmd_80, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_81), nt35521_720p_video_on_cmd_81, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_82), nt35521_720p_video_on_cmd_82, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_83), nt35521_720p_video_on_cmd_83, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_84), nt35521_720p_video_on_cmd_84, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_85), nt35521_720p_video_on_cmd_85, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_86), nt35521_720p_video_on_cmd_86, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_87), nt35521_720p_video_on_cmd_87, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_88), nt35521_720p_video_on_cmd_88, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_89), nt35521_720p_video_on_cmd_89, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_90), nt35521_720p_video_on_cmd_90, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_91), nt35521_720p_video_on_cmd_91, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_92), nt35521_720p_video_on_cmd_92, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_93), nt35521_720p_video_on_cmd_93, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_94), nt35521_720p_video_on_cmd_94, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_95), nt35521_720p_video_on_cmd_95, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_96), nt35521_720p_video_on_cmd_96, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_97), nt35521_720p_video_on_cmd_97, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_98), nt35521_720p_video_on_cmd_98, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_99), nt35521_720p_video_on_cmd_99, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_100), nt35521_720p_video_on_cmd_100, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_101), nt35521_720p_video_on_cmd_101, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_102), nt35521_720p_video_on_cmd_102, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_103), nt35521_720p_video_on_cmd_103, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_104), nt35521_720p_video_on_cmd_104, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_105), nt35521_720p_video_on_cmd_105, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_106), nt35521_720p_video_on_cmd_106, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_107), nt35521_720p_video_on_cmd_107, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_108), nt35521_720p_video_on_cmd_108, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_109), nt35521_720p_video_on_cmd_109, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_110), nt35521_720p_video_on_cmd_110, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_111), nt35521_720p_video_on_cmd_111, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_112), nt35521_720p_video_on_cmd_112, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_113), nt35521_720p_video_on_cmd_113, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_114), nt35521_720p_video_on_cmd_114, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_115), nt35521_720p_video_on_cmd_115, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_116), nt35521_720p_video_on_cmd_116, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_117), nt35521_720p_video_on_cmd_117, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_118), nt35521_720p_video_on_cmd_118, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_119), nt35521_720p_video_on_cmd_119, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_120), nt35521_720p_video_on_cmd_120, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_121), nt35521_720p_video_on_cmd_121, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_122), nt35521_720p_video_on_cmd_122, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_123), nt35521_720p_video_on_cmd_123, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_124), nt35521_720p_video_on_cmd_124, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_125), nt35521_720p_video_on_cmd_125, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_126), nt35521_720p_video_on_cmd_126, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_127), nt35521_720p_video_on_cmd_127, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_128), nt35521_720p_video_on_cmd_128, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_129), nt35521_720p_video_on_cmd_129, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_130), nt35521_720p_video_on_cmd_130, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_131), nt35521_720p_video_on_cmd_131, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_132), nt35521_720p_video_on_cmd_132, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_133), nt35521_720p_video_on_cmd_133, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_134), nt35521_720p_video_on_cmd_134, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_135), nt35521_720p_video_on_cmd_135, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_136), nt35521_720p_video_on_cmd_136, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_137), nt35521_720p_video_on_cmd_137, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_138), nt35521_720p_video_on_cmd_138, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_139), nt35521_720p_video_on_cmd_139, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_140), nt35521_720p_video_on_cmd_140, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_141), nt35521_720p_video_on_cmd_141, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_142), nt35521_720p_video_on_cmd_142, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_143), nt35521_720p_video_on_cmd_143, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_144), nt35521_720p_video_on_cmd_144, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_145), nt35521_720p_video_on_cmd_145, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_146), nt35521_720p_video_on_cmd_146, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_147), nt35521_720p_video_on_cmd_147, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_148), nt35521_720p_video_on_cmd_148, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_149), nt35521_720p_video_on_cmd_149, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_150), nt35521_720p_video_on_cmd_150, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_151), nt35521_720p_video_on_cmd_151, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_152), nt35521_720p_video_on_cmd_152, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_153), nt35521_720p_video_on_cmd_153, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_154), nt35521_720p_video_on_cmd_154, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_155), nt35521_720p_video_on_cmd_155, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_156), nt35521_720p_video_on_cmd_156, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_157), nt35521_720p_video_on_cmd_157, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_158), nt35521_720p_video_on_cmd_158, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_159), nt35521_720p_video_on_cmd_159, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_160), nt35521_720p_video_on_cmd_160, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_161), nt35521_720p_video_on_cmd_161, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_162), nt35521_720p_video_on_cmd_162, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_163), nt35521_720p_video_on_cmd_163, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_164), nt35521_720p_video_on_cmd_164, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_165), nt35521_720p_video_on_cmd_165, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_166), nt35521_720p_video_on_cmd_166, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_167), nt35521_720p_video_on_cmd_167, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_168), nt35521_720p_video_on_cmd_168, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_169), nt35521_720p_video_on_cmd_169, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_170), nt35521_720p_video_on_cmd_170, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_171), nt35521_720p_video_on_cmd_171, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_172), nt35521_720p_video_on_cmd_172, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_173), nt35521_720p_video_on_cmd_173, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_174), nt35521_720p_video_on_cmd_174, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_175), nt35521_720p_video_on_cmd_175, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_176), nt35521_720p_video_on_cmd_176, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_177), nt35521_720p_video_on_cmd_177, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_178), nt35521_720p_video_on_cmd_178, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_179), nt35521_720p_video_on_cmd_179, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_180), nt35521_720p_video_on_cmd_180, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_181), nt35521_720p_video_on_cmd_181, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_182), nt35521_720p_video_on_cmd_182, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_183), nt35521_720p_video_on_cmd_183, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_184), nt35521_720p_video_on_cmd_184, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_185), nt35521_720p_video_on_cmd_185, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_186), nt35521_720p_video_on_cmd_186, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_187), nt35521_720p_video_on_cmd_187, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_188), nt35521_720p_video_on_cmd_188, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_189), nt35521_720p_video_on_cmd_189, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_190), nt35521_720p_video_on_cmd_190, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_191), nt35521_720p_video_on_cmd_191, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_192), nt35521_720p_video_on_cmd_192, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_193), nt35521_720p_video_on_cmd_193, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_194), nt35521_720p_video_on_cmd_194, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_195), nt35521_720p_video_on_cmd_195, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_196), nt35521_720p_video_on_cmd_196, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_197), nt35521_720p_video_on_cmd_197, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_198), nt35521_720p_video_on_cmd_198, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_199), nt35521_720p_video_on_cmd_199, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_200), nt35521_720p_video_on_cmd_200, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_201), nt35521_720p_video_on_cmd_201, 20 },
	{ sizeof(nt35521_720p_video_on_cmd_202), nt35521_720p_video_on_cmd_202, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_203), nt35521_720p_video_on_cmd_203, 0 },
	{ sizeof(nt35521_720p_video_on_cmd_204), nt35521_720p_video_on_cmd_204, 0 },
};

static char nt35521_720p_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char nt35521_720p_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd nt35521_720p_video_off_command[] = {
	{ sizeof(nt35521_720p_video_off_cmd_0), nt35521_720p_video_off_cmd_0, 0 },
	{ sizeof(nt35521_720p_video_off_cmd_1), nt35521_720p_video_off_cmd_1, 0 },
};

static struct command_state nt35521_720p_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info nt35521_720p_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info nt35521_720p_video_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration nt35521_720p_video_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t nt35521_720p_video_timings[] = {
	0x93, 0x1f, 0x17, 0x00, 0x2f, 0x2e, 0x1c, 0x21, 0x26, 0x03, 0x04, 0x00
};

static struct panel_timing nt35521_720p_video_timing_info = {
	.tclk_post = 0x20,
	.tclk_pre = 0x2d,
};

static struct panel_reset_sequence nt35521_720p_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 1, 20 },
	.pin_direction = 2,
};

static struct backlight nt35521_720p_video_backlight = {
	.bl_interface_type = BL_DCS,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_nt35521_720p_video_select(struct panel_struct *panel,
						   struct msm_panel_info *pinfo,
						   struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &nt35521_720p_video_panel_data;
	panel->panelres = &nt35521_720p_video_panel_res;
	panel->color = &nt35521_720p_video_color;
	panel->videopanel = &nt35521_720p_video_video_panel;
	panel->commandpanel = &nt35521_720p_video_command_panel;
	panel->state = &nt35521_720p_video_state;
	panel->laneconfig = &nt35521_720p_video_lane_config;
	panel->paneltiminginfo = &nt35521_720p_video_timing_info;
	panel->panelresetseq = &nt35521_720p_video_reset_seq;
	panel->backlightinfo = &nt35521_720p_video_backlight;
	pinfo->mipi.panel_on_cmds = nt35521_720p_video_on_command;
	pinfo->mipi.panel_off_cmds = nt35521_720p_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(nt35521_720p_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(nt35521_720p_video_off_command);
	memcpy(phy_db->timing, nt35521_720p_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_NT35521_720P_VIDEO_H_ */

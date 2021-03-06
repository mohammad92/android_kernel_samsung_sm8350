/* Copyright (c) 2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _CAM_SENSOR_ADAPTIVE_MIPI_S5K3M5_H_
#define _CAM_SENSOR_ADAPTIVE_MIPI_S5K3M5_H_

#include "cam_sensor_dev.h"

int num_tele_mipi_setting = 1;

/*************************************/
/* ========== Mode A =============== */
/*************************************/
enum {
	CAM_3M5_SET_A_Full_793_MHZ = 0,
	CAM_3M5_SET_A_Full_774_MHZ = 1,
	CAM_3M5_SET_A_Full_691_MHZ = 2,
};

struct cam_sensor_i2c_reg_array MIPI_FULL_793_MHZ_REG_ARRAY[] = {
	{0x0310, 0x007C, 0x00, 0x00},
};

struct cam_sensor_i2c_reg_array MIPI_FULL_774_MHZ_REG_ARRAY[] = {
	{0x0310,  0x0079, 0x00, 0x00},
};

struct cam_sensor_i2c_reg_array MIPI_FULL_691_MHZ_REG_ARRAY[] = {
	{0x0310,  0x006C, 0x00, 0x00},
};

static const struct cam_sensor_i2c_reg_setting sensor_3m5_setfile_A_mipi_full_793_mhz[] = {
    { MIPI_FULL_793_MHZ_REG_ARRAY, ARRAY_SIZE(MIPI_FULL_793_MHZ_REG_ARRAY),
	  CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_WORD, 0 }
};

static const struct cam_sensor_i2c_reg_setting sensor_3m5_setfile_A_mipi_full_774_mhz[] = {
    { MIPI_FULL_774_MHZ_REG_ARRAY, ARRAY_SIZE(MIPI_FULL_774_MHZ_REG_ARRAY),
	  CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_WORD, 0 }
};

static const struct cam_sensor_i2c_reg_setting sensor_3m5_setfile_A_mipi_full_691_mhz[] = {
    { MIPI_FULL_691_MHZ_REG_ARRAY, ARRAY_SIZE(MIPI_FULL_691_MHZ_REG_ARRAY),
	  CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_WORD, 0 }
};

static const struct cam_mipi_setting sensor_3m5_setfile_A_mipi_setting_FULL[] = {
	{ "793 Mhz",
	  sensor_3m5_setfile_A_mipi_full_793_mhz, ARRAY_SIZE(sensor_3m5_setfile_A_mipi_full_793_mhz) },
	{ "774 Mhz",
	 sensor_3m5_setfile_A_mipi_full_774_mhz, ARRAY_SIZE(sensor_3m5_setfile_A_mipi_full_774_mhz) },
	{ "691 Mhz",
	 sensor_3m5_setfile_A_mipi_full_691_mhz, ARRAY_SIZE(sensor_3m5_setfile_A_mipi_full_691_mhz) },
};

static const struct cam_mipi_channel sensor_3m5_setfile_A_mipi_channel_FULL[] = {
	{CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_001_GSM_GSM850), 0, 0, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_002_GSM_EGSM900), 0, 0, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_003_GSM_DCS1800), 0, 0, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_004_GSM_PCS1900), 0, 0, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10562, 10681, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10682, 10751, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10752, 10838, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9662, 9699, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9700, 9717, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9718, 9759, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9760, 9885, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9886, 9911, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9912, 9938, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1162, 1213, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1214, 1253, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1254, 1288, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1289, 1412, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1413, 1437, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1438, 1487, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1488, 1513, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1537, 1656, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1657, 1726, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1727, 1738, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_015_WCDMA_WB05), 4357, 4402, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_015_WCDMA_WB05), 4403, 4458, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2237, 2254, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2255, 2380, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2381, 2450, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2451, 2563, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_018_WCDMA_WB08), 2937, 3024, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_018_WCDMA_WB08), 3025, 3088, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 0, 261, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 262, 402, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 403, 599, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 600, 698, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 699, 734, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 735, 818, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 819, 1069, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 1070, 1122, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 1123, 1199, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1200, 1327, CAM_3M5_SET_A_Full_793_MHZ },
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1328, 1407, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1408, 1477, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1478, 1724, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1725, 1774, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1775, 1874, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1875, 1949, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 1950, 2211, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 2212, 2352, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 2353, 2399, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_095_LTE_LB05), 2400, 2514, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_095_LTE_LB05), 2515, 2649, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 2750, 2809, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 2810, 3060, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 3061, 3201, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 3202, 3449, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_098_LTE_LB08), 3450, 3648, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_098_LTE_LB08), 3649, 3799, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_102_LTE_LB12), 5010, 5179, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_103_LTE_LB13), 5180, 5279, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_104_LTE_LB14), 5280, 5314, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_104_LTE_LB14), 5315, 5379, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_107_LTE_LB17), 5730, 5849, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_108_LTE_LB18), 5850, 5904, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_108_LTE_LB18), 5905, 5999, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_109_LTE_LB19), 6000, 6054, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_109_LTE_LB19), 6055, 6149, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_110_LTE_LB20), 6150, 6250, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_110_LTE_LB20), 6251, 6449, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_111_LTE_LB21), 6450, 6494, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_111_LTE_LB21), 6495, 6516, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_111_LTE_LB21), 6517, 6599, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8040, 8138, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8139, 8174, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8175, 8258, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8259, 8509, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8510, 8562, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8563, 8654, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8655, 8689, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 8690, 8754, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 8755, 8904, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 8905, 9039, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9210, 9244, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9245, 9490, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9491, 9640, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9641, 9659, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_119_LTE_LB29), 9660, 9707, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_119_LTE_LB29), 9708, 9769, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_120_LTE_LB30), 9770, 9869, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 9920, 10006, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 10007, 10038, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 10039, 10156, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 10157, 10359, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_124_LTE_LB34), 36200, 36261, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_124_LTE_LB34), 36262, 36309, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_124_LTE_LB34), 36310, 36349, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 37750, 37766, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 37767, 37916, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 37917, 38163, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 38164, 38249, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38250, 38459, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38460, 38571, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38572, 38649, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38650, 38739, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38740, 38986, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38987, 39136, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39137, 39382, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39383, 39532, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39533, 39649, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39650, 39763, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39764, 40010, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40011, 40160, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40161, 40406, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40407, 40556, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40557, 40803, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40804, 40949, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40950, 41200, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41201, 41341, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41342, 41589, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41590, 41639, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41640, 41734, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41735, 41789, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41790, 42036, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42037, 42100, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42101, 42186, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42187, 42473, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42474, 42583, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42584, 42865, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42866, 42980, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42981, 43244, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43245, 43287, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43288, 43377, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43378, 43589, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55240, 55394, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55395, 55437, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55438, 55527, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55528, 55773, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55774, 55824, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55825, 55923, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55924, 56170, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56171, 56211, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56212, 56320, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56321, 56567, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56568, 56599, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56600, 56717, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56718, 56739, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66436, 66697, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66698, 66838, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66839, 67089, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 67090, 67234, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 67235, 67335, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68586, 68689, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68690, 68839, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68840, 68935, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_051_TDSCDMA_TD1), 0, 0, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_052_TDSCDMA_TD2), 0, 0, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_053_TDSCDMA_TD3), 0, 0, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_054_TDSCDMA_TD4), 0, 0, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_055_TDSCDMA_TD5), 0, 0, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_056_TDSCDMA_TD6), 0, 0, CAM_3M5_SET_A_Full_793_MHZ},
	{CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_061_CDMA_BC0), 0, 0, CAM_3M5_SET_A_Full_774_MHZ},
	{CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_062_CDMA_BC1), 0, 0, CAM_3M5_SET_A_Full_691_MHZ},
	{CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_071_CDMA_BC10), 0, 0, CAM_3M5_SET_A_Full_793_MHZ},
};

static const struct cam_mipi_sensor_mode sensor_tele_mipi_A_mode[] = {
	{
		sensor_3m5_setfile_A_mipi_channel_FULL, ARRAY_SIZE(sensor_3m5_setfile_A_mipi_channel_FULL),
		sensor_3m5_setfile_A_mipi_setting_FULL, ARRAY_SIZE(sensor_3m5_setfile_A_mipi_setting_FULL)
	},
};

/*************************************/
/* ========== DUMMY ================ */
/*************************************/
enum {
	CAM_TELE_SET_DUMMY_MHZ = 0,
};

struct cam_sensor_i2c_reg_array MIPI_TELE_DUMMY_MHZ_REG_ARRAY[] = {
};

static const struct cam_sensor_i2c_reg_setting sensor_tele_setfile_dummy_mhz[] = {
    { MIPI_TELE_DUMMY_MHZ_REG_ARRAY, ARRAY_SIZE(MIPI_TELE_DUMMY_MHZ_REG_ARRAY),
	  CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_WORD, 0 }
};

static const struct cam_mipi_setting sensor_tele_setfile_dummy_mipi_setting[] = {
	{ "DUMMY Mhz",
	  sensor_tele_setfile_dummy_mhz, ARRAY_SIZE(sensor_tele_setfile_dummy_mhz) },
};

static const struct cam_mipi_channel sensor_tele_setfile_dummy_channel[] = {
	{ CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_001_GSM_GSM850), 0, 0, CAM_TELE_SET_DUMMY_MHZ },
};

static const struct cam_mipi_sensor_mode sensor_tele_mipi_B_mode[] = {
	{
		sensor_tele_setfile_dummy_channel,	ARRAY_SIZE(sensor_tele_setfile_dummy_channel),
		sensor_tele_setfile_dummy_mipi_setting,	ARRAY_SIZE(sensor_tele_setfile_dummy_mipi_setting)
	},
};
static const struct cam_mipi_sensor_mode sensor_tele_mipi_C_mode[] = {
	{
		sensor_tele_setfile_dummy_channel,	ARRAY_SIZE(sensor_tele_setfile_dummy_channel),
		sensor_tele_setfile_dummy_mipi_setting,	ARRAY_SIZE(sensor_tele_setfile_dummy_mipi_setting)
	},
};

static const struct cam_mipi_sensor_mode sensor_tele_mipi_D_mode[] = {
	{
		sensor_tele_setfile_dummy_channel,	ARRAY_SIZE(sensor_tele_setfile_dummy_channel),
		sensor_tele_setfile_dummy_mipi_setting,	ARRAY_SIZE(sensor_tele_setfile_dummy_mipi_setting)
	},
};

#endif /* _CAM_SENSOR_ADAPTIVE_MIPI_S5K3M5_H_ */

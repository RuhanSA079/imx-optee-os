/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright 2017-2019 NXP
 */
#ifndef __IMX7_H__
#define __IMX7_H__

#include <registers/imx7-crm.h>
#include <registers/imx7-iomux.h>

#define GIC_BASE		0x31000000
#define GIC_SIZE		0x8000
#define GICC_OFFSET		0x2000
#define GICD_OFFSET		0x1000

#define CAAM_BASE		0x30900000
#define UART1_BASE		0x30860000
#define UART2_BASE		0x30890000
#define UART3_BASE		0x30880000
#define UART4_BASE		0x30A60000
#define UART5_BASE		0x30A70000

#define AIPS1_BASE		0x30000000
#define AIPS1_SIZE		0x400000
#define AIPS2_BASE		0x30400000
#define AIPS2_SIZE		0x400000
#define AIPS3_BASE		0x30800000
#define AIPS3_SIZE		0x400000

#define WDOG_BASE		0x30280000
#define LPSR_BASE		0x30270000
#define LPSR_SIZE		0x10000
#define IOMUXC_BASE		0x30330000
#define IOMUXC_SIZE		0x4000
#define IOMUXC_GPR_BASE		0x30340000
#define OCOTP_BASE		0x30350000
#define OCOTP_SIZE		0x10000
#define ANATOP_BASE		0x30360000
#define ANATOP_SIZE		0x10000
#define SNVS_BASE		0x30370000
#define SNVS_SIZE		0x10000
#define CCM_BASE		0x30380000
#define CCM_SIZE		0x10000
#define SRC_BASE		0x30390000
#define SRC_SIZE		0x10000
#define GPC_BASE		0x303A0000
#define GPC_SIZE		0x10000
#define CSU_BASE		0x303E0000
#define CSU_SIZE		0x10000
#define TZASC_BASE		0x30780000
#define DDRC_PHY_BASE		0x30790000
#define DDRC_PHY_SIZE		0x10000
#define MMDC_P0_BASE		0x307A0000
#define MMDC_P0_SIZE		0x10000
#define DDRC_BASE		0x307A0000
#define DDRC_SIZE		0x10000
#define IRAM_BASE		0x00900000
#define IRAM_S_BASE		0x00180000

#define CSU_CSL_START		0x0
#define CSU_CSL_END		0x100
#define	CSU_ACCESS_ALL		0x00FF00FF
#define CSU_SETTING_LOCK	0x01000100
#define CSU_SA			0x218

#define TRUSTZONE_OCRAM_START	0x180000

#define IOMUXC_GPR9_OFFSET				0x24
#define IOMUXC_GPR9_TZASC1_MUX_CONTROL_OFFSET		0

#define IOMUXC_GPR11_OFFSET				0x2C
#define IOMUXC_GPR11_OCRAM_S_TZ_ADDR_OFFSET		11
#define IOMUXC_GPR11_OCRAM_S_TZ_ADDR_MASK		GENMASK_32(13, 11)

#define IOMUXC_GPR11_OCRAM_S_TZ_EN_OFFSET		10
#define IOMUXC_GPR11_OCRAM_S_TZ_EN_MASK			GENMASK_32(10, 10)

#define IOMUXC_GPR11_OCRAM_S_TZ_EN_LOCK_OFFSET		26
#define IOMUXC_GPR11_OCRAM_S_TZ_EN_LOCK_MASK		GENMASK_32(26, 26)
#define IOMUXC_GPR11_OCRAM_S_TZ_ADDR_LOCK_OFFSET	GENMASK_32(29, 27)

#define DIGPROG_OFFSET	0x800

#endif /* __IMX7_H__ */

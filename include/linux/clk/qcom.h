/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2016, 2020 The Linux Foundation. All rights reserved.
 */

#ifndef __LINUX_CLK_QCOM_H_
#define __LINUX_CLK_QCOM_H_

#include <linux/clk.h>

#if defined(CONFIG_COMMON_CLK_QCOM)
enum branch_mem_flags {
	CLKFLAG_RETAIN_PERIPH,
	CLKFLAG_NORETAIN_PERIPH,
	CLKFLAG_RETAIN_MEM,
	CLKFLAG_NORETAIN_MEM,
	CLKFLAG_PERIPH_OFF_SET,
	CLKFLAG_PERIPH_OFF_CLEAR,
};
#elif defined(CONFIG_COMMON_CLK_MSM)
#include <linux/clk/msm-clk.h>
#endif /* CONFIG_COMMON_CLK_QCOM */

void qcom_clk_dump(struct clk *clk, bool calltrace);
void qcom_clk_bulk_dump(int num_clks, struct clk_bulk_data *clks,
			bool calltrace);

#endif  /* __LINUX_CLK_QCOM_H_ */

/*
 * Copyright (c) 2016 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include <stddef.h>
#include <stdio.h>

#include "drv.h"
#include "gbm.h"

uint64_t gbm_convert_flags(uint32_t flags)
{
	uint64_t usage = DRV_BO_USE_NONE;

	if (flags & GBM_BO_USE_SCANOUT)
		usage |= DRV_BO_USE_SCANOUT;
	if (flags & GBM_BO_USE_CURSOR)
		usage |= DRV_BO_USE_CURSOR;
	if (flags & GBM_BO_USE_CURSOR_64X64)
		usage |= DRV_BO_USE_CURSOR_64X64;
	if (flags & GBM_BO_USE_RENDERING)
		usage |= DRV_BO_USE_RENDERING;
	if (flags & GBM_BO_USE_LINEAR)
		usage |= DRV_BO_USE_LINEAR;

	return usage;
}

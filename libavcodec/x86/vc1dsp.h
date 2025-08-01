/*
 * VC-1 and WMV3 decoder - X86 DSP init functions
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVCODEC_X86_VC1DSP_H
#define AVCODEC_X86_VC1DSP_H

#include "libavcodec/vc1dsp.h"

#if HAVE_6REGS && HAVE_INLINE_ASM && HAVE_MMX_EXTERNAL

void ff_vc1dsp_init_mmx(VC1DSPContext *dsp);
void ff_vc1dsp_init_mmxext(VC1DSPContext *dsp);

#endif /* HAVE_6REGS && HAVE_INLINE_ASM && HAVE_MMX_EXTERNAL */

#endif /* AVCODEC_X86_VC1DSP_H */

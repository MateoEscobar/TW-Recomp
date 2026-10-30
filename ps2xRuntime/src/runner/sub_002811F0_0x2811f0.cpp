#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002811F0
// Address: 0x2811f0 - 0x281368
void sub_002811F0_0x2811f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002811F0_0x2811f0");
#endif

    switch (ctx->pc) {
        case 0x281220u: goto label_281220;
        case 0x281238u: goto label_281238;
        case 0x281258u: goto label_281258;
        case 0x281270u: goto label_281270;
        case 0x281280u: goto label_281280;
        case 0x2812b0u: goto label_2812b0;
        case 0x2812ccu: goto label_2812cc;
        case 0x2812e0u: goto label_2812e0;
        case 0x2812f4u: goto label_2812f4;
        case 0x281318u: goto label_281318;
        case 0x281324u: goto label_281324;
        case 0x281334u: goto label_281334;
        case 0x28133cu: goto label_28133c;
        case 0x28134cu: goto label_28134c;
        default: break;
    }

    ctx->pc = 0x2811f0u;

    // 0x2811f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2811f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2811f4: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2811f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x2811f8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2811f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2811fc: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2811fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x281200: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x281200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x281204: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x281204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x281208: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x281208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28120c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28120cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x281210: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x281210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x281214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281218: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x281218u;
    SET_GPR_U32(ctx, 31, 0x281220u);
    ctx->pc = 0x28121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281218u;
    // 0x28121c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x281218u, 0x281220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281220u;
label_281220:
    // 0x281220: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x281220u;
    {
        const bool branch_taken_0x281220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281220u;
        // 0x281224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281220) {
            ctx->pc = 0x281350u;
            goto label_281350;
        }
    }
    ctx->pc = 0x281228u;
    // 0x281228: 0x3c052fef  lui         $a1, 0x2FEF
    ctx->pc = 0x281228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
    // 0x28122c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28122cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281230: 0xc089998  jal         func_226660
    ctx->pc = 0x281230u;
    SET_GPR_U32(ctx, 31, 0x281238u);
    ctx->pc = 0x281234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281230u;
    // 0x281234: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x281230u, 0x281238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281238u;
label_281238:
    // 0x281238: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x281238u;
    {
        const bool branch_taken_0x281238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281238u;
        // 0x28123c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281238) {
            ctx->pc = 0x281350u;
            goto label_281350;
        }
    }
    ctx->pc = 0x281240u;
    // 0x281240: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x281240u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x281244: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x281244u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x281248: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x281248u;
    {
        const bool branch_taken_0x281248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281248) {
            ctx->pc = 0x28132Cu;
            goto label_28132c;
        }
    }
    ctx->pc = 0x281250u;
    // 0x281250: 0xc09e414  jal         func_279050
    ctx->pc = 0x281250u;
    SET_GPR_U32(ctx, 31, 0x281258u);
    ctx->pc = 0x281254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281250u;
    // 0x281254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279050u, 0x281250u, 0x281258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281258u;
label_281258:
    // 0x281258: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x281258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28125c: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x28125Cu;
    {
        const bool branch_taken_0x28125c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x281260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28125Cu;
        // 0x281260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28125c) {
            ctx->pc = 0x28132Cu;
            goto label_28132c;
        }
    }
    ctx->pc = 0x281264u;
    // 0x281264: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x281264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x281268: 0xc089998  jal         func_226660
    ctx->pc = 0x281268u;
    SET_GPR_U32(ctx, 31, 0x281270u);
    ctx->pc = 0x28126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281268u;
    // 0x28126c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x281268u, 0x281270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281270u;
label_281270:
    // 0x281270: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x281270u;
    {
        const bool branch_taken_0x281270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281270u;
        // 0x281274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281270) {
            ctx->pc = 0x28132Cu;
            goto label_28132c;
        }
    }
    ctx->pc = 0x281278u;
    // 0x281278: 0xc08702a  jal         func_21C0A8
    ctx->pc = 0x281278u;
    SET_GPR_U32(ctx, 31, 0x281280u);
    ctx->pc = 0x28127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281278u;
    // 0x28127c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x281278u, 0x281280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281280u;
label_281280:
    // 0x281280: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281280u;
    {
        const bool branch_taken_0x281280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281280u;
        // 0x281284: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281280) {
            ctx->pc = 0x281298u;
            goto label_281298;
        }
    }
    ctx->pc = 0x281288u;
    // 0x281288: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x281288u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x28128c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28128cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x281290: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x281290u;
    {
        const bool branch_taken_0x281290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281290u;
        // 0x281294: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281290) {
            ctx->pc = 0x28132Cu;
            goto label_28132c;
        }
    }
    ctx->pc = 0x281298u;
label_281298:
    // 0x281298: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x281298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x28129c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x28129cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x2812a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2812a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812a4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2812a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2812a8: 0xc1078f6  jal         func_41E3D8
    ctx->pc = 0x2812A8u;
    SET_GPR_U32(ctx, 31, 0x2812B0u);
    ctx->pc = 0x2812ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2812A8u;
    // 0x2812ac: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3D8u, 0x2812A8u, 0x2812B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812B0u;
label_2812b0:
    // 0x2812b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2812B0u;
    {
        const bool branch_taken_0x2812b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2812B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812B0u;
        // 0x2812b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812b0) {
            ctx->pc = 0x2812D4u;
            goto label_2812d4;
        }
    }
    ctx->pc = 0x2812B8u;
    // 0x2812b8: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2812b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x2812bc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2812bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2812c0: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2812c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2812c4: 0xc1078f6  jal         func_41E3D8
    ctx->pc = 0x2812C4u;
    SET_GPR_U32(ctx, 31, 0x2812CCu);
    ctx->pc = 0x2812C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2812C4u;
    // 0x2812c8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3D8u, 0x2812C4u, 0x2812CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812CCu;
label_2812cc:
    // 0x2812cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2812CCu;
    {
        const bool branch_taken_0x2812cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2812D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812CCu;
        // 0x2812d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812cc) {
            ctx->pc = 0x28132Cu;
            goto label_28132c;
        }
    }
    ctx->pc = 0x2812D4u;
label_2812d4:
    // 0x2812d4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2812d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2812d8: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x2812D8u;
    SET_GPR_U32(ctx, 31, 0x2812E0u);
    ctx->pc = 0x2812DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2812D8u;
    // 0x2812dc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x2812D8u, 0x2812E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812E0u;
label_2812e0:
    // 0x2812e0: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2812e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x2812e4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2812e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2812e8: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x2812e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x2812ec: 0xc1078f6  jal         func_41E3D8
    ctx->pc = 0x2812ECu;
    SET_GPR_U32(ctx, 31, 0x2812F4u);
    ctx->pc = 0x2812F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2812ECu;
    // 0x2812f0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3D8u, 0x2812ECu, 0x2812F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812F4u;
label_2812f4:
    // 0x2812f4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2812F4u;
    {
        const bool branch_taken_0x2812f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2812f4) {
            ctx->pc = 0x2812F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2812F4u;
            // 0x2812f8: 0x8e250380  lw          $a1, 0x380($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281300u;
            goto label_281300;
        }
    }
    ctx->pc = 0x2812FCu;
    // 0x2812fc: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x2812fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_281300:
    // 0x281300: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x281300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x281304: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x281304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x281308: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x281308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28130c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28130cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281310: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x281310u;
    SET_GPR_U32(ctx, 31, 0x281318u);
    ctx->pc = 0x281314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281310u;
    // 0x281314: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x281310u, 0x281318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281318u;
label_281318:
    // 0x281318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28131c: 0xc0983f4  jal         func_260FD0
    ctx->pc = 0x28131Cu;
    SET_GPR_U32(ctx, 31, 0x281324u);
    ctx->pc = 0x281320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28131Cu;
    // 0x281320: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260FD0u, 0x28131Cu, 0x281324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281324u;
label_281324:
    // 0x281324: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x281324u;
    {
        const bool branch_taken_0x281324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281324u;
        // 0x281328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281324) {
            ctx->pc = 0x281350u;
            goto label_281350;
        }
    }
    ctx->pc = 0x28132Cu;
label_28132c:
    // 0x28132c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x28132Cu;
    SET_GPR_U32(ctx, 31, 0x281334u);
    ctx->pc = 0x281330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28132Cu;
    // 0x281330: 0x2604036c  addiu       $a0, $s0, 0x36C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x28132Cu, 0x281334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281334u;
label_281334:
    // 0x281334: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x281334u;
    SET_GPR_U32(ctx, 31, 0x28133Cu);
    ctx->pc = 0x281338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281334u;
    // 0x281338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x281334u, 0x28133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28133Cu;
label_28133c:
    // 0x28133c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28133Cu;
    {
        const bool branch_taken_0x28133c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28133c) {
            ctx->pc = 0x281340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28133Cu;
            // 0x281340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281350u;
            goto label_281350;
        }
    }
    ctx->pc = 0x281344u;
    // 0x281344: 0xc09354c  jal         func_24D530
    ctx->pc = 0x281344u;
    SET_GPR_U32(ctx, 31, 0x28134Cu);
    ctx->pc = 0x281348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281344u;
    // 0x281348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D530u, 0x281344u, 0x28134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28134Cu;
label_28134c:
    // 0x28134c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28134cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_281350:
    // 0x281350: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x281350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281354: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x281354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281358: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x281358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28135c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28135cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281360: 0x3e00008  jr          $ra
    ctx->pc = 0x281360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281360u;
        // 0x281364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281368u;
}

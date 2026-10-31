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

// Function: sub_002271F0
// Address: 0x2271f0 - 0x227388
void sub_002271F0_0x2271f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002271F0_0x2271f0");
#endif

    switch (ctx->pc) {
        case 0x2271f0u: goto label_2271f0;
        case 0x2271f4u: goto label_2271f4;
        case 0x2271f8u: goto label_2271f8;
        case 0x2271fcu: goto label_2271fc;
        case 0x227200u: goto label_227200;
        case 0x227204u: goto label_227204;
        case 0x227208u: goto label_227208;
        case 0x22720cu: goto label_22720c;
        case 0x227210u: goto label_227210;
        case 0x227214u: goto label_227214;
        case 0x227218u: goto label_227218;
        case 0x22721cu: goto label_22721c;
        case 0x227220u: goto label_227220;
        case 0x227224u: goto label_227224;
        case 0x227228u: goto label_227228;
        case 0x22722cu: goto label_22722c;
        case 0x227230u: goto label_227230;
        case 0x227234u: goto label_227234;
        case 0x227238u: goto label_227238;
        case 0x22723cu: goto label_22723c;
        case 0x227240u: goto label_227240;
        case 0x227244u: goto label_227244;
        case 0x227248u: goto label_227248;
        case 0x22724cu: goto label_22724c;
        case 0x227250u: goto label_227250;
        case 0x227254u: goto label_227254;
        case 0x227258u: goto label_227258;
        case 0x22725cu: goto label_22725c;
        case 0x227260u: goto label_227260;
        case 0x227264u: goto label_227264;
        case 0x227268u: goto label_227268;
        case 0x22726cu: goto label_22726c;
        case 0x227270u: goto label_227270;
        case 0x227274u: goto label_227274;
        case 0x227278u: goto label_227278;
        case 0x22727cu: goto label_22727c;
        case 0x227280u: goto label_227280;
        case 0x227284u: goto label_227284;
        case 0x227288u: goto label_227288;
        case 0x22728cu: goto label_22728c;
        case 0x227290u: goto label_227290;
        case 0x227294u: goto label_227294;
        case 0x227298u: goto label_227298;
        case 0x22729cu: goto label_22729c;
        case 0x2272a0u: goto label_2272a0;
        case 0x2272a4u: goto label_2272a4;
        case 0x2272a8u: goto label_2272a8;
        case 0x2272acu: goto label_2272ac;
        case 0x2272b0u: goto label_2272b0;
        case 0x2272b4u: goto label_2272b4;
        case 0x2272b8u: goto label_2272b8;
        case 0x2272bcu: goto label_2272bc;
        case 0x2272c0u: goto label_2272c0;
        case 0x2272c4u: goto label_2272c4;
        case 0x2272c8u: goto label_2272c8;
        case 0x2272ccu: goto label_2272cc;
        case 0x2272d0u: goto label_2272d0;
        case 0x2272d4u: goto label_2272d4;
        case 0x2272d8u: goto label_2272d8;
        case 0x2272dcu: goto label_2272dc;
        case 0x2272e0u: goto label_2272e0;
        case 0x2272e4u: goto label_2272e4;
        case 0x2272e8u: goto label_2272e8;
        case 0x2272ecu: goto label_2272ec;
        case 0x2272f0u: goto label_2272f0;
        case 0x2272f4u: goto label_2272f4;
        case 0x2272f8u: goto label_2272f8;
        case 0x2272fcu: goto label_2272fc;
        case 0x227300u: goto label_227300;
        case 0x227304u: goto label_227304;
        case 0x227308u: goto label_227308;
        case 0x22730cu: goto label_22730c;
        case 0x227310u: goto label_227310;
        case 0x227314u: goto label_227314;
        case 0x227318u: goto label_227318;
        case 0x22731cu: goto label_22731c;
        case 0x227320u: goto label_227320;
        case 0x227324u: goto label_227324;
        case 0x227328u: goto label_227328;
        case 0x22732cu: goto label_22732c;
        case 0x227330u: goto label_227330;
        case 0x227334u: goto label_227334;
        case 0x227338u: goto label_227338;
        case 0x22733cu: goto label_22733c;
        case 0x227340u: goto label_227340;
        case 0x227344u: goto label_227344;
        case 0x227348u: goto label_227348;
        case 0x22734cu: goto label_22734c;
        case 0x227350u: goto label_227350;
        case 0x227354u: goto label_227354;
        case 0x227358u: goto label_227358;
        case 0x22735cu: goto label_22735c;
        case 0x227360u: goto label_227360;
        case 0x227364u: goto label_227364;
        case 0x227368u: goto label_227368;
        case 0x22736cu: goto label_22736c;
        case 0x227370u: goto label_227370;
        case 0x227374u: goto label_227374;
        case 0x227378u: goto label_227378;
        case 0x22737cu: goto label_22737c;
        case 0x227380u: goto label_227380;
        case 0x227384u: goto label_227384;
        default: break;
    }

    ctx->pc = 0x2271f0u;

label_2271f0:
    // 0x2271f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2271f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2271f4:
    // 0x2271f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2271f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2271f8:
    // 0x2271f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2271f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2271fc:
    // 0x2271fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2271fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_227200:
    // 0x227200: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x227200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227204:
    // 0x227204: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x227204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_227208:
    // 0x227208: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22720c:
    // 0x22720c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_227210:
    // 0x227210: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x227210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_227214:
    // 0x227214: 0xc10c4de  jal         func_431378
label_227218:
    if (ctx->pc == 0x227218u) {
        ctx->pc = 0x227218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227214u;
        // 0x227218: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22721Cu;
        goto label_22721c;
    }
    ctx->pc = 0x227214u;
    SET_GPR_U32(ctx, 31, 0x22721Cu);
    ctx->pc = 0x227218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227214u;
    // 0x227218: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x227214u, 0x22721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22721Cu;
label_22721c:
    // 0x22721c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x22721cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_227220:
    // 0x227220: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_227224:
    // 0x227224: 0x24a5b4a8  addiu       $a1, $a1, -0x4B58
    ctx->pc = 0x227224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948008));
label_227228:
    // 0x227228: 0xc10c46c  jal         func_4311B0
label_22722c:
    if (ctx->pc == 0x22722Cu) {
        ctx->pc = 0x22722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227228u;
        // 0x22722c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227230u;
        goto label_227230;
    }
    ctx->pc = 0x227228u;
    SET_GPR_U32(ctx, 31, 0x227230u);
    ctx->pc = 0x22722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227228u;
    // 0x22722c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x227228u, 0x227230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227230u;
label_227230:
    // 0x227230: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_227234:
    if (ctx->pc == 0x227234u) {
        ctx->pc = 0x227234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227230u;
        // 0x227234: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227238u;
        goto label_227238;
    }
    ctx->pc = 0x227230u;
    {
        const bool branch_taken_0x227230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227230u;
        // 0x227234: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227230) {
            ctx->pc = 0x227268u;
            goto label_227268;
        }
    }
    ctx->pc = 0x227238u;
label_227238:
    // 0x227238: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x227238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_22723c:
    // 0x22723c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x22723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_227240:
    // 0x227240: 0x8c640120  lw          $a0, 0x120($v1)
    ctx->pc = 0x227240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_227244:
    // 0x227244: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
label_227248:
    if (ctx->pc == 0x227248u) {
        ctx->pc = 0x227248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227244u;
        // 0x227248: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22724Cu;
        goto label_22724c;
    }
    ctx->pc = 0x227244u;
    {
        const bool branch_taken_0x227244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x227244) {
            ctx->pc = 0x227248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227244u;
            // 0x227248: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22725Cu;
            goto label_22725c;
        }
    }
    ctx->pc = 0x22724Cu;
label_22724c:
    // 0x22724c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x22724cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_227250:
    // 0x227250: 0xa3a0001f  sb          $zero, 0x1F($sp)
    ctx->pc = 0x227250u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
label_227254:
    // 0x227254: 0x10000011  b           . + 4 + (0x11 << 2)
label_227258:
    if (ctx->pc == 0x227258u) {
        ctx->pc = 0x227258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227254u;
        // 0x227258: 0x24a5b4b8  addiu       $a1, $a1, -0x4B48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22725Cu;
        goto label_22725c;
    }
    ctx->pc = 0x227254u;
    {
        const bool branch_taken_0x227254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227254u;
        // 0x227258: 0x24a5b4b8  addiu       $a1, $a1, -0x4B48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227254) {
            ctx->pc = 0x22729Cu;
            goto label_22729c;
        }
    }
    ctx->pc = 0x22725Cu;
label_22725c:
    // 0x22725c: 0xa3a0001f  sb          $zero, 0x1F($sp)
    ctx->pc = 0x22725cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
label_227260:
    // 0x227260: 0x1000000e  b           . + 4 + (0xE << 2)
label_227264:
    if (ctx->pc == 0x227264u) {
        ctx->pc = 0x227264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227260u;
        // 0x227264: 0x24a5b4c8  addiu       $a1, $a1, -0x4B38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227268u;
        goto label_227268;
    }
    ctx->pc = 0x227260u;
    {
        const bool branch_taken_0x227260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227260u;
        // 0x227264: 0x24a5b4c8  addiu       $a1, $a1, -0x4B38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227260) {
            ctx->pc = 0x22729Cu;
            goto label_22729c;
        }
    }
    ctx->pc = 0x227268u;
label_227268:
    // 0x227268: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22726c:
    // 0x22726c: 0x24a5b4e0  addiu       $a1, $a1, -0x4B20
    ctx->pc = 0x22726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948064));
label_227270:
    // 0x227270: 0xc10c46c  jal         func_4311B0
label_227274:
    if (ctx->pc == 0x227274u) {
        ctx->pc = 0x227274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227270u;
        // 0x227274: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227278u;
        goto label_227278;
    }
    ctx->pc = 0x227270u;
    SET_GPR_U32(ctx, 31, 0x227278u);
    ctx->pc = 0x227274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227270u;
    // 0x227274: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x227270u, 0x227278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227278u;
label_227278:
    // 0x227278: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_22727c:
    if (ctx->pc == 0x22727Cu) {
        ctx->pc = 0x22727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227278u;
        // 0x22727c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227280u;
        goto label_227280;
    }
    ctx->pc = 0x227278u;
    {
        const bool branch_taken_0x227278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227278u;
        // 0x22727c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227278) {
            ctx->pc = 0x2272C4u;
            goto label_2272c4;
        }
    }
    ctx->pc = 0x227280u;
label_227280:
    // 0x227280: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x227280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_227284:
    // 0x227284: 0x8c640120  lw          $a0, 0x120($v1)
    ctx->pc = 0x227284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_227288:
    // 0x227288: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_22728c:
    if (ctx->pc == 0x22728Cu) {
        ctx->pc = 0x22728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227288u;
        // 0x22728c: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227290u;
        goto label_227290;
    }
    ctx->pc = 0x227288u;
    {
        const bool branch_taken_0x227288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227288u;
        // 0x22728c: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227288) {
            ctx->pc = 0x2272B0u;
            goto label_2272b0;
        }
    }
    ctx->pc = 0x227290u;
label_227290:
    // 0x227290: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x227290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_227294:
    // 0x227294: 0xa3a0001f  sb          $zero, 0x1F($sp)
    ctx->pc = 0x227294u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
label_227298:
    // 0x227298: 0x24a5b4f0  addiu       $a1, $a1, -0x4B10
    ctx->pc = 0x227298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948080));
label_22729c:
    // 0x22729c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2272a0:
    // 0x2272a0: 0xc10c4de  jal         func_431378
label_2272a4:
    if (ctx->pc == 0x2272A4u) {
        ctx->pc = 0x2272A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272A0u;
        // 0x2272a4: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272A8u;
        goto label_2272a8;
    }
    ctx->pc = 0x2272A0u;
    SET_GPR_U32(ctx, 31, 0x2272A8u);
    ctx->pc = 0x2272A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272A0u;
    // 0x2272a4: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x2272A0u, 0x2272A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272A8u;
label_2272a8:
    // 0x2272a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2272ac:
    if (ctx->pc == 0x2272ACu) {
        ctx->pc = 0x2272B0u;
        goto label_2272b0;
    }
    ctx->pc = 0x2272A8u;
    {
        const bool branch_taken_0x2272a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2272a8) {
            ctx->pc = 0x2272C4u;
            goto label_2272c4;
        }
    }
    ctx->pc = 0x2272B0u;
label_2272b0:
    // 0x2272b0: 0xa3a0001f  sb          $zero, 0x1F($sp)
    ctx->pc = 0x2272b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
label_2272b4:
    // 0x2272b4: 0x24a5b500  addiu       $a1, $a1, -0x4B00
    ctx->pc = 0x2272b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948096));
label_2272b8:
    // 0x2272b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2272b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2272bc:
    // 0x2272bc: 0xc10c4de  jal         func_431378
label_2272c0:
    if (ctx->pc == 0x2272C0u) {
        ctx->pc = 0x2272C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272BCu;
        // 0x2272c0: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272C4u;
        goto label_2272c4;
    }
    ctx->pc = 0x2272BCu;
    SET_GPR_U32(ctx, 31, 0x2272C4u);
    ctx->pc = 0x2272C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272BCu;
    // 0x2272c0: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x2272BCu, 0x2272C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272C4u;
label_2272c4:
    // 0x2272c4: 0xc089d02  jal         func_227408
label_2272c8:
    if (ctx->pc == 0x2272C8u) {
        ctx->pc = 0x2272C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272C4u;
        // 0x2272c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272CCu;
        goto label_2272cc;
    }
    ctx->pc = 0x2272C4u;
    SET_GPR_U32(ctx, 31, 0x2272CCu);
    ctx->pc = 0x2272C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272C4u;
    // 0x2272c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227408u, 0x2272C4u, 0x2272CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272CCu;
label_2272cc:
    // 0x2272cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2272ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2272d0:
    // 0x2272d0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_2272d4:
    if (ctx->pc == 0x2272D4u) {
        ctx->pc = 0x2272D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272D0u;
        // 0x2272d4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272D8u;
        goto label_2272d8;
    }
    ctx->pc = 0x2272D0u;
    {
        const bool branch_taken_0x2272d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2272D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272D0u;
        // 0x2272d4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272d0) {
            ctx->pc = 0x227310u;
            goto label_227310;
        }
    }
    ctx->pc = 0x2272D8u;
label_2272d8:
    // 0x2272d8: 0x26440360  addiu       $a0, $s2, 0x360
    ctx->pc = 0x2272d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
label_2272dc:
    // 0x2272dc: 0xc0e4080  jal         func_390200
label_2272e0:
    if (ctx->pc == 0x2272E0u) {
        ctx->pc = 0x2272E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272DCu;
        // 0x2272e0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272E4u;
        goto label_2272e4;
    }
    ctx->pc = 0x2272DCu;
    SET_GPR_U32(ctx, 31, 0x2272E4u);
    ctx->pc = 0x2272E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272DCu;
    // 0x2272e0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x2272DCu, 0x2272E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272E4u;
label_2272e4:
    // 0x2272e4: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x2272e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_2272e8:
    // 0x2272e8: 0xc0e44cc  jal         func_391330
label_2272ec:
    if (ctx->pc == 0x2272ECu) {
        ctx->pc = 0x2272ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272E8u;
        // 0x2272ec: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272F0u;
        goto label_2272f0;
    }
    ctx->pc = 0x2272E8u;
    SET_GPR_U32(ctx, 31, 0x2272F0u);
    ctx->pc = 0x2272ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272E8u;
    // 0x2272ec: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2272E8u, 0x2272F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272F0u;
label_2272f0:
    // 0x2272f0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2272f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2272f4:
    // 0x2272f4: 0xc10c313  jal         func_430C4C
label_2272f8:
    if (ctx->pc == 0x2272F8u) {
        ctx->pc = 0x2272F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272F4u;
        // 0x2272f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272FCu;
        goto label_2272fc;
    }
    ctx->pc = 0x2272F4u;
    SET_GPR_U32(ctx, 31, 0x2272FCu);
    ctx->pc = 0x2272F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272F4u;
    // 0x2272f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x2272F4u, 0x2272FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272FCu;
label_2272fc:
    // 0x2272fc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_227300:
    if (ctx->pc == 0x227300u) {
        ctx->pc = 0x227300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272FCu;
        // 0x227300: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227304u;
        goto label_227304;
    }
    ctx->pc = 0x2272FCu;
    {
        const bool branch_taken_0x2272fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272FCu;
        // 0x227300: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272fc) {
            ctx->pc = 0x227370u;
            goto label_227370;
        }
    }
    ctx->pc = 0x227304u;
label_227304:
    // 0x227304: 0xc089ce2  jal         func_227388
label_227308:
    if (ctx->pc == 0x227308u) {
        ctx->pc = 0x227308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227304u;
        // 0x227308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22730Cu;
        goto label_22730c;
    }
    ctx->pc = 0x227304u;
    SET_GPR_U32(ctx, 31, 0x22730Cu);
    ctx->pc = 0x227308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227304u;
    // 0x227308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x227304u, 0x22730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22730Cu;
label_22730c:
    // 0x22730c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x22730cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_227310:
    // 0x227310: 0xc0e8b48  jal         func_3A2D20
label_227314:
    if (ctx->pc == 0x227314u) {
        ctx->pc = 0x227314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227310u;
        // 0x227314: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227318u;
        goto label_227318;
    }
    ctx->pc = 0x227310u;
    SET_GPR_U32(ctx, 31, 0x227318u);
    ctx->pc = 0x227314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227310u;
    // 0x227314: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x227310u, 0x227318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227318u;
label_227318:
    // 0x227318: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x227318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22731c:
    // 0x22731c: 0xc0e8b70  jal         func_3A2DC0
label_227320:
    if (ctx->pc == 0x227320u) {
        ctx->pc = 0x227320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22731Cu;
        // 0x227320: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227324u;
        goto label_227324;
    }
    ctx->pc = 0x22731Cu;
    SET_GPR_U32(ctx, 31, 0x227324u);
    ctx->pc = 0x227320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22731Cu;
    // 0x227320: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x22731Cu, 0x227324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227324u;
label_227324:
    // 0x227324: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x227324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_227328:
    // 0x227328: 0xc0e8b68  jal         func_3A2DA0
label_22732c:
    if (ctx->pc == 0x22732Cu) {
        ctx->pc = 0x22732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227328u;
        // 0x22732c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227330u;
        goto label_227330;
    }
    ctx->pc = 0x227328u;
    SET_GPR_U32(ctx, 31, 0x227330u);
    ctx->pc = 0x22732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227328u;
    // 0x22732c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x227328u, 0x227330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227330u;
label_227330:
    // 0x227330: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x227330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_227334:
    // 0x227334: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x227334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_227338:
    // 0x227338: 0xc0e8b98  jal         func_3A2E60
label_22733c:
    if (ctx->pc == 0x22733Cu) {
        ctx->pc = 0x22733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227338u;
        // 0x22733c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227340u;
        goto label_227340;
    }
    ctx->pc = 0x227338u;
    SET_GPR_U32(ctx, 31, 0x227340u);
    ctx->pc = 0x22733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227338u;
    // 0x22733c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E60u, 0x227338u, 0x227340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227340u;
label_227340:
    // 0x227340: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x227340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_227344:
    // 0x227344: 0xc0e8b50  jal         func_3A2D40
label_227348:
    if (ctx->pc == 0x227348u) {
        ctx->pc = 0x227348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227344u;
        // 0x227348: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22734Cu;
        goto label_22734c;
    }
    ctx->pc = 0x227344u;
    SET_GPR_U32(ctx, 31, 0x22734Cu);
    ctx->pc = 0x227348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227344u;
    // 0x227348: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x227344u, 0x22734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22734Cu;
label_22734c:
    // 0x22734c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_227350:
    if (ctx->pc == 0x227350u) {
        ctx->pc = 0x227350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22734Cu;
        // 0x227350: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227354u;
        goto label_227354;
    }
    ctx->pc = 0x22734Cu;
    {
        const bool branch_taken_0x22734c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x227350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22734Cu;
        // 0x227350: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22734c) {
            ctx->pc = 0x227370u;
            goto label_227370;
        }
    }
    ctx->pc = 0x227354u;
label_227354:
    // 0x227354: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x227354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_227358:
    // 0x227358: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x227358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22735c:
    // 0x22735c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_227360:
    // 0x227360: 0x40f809  jalr        $v0
label_227364:
    if (ctx->pc == 0x227364u) {
        ctx->pc = 0x227364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227360u;
        // 0x227364: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227368u;
        goto label_227368;
    }
    ctx->pc = 0x227360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227368u);
        ctx->pc = 0x227364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227360u;
        // 0x227364: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227360u, 0x227368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227368u;
label_227368:
    // 0x227368: 0xae420360  sw          $v0, 0x360($s2)
    ctx->pc = 0x227368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 864), GPR_U32(ctx, 2));
label_22736c:
    // 0x22736c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22736cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_227370:
    // 0x227370: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x227370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_227374:
    // 0x227374: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x227374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_227378:
    // 0x227378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22737c:
    // 0x22737c: 0x3e00008  jr          $ra
label_227380:
    if (ctx->pc == 0x227380u) {
        ctx->pc = 0x227380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22737Cu;
        // 0x227380: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227384u;
        goto label_227384;
    }
    ctx->pc = 0x22737Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22737Cu;
        // 0x227380: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22737Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227384u;
label_227384:
    // 0x227384: 0x0  nop
    ctx->pc = 0x227384u;
    // NOP
    ctx->pc = 0x227388u;
}

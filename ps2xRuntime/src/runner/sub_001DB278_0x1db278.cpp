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

// Function: sub_001DB278
// Address: 0x1db278 - 0x1db3c0
void sub_001DB278_0x1db278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB278_0x1db278");
#endif

    switch (ctx->pc) {
        case 0x1db278u: goto label_1db278;
        case 0x1db27cu: goto label_1db27c;
        case 0x1db280u: goto label_1db280;
        case 0x1db284u: goto label_1db284;
        case 0x1db288u: goto label_1db288;
        case 0x1db28cu: goto label_1db28c;
        case 0x1db290u: goto label_1db290;
        case 0x1db294u: goto label_1db294;
        case 0x1db298u: goto label_1db298;
        case 0x1db29cu: goto label_1db29c;
        case 0x1db2a0u: goto label_1db2a0;
        case 0x1db2a4u: goto label_1db2a4;
        case 0x1db2a8u: goto label_1db2a8;
        case 0x1db2acu: goto label_1db2ac;
        case 0x1db2b0u: goto label_1db2b0;
        case 0x1db2b4u: goto label_1db2b4;
        case 0x1db2b8u: goto label_1db2b8;
        case 0x1db2bcu: goto label_1db2bc;
        case 0x1db2c0u: goto label_1db2c0;
        case 0x1db2c4u: goto label_1db2c4;
        case 0x1db2c8u: goto label_1db2c8;
        case 0x1db2ccu: goto label_1db2cc;
        case 0x1db2d0u: goto label_1db2d0;
        case 0x1db2d4u: goto label_1db2d4;
        case 0x1db2d8u: goto label_1db2d8;
        case 0x1db2dcu: goto label_1db2dc;
        case 0x1db2e0u: goto label_1db2e0;
        case 0x1db2e4u: goto label_1db2e4;
        case 0x1db2e8u: goto label_1db2e8;
        case 0x1db2ecu: goto label_1db2ec;
        case 0x1db2f0u: goto label_1db2f0;
        case 0x1db2f4u: goto label_1db2f4;
        case 0x1db2f8u: goto label_1db2f8;
        case 0x1db2fcu: goto label_1db2fc;
        case 0x1db300u: goto label_1db300;
        case 0x1db304u: goto label_1db304;
        case 0x1db308u: goto label_1db308;
        case 0x1db30cu: goto label_1db30c;
        case 0x1db310u: goto label_1db310;
        case 0x1db314u: goto label_1db314;
        case 0x1db318u: goto label_1db318;
        case 0x1db31cu: goto label_1db31c;
        case 0x1db320u: goto label_1db320;
        case 0x1db324u: goto label_1db324;
        case 0x1db328u: goto label_1db328;
        case 0x1db32cu: goto label_1db32c;
        case 0x1db330u: goto label_1db330;
        case 0x1db334u: goto label_1db334;
        case 0x1db338u: goto label_1db338;
        case 0x1db33cu: goto label_1db33c;
        case 0x1db340u: goto label_1db340;
        case 0x1db344u: goto label_1db344;
        case 0x1db348u: goto label_1db348;
        case 0x1db34cu: goto label_1db34c;
        case 0x1db350u: goto label_1db350;
        case 0x1db354u: goto label_1db354;
        case 0x1db358u: goto label_1db358;
        case 0x1db35cu: goto label_1db35c;
        case 0x1db360u: goto label_1db360;
        case 0x1db364u: goto label_1db364;
        case 0x1db368u: goto label_1db368;
        case 0x1db36cu: goto label_1db36c;
        case 0x1db370u: goto label_1db370;
        case 0x1db374u: goto label_1db374;
        case 0x1db378u: goto label_1db378;
        case 0x1db37cu: goto label_1db37c;
        case 0x1db380u: goto label_1db380;
        case 0x1db384u: goto label_1db384;
        case 0x1db388u: goto label_1db388;
        case 0x1db38cu: goto label_1db38c;
        case 0x1db390u: goto label_1db390;
        case 0x1db394u: goto label_1db394;
        case 0x1db398u: goto label_1db398;
        case 0x1db39cu: goto label_1db39c;
        case 0x1db3a0u: goto label_1db3a0;
        case 0x1db3a4u: goto label_1db3a4;
        case 0x1db3a8u: goto label_1db3a8;
        case 0x1db3acu: goto label_1db3ac;
        case 0x1db3b0u: goto label_1db3b0;
        case 0x1db3b4u: goto label_1db3b4;
        case 0x1db3b8u: goto label_1db3b8;
        case 0x1db3bcu: goto label_1db3bc;
        default: break;
    }

    ctx->pc = 0x1db278u;

label_1db278:
    // 0x1db278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1db27c:
    // 0x1db27c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1db280:
    // 0x1db280: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1db280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1db284:
    // 0x1db284: 0x14a20034  bne         $a1, $v0, . + 4 + (0x34 << 2)
label_1db288:
    if (ctx->pc == 0x1DB288u) {
        ctx->pc = 0x1DB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB284u;
        // 0x1db288: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB28Cu;
        goto label_1db28c;
    }
    ctx->pc = 0x1DB284u;
    {
        const bool branch_taken_0x1db284 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB284u;
        // 0x1db288: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db284) {
            ctx->pc = 0x1DB358u;
            goto label_1db358;
        }
    }
    ctx->pc = 0x1DB28Cu;
label_1db28c:
    // 0x1db28c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1db28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1db290:
    // 0x1db290: 0xc107458  jal         func_41D160
label_1db294:
    if (ctx->pc == 0x1DB294u) {
        ctx->pc = 0x1DB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB290u;
        // 0x1db294: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB298u;
        goto label_1db298;
    }
    ctx->pc = 0x1DB290u;
    SET_GPR_U32(ctx, 31, 0x1DB298u);
    ctx->pc = 0x1DB294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB290u;
    // 0x1db294: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DB290u, 0x1DB298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB298u;
label_1db298:
    // 0x1db298: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1db29c:
    if (ctx->pc == 0x1DB29Cu) {
        ctx->pc = 0x1DB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB298u;
        // 0x1db29c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2A0u;
        goto label_1db2a0;
    }
    ctx->pc = 0x1DB298u;
    {
        const bool branch_taken_0x1db298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB298u;
        // 0x1db29c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db298) {
            ctx->pc = 0x1DB308u;
            goto label_1db308;
        }
    }
    ctx->pc = 0x1DB2A0u;
label_1db2a0:
    // 0x1db2a0: 0x8e05eddc  lw          $a1, -0x1224($s0)
    ctx->pc = 0x1db2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
label_1db2a4:
    // 0x1db2a4: 0x8ca21bb8  lw          $v0, 0x1BB8($a1)
    ctx->pc = 0x1db2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7096)));
label_1db2a8:
    // 0x1db2a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1db2ac:
    if (ctx->pc == 0x1DB2ACu) {
        ctx->pc = 0x1DB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2A8u;
        // 0x1db2ac: 0x8ca21b90  lw          $v0, 0x1B90($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2B0u;
        goto label_1db2b0;
    }
    ctx->pc = 0x1DB2A8u;
    {
        const bool branch_taken_0x1db2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db2a8) {
            ctx->pc = 0x1DB2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB2A8u;
            // 0x1db2ac: 0x8ca21b90  lw          $v0, 0x1B90($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7056)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB2C0u;
            goto label_1db2c0;
        }
    }
    ctx->pc = 0x1DB2B0u;
label_1db2b0:
    // 0x1db2b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1db2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1db2b4:
    // 0x1db2b4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1db2b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1db2b8:
    // 0x1db2b8: 0x10000023  b           . + 4 + (0x23 << 2)
label_1db2bc:
    if (ctx->pc == 0x1DB2BCu) {
        ctx->pc = 0x1DB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2B8u;
        // 0x1db2bc: 0x8c4300c4  lw          $v1, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2C0u;
        goto label_1db2c0;
    }
    ctx->pc = 0x1DB2B8u;
    {
        const bool branch_taken_0x1db2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2B8u;
        // 0x1db2bc: 0x8c4300c4  lw          $v1, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2b8) {
            ctx->pc = 0x1DB348u;
            goto label_1db348;
        }
    }
    ctx->pc = 0x1DB2C0u;
label_1db2c0:
    // 0x1db2c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1db2c4:
    if (ctx->pc == 0x1DB2C4u) {
        ctx->pc = 0x1DB2C8u;
        goto label_1db2c8;
    }
    ctx->pc = 0x1DB2C0u;
    {
        const bool branch_taken_0x1db2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db2c0) {
            ctx->pc = 0x1DB2D8u;
            goto label_1db2d8;
        }
    }
    ctx->pc = 0x1DB2C8u;
label_1db2c8:
    // 0x1db2c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1db2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1db2cc:
    // 0x1db2cc: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x1db2ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_1db2d0:
    // 0x1db2d0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1db2d4:
    if (ctx->pc == 0x1DB2D4u) {
        ctx->pc = 0x1DB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2D0u;
        // 0x1db2d4: 0x8c4300dc  lw          $v1, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2D8u;
        goto label_1db2d8;
    }
    ctx->pc = 0x1DB2D0u;
    {
        const bool branch_taken_0x1db2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2D0u;
        // 0x1db2d4: 0x8c4300dc  lw          $v1, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2d0) {
            ctx->pc = 0x1DB348u;
            goto label_1db348;
        }
    }
    ctx->pc = 0x1DB2D8u;
label_1db2d8:
    // 0x1db2d8: 0xc07f86a  jal         func_1FE1A8
label_1db2dc:
    if (ctx->pc == 0x1DB2DCu) {
        ctx->pc = 0x1DB2E0u;
        goto label_1db2e0;
    }
    ctx->pc = 0x1DB2D8u;
    SET_GPR_U32(ctx, 31, 0x1DB2E0u);
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x1DB2D8u, 0x1DB2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2E0u;
label_1db2e0:
    // 0x1db2e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1db2e4:
    if (ctx->pc == 0x1DB2E4u) {
        ctx->pc = 0x1DB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2E0u;
        // 0x1db2e4: 0x8e05eddc  lw          $a1, -0x1224($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2E8u;
        goto label_1db2e8;
    }
    ctx->pc = 0x1DB2E0u;
    {
        const bool branch_taken_0x1db2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2E0u;
        // 0x1db2e4: 0x8e05eddc  lw          $a1, -0x1224($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2e0) {
            ctx->pc = 0x1DB2F8u;
            goto label_1db2f8;
        }
    }
    ctx->pc = 0x1DB2E8u;
label_1db2e8:
    // 0x1db2e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1db2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1db2ec:
    // 0x1db2ec: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1db2ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_1db2f0:
    // 0x1db2f0: 0x10000015  b           . + 4 + (0x15 << 2)
label_1db2f4:
    if (ctx->pc == 0x1DB2F4u) {
        ctx->pc = 0x1DB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2F0u;
        // 0x1db2f4: 0x8c4300ec  lw          $v1, 0xEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2F8u;
        goto label_1db2f8;
    }
    ctx->pc = 0x1DB2F0u;
    {
        const bool branch_taken_0x1db2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2F0u;
        // 0x1db2f4: 0x8c4300ec  lw          $v1, 0xEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2f0) {
            ctx->pc = 0x1DB348u;
            goto label_1db348;
        }
    }
    ctx->pc = 0x1DB2F8u;
label_1db2f8:
    // 0x1db2f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1db2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1db2fc:
    // 0x1db2fc: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x1db2fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_1db300:
    // 0x1db300: 0x10000011  b           . + 4 + (0x11 << 2)
label_1db304:
    if (ctx->pc == 0x1DB304u) {
        ctx->pc = 0x1DB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB300u;
        // 0x1db304: 0x8c4300e4  lw          $v1, 0xE4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB308u;
        goto label_1db308;
    }
    ctx->pc = 0x1DB300u;
    {
        const bool branch_taken_0x1db300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB300u;
        // 0x1db304: 0x8c4300e4  lw          $v1, 0xE4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db300) {
            ctx->pc = 0x1DB348u;
            goto label_1db348;
        }
    }
    ctx->pc = 0x1DB308u;
label_1db308:
    // 0x1db308: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1db308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1db30c:
    // 0x1db30c: 0x8c45eddc  lw          $a1, -0x1224($v0)
    ctx->pc = 0x1db30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_1db310:
    // 0x1db310: 0x8ca31b8c  lw          $v1, 0x1B8C($a1)
    ctx->pc = 0x1db310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7052)));
label_1db314:
    // 0x1db314: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1db318:
    if (ctx->pc == 0x1DB318u) {
        ctx->pc = 0x1DB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB314u;
        // 0x1db318: 0x8ca21bb8  lw          $v0, 0x1BB8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB31Cu;
        goto label_1db31c;
    }
    ctx->pc = 0x1DB314u;
    {
        const bool branch_taken_0x1db314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db314) {
            ctx->pc = 0x1DB318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB314u;
            // 0x1db318: 0x8ca21bb8  lw          $v0, 0x1BB8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB32Cu;
            goto label_1db32c;
        }
    }
    ctx->pc = 0x1DB31Cu;
label_1db31c:
    // 0x1db31c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1db31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1db320:
    // 0x1db320: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1db320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1db324:
    // 0x1db324: 0x10000008  b           . + 4 + (0x8 << 2)
label_1db328:
    if (ctx->pc == 0x1DB328u) {
        ctx->pc = 0x1DB328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB324u;
        // 0x1db328: 0x8c4300d4  lw          $v1, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB32Cu;
        goto label_1db32c;
    }
    ctx->pc = 0x1DB324u;
    {
        const bool branch_taken_0x1db324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB324u;
        // 0x1db328: 0x8c4300d4  lw          $v1, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db324) {
            ctx->pc = 0x1DB348u;
            goto label_1db348;
        }
    }
    ctx->pc = 0x1DB32Cu;
label_1db32c:
    // 0x1db32c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1db330:
    if (ctx->pc == 0x1DB330u) {
        ctx->pc = 0x1DB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB32Cu;
        // 0x1db330: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB334u;
        goto label_1db334;
    }
    ctx->pc = 0x1DB32Cu;
    {
        const bool branch_taken_0x1db32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB32Cu;
        // 0x1db330: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db32c) {
            ctx->pc = 0x1DB340u;
            goto label_1db340;
        }
    }
    ctx->pc = 0x1DB334u;
label_1db334:
    // 0x1db334: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1db334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1db338:
    // 0x1db338: 0x10000003  b           . + 4 + (0x3 << 2)
label_1db33c:
    if (ctx->pc == 0x1DB33Cu) {
        ctx->pc = 0x1DB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB338u;
        // 0x1db33c: 0x8c4300c4  lw          $v1, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB340u;
        goto label_1db340;
    }
    ctx->pc = 0x1DB338u;
    {
        const bool branch_taken_0x1db338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB338u;
        // 0x1db33c: 0x8c4300c4  lw          $v1, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db338) {
            ctx->pc = 0x1DB348u;
            goto label_1db348;
        }
    }
    ctx->pc = 0x1DB340u;
label_1db340:
    // 0x1db340: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1db340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1db344:
    // 0x1db344: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1db344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1db348:
    // 0x1db348: 0x60f809  jalr        $v1
label_1db34c:
    if (ctx->pc == 0x1DB34Cu) {
        ctx->pc = 0x1DB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB348u;
        // 0x1db34c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB350u;
        goto label_1db350;
    }
    ctx->pc = 0x1DB348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB350u);
        ctx->pc = 0x1DB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB348u;
        // 0x1db34c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB348u, 0x1DB350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB350u;
label_1db350:
    // 0x1db350: 0x10000017  b           . + 4 + (0x17 << 2)
label_1db354:
    if (ctx->pc == 0x1DB354u) {
        ctx->pc = 0x1DB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB350u;
        // 0x1db354: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB358u;
        goto label_1db358;
    }
    ctx->pc = 0x1DB350u;
    {
        const bool branch_taken_0x1db350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB350u;
        // 0x1db354: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db350) {
            ctx->pc = 0x1DB3B0u;
            goto label_1db3b0;
        }
    }
    ctx->pc = 0x1DB358u;
label_1db358:
    // 0x1db358: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1db358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1db35c:
    // 0x1db35c: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
label_1db360:
    if (ctx->pc == 0x1DB360u) {
        ctx->pc = 0x1DB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB35Cu;
        // 0x1db360: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB364u;
        goto label_1db364;
    }
    ctx->pc = 0x1DB35Cu;
    {
        const bool branch_taken_0x1db35c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB35Cu;
        // 0x1db360: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db35c) {
            ctx->pc = 0x1DB388u;
            goto label_1db388;
        }
    }
    ctx->pc = 0x1DB364u;
label_1db364:
    // 0x1db364: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1db364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1db368:
    // 0x1db368: 0x8c45eddc  lw          $a1, -0x1224($v0)
    ctx->pc = 0x1db368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_1db36c:
    // 0x1db36c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1db36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1db370:
    // 0x1db370: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1db370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1db374:
    // 0x1db374: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1db374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1db378:
    // 0x1db378: 0x40f809  jalr        $v0
label_1db37c:
    if (ctx->pc == 0x1DB37Cu) {
        ctx->pc = 0x1DB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB378u;
        // 0x1db37c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB380u;
        goto label_1db380;
    }
    ctx->pc = 0x1DB378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB380u);
        ctx->pc = 0x1DB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB378u;
        // 0x1db37c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB378u, 0x1DB380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB380u;
label_1db380:
    // 0x1db380: 0x1000000b  b           . + 4 + (0xB << 2)
label_1db384:
    if (ctx->pc == 0x1DB384u) {
        ctx->pc = 0x1DB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB380u;
        // 0x1db384: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB388u;
        goto label_1db388;
    }
    ctx->pc = 0x1DB380u;
    {
        const bool branch_taken_0x1db380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB380u;
        // 0x1db384: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db380) {
            ctx->pc = 0x1DB3B0u;
            goto label_1db3b0;
        }
    }
    ctx->pc = 0x1DB388u;
label_1db388:
    // 0x1db388: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_1db38c:
    if (ctx->pc == 0x1DB38Cu) {
        ctx->pc = 0x1DB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB388u;
        // 0x1db38c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB390u;
        goto label_1db390;
    }
    ctx->pc = 0x1DB388u;
    {
        const bool branch_taken_0x1db388 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB388u;
        // 0x1db38c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db388) {
            ctx->pc = 0x1DB3B0u;
            goto label_1db3b0;
        }
    }
    ctx->pc = 0x1DB390u;
label_1db390:
    // 0x1db390: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1db390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1db394:
    // 0x1db394: 0x8c45eddc  lw          $a1, -0x1224($v0)
    ctx->pc = 0x1db394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_1db398:
    // 0x1db398: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1db398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1db39c:
    // 0x1db39c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1db39cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1db3a0:
    // 0x1db3a0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1db3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1db3a4:
    // 0x1db3a4: 0x40f809  jalr        $v0
label_1db3a8:
    if (ctx->pc == 0x1DB3A8u) {
        ctx->pc = 0x1DB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3A4u;
        // 0x1db3a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB3ACu;
        goto label_1db3ac;
    }
    ctx->pc = 0x1DB3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB3ACu);
        ctx->pc = 0x1DB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3A4u;
        // 0x1db3a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3A4u, 0x1DB3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB3ACu;
label_1db3ac:
    // 0x1db3ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1db3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db3b0:
    // 0x1db3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db3b4:
    // 0x1db3b4: 0x3e00008  jr          $ra
label_1db3b8:
    if (ctx->pc == 0x1DB3B8u) {
        ctx->pc = 0x1DB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3B4u;
        // 0x1db3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB3BCu;
        goto label_1db3bc;
    }
    ctx->pc = 0x1DB3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3B4u;
        // 0x1db3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB3BCu;
label_1db3bc:
    // 0x1db3bc: 0x0  nop
    ctx->pc = 0x1db3bcu;
    // NOP
    ctx->pc = 0x1db3c0u;
}

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

// Function: sub_001A3360
// Address: 0x1a3360 - 0x1a3458
void sub_001A3360_0x1a3360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3360_0x1a3360");
#endif

    switch (ctx->pc) {
        case 0x1a3360u: goto label_1a3360;
        case 0x1a3364u: goto label_1a3364;
        case 0x1a3368u: goto label_1a3368;
        case 0x1a336cu: goto label_1a336c;
        case 0x1a3370u: goto label_1a3370;
        case 0x1a3374u: goto label_1a3374;
        case 0x1a3378u: goto label_1a3378;
        case 0x1a337cu: goto label_1a337c;
        case 0x1a3380u: goto label_1a3380;
        case 0x1a3384u: goto label_1a3384;
        case 0x1a3388u: goto label_1a3388;
        case 0x1a338cu: goto label_1a338c;
        case 0x1a3390u: goto label_1a3390;
        case 0x1a3394u: goto label_1a3394;
        case 0x1a3398u: goto label_1a3398;
        case 0x1a339cu: goto label_1a339c;
        case 0x1a33a0u: goto label_1a33a0;
        case 0x1a33a4u: goto label_1a33a4;
        case 0x1a33a8u: goto label_1a33a8;
        case 0x1a33acu: goto label_1a33ac;
        case 0x1a33b0u: goto label_1a33b0;
        case 0x1a33b4u: goto label_1a33b4;
        case 0x1a33b8u: goto label_1a33b8;
        case 0x1a33bcu: goto label_1a33bc;
        case 0x1a33c0u: goto label_1a33c0;
        case 0x1a33c4u: goto label_1a33c4;
        case 0x1a33c8u: goto label_1a33c8;
        case 0x1a33ccu: goto label_1a33cc;
        case 0x1a33d0u: goto label_1a33d0;
        case 0x1a33d4u: goto label_1a33d4;
        case 0x1a33d8u: goto label_1a33d8;
        case 0x1a33dcu: goto label_1a33dc;
        case 0x1a33e0u: goto label_1a33e0;
        case 0x1a33e4u: goto label_1a33e4;
        case 0x1a33e8u: goto label_1a33e8;
        case 0x1a33ecu: goto label_1a33ec;
        case 0x1a33f0u: goto label_1a33f0;
        case 0x1a33f4u: goto label_1a33f4;
        case 0x1a33f8u: goto label_1a33f8;
        case 0x1a33fcu: goto label_1a33fc;
        case 0x1a3400u: goto label_1a3400;
        case 0x1a3404u: goto label_1a3404;
        case 0x1a3408u: goto label_1a3408;
        case 0x1a340cu: goto label_1a340c;
        case 0x1a3410u: goto label_1a3410;
        case 0x1a3414u: goto label_1a3414;
        case 0x1a3418u: goto label_1a3418;
        case 0x1a341cu: goto label_1a341c;
        case 0x1a3420u: goto label_1a3420;
        case 0x1a3424u: goto label_1a3424;
        case 0x1a3428u: goto label_1a3428;
        case 0x1a342cu: goto label_1a342c;
        case 0x1a3430u: goto label_1a3430;
        case 0x1a3434u: goto label_1a3434;
        case 0x1a3438u: goto label_1a3438;
        case 0x1a343cu: goto label_1a343c;
        case 0x1a3440u: goto label_1a3440;
        case 0x1a3444u: goto label_1a3444;
        case 0x1a3448u: goto label_1a3448;
        case 0x1a344cu: goto label_1a344c;
        case 0x1a3450u: goto label_1a3450;
        case 0x1a3454u: goto label_1a3454;
        default: break;
    }

    ctx->pc = 0x1a3360u;

label_1a3360:
    // 0x1a3360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3364:
    // 0x1a3364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a3368:
    // 0x1a3368: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a3368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a336c:
    // 0x1a336c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a336cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3370:
    // 0x1a3370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a3374:
    // 0x1a3374: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a3374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a3378:
    // 0x1a3378: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1a3378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1a337c:
    // 0x1a337c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1a337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1a3380:
    // 0x1a3380: 0x40f809  jalr        $v0
label_1a3384:
    if (ctx->pc == 0x1A3384u) {
        ctx->pc = 0x1A3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3380u;
        // 0x1a3384: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3388u;
        goto label_1a3388;
    }
    ctx->pc = 0x1A3380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3388u);
        ctx->pc = 0x1A3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3380u;
        // 0x1a3384: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3380u, 0x1A3388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3388u;
label_1a3388:
    // 0x1a3388: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1a338c:
    if (ctx->pc == 0x1A338Cu) {
        ctx->pc = 0x1A338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3388u;
        // 0x1a338c: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3390u;
        goto label_1a3390;
    }
    ctx->pc = 0x1A3388u;
    {
        const bool branch_taken_0x1a3388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3388u;
        // 0x1a338c: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3388) {
            ctx->pc = 0x1A3444u;
            goto label_1a3444;
        }
    }
    ctx->pc = 0x1A3390u;
label_1a3390:
    // 0x1a3390: 0xc068998  jal         func_1A2660
label_1a3394:
    if (ctx->pc == 0x1A3394u) {
        ctx->pc = 0x1A3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3390u;
        // 0x1a3394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3398u;
        goto label_1a3398;
    }
    ctx->pc = 0x1A3390u;
    SET_GPR_U32(ctx, 31, 0x1A3398u);
    ctx->pc = 0x1A3394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3390u;
    // 0x1a3394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1A3390u, 0x1A3398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3398u;
label_1a3398:
    // 0x1a3398: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a3398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a339c:
    // 0x1a339c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a339cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a33a0:
    // 0x1a33a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a33a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a33a4:
    // 0x1a33a4: 0xc06844e  jal         func_1A1138
label_1a33a8:
    if (ctx->pc == 0x1A33A8u) {
        ctx->pc = 0x1A33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33A4u;
        // 0x1a33a8: 0x26240150  addiu       $a0, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33ACu;
        goto label_1a33ac;
    }
    ctx->pc = 0x1A33A4u;
    SET_GPR_U32(ctx, 31, 0x1A33ACu);
    ctx->pc = 0x1A33A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33A4u;
    // 0x1a33a8: 0x26240150  addiu       $a0, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x1A33A4u, 0x1A33ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33ACu;
label_1a33ac:
    // 0x1a33ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a33acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a33b0:
    // 0x1a33b0: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1a33b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1a33b4:
    // 0x1a33b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a33b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a33b8:
    // 0x1a33b8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a33b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a33bc:
    // 0x1a33bc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a33c0:
    // 0x1a33c0: 0x40f809  jalr        $v0
label_1a33c4:
    if (ctx->pc == 0x1A33C4u) {
        ctx->pc = 0x1A33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33C0u;
        // 0x1a33c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33C8u;
        goto label_1a33c8;
    }
    ctx->pc = 0x1A33C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A33C8u);
        ctx->pc = 0x1A33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33C0u;
        // 0x1a33c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A33C0u, 0x1A33C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A33C8u;
label_1a33c8:
    // 0x1a33c8: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1a33c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1a33cc:
    // 0x1a33cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a33ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a33d0:
    // 0x1a33d0: 0x2463d050  addiu       $v1, $v1, -0x2FB0
    ctx->pc = 0x1a33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955088));
label_1a33d4:
    // 0x1a33d4: 0x24060171  addiu       $a2, $zero, 0x171
    ctx->pc = 0x1a33d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
label_1a33d8:
    // 0x1a33d8: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1a33d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_1a33dc:
    // 0x1a33dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a33dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a33e0:
    // 0x1a33e0: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x1a33e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_1a33e4:
    // 0x1a33e4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1a33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1a33e8:
    // 0x1a33e8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a33e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a33ec:
    // 0x1a33ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1a33f0:
    if (ctx->pc == 0x1A33F0u) {
        ctx->pc = 0x1A33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33ECu;
        // 0x1a33f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33F4u;
        goto label_1a33f4;
    }
    ctx->pc = 0x1A33ECu;
    {
        const bool branch_taken_0x1a33ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a33ec) {
            ctx->pc = 0x1A33F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A33ECu;
            // 0x1a33f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A33F4u;
            goto label_1a33f4;
        }
    }
    ctx->pc = 0x1A33F4u;
label_1a33f4:
    // 0x1a33f4: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1a33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1a33f8:
    // 0x1a33f8: 0x2010  mfhi        $a0
    ctx->pc = 0x1a33f8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1a33fc:
    // 0x1a33fc: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1a33fcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1a3400:
    // 0x1a3400: 0x2012  mflo        $a0
    ctx->pc = 0x1a3400u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1a3404:
    // 0x1a3404: 0x1446000b  bne         $v0, $a2, . + 4 + (0xB << 2)
label_1a3408:
    if (ctx->pc == 0x1A3408u) {
        ctx->pc = 0x1A340Cu;
        goto label_1a340c;
    }
    ctx->pc = 0x1A3404u;
    {
        const bool branch_taken_0x1a3404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a3404) {
            ctx->pc = 0x1A3434u;
            goto label_1a3434;
        }
    }
    ctx->pc = 0x1A340Cu;
label_1a340c:
    // 0x1a340c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a3410:
    if (ctx->pc == 0x1A3410u) {
        ctx->pc = 0x1A3414u;
        goto label_1a3414;
    }
    ctx->pc = 0x1A340Cu;
    {
        const bool branch_taken_0x1a340c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a340c) {
            ctx->pc = 0x1A3424u;
            goto label_1a3424;
        }
    }
    ctx->pc = 0x1A3414u;
label_1a3414:
    // 0x1a3414: 0xc0734a2  jal         func_1CD288
label_1a3418:
    if (ctx->pc == 0x1A3418u) {
        ctx->pc = 0x1A3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3414u;
        // 0x1a3418: 0x26240290  addiu       $a0, $s1, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A341Cu;
        goto label_1a341c;
    }
    ctx->pc = 0x1A3414u;
    SET_GPR_U32(ctx, 31, 0x1A341Cu);
    ctx->pc = 0x1A3418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3414u;
    // 0x1a3418: 0x26240290  addiu       $a0, $s1, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1A3414u, 0x1A341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A341Cu;
label_1a341c:
    // 0x1a341c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a3420:
    if (ctx->pc == 0x1A3420u) {
        ctx->pc = 0x1A3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A341Cu;
        // 0x1a3420: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3424u;
        goto label_1a3424;
    }
    ctx->pc = 0x1A341Cu;
    {
        const bool branch_taken_0x1a341c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A341Cu;
        // 0x1a3420: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a341c) {
            ctx->pc = 0x1A3448u;
            goto label_1a3448;
        }
    }
    ctx->pc = 0x1A3424u;
label_1a3424:
    // 0x1a3424: 0xc0734a2  jal         func_1CD288
label_1a3428:
    if (ctx->pc == 0x1A3428u) {
        ctx->pc = 0x1A3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3424u;
        // 0x1a3428: 0x26240360  addiu       $a0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A342Cu;
        goto label_1a342c;
    }
    ctx->pc = 0x1A3424u;
    SET_GPR_U32(ctx, 31, 0x1A342Cu);
    ctx->pc = 0x1A3428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3424u;
    // 0x1a3428: 0x26240360  addiu       $a0, $s1, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1A3424u, 0x1A342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A342Cu;
label_1a342c:
    // 0x1a342c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a3430:
    if (ctx->pc == 0x1A3430u) {
        ctx->pc = 0x1A3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A342Cu;
        // 0x1a3430: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3434u;
        goto label_1a3434;
    }
    ctx->pc = 0x1A342Cu;
    {
        const bool branch_taken_0x1a342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A342Cu;
        // 0x1a3430: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a342c) {
            ctx->pc = 0x1A3448u;
            goto label_1a3448;
        }
    }
    ctx->pc = 0x1A3434u;
label_1a3434:
    // 0x1a3434: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1a3438:
    if (ctx->pc == 0x1A3438u) {
        ctx->pc = 0x1A3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3434u;
        // 0x1a3438: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A343Cu;
        goto label_1a343c;
    }
    ctx->pc = 0x1A3434u;
    {
        const bool branch_taken_0x1a3434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3434u;
        // 0x1a3438: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3434) {
            ctx->pc = 0x1A3448u;
            goto label_1a3448;
        }
    }
    ctx->pc = 0x1A343Cu;
label_1a343c:
    // 0x1a343c: 0xc0734a2  jal         func_1CD288
label_1a3440:
    if (ctx->pc == 0x1A3440u) {
        ctx->pc = 0x1A3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A343Cu;
        // 0x1a3440: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3444u;
        goto label_1a3444;
    }
    ctx->pc = 0x1A343Cu;
    SET_GPR_U32(ctx, 31, 0x1A3444u);
    ctx->pc = 0x1A3440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A343Cu;
    // 0x1a3440: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1A343Cu, 0x1A3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3444u;
label_1a3444:
    // 0x1a3444: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a3444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3448:
    // 0x1a3448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a344c:
    // 0x1a344c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3450:
    // 0x1a3450: 0x3e00008  jr          $ra
label_1a3454:
    if (ctx->pc == 0x1A3454u) {
        ctx->pc = 0x1A3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3450u;
        // 0x1a3454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3458u;
        goto label_fallthrough_0x1a3450;
    }
    ctx->pc = 0x1A3450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3450u;
        // 0x1a3454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3450:
    ctx->pc = 0x1A3458u;
}

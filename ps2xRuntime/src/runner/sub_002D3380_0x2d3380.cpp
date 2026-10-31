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

// Function: sub_002D3380
// Address: 0x2d3380 - 0x2d3560
void sub_002D3380_0x2d3380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3380_0x2d3380");
#endif

    switch (ctx->pc) {
        case 0x2d3380u: goto label_2d3380;
        case 0x2d3384u: goto label_2d3384;
        case 0x2d3388u: goto label_2d3388;
        case 0x2d338cu: goto label_2d338c;
        case 0x2d3390u: goto label_2d3390;
        case 0x2d3394u: goto label_2d3394;
        case 0x2d3398u: goto label_2d3398;
        case 0x2d339cu: goto label_2d339c;
        case 0x2d33a0u: goto label_2d33a0;
        case 0x2d33a4u: goto label_2d33a4;
        case 0x2d33a8u: goto label_2d33a8;
        case 0x2d33acu: goto label_2d33ac;
        case 0x2d33b0u: goto label_2d33b0;
        case 0x2d33b4u: goto label_2d33b4;
        case 0x2d33b8u: goto label_2d33b8;
        case 0x2d33bcu: goto label_2d33bc;
        case 0x2d33c0u: goto label_2d33c0;
        case 0x2d33c4u: goto label_2d33c4;
        case 0x2d33c8u: goto label_2d33c8;
        case 0x2d33ccu: goto label_2d33cc;
        case 0x2d33d0u: goto label_2d33d0;
        case 0x2d33d4u: goto label_2d33d4;
        case 0x2d33d8u: goto label_2d33d8;
        case 0x2d33dcu: goto label_2d33dc;
        case 0x2d33e0u: goto label_2d33e0;
        case 0x2d33e4u: goto label_2d33e4;
        case 0x2d33e8u: goto label_2d33e8;
        case 0x2d33ecu: goto label_2d33ec;
        case 0x2d33f0u: goto label_2d33f0;
        case 0x2d33f4u: goto label_2d33f4;
        case 0x2d33f8u: goto label_2d33f8;
        case 0x2d33fcu: goto label_2d33fc;
        case 0x2d3400u: goto label_2d3400;
        case 0x2d3404u: goto label_2d3404;
        case 0x2d3408u: goto label_2d3408;
        case 0x2d340cu: goto label_2d340c;
        case 0x2d3410u: goto label_2d3410;
        case 0x2d3414u: goto label_2d3414;
        case 0x2d3418u: goto label_2d3418;
        case 0x2d341cu: goto label_2d341c;
        case 0x2d3420u: goto label_2d3420;
        case 0x2d3424u: goto label_2d3424;
        case 0x2d3428u: goto label_2d3428;
        case 0x2d342cu: goto label_2d342c;
        case 0x2d3430u: goto label_2d3430;
        case 0x2d3434u: goto label_2d3434;
        case 0x2d3438u: goto label_2d3438;
        case 0x2d343cu: goto label_2d343c;
        case 0x2d3440u: goto label_2d3440;
        case 0x2d3444u: goto label_2d3444;
        case 0x2d3448u: goto label_2d3448;
        case 0x2d344cu: goto label_2d344c;
        case 0x2d3450u: goto label_2d3450;
        case 0x2d3454u: goto label_2d3454;
        case 0x2d3458u: goto label_2d3458;
        case 0x2d345cu: goto label_2d345c;
        case 0x2d3460u: goto label_2d3460;
        case 0x2d3464u: goto label_2d3464;
        case 0x2d3468u: goto label_2d3468;
        case 0x2d346cu: goto label_2d346c;
        case 0x2d3470u: goto label_2d3470;
        case 0x2d3474u: goto label_2d3474;
        case 0x2d3478u: goto label_2d3478;
        case 0x2d347cu: goto label_2d347c;
        case 0x2d3480u: goto label_2d3480;
        case 0x2d3484u: goto label_2d3484;
        case 0x2d3488u: goto label_2d3488;
        case 0x2d348cu: goto label_2d348c;
        case 0x2d3490u: goto label_2d3490;
        case 0x2d3494u: goto label_2d3494;
        case 0x2d3498u: goto label_2d3498;
        case 0x2d349cu: goto label_2d349c;
        case 0x2d34a0u: goto label_2d34a0;
        case 0x2d34a4u: goto label_2d34a4;
        case 0x2d34a8u: goto label_2d34a8;
        case 0x2d34acu: goto label_2d34ac;
        case 0x2d34b0u: goto label_2d34b0;
        case 0x2d34b4u: goto label_2d34b4;
        case 0x2d34b8u: goto label_2d34b8;
        case 0x2d34bcu: goto label_2d34bc;
        case 0x2d34c0u: goto label_2d34c0;
        case 0x2d34c4u: goto label_2d34c4;
        case 0x2d34c8u: goto label_2d34c8;
        case 0x2d34ccu: goto label_2d34cc;
        case 0x2d34d0u: goto label_2d34d0;
        case 0x2d34d4u: goto label_2d34d4;
        case 0x2d34d8u: goto label_2d34d8;
        case 0x2d34dcu: goto label_2d34dc;
        case 0x2d34e0u: goto label_2d34e0;
        case 0x2d34e4u: goto label_2d34e4;
        case 0x2d34e8u: goto label_2d34e8;
        case 0x2d34ecu: goto label_2d34ec;
        case 0x2d34f0u: goto label_2d34f0;
        case 0x2d34f4u: goto label_2d34f4;
        case 0x2d34f8u: goto label_2d34f8;
        case 0x2d34fcu: goto label_2d34fc;
        case 0x2d3500u: goto label_2d3500;
        case 0x2d3504u: goto label_2d3504;
        case 0x2d3508u: goto label_2d3508;
        case 0x2d350cu: goto label_2d350c;
        case 0x2d3510u: goto label_2d3510;
        case 0x2d3514u: goto label_2d3514;
        case 0x2d3518u: goto label_2d3518;
        case 0x2d351cu: goto label_2d351c;
        case 0x2d3520u: goto label_2d3520;
        case 0x2d3524u: goto label_2d3524;
        case 0x2d3528u: goto label_2d3528;
        case 0x2d352cu: goto label_2d352c;
        case 0x2d3530u: goto label_2d3530;
        case 0x2d3534u: goto label_2d3534;
        case 0x2d3538u: goto label_2d3538;
        case 0x2d353cu: goto label_2d353c;
        case 0x2d3540u: goto label_2d3540;
        case 0x2d3544u: goto label_2d3544;
        case 0x2d3548u: goto label_2d3548;
        case 0x2d354cu: goto label_2d354c;
        case 0x2d3550u: goto label_2d3550;
        case 0x2d3554u: goto label_2d3554;
        case 0x2d3558u: goto label_2d3558;
        case 0x2d355cu: goto label_2d355c;
        default: break;
    }

    ctx->pc = 0x2d3380u;

label_2d3380:
    // 0x2d3380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d3380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2d3384:
    // 0x2d3384: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d3384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2d3388:
    // 0x2d3388: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d3388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2d338c:
    // 0x2d338c: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2d338cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2d3390:
    // 0x2d3390: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d3390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2d3394:
    // 0x2d3394: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d3394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2d3398:
    // 0x2d3398: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d3398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d339c:
    // 0x2d339c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d33a0:
    // 0x2d33a0: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x2d33a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_2d33a4:
    // 0x2d33a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d33a8:
    // 0x2d33a8: 0xc0e40a2  jal         func_390288
label_2d33ac:
    if (ctx->pc == 0x2D33ACu) {
        ctx->pc = 0x2D33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33A8u;
        // 0x2d33ac: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D33B0u;
        goto label_2d33b0;
    }
    ctx->pc = 0x2D33A8u;
    SET_GPR_U32(ctx, 31, 0x2D33B0u);
    ctx->pc = 0x2D33ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D33A8u;
    // 0x2d33ac: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2D33A8u, 0x2D33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D33B0u;
label_2d33b0:
    // 0x2d33b0: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2d33b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2d33b4:
    // 0x2d33b4: 0x26034b00  addiu       $v1, $s0, 0x4B00
    ctx->pc = 0x2d33b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2d33b8:
    // 0x2d33b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2d33b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d33bc:
    // 0x2d33bc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2d33bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2d33c0:
    // 0x2d33c0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d33c4:
    // 0x2d33c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d33c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d33c8:
    // 0x2d33c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d33c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2d33cc:
    // 0x2d33cc: 0xc105df6  jal         func_4177D8
label_2d33d0:
    if (ctx->pc == 0x2D33D0u) {
        ctx->pc = 0x2D33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33CCu;
        // 0x2d33d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D33D4u;
        goto label_2d33d4;
    }
    ctx->pc = 0x2D33CCu;
    SET_GPR_U32(ctx, 31, 0x2D33D4u);
    ctx->pc = 0x2D33D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D33CCu;
    // 0x2d33d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2D33CCu, 0x2D33D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D33D4u;
label_2d33d4:
    // 0x2d33d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d33d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d33d8:
    // 0x2d33d8: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
label_2d33dc:
    if (ctx->pc == 0x2D33DCu) {
        ctx->pc = 0x2D33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33D8u;
        // 0x2d33dc: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D33E0u;
        goto label_2d33e0;
    }
    ctx->pc = 0x2D33D8u;
    {
        const bool branch_taken_0x2d33d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d33d8) {
            ctx->pc = 0x2D33DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D33D8u;
            // 0x2d33dc: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D341Cu;
            goto label_2d341c;
        }
    }
    ctx->pc = 0x2D33E0u;
label_2d33e0:
    // 0x2d33e0: 0x92420032  lbu         $v0, 0x32($s2)
    ctx->pc = 0x2d33e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
label_2d33e4:
    // 0x2d33e4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2d33e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2d33e8:
    // 0x2d33e8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2d33ec:
    if (ctx->pc == 0x2D33ECu) {
        ctx->pc = 0x2D33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33E8u;
        // 0x2d33ec: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D33F0u;
        goto label_2d33f0;
    }
    ctx->pc = 0x2D33E8u;
    {
        const bool branch_taken_0x2d33e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d33e8) {
            ctx->pc = 0x2D33ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D33E8u;
            // 0x2d33ec: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D341Cu;
            goto label_2d341c;
        }
    }
    ctx->pc = 0x2D33F0u;
label_2d33f0:
    // 0x2d33f0: 0xc10587a  jal         func_4161E8
label_2d33f4:
    if (ctx->pc == 0x2D33F4u) {
        ctx->pc = 0x2D33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33F0u;
        // 0x2d33f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D33F8u;
        goto label_2d33f8;
    }
    ctx->pc = 0x2D33F0u;
    SET_GPR_U32(ctx, 31, 0x2D33F8u);
    ctx->pc = 0x2D33F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D33F0u;
    // 0x2d33f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D33F0u, 0x2D33F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D33F8u;
label_2d33f8:
    // 0x2d33f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d33f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d33fc:
    // 0x2d33fc: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x2d33fcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_2d3400:
    // 0x2d3400: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d3400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d3404:
    // 0x2d3404: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x2d3404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_2d3408:
    // 0x2d3408: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2d3408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2d340c:
    // 0x2d340c: 0x40f809  jalr        $v0
label_2d3410:
    if (ctx->pc == 0x2D3410u) {
        ctx->pc = 0x2D3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D340Cu;
        // 0x2d3410: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3414u;
        goto label_2d3414;
    }
    ctx->pc = 0x2D340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D3414u);
        ctx->pc = 0x2D3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D340Cu;
        // 0x2d3410: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D340Cu, 0x2D3414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D3414u;
label_2d3414:
    // 0x2d3414: 0x10000043  b           . + 4 + (0x43 << 2)
label_2d3418:
    if (ctx->pc == 0x2D3418u) {
        ctx->pc = 0x2D3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3414u;
        // 0x2d3418: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D341Cu;
        goto label_2d341c;
    }
    ctx->pc = 0x2D3414u;
    {
        const bool branch_taken_0x2d3414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3414u;
        // 0x2d3418: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3414) {
            ctx->pc = 0x2D3524u;
            goto label_2d3524;
        }
    }
    ctx->pc = 0x2D341Cu;
label_2d341c:
    // 0x2d341c: 0x26044b00  addiu       $a0, $s0, 0x4B00
    ctx->pc = 0x2d341cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2d3420:
    // 0x2d3420: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2d3420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2d3424:
    // 0x2d3424: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d3424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2d3428:
    // 0x2d3428: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d3428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d342c:
    // 0x2d342c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d342cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d3430:
    // 0x2d3430: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2d3430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2d3434:
    // 0x2d3434: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x2d3434u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_2d3438:
    // 0x2d3438: 0x8ca3bd30  lw          $v1, -0x42D0($a1)
    ctx->pc = 0x2d3438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950192)));
label_2d343c:
    // 0x2d343c: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x2d343cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_2d3440:
    // 0x2d3440: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2d3440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d3444:
    // 0x2d3444: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x2d3444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_2d3448:
    // 0x2d3448: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2d3448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2d344c:
    // 0x2d344c: 0x40f809  jalr        $v0
label_2d3450:
    if (ctx->pc == 0x2D3450u) {
        ctx->pc = 0x2D3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D344Cu;
        // 0x2d3450: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3454u;
        goto label_2d3454;
    }
    ctx->pc = 0x2D344Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D3454u);
        ctx->pc = 0x2D3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D344Cu;
        // 0x2d3450: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D344Cu, 0x2D3454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D3454u;
label_2d3454:
    // 0x2d3454: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d3454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d3458:
    // 0x2d3458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d3458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d345c:
    // 0x2d345c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2d345cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2d3460:
    // 0x2d3460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3464:
    // 0x2d3464: 0xc46c0140  lwc1        $f12, 0x140($v1)
    ctx->pc = 0x2d3464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d3468:
    // 0x2d3468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d3468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d346c:
    // 0x2d346c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2d346cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2d3470:
    // 0x2d3470: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d3470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2d3474:
    // 0x2d3474: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2d3474u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_2d3478:
    // 0x2d3478: 0xc0b8c24  jal         func_2E3090
label_2d347c:
    if (ctx->pc == 0x2D347Cu) {
        ctx->pc = 0x2D347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3478u;
        // 0x2d347c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3480u;
        goto label_2d3480;
    }
    ctx->pc = 0x2D3478u;
    SET_GPR_U32(ctx, 31, 0x2D3480u);
    ctx->pc = 0x2D347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3478u;
    // 0x2d347c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3090u, 0x2D3478u, 0x2D3480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3480u;
label_2d3480:
    // 0x2d3480: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d3480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d3484:
    // 0x2d3484: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2d3484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2d3488:
    // 0x2d3488: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2d348c:
    if (ctx->pc == 0x2D348Cu) {
        ctx->pc = 0x2D348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3488u;
        // 0x2d348c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3490u;
        goto label_2d3490;
    }
    ctx->pc = 0x2D3488u;
    {
        const bool branch_taken_0x2d3488 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3488u;
        // 0x2d348c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3488) {
            ctx->pc = 0x2D349Cu;
            goto label_2d349c;
        }
    }
    ctx->pc = 0x2D3490u;
label_2d3490:
    // 0x2d3490: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d3490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d3494:
    // 0x2d3494: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d3498:
    if (ctx->pc == 0x2D3498u) {
        ctx->pc = 0x2D3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3494u;
        // 0x2d3498: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D349Cu;
        goto label_2d349c;
    }
    ctx->pc = 0x2D3494u;
    {
        const bool branch_taken_0x2d3494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3494u;
        // 0x2d3498: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3494) {
            ctx->pc = 0x2D34A0u;
            goto label_2d34a0;
        }
    }
    ctx->pc = 0x2D349Cu;
label_2d349c:
    // 0x2d349c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d349cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d34a0:
    // 0x2d34a0: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_2d34a4:
    if (ctx->pc == 0x2D34A4u) {
        ctx->pc = 0x2D34A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34A0u;
        // 0x2d34a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D34A8u;
        goto label_2d34a8;
    }
    ctx->pc = 0x2D34A0u;
    {
        const bool branch_taken_0x2d34a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D34A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34A0u;
        // 0x2d34a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34a0) {
            ctx->pc = 0x2D3540u;
            goto label_2d3540;
        }
    }
    ctx->pc = 0x2D34A8u;
label_2d34a8:
    // 0x2d34a8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d34ac:
    // 0x2d34ac: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2d34acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2d34b0:
    // 0x2d34b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d34b4:
    // 0x2d34b4: 0x40f809  jalr        $v0
label_2d34b8:
    if (ctx->pc == 0x2D34B8u) {
        ctx->pc = 0x2D34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34B4u;
        // 0x2d34b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D34BCu;
        goto label_2d34bc;
    }
    ctx->pc = 0x2D34B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D34BCu);
        ctx->pc = 0x2D34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34B4u;
        // 0x2d34b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D34B4u, 0x2D34BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D34BCu;
label_2d34bc:
    // 0x2d34bc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2d34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d34c0:
    // 0x2d34c0: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
label_2d34c4:
    if (ctx->pc == 0x2D34C4u) {
        ctx->pc = 0x2D34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34C0u;
        // 0x2d34c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D34C8u;
        goto label_2d34c8;
    }
    ctx->pc = 0x2D34C0u;
    {
        const bool branch_taken_0x2d34c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34C0u;
        // 0x2d34c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34c0) {
            ctx->pc = 0x2D3540u;
            goto label_2d3540;
        }
    }
    ctx->pc = 0x2D34C8u;
label_2d34c8:
    // 0x2d34c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d34c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d34cc:
    // 0x2d34cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d34ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d34d0:
    // 0x2d34d0: 0xc0b8d62  jal         func_2E3588
label_2d34d4:
    if (ctx->pc == 0x2D34D4u) {
        ctx->pc = 0x2D34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34D0u;
        // 0x2d34d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D34D8u;
        goto label_2d34d8;
    }
    ctx->pc = 0x2D34D0u;
    SET_GPR_U32(ctx, 31, 0x2D34D8u);
    ctx->pc = 0x2D34D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D34D0u;
    // 0x2d34d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3588u, 0x2D34D0u, 0x2D34D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D34D8u;
label_2d34d8:
    // 0x2d34d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d34dc:
    // 0x2d34dc: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_2d34e0:
    if (ctx->pc == 0x2D34E0u) {
        ctx->pc = 0x2D34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34DCu;
        // 0x2d34e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D34E4u;
        goto label_2d34e4;
    }
    ctx->pc = 0x2D34DCu;
    {
        const bool branch_taken_0x2d34dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34DCu;
        // 0x2d34e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34dc) {
            ctx->pc = 0x2D3540u;
            goto label_2d3540;
        }
    }
    ctx->pc = 0x2D34E4u;
label_2d34e4:
    // 0x2d34e4: 0xc0a367c  jal         func_28D9F0
label_2d34e8:
    if (ctx->pc == 0x2D34E8u) {
        ctx->pc = 0x2D34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34E4u;
        // 0x2d34e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D34ECu;
        goto label_2d34ec;
    }
    ctx->pc = 0x2D34E4u;
    SET_GPR_U32(ctx, 31, 0x2D34ECu);
    ctx->pc = 0x2D34E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D34E4u;
    // 0x2d34e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D34E4u, 0x2D34ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D34ECu;
label_2d34ec:
    // 0x2d34ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2d34f0:
    if (ctx->pc == 0x2D34F0u) {
        ctx->pc = 0x2D34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34ECu;
        // 0x2d34f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D34F4u;
        goto label_2d34f4;
    }
    ctx->pc = 0x2D34ECu;
    {
        const bool branch_taken_0x2d34ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34ECu;
        // 0x2d34f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34ec) {
            ctx->pc = 0x2D351Cu;
            goto label_2d351c;
        }
    }
    ctx->pc = 0x2D34F4u;
label_2d34f4:
    // 0x2d34f4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d34f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d34f8:
    // 0x2d34f8: 0x8e2abd30  lw          $t2, -0x42D0($s1)
    ctx->pc = 0x2d34f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
label_2d34fc:
    // 0x2d34fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d34fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d3500:
    // 0x2d3500: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2d3500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2d3504:
    // 0x2d3504: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d3504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d3508:
    // 0x2d3508: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d3508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d350c:
    // 0x2d350c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d350cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d3510:
    // 0x2d3510: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d3510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3514:
    // 0x2d3514: 0xc0bee7a  jal         func_2FB9E8
label_2d3518:
    if (ctx->pc == 0x2D3518u) {
        ctx->pc = 0x2D3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3514u;
        // 0x2d3518: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D351Cu;
        goto label_2d351c;
    }
    ctx->pc = 0x2D3514u;
    SET_GPR_U32(ctx, 31, 0x2D351Cu);
    ctx->pc = 0x2D3518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3514u;
    // 0x2d3518: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D3514u, 0x2D351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D351Cu;
label_2d351c:
    // 0x2d351c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2d3520:
    if (ctx->pc == 0x2D3520u) {
        ctx->pc = 0x2D3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D351Cu;
        // 0x2d3520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3524u;
        goto label_2d3524;
    }
    ctx->pc = 0x2D351Cu;
    {
        const bool branch_taken_0x2d351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D351Cu;
        // 0x2d3520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d351c) {
            ctx->pc = 0x2D3540u;
            goto label_2d3540;
        }
    }
    ctx->pc = 0x2D3524u;
label_2d3524:
    // 0x2d3524: 0x92430032  lbu         $v1, 0x32($s2)
    ctx->pc = 0x2d3524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
label_2d3528:
    // 0x2d3528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d352c:
    // 0x2d352c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2d352cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2d3530:
    // 0x2d3530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d3530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d3534:
    // 0x2d3534: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d3534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d3538:
    // 0x2d3538: 0xa2430032  sb          $v1, 0x32($s2)
    ctx->pc = 0x2d3538u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 3));
label_2d353c:
    // 0x2d353c: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x2d353cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
label_2d3540:
    // 0x2d3540: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d3540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d3544:
    // 0x2d3544: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d3544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d3548:
    // 0x2d3548: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d3548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d354c:
    // 0x2d354c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d354cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d3550:
    // 0x2d3550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d3550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d3554:
    // 0x2d3554: 0x3e00008  jr          $ra
label_2d3558:
    if (ctx->pc == 0x2D3558u) {
        ctx->pc = 0x2D3558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3554u;
        // 0x2d3558: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D355Cu;
        goto label_2d355c;
    }
    ctx->pc = 0x2D3554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3554u;
        // 0x2d3558: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D355Cu;
label_2d355c:
    // 0x2d355c: 0x0  nop
    ctx->pc = 0x2d355cu;
    // NOP
    ctx->pc = 0x2d3560u;
}

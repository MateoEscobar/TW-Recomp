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

// Function: sub_002F33E8
// Address: 0x2f33e8 - 0x2f3570
void sub_002F33E8_0x2f33e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F33E8_0x2f33e8");
#endif

    switch (ctx->pc) {
        case 0x2f33e8u: goto label_2f33e8;
        case 0x2f33ecu: goto label_2f33ec;
        case 0x2f33f0u: goto label_2f33f0;
        case 0x2f33f4u: goto label_2f33f4;
        case 0x2f33f8u: goto label_2f33f8;
        case 0x2f33fcu: goto label_2f33fc;
        case 0x2f3400u: goto label_2f3400;
        case 0x2f3404u: goto label_2f3404;
        case 0x2f3408u: goto label_2f3408;
        case 0x2f340cu: goto label_2f340c;
        case 0x2f3410u: goto label_2f3410;
        case 0x2f3414u: goto label_2f3414;
        case 0x2f3418u: goto label_2f3418;
        case 0x2f341cu: goto label_2f341c;
        case 0x2f3420u: goto label_2f3420;
        case 0x2f3424u: goto label_2f3424;
        case 0x2f3428u: goto label_2f3428;
        case 0x2f342cu: goto label_2f342c;
        case 0x2f3430u: goto label_2f3430;
        case 0x2f3434u: goto label_2f3434;
        case 0x2f3438u: goto label_2f3438;
        case 0x2f343cu: goto label_2f343c;
        case 0x2f3440u: goto label_2f3440;
        case 0x2f3444u: goto label_2f3444;
        case 0x2f3448u: goto label_2f3448;
        case 0x2f344cu: goto label_2f344c;
        case 0x2f3450u: goto label_2f3450;
        case 0x2f3454u: goto label_2f3454;
        case 0x2f3458u: goto label_2f3458;
        case 0x2f345cu: goto label_2f345c;
        case 0x2f3460u: goto label_2f3460;
        case 0x2f3464u: goto label_2f3464;
        case 0x2f3468u: goto label_2f3468;
        case 0x2f346cu: goto label_2f346c;
        case 0x2f3470u: goto label_2f3470;
        case 0x2f3474u: goto label_2f3474;
        case 0x2f3478u: goto label_2f3478;
        case 0x2f347cu: goto label_2f347c;
        case 0x2f3480u: goto label_2f3480;
        case 0x2f3484u: goto label_2f3484;
        case 0x2f3488u: goto label_2f3488;
        case 0x2f348cu: goto label_2f348c;
        case 0x2f3490u: goto label_2f3490;
        case 0x2f3494u: goto label_2f3494;
        case 0x2f3498u: goto label_2f3498;
        case 0x2f349cu: goto label_2f349c;
        case 0x2f34a0u: goto label_2f34a0;
        case 0x2f34a4u: goto label_2f34a4;
        case 0x2f34a8u: goto label_2f34a8;
        case 0x2f34acu: goto label_2f34ac;
        case 0x2f34b0u: goto label_2f34b0;
        case 0x2f34b4u: goto label_2f34b4;
        case 0x2f34b8u: goto label_2f34b8;
        case 0x2f34bcu: goto label_2f34bc;
        case 0x2f34c0u: goto label_2f34c0;
        case 0x2f34c4u: goto label_2f34c4;
        case 0x2f34c8u: goto label_2f34c8;
        case 0x2f34ccu: goto label_2f34cc;
        case 0x2f34d0u: goto label_2f34d0;
        case 0x2f34d4u: goto label_2f34d4;
        case 0x2f34d8u: goto label_2f34d8;
        case 0x2f34dcu: goto label_2f34dc;
        case 0x2f34e0u: goto label_2f34e0;
        case 0x2f34e4u: goto label_2f34e4;
        case 0x2f34e8u: goto label_2f34e8;
        case 0x2f34ecu: goto label_2f34ec;
        case 0x2f34f0u: goto label_2f34f0;
        case 0x2f34f4u: goto label_2f34f4;
        case 0x2f34f8u: goto label_2f34f8;
        case 0x2f34fcu: goto label_2f34fc;
        case 0x2f3500u: goto label_2f3500;
        case 0x2f3504u: goto label_2f3504;
        case 0x2f3508u: goto label_2f3508;
        case 0x2f350cu: goto label_2f350c;
        case 0x2f3510u: goto label_2f3510;
        case 0x2f3514u: goto label_2f3514;
        case 0x2f3518u: goto label_2f3518;
        case 0x2f351cu: goto label_2f351c;
        case 0x2f3520u: goto label_2f3520;
        case 0x2f3524u: goto label_2f3524;
        case 0x2f3528u: goto label_2f3528;
        case 0x2f352cu: goto label_2f352c;
        case 0x2f3530u: goto label_2f3530;
        case 0x2f3534u: goto label_2f3534;
        case 0x2f3538u: goto label_2f3538;
        case 0x2f353cu: goto label_2f353c;
        case 0x2f3540u: goto label_2f3540;
        case 0x2f3544u: goto label_2f3544;
        case 0x2f3548u: goto label_2f3548;
        case 0x2f354cu: goto label_2f354c;
        case 0x2f3550u: goto label_2f3550;
        case 0x2f3554u: goto label_2f3554;
        case 0x2f3558u: goto label_2f3558;
        case 0x2f355cu: goto label_2f355c;
        case 0x2f3560u: goto label_2f3560;
        case 0x2f3564u: goto label_2f3564;
        case 0x2f3568u: goto label_2f3568;
        case 0x2f356cu: goto label_2f356c;
        default: break;
    }

    ctx->pc = 0x2f33e8u;

label_2f33e8:
    // 0x2f33e8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f33e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2f33ec:
    // 0x2f33ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2f33ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2f33f0:
    // 0x2f33f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2f33f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2f33f4:
    // 0x2f33f4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f33f8:
    // 0x2f33f8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2f33f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2f33fc:
    // 0x2f33fc: 0x24454b00  addiu       $a1, $v0, 0x4B00
    ctx->pc = 0x2f33fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f3400:
    // 0x2f3400: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2f3400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2f3404:
    // 0x2f3404: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f3404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f3408:
    // 0x2f3408: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2f3408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_2f340c:
    // 0x2f340c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2f340cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3410:
    // 0x2f3410: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2f3410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_2f3414:
    // 0x2f3414: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2f3414u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f3418:
    // 0x2f3418: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2f3418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2f341c:
    // 0x2f341c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f341cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3420:
    // 0x2f3420: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2f3420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2f3424:
    // 0x2f3424: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2f3424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2f3428:
    // 0x2f3428: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f3428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f342c:
    // 0x2f342c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f3430:
    // 0x2f3430: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f3430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2f3434:
    // 0x2f3434: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f3434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f3438:
    // 0x2f3438: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x2f3438u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f343c:
    // 0x2f343c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2f343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2f3440:
    // 0x2f3440: 0x86a30092  lh          $v1, 0x92($s5)
    ctx->pc = 0x2f3440u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2f3444:
    // 0x2f3444: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f3444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f3448:
    // 0x2f3448: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f3448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2f344c:
    // 0x2f344c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f344cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f3450:
    // 0x2f3450: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f3450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2f3454:
    // 0x2f3454: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x2f3454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_2f3458:
    // 0x2f3458: 0x1860002f  blez        $v1, . + 4 + (0x2F << 2)
label_2f345c:
    if (ctx->pc == 0x2F345Cu) {
        ctx->pc = 0x2F345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3458u;
        // 0x2f345c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3460u;
        goto label_2f3460;
    }
    ctx->pc = 0x2F3458u;
    {
        const bool branch_taken_0x2f3458 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3458u;
        // 0x2f345c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3458) {
            ctx->pc = 0x2F3518u;
            goto label_2f3518;
        }
    }
    ctx->pc = 0x2F3460u;
label_2f3460:
    // 0x2f3460: 0x24140228  addiu       $s4, $zero, 0x228
    ctx->pc = 0x2f3460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_2f3464:
    // 0x2f3464: 0x0  nop
    ctx->pc = 0x2f3464u;
    // NOP
label_2f3468:
    // 0x2f3468: 0x8ee4489c  lw          $a0, 0x489C($s7)
    ctx->pc = 0x2f3468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_2f346c:
    // 0x2f346c: 0xc0e409a  jal         func_390268
label_2f3470:
    if (ctx->pc == 0x2F3470u) {
        ctx->pc = 0x2F3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F346Cu;
        // 0x2f3470: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3474u;
        goto label_2f3474;
    }
    ctx->pc = 0x2F346Cu;
    SET_GPR_U32(ctx, 31, 0x2F3474u);
    ctx->pc = 0x2F3470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F346Cu;
    // 0x2f3470: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F346Cu, 0x2F3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3474u;
label_2f3474:
    // 0x2f3474: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f3474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3478:
    // 0x2f3478: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_2f347c:
    if (ctx->pc == 0x2F347Cu) {
        ctx->pc = 0x2F347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3478u;
        // 0x2f347c: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3480u;
        goto label_2f3480;
    }
    ctx->pc = 0x2F3478u;
    {
        const bool branch_taken_0x2f3478 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3478u;
        // 0x2f347c: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3478) {
            ctx->pc = 0x2F3504u;
            goto label_2f3504;
        }
    }
    ctx->pc = 0x2F3480u;
label_2f3480:
    // 0x2f3480: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f3480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f3484:
    // 0x2f3484: 0xc0a34d6  jal         func_28D358
label_2f3488:
    if (ctx->pc == 0x2F3488u) {
        ctx->pc = 0x2F3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3484u;
        // 0x2f3488: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F348Cu;
        goto label_2f348c;
    }
    ctx->pc = 0x2F3484u;
    SET_GPR_U32(ctx, 31, 0x2F348Cu);
    ctx->pc = 0x2F3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3484u;
    // 0x2f3488: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F3484u, 0x2F348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F348Cu;
label_2f348c:
    // 0x2f348c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2f3490:
    if (ctx->pc == 0x2F3490u) {
        ctx->pc = 0x2F3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F348Cu;
        // 0x2f3490: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3494u;
        goto label_2f3494;
    }
    ctx->pc = 0x2F348Cu;
    {
        const bool branch_taken_0x2f348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F348Cu;
        // 0x2f3490: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f348c) {
            ctx->pc = 0x2F3500u;
            goto label_2f3500;
        }
    }
    ctx->pc = 0x2F3494u;
label_2f3494:
    // 0x2f3494: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2f3494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2f3498:
    // 0x2f3498: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2f3498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f349c:
    // 0x2f349c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f349cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f34a0:
    // 0x2f34a0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f34a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f34a4:
    // 0x2f34a4: 0xc0cdb62  jal         func_336D88
label_2f34a8:
    if (ctx->pc == 0x2F34A8u) {
        ctx->pc = 0x2F34A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34A4u;
        // 0x2f34a8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F34ACu;
        goto label_2f34ac;
    }
    ctx->pc = 0x2F34A4u;
    SET_GPR_U32(ctx, 31, 0x2F34ACu);
    ctx->pc = 0x2F34A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34A4u;
    // 0x2f34a8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2F34A4u, 0x2F34ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34ACu;
label_2f34ac:
    // 0x2f34ac: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f34acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f34b0:
    // 0x2f34b0: 0xc0a2fc0  jal         func_28BF00
label_2f34b4:
    if (ctx->pc == 0x2F34B4u) {
        ctx->pc = 0x2F34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34B0u;
        // 0x2f34b4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F34B8u;
        goto label_2f34b8;
    }
    ctx->pc = 0x2F34B0u;
    SET_GPR_U32(ctx, 31, 0x2F34B8u);
    ctx->pc = 0x2F34B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34B0u;
    // 0x2f34b4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2F34B0u, 0x2F34B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34B8u;
label_2f34b8:
    // 0x2f34b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2f34b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f34bc:
    // 0x2f34bc: 0x0  nop
    ctx->pc = 0x2f34bcu;
    // NOP
label_2f34c0:
    // 0x2f34c0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_2f34c4:
    if (ctx->pc == 0x2F34C4u) {
        ctx->pc = 0x2F34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34C0u;
        // 0x2f34c4: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F34C8u;
        goto label_2f34c8;
    }
    ctx->pc = 0x2F34C0u;
    {
        const bool branch_taken_0x2f34c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34C0u;
        // 0x2f34c4: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34c0) {
            ctx->pc = 0x2F3504u;
            goto label_2f3504;
        }
    }
    ctx->pc = 0x2F34C8u;
label_2f34c8:
    // 0x2f34c8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2f34c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2f34cc:
    // 0x2f34cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f34ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f34d0:
    // 0x2f34d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f34d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f34d4:
    // 0x2f34d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f34d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f34d8:
    // 0x2f34d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f34d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f34dc:
    // 0x2f34dc: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2f34dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2f34e0:
    // 0x2f34e0: 0xc0888a2  jal         func_222288
label_2f34e4:
    if (ctx->pc == 0x2F34E4u) {
        ctx->pc = 0x2F34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34E0u;
        // 0x2f34e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F34E8u;
        goto label_2f34e8;
    }
    ctx->pc = 0x2F34E0u;
    SET_GPR_U32(ctx, 31, 0x2F34E8u);
    ctx->pc = 0x2F34E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34E0u;
    // 0x2f34e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2F34E0u, 0x2F34E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34E8u;
label_2f34e8:
    // 0x2f34e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f34ec:
    if (ctx->pc == 0x2F34ECu) {
        ctx->pc = 0x2F34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34E8u;
        // 0x2f34ec: 0x3d0102a  slt         $v0, $fp, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F34F0u;
        goto label_2f34f0;
    }
    ctx->pc = 0x2F34E8u;
    {
        const bool branch_taken_0x2f34e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34E8u;
        // 0x2f34ec: 0x3d0102a  slt         $v0, $fp, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34e8) {
            ctx->pc = 0x2F3500u;
            goto label_2f3500;
        }
    }
    ctx->pc = 0x2F34F0u;
label_2f34f0:
    // 0x2f34f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f34f4:
    if (ctx->pc == 0x2F34F4u) {
        ctx->pc = 0x2F34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34F0u;
        // 0x2f34f4: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F34F8u;
        goto label_2f34f8;
    }
    ctx->pc = 0x2F34F0u;
    {
        const bool branch_taken_0x2f34f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34F0u;
        // 0x2f34f4: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34f0) {
            ctx->pc = 0x2F3504u;
            goto label_2f3504;
        }
    }
    ctx->pc = 0x2F34F8u;
label_2f34f8:
    // 0x2f34f8: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x2f34f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f34fc:
    // 0x2f34fc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2f34fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f3500:
    // 0x2f3500: 0x8ee3489c  lw          $v1, 0x489C($s7)
    ctx->pc = 0x2f3500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_2f3504:
    // 0x2f3504: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f3504u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2f3508:
    // 0x2f3508: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2f3508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2f350c:
    // 0x2f350c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2f350cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f3510:
    // 0x2f3510: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_2f3514:
    if (ctx->pc == 0x2F3514u) {
        ctx->pc = 0x2F3514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3510u;
        // 0x2f3514: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3518u;
        goto label_2f3518;
    }
    ctx->pc = 0x2F3510u;
    {
        const bool branch_taken_0x2f3510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3510u;
        // 0x2f3514: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3510) {
            ctx->pc = 0x2F3468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3468;
        }
    }
    ctx->pc = 0x2F3518u;
label_2f3518:
    // 0x2f3518: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2f351c:
    if (ctx->pc == 0x2F351Cu) {
        ctx->pc = 0x2F351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3518u;
        // 0x2f351c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3520u;
        goto label_2f3520;
    }
    ctx->pc = 0x2F3518u;
    {
        const bool branch_taken_0x2f3518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3518u;
        // 0x2f351c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3518) {
            ctx->pc = 0x2F353Cu;
            goto label_2f353c;
        }
    }
    ctx->pc = 0x2F3520u;
label_2f3520:
    // 0x2f3520: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2f3520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f3524:
    // 0x2f3524: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f3524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f3528:
    // 0x2f3528: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f3528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f352c:
    // 0x2f352c: 0x40f809  jalr        $v0
label_2f3530:
    if (ctx->pc == 0x2F3530u) {
        ctx->pc = 0x2F3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F352Cu;
        // 0x2f3530: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3534u;
        goto label_2f3534;
    }
    ctx->pc = 0x2F352Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F3534u);
        ctx->pc = 0x2F3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F352Cu;
        // 0x2f3530: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F352Cu, 0x2F3534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3534u;
label_2f3534:
    // 0x2f3534: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x2f3534u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_2f3538:
    // 0x2f3538: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2f3538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f353c:
    // 0x2f353c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2f353cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2f3540:
    // 0x2f3540: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2f3540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f3544:
    // 0x2f3544: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2f3544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f3548:
    // 0x2f3548: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2f3548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f354c:
    // 0x2f354c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f354cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3550:
    // 0x2f3550: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2f3550u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f3554:
    // 0x2f3554: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2f3554u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3558:
    // 0x2f3558: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2f3558u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f355c:
    // 0x2f355c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f355cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3560:
    // 0x2f3560: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f3560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f3564:
    // 0x2f3564: 0x3e00008  jr          $ra
label_2f3568:
    if (ctx->pc == 0x2F3568u) {
        ctx->pc = 0x2F3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3564u;
        // 0x2f3568: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F356Cu;
        goto label_2f356c;
    }
    ctx->pc = 0x2F3564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3564u;
        // 0x2f3568: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F356Cu;
label_2f356c:
    // 0x2f356c: 0x0  nop
    ctx->pc = 0x2f356cu;
    // NOP
    ctx->pc = 0x2f3570u;
}

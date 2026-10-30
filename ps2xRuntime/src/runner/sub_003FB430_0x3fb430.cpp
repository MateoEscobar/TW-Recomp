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

// Function: sub_003FB430
// Address: 0x3fb430 - 0x3fb580
void sub_003FB430_0x3fb430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB430_0x3fb430");
#endif

    switch (ctx->pc) {
        case 0x3fb430u: goto label_3fb430;
        case 0x3fb434u: goto label_3fb434;
        case 0x3fb438u: goto label_3fb438;
        case 0x3fb43cu: goto label_3fb43c;
        case 0x3fb440u: goto label_3fb440;
        case 0x3fb444u: goto label_3fb444;
        case 0x3fb448u: goto label_3fb448;
        case 0x3fb44cu: goto label_3fb44c;
        case 0x3fb450u: goto label_3fb450;
        case 0x3fb454u: goto label_3fb454;
        case 0x3fb458u: goto label_3fb458;
        case 0x3fb45cu: goto label_3fb45c;
        case 0x3fb460u: goto label_3fb460;
        case 0x3fb464u: goto label_3fb464;
        case 0x3fb468u: goto label_3fb468;
        case 0x3fb46cu: goto label_3fb46c;
        case 0x3fb470u: goto label_3fb470;
        case 0x3fb474u: goto label_3fb474;
        case 0x3fb478u: goto label_3fb478;
        case 0x3fb47cu: goto label_3fb47c;
        case 0x3fb480u: goto label_3fb480;
        case 0x3fb484u: goto label_3fb484;
        case 0x3fb488u: goto label_3fb488;
        case 0x3fb48cu: goto label_3fb48c;
        case 0x3fb490u: goto label_3fb490;
        case 0x3fb494u: goto label_3fb494;
        case 0x3fb498u: goto label_3fb498;
        case 0x3fb49cu: goto label_3fb49c;
        case 0x3fb4a0u: goto label_3fb4a0;
        case 0x3fb4a4u: goto label_3fb4a4;
        case 0x3fb4a8u: goto label_3fb4a8;
        case 0x3fb4acu: goto label_3fb4ac;
        case 0x3fb4b0u: goto label_3fb4b0;
        case 0x3fb4b4u: goto label_3fb4b4;
        case 0x3fb4b8u: goto label_3fb4b8;
        case 0x3fb4bcu: goto label_3fb4bc;
        case 0x3fb4c0u: goto label_3fb4c0;
        case 0x3fb4c4u: goto label_3fb4c4;
        case 0x3fb4c8u: goto label_3fb4c8;
        case 0x3fb4ccu: goto label_3fb4cc;
        case 0x3fb4d0u: goto label_3fb4d0;
        case 0x3fb4d4u: goto label_3fb4d4;
        case 0x3fb4d8u: goto label_3fb4d8;
        case 0x3fb4dcu: goto label_3fb4dc;
        case 0x3fb4e0u: goto label_3fb4e0;
        case 0x3fb4e4u: goto label_3fb4e4;
        case 0x3fb4e8u: goto label_3fb4e8;
        case 0x3fb4ecu: goto label_3fb4ec;
        case 0x3fb4f0u: goto label_3fb4f0;
        case 0x3fb4f4u: goto label_3fb4f4;
        case 0x3fb4f8u: goto label_3fb4f8;
        case 0x3fb4fcu: goto label_3fb4fc;
        case 0x3fb500u: goto label_3fb500;
        case 0x3fb504u: goto label_3fb504;
        case 0x3fb508u: goto label_3fb508;
        case 0x3fb50cu: goto label_3fb50c;
        case 0x3fb510u: goto label_3fb510;
        case 0x3fb514u: goto label_3fb514;
        case 0x3fb518u: goto label_3fb518;
        case 0x3fb51cu: goto label_3fb51c;
        case 0x3fb520u: goto label_3fb520;
        case 0x3fb524u: goto label_3fb524;
        case 0x3fb528u: goto label_3fb528;
        case 0x3fb52cu: goto label_3fb52c;
        case 0x3fb530u: goto label_3fb530;
        case 0x3fb534u: goto label_3fb534;
        case 0x3fb538u: goto label_3fb538;
        case 0x3fb53cu: goto label_3fb53c;
        case 0x3fb540u: goto label_3fb540;
        case 0x3fb544u: goto label_3fb544;
        case 0x3fb548u: goto label_3fb548;
        case 0x3fb54cu: goto label_3fb54c;
        case 0x3fb550u: goto label_3fb550;
        case 0x3fb554u: goto label_3fb554;
        case 0x3fb558u: goto label_3fb558;
        case 0x3fb55cu: goto label_3fb55c;
        case 0x3fb560u: goto label_3fb560;
        case 0x3fb564u: goto label_3fb564;
        case 0x3fb568u: goto label_3fb568;
        case 0x3fb56cu: goto label_3fb56c;
        case 0x3fb570u: goto label_3fb570;
        case 0x3fb574u: goto label_3fb574;
        case 0x3fb578u: goto label_3fb578;
        case 0x3fb57cu: goto label_3fb57c;
        default: break;
    }

    ctx->pc = 0x3fb430u;

label_3fb430:
    // 0x3fb430: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fb430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3fb434:
    // 0x3fb434: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3fb434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3fb438:
    // 0x3fb438: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3fb438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3fb43c:
    // 0x3fb43c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fb43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fb440:
    // 0x3fb440: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3fb440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3fb444:
    // 0x3fb444: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3fb444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fb448:
    // 0x3fb448: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3fb448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3fb44c:
    // 0x3fb44c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3fb44cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fb450:
    // 0x3fb450: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3fb450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3fb454:
    // 0x3fb454: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fb454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fb458:
    // 0x3fb458: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fb458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fb45c:
    // 0x3fb45c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fb460:
    // 0x3fb460: 0x40f809  jalr        $v0
label_3fb464:
    if (ctx->pc == 0x3FB464u) {
        ctx->pc = 0x3FB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB460u;
        // 0x3fb464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB468u;
        goto label_3fb468;
    }
    ctx->pc = 0x3FB460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FB468u);
        ctx->pc = 0x3FB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB460u;
        // 0x3fb464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB460u, 0x3FB468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FB468u;
label_3fb468:
    // 0x3fb468: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3fb468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3fb46c:
    // 0x3fb46c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3fb46cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb470:
    // 0x3fb470: 0x2c620042  sltiu       $v0, $v1, 0x42
    ctx->pc = 0x3fb470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)66) ? 1 : 0);
label_3fb474:
    // 0x3fb474: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_3fb478:
    if (ctx->pc == 0x3FB478u) {
        ctx->pc = 0x3FB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB474u;
        // 0x3fb478: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB47Cu;
        goto label_3fb47c;
    }
    ctx->pc = 0x3FB474u;
    {
        const bool branch_taken_0x3fb474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB474u;
        // 0x3fb478: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb474) {
            ctx->pc = 0x3FB580u;
            return;
        }
    }
    ctx->pc = 0x3FB47Cu;
label_3fb47c:
    // 0x3fb47c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fb47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3fb480:
    // 0x3fb480: 0x24426f90  addiu       $v0, $v0, 0x6F90
    ctx->pc = 0x3fb480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28560));
label_3fb484:
    // 0x3fb484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fb484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fb488:
    // 0x3fb488: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3fb488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fb48c:
    // 0x3fb48c: 0x800008  jr          $a0
label_3fb490:
    if (ctx->pc == 0x3FB490u) {
        ctx->pc = 0x3FB494u;
        goto label_3fb494;
    }
    ctx->pc = 0x3FB48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3FB494u: goto label_3fb494;
            case 0x3FB4E4u: goto label_3fb4e4;
            case 0x3FB500u: goto label_3fb500;
            case 0x3FB52Cu: goto label_3fb52c;
            case 0x3FB544u: goto label_3fb544;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB48Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3FB494u;
label_3fb494:
    // 0x3fb494: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fb494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fb498:
    // 0x3fb498: 0xc0ea12a  jal         func_3A84A8
label_3fb49c:
    if (ctx->pc == 0x3FB49Cu) {
        ctx->pc = 0x3FB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB498u;
        // 0x3fb49c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB4A0u;
        goto label_3fb4a0;
    }
    ctx->pc = 0x3FB498u;
    SET_GPR_U32(ctx, 31, 0x3FB4A0u);
    ctx->pc = 0x3FB49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB498u;
    // 0x3fb49c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FB498u, 0x3FB4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB4A0u;
label_3fb4a0:
    // 0x3fb4a0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fb4a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fb4a4:
    // 0x3fb4a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fb4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fb4a8:
    // 0x3fb4a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fb4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fb4ac:
    // 0x3fb4ac: 0xc0ea12a  jal         func_3A84A8
label_3fb4b0:
    if (ctx->pc == 0x3FB4B0u) {
        ctx->pc = 0x3FB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB4ACu;
        // 0x3fb4b0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB4B4u;
        goto label_3fb4b4;
    }
    ctx->pc = 0x3FB4ACu;
    SET_GPR_U32(ctx, 31, 0x3FB4B4u);
    ctx->pc = 0x3FB4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB4ACu;
    // 0x3fb4b0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FB4ACu, 0x3FB4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB4B4u;
label_3fb4b4:
    // 0x3fb4b4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fb4b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fb4b8:
    // 0x3fb4b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fb4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fb4bc:
    // 0x3fb4bc: 0xc0ea146  jal         func_3A8518
label_3fb4c0:
    if (ctx->pc == 0x3FB4C0u) {
        ctx->pc = 0x3FB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB4BCu;
        // 0x3fb4c0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB4C4u;
        goto label_3fb4c4;
    }
    ctx->pc = 0x3FB4BCu;
    SET_GPR_U32(ctx, 31, 0x3FB4C4u);
    ctx->pc = 0x3FB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB4BCu;
    // 0x3fb4c0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FB4BCu, 0x3FB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB4C4u;
label_3fb4c4:
    // 0x3fb4c4: 0xc0ea146  jal         func_3A8518
label_3fb4c8:
    if (ctx->pc == 0x3FB4C8u) {
        ctx->pc = 0x3FB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB4C4u;
        // 0x3fb4c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB4CCu;
        goto label_3fb4cc;
    }
    ctx->pc = 0x3FB4C4u;
    SET_GPR_U32(ctx, 31, 0x3FB4CCu);
    ctx->pc = 0x3FB4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB4C4u;
    // 0x3fb4c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FB4C4u, 0x3FB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB4CCu;
label_3fb4cc:
    // 0x3fb4cc: 0xc0ea14c  jal         func_3A8530
label_3fb4d0:
    if (ctx->pc == 0x3FB4D0u) {
        ctx->pc = 0x3FB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB4CCu;
        // 0x3fb4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB4D4u;
        goto label_3fb4d4;
    }
    ctx->pc = 0x3FB4CCu;
    SET_GPR_U32(ctx, 31, 0x3FB4D4u);
    ctx->pc = 0x3FB4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB4CCu;
    // 0x3fb4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FB4CCu, 0x3FB4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB4D4u;
label_3fb4d4:
    // 0x3fb4d4: 0xc0ea14c  jal         func_3A8530
label_3fb4d8:
    if (ctx->pc == 0x3FB4D8u) {
        ctx->pc = 0x3FB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB4D4u;
        // 0x3fb4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB4DCu;
        goto label_3fb4dc;
    }
    ctx->pc = 0x3FB4D4u;
    SET_GPR_U32(ctx, 31, 0x3FB4DCu);
    ctx->pc = 0x3FB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB4D4u;
    // 0x3fb4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FB4D4u, 0x3FB4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB4DCu;
label_3fb4dc:
    // 0x3fb4dc: 0x10000029  b           . + 4 + (0x29 << 2)
label_3fb4e0:
    if (ctx->pc == 0x3FB4E0u) {
        ctx->pc = 0x3FB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB4DCu;
        // 0x3fb4e0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB4E4u;
        goto label_3fb4e4;
    }
    ctx->pc = 0x3FB4DCu;
    {
        const bool branch_taken_0x3fb4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB4DCu;
        // 0x3fb4e0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb4dc) {
            ctx->pc = 0x3FB584u;
            return;
        }
    }
    ctx->pc = 0x3FB4E4u;
label_3fb4e4:
    // 0x3fb4e4: 0xc0ea146  jal         func_3A8518
label_3fb4e8:
    if (ctx->pc == 0x3FB4E8u) {
        ctx->pc = 0x3FB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB4E4u;
        // 0x3fb4e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB4ECu;
        goto label_3fb4ec;
    }
    ctx->pc = 0x3FB4E4u;
    SET_GPR_U32(ctx, 31, 0x3FB4ECu);
    ctx->pc = 0x3FB4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB4E4u;
    // 0x3fb4e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FB4E4u, 0x3FB4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB4ECu;
label_3fb4ec:
    // 0x3fb4ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3fb4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb4f0:
    // 0x3fb4f0: 0xc0e9132  jal         func_3A44C8
label_3fb4f4:
    if (ctx->pc == 0x3FB4F4u) {
        ctx->pc = 0x3FB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB4F0u;
        // 0x3fb4f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB4F8u;
        goto label_3fb4f8;
    }
    ctx->pc = 0x3FB4F0u;
    SET_GPR_U32(ctx, 31, 0x3FB4F8u);
    ctx->pc = 0x3FB4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB4F0u;
    // 0x3fb4f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3FB4F0u, 0x3FB4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB4F8u;
label_3fb4f8:
    // 0x3fb4f8: 0x10000021  b           . + 4 + (0x21 << 2)
label_3fb4fc:
    if (ctx->pc == 0x3FB4FCu) {
        ctx->pc = 0x3FB4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB4F8u;
        // 0x3fb4fc: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB500u;
        goto label_3fb500;
    }
    ctx->pc = 0x3FB4F8u;
    {
        const bool branch_taken_0x3fb4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB4F8u;
        // 0x3fb4fc: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb4f8) {
            ctx->pc = 0x3FB580u;
            return;
        }
    }
    ctx->pc = 0x3FB500u;
label_3fb500:
    // 0x3fb500: 0xc0ea146  jal         func_3A8518
label_3fb504:
    if (ctx->pc == 0x3FB504u) {
        ctx->pc = 0x3FB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB500u;
        // 0x3fb504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB508u;
        goto label_3fb508;
    }
    ctx->pc = 0x3FB500u;
    SET_GPR_U32(ctx, 31, 0x3FB508u);
    ctx->pc = 0x3FB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB500u;
    // 0x3fb504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FB500u, 0x3FB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB508u;
label_3fb508:
    // 0x3fb508: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3fb50c:
    if (ctx->pc == 0x3FB50Cu) {
        ctx->pc = 0x3FB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB508u;
        // 0x3fb50c: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB510u;
        goto label_3fb510;
    }
    ctx->pc = 0x3FB508u;
    {
        const bool branch_taken_0x3fb508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB508u;
        // 0x3fb50c: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb508) {
            ctx->pc = 0x3FB51Cu;
            goto label_3fb51c;
        }
    }
    ctx->pc = 0x3FB510u;
label_3fb510:
    // 0x3fb510: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3fb510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3fb514:
    // 0x3fb514: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3fb518:
    if (ctx->pc == 0x3FB518u) {
        ctx->pc = 0x3FB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB514u;
        // 0x3fb518: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB51Cu;
        goto label_3fb51c;
    }
    ctx->pc = 0x3FB514u;
    {
        const bool branch_taken_0x3fb514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB514u;
        // 0x3fb518: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb514) {
            ctx->pc = 0x3FB580u;
            return;
        }
    }
    ctx->pc = 0x3FB51Cu;
label_3fb51c:
    // 0x3fb51c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3fb51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3fb520:
    // 0x3fb520: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fb520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3fb524:
    // 0x3fb524: 0x10000016  b           . + 4 + (0x16 << 2)
label_3fb528:
    if (ctx->pc == 0x3FB528u) {
        ctx->pc = 0x3FB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB524u;
        // 0x3fb528: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB52Cu;
        goto label_3fb52c;
    }
    ctx->pc = 0x3FB524u;
    {
        const bool branch_taken_0x3fb524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB524u;
        // 0x3fb528: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb524) {
            ctx->pc = 0x3FB580u;
            return;
        }
    }
    ctx->pc = 0x3FB52Cu;
label_3fb52c:
    // 0x3fb52c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3fb52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3fb530:
    // 0x3fb530: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x3fb530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_3fb534:
    // 0x3fb534: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3fb534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3fb538:
    // 0x3fb538: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3fb538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3fb53c:
    // 0x3fb53c: 0x10000010  b           . + 4 + (0x10 << 2)
label_3fb540:
    if (ctx->pc == 0x3FB540u) {
        ctx->pc = 0x3FB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB53Cu;
        // 0x3fb540: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB544u;
        goto label_3fb544;
    }
    ctx->pc = 0x3FB53Cu;
    {
        const bool branch_taken_0x3fb53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB53Cu;
        // 0x3fb540: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb53c) {
            ctx->pc = 0x3FB580u;
            return;
        }
    }
    ctx->pc = 0x3FB544u;
label_3fb544:
    // 0x3fb544: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fb544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fb548:
    // 0x3fb548: 0xc0ea12a  jal         func_3A84A8
label_3fb54c:
    if (ctx->pc == 0x3FB54Cu) {
        ctx->pc = 0x3FB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB548u;
        // 0x3fb54c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB550u;
        goto label_3fb550;
    }
    ctx->pc = 0x3FB548u;
    SET_GPR_U32(ctx, 31, 0x3FB550u);
    ctx->pc = 0x3FB54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB548u;
    // 0x3fb54c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FB548u, 0x3FB550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB550u;
label_3fb550:
    // 0x3fb550: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3fb550u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3fb554:
    // 0x3fb554: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fb554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fb558:
    // 0x3fb558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fb558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fb55c:
    // 0x3fb55c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3fb55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3fb560:
    // 0x3fb560: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fb560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fb564:
    // 0x3fb564: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x3fb564u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_3fb568:
    // 0x3fb568: 0xc0e8cda  jal         func_3A3368
label_3fb56c:
    if (ctx->pc == 0x3FB56Cu) {
        ctx->pc = 0x3FB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB568u;
        // 0x3fb56c: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB570u;
        goto label_3fb570;
    }
    ctx->pc = 0x3FB568u;
    SET_GPR_U32(ctx, 31, 0x3FB570u);
    ctx->pc = 0x3FB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB568u;
    // 0x3fb56c: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3FB568u, 0x3FB570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB570u;
label_3fb570:
    // 0x3fb570: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3fb570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3fb574:
    // 0x3fb574: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fb574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fb578:
    // 0x3fb578: 0xc0e8cbc  jal         func_3A32F0
label_3fb57c:
    if (ctx->pc == 0x3FB57Cu) {
        ctx->pc = 0x3FB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB578u;
        // 0x3fb57c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB580u;
        goto label_fallthrough_0x3fb578;
    }
    ctx->pc = 0x3FB578u;
    SET_GPR_U32(ctx, 31, 0x3FB580u);
    ctx->pc = 0x3FB57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB578u;
    // 0x3fb57c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3FB578u, 0x3FB580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x3fb578:
    ctx->pc = 0x3FB580u;
}

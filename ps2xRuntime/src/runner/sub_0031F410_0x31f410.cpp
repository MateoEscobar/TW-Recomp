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

// Function: sub_0031F410
// Address: 0x31f410 - 0x31f638
void sub_0031F410_0x31f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F410_0x31f410");
#endif

    switch (ctx->pc) {
        case 0x31f410u: goto label_31f410;
        case 0x31f414u: goto label_31f414;
        case 0x31f418u: goto label_31f418;
        case 0x31f41cu: goto label_31f41c;
        case 0x31f420u: goto label_31f420;
        case 0x31f424u: goto label_31f424;
        case 0x31f428u: goto label_31f428;
        case 0x31f42cu: goto label_31f42c;
        case 0x31f430u: goto label_31f430;
        case 0x31f434u: goto label_31f434;
        case 0x31f438u: goto label_31f438;
        case 0x31f43cu: goto label_31f43c;
        case 0x31f440u: goto label_31f440;
        case 0x31f444u: goto label_31f444;
        case 0x31f448u: goto label_31f448;
        case 0x31f44cu: goto label_31f44c;
        case 0x31f450u: goto label_31f450;
        case 0x31f454u: goto label_31f454;
        case 0x31f458u: goto label_31f458;
        case 0x31f45cu: goto label_31f45c;
        case 0x31f460u: goto label_31f460;
        case 0x31f464u: goto label_31f464;
        case 0x31f468u: goto label_31f468;
        case 0x31f46cu: goto label_31f46c;
        case 0x31f470u: goto label_31f470;
        case 0x31f474u: goto label_31f474;
        case 0x31f478u: goto label_31f478;
        case 0x31f47cu: goto label_31f47c;
        case 0x31f480u: goto label_31f480;
        case 0x31f484u: goto label_31f484;
        case 0x31f488u: goto label_31f488;
        case 0x31f48cu: goto label_31f48c;
        case 0x31f490u: goto label_31f490;
        case 0x31f494u: goto label_31f494;
        case 0x31f498u: goto label_31f498;
        case 0x31f49cu: goto label_31f49c;
        case 0x31f4a0u: goto label_31f4a0;
        case 0x31f4a4u: goto label_31f4a4;
        case 0x31f4a8u: goto label_31f4a8;
        case 0x31f4acu: goto label_31f4ac;
        case 0x31f4b0u: goto label_31f4b0;
        case 0x31f4b4u: goto label_31f4b4;
        case 0x31f4b8u: goto label_31f4b8;
        case 0x31f4bcu: goto label_31f4bc;
        case 0x31f4c0u: goto label_31f4c0;
        case 0x31f4c4u: goto label_31f4c4;
        case 0x31f4c8u: goto label_31f4c8;
        case 0x31f4ccu: goto label_31f4cc;
        case 0x31f4d0u: goto label_31f4d0;
        case 0x31f4d4u: goto label_31f4d4;
        case 0x31f4d8u: goto label_31f4d8;
        case 0x31f4dcu: goto label_31f4dc;
        case 0x31f4e0u: goto label_31f4e0;
        case 0x31f4e4u: goto label_31f4e4;
        case 0x31f4e8u: goto label_31f4e8;
        case 0x31f4ecu: goto label_31f4ec;
        case 0x31f4f0u: goto label_31f4f0;
        case 0x31f4f4u: goto label_31f4f4;
        case 0x31f4f8u: goto label_31f4f8;
        case 0x31f4fcu: goto label_31f4fc;
        case 0x31f500u: goto label_31f500;
        case 0x31f504u: goto label_31f504;
        case 0x31f508u: goto label_31f508;
        case 0x31f50cu: goto label_31f50c;
        case 0x31f510u: goto label_31f510;
        case 0x31f514u: goto label_31f514;
        case 0x31f518u: goto label_31f518;
        case 0x31f51cu: goto label_31f51c;
        case 0x31f520u: goto label_31f520;
        case 0x31f524u: goto label_31f524;
        case 0x31f528u: goto label_31f528;
        case 0x31f52cu: goto label_31f52c;
        case 0x31f530u: goto label_31f530;
        case 0x31f534u: goto label_31f534;
        case 0x31f538u: goto label_31f538;
        case 0x31f53cu: goto label_31f53c;
        case 0x31f540u: goto label_31f540;
        case 0x31f544u: goto label_31f544;
        case 0x31f548u: goto label_31f548;
        case 0x31f54cu: goto label_31f54c;
        case 0x31f550u: goto label_31f550;
        case 0x31f554u: goto label_31f554;
        case 0x31f558u: goto label_31f558;
        case 0x31f55cu: goto label_31f55c;
        case 0x31f560u: goto label_31f560;
        case 0x31f564u: goto label_31f564;
        case 0x31f568u: goto label_31f568;
        case 0x31f56cu: goto label_31f56c;
        case 0x31f570u: goto label_31f570;
        case 0x31f574u: goto label_31f574;
        case 0x31f578u: goto label_31f578;
        case 0x31f57cu: goto label_31f57c;
        case 0x31f580u: goto label_31f580;
        case 0x31f584u: goto label_31f584;
        case 0x31f588u: goto label_31f588;
        case 0x31f58cu: goto label_31f58c;
        case 0x31f590u: goto label_31f590;
        case 0x31f594u: goto label_31f594;
        case 0x31f598u: goto label_31f598;
        case 0x31f59cu: goto label_31f59c;
        case 0x31f5a0u: goto label_31f5a0;
        case 0x31f5a4u: goto label_31f5a4;
        case 0x31f5a8u: goto label_31f5a8;
        case 0x31f5acu: goto label_31f5ac;
        case 0x31f5b0u: goto label_31f5b0;
        case 0x31f5b4u: goto label_31f5b4;
        case 0x31f5b8u: goto label_31f5b8;
        case 0x31f5bcu: goto label_31f5bc;
        case 0x31f5c0u: goto label_31f5c0;
        case 0x31f5c4u: goto label_31f5c4;
        case 0x31f5c8u: goto label_31f5c8;
        case 0x31f5ccu: goto label_31f5cc;
        case 0x31f5d0u: goto label_31f5d0;
        case 0x31f5d4u: goto label_31f5d4;
        case 0x31f5d8u: goto label_31f5d8;
        case 0x31f5dcu: goto label_31f5dc;
        case 0x31f5e0u: goto label_31f5e0;
        case 0x31f5e4u: goto label_31f5e4;
        case 0x31f5e8u: goto label_31f5e8;
        case 0x31f5ecu: goto label_31f5ec;
        case 0x31f5f0u: goto label_31f5f0;
        case 0x31f5f4u: goto label_31f5f4;
        case 0x31f5f8u: goto label_31f5f8;
        case 0x31f5fcu: goto label_31f5fc;
        case 0x31f600u: goto label_31f600;
        case 0x31f604u: goto label_31f604;
        case 0x31f608u: goto label_31f608;
        case 0x31f60cu: goto label_31f60c;
        case 0x31f610u: goto label_31f610;
        case 0x31f614u: goto label_31f614;
        case 0x31f618u: goto label_31f618;
        case 0x31f61cu: goto label_31f61c;
        case 0x31f620u: goto label_31f620;
        case 0x31f624u: goto label_31f624;
        case 0x31f628u: goto label_31f628;
        case 0x31f62cu: goto label_31f62c;
        case 0x31f630u: goto label_31f630;
        case 0x31f634u: goto label_31f634;
        default: break;
    }

    ctx->pc = 0x31f410u;

label_31f410:
    // 0x31f410: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_31f414:
    // 0x31f414: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31f414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_31f418:
    // 0x31f418: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31f418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_31f41c:
    // 0x31f41c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31f41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31f420:
    // 0x31f420: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31f420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_31f424:
    // 0x31f424: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31f424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31f428:
    // 0x31f428: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31f428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_31f42c:
    // 0x31f42c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31f42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_31f430:
    // 0x31f430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31f434:
    // 0x31f434: 0xc05959e  jal         func_165678
label_31f438:
    if (ctx->pc == 0x31F438u) {
        ctx->pc = 0x31F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F434u;
        // 0x31f438: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F43Cu;
        goto label_31f43c;
    }
    ctx->pc = 0x31F434u;
    SET_GPR_U32(ctx, 31, 0x31F43Cu);
    ctx->pc = 0x31F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F434u;
    // 0x31f438: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31F434u, 0x31F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F43Cu;
label_31f43c:
    // 0x31f43c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31f43cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f440:
    // 0x31f440: 0x12400075  beqz        $s2, . + 4 + (0x75 << 2)
label_31f444:
    if (ctx->pc == 0x31F444u) {
        ctx->pc = 0x31F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F440u;
        // 0x31f444: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F448u;
        goto label_31f448;
    }
    ctx->pc = 0x31F440u;
    {
        const bool branch_taken_0x31f440 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F440u;
        // 0x31f444: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f440) {
            ctx->pc = 0x31F618u;
            goto label_31f618;
        }
    }
    ctx->pc = 0x31F448u;
label_31f448:
    // 0x31f448: 0xc087502  jal         func_21D408
label_31f44c:
    if (ctx->pc == 0x31F44Cu) {
        ctx->pc = 0x31F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F448u;
        // 0x31f44c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F450u;
        goto label_31f450;
    }
    ctx->pc = 0x31F448u;
    SET_GPR_U32(ctx, 31, 0x31F450u);
    ctx->pc = 0x31F44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F448u;
    // 0x31f44c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31F448u, 0x31F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F450u;
label_31f450:
    // 0x31f450: 0xc0a3630  jal         func_28D8C0
label_31f454:
    if (ctx->pc == 0x31F454u) {
        ctx->pc = 0x31F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F450u;
        // 0x31f454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F458u;
        goto label_31f458;
    }
    ctx->pc = 0x31F450u;
    SET_GPR_U32(ctx, 31, 0x31F458u);
    ctx->pc = 0x31F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F450u;
    // 0x31f454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31F450u, 0x31F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F458u;
label_31f458:
    // 0x31f458: 0xc087502  jal         func_21D408
label_31f45c:
    if (ctx->pc == 0x31F45Cu) {
        ctx->pc = 0x31F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F458u;
        // 0x31f45c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F460u;
        goto label_31f460;
    }
    ctx->pc = 0x31F458u;
    SET_GPR_U32(ctx, 31, 0x31F460u);
    ctx->pc = 0x31F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F458u;
    // 0x31f45c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31F458u, 0x31F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F460u;
label_31f460:
    // 0x31f460: 0xc0a3628  jal         func_28D8A0
label_31f464:
    if (ctx->pc == 0x31F464u) {
        ctx->pc = 0x31F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F460u;
        // 0x31f464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F468u;
        goto label_31f468;
    }
    ctx->pc = 0x31F460u;
    SET_GPR_U32(ctx, 31, 0x31F468u);
    ctx->pc = 0x31F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F460u;
    // 0x31f464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31F460u, 0x31F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F468u;
label_31f468:
    // 0x31f468: 0xc0a4e54  jal         func_293950
label_31f46c:
    if (ctx->pc == 0x31F46Cu) {
        ctx->pc = 0x31F470u;
        goto label_31f470;
    }
    ctx->pc = 0x31F468u;
    SET_GPR_U32(ctx, 31, 0x31F470u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31F468u, 0x31F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F470u;
label_31f470:
    // 0x31f470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f474:
    // 0x31f474: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_31f478:
    if (ctx->pc == 0x31F478u) {
        ctx->pc = 0x31F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F474u;
        // 0x31f478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F47Cu;
        goto label_31f47c;
    }
    ctx->pc = 0x31F474u;
    {
        const bool branch_taken_0x31f474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F474u;
        // 0x31f478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f474) {
            ctx->pc = 0x31F4A0u;
            goto label_31f4a0;
        }
    }
    ctx->pc = 0x31F47Cu;
label_31f47c:
    // 0x31f47c: 0xc087502  jal         func_21D408
label_31f480:
    if (ctx->pc == 0x31F480u) {
        ctx->pc = 0x31F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F47Cu;
        // 0x31f480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F484u;
        goto label_31f484;
    }
    ctx->pc = 0x31F47Cu;
    SET_GPR_U32(ctx, 31, 0x31F484u);
    ctx->pc = 0x31F480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F47Cu;
    // 0x31f480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31F47Cu, 0x31F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F484u;
label_31f484:
    // 0x31f484: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x31f484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31f488:
    // 0x31f488: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31f488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f48c:
    // 0x31f48c: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x31f48cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_31f490:
    // 0x31f490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31f494:
    // 0x31f494: 0xc0b8a3e  jal         func_2E28F8
label_31f498:
    if (ctx->pc == 0x31F498u) {
        ctx->pc = 0x31F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F494u;
        // 0x31f498: 0xc62c002c  lwc1        $f12, 0x2C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F49Cu;
        goto label_31f49c;
    }
    ctx->pc = 0x31F494u;
    SET_GPR_U32(ctx, 31, 0x31F49Cu);
    ctx->pc = 0x31F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F494u;
    // 0x31f498: 0xc62c002c  lwc1        $f12, 0x2C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E28F8u, 0x31F494u, 0x31F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F49Cu;
label_31f49c:
    // 0x31f49c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31f49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31f4a0:
    // 0x31f4a0: 0xc087502  jal         func_21D408
label_31f4a4:
    if (ctx->pc == 0x31F4A4u) {
        ctx->pc = 0x31F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4A0u;
        // 0x31f4a4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F4A8u;
        goto label_31f4a8;
    }
    ctx->pc = 0x31F4A0u;
    SET_GPR_U32(ctx, 31, 0x31F4A8u);
    ctx->pc = 0x31F4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4A0u;
    // 0x31f4a4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31F4A0u, 0x31F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F4A8u;
label_31f4a8:
    // 0x31f4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31f4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f4ac:
    // 0x31f4ac: 0xc0a35d6  jal         func_28D758
label_31f4b0:
    if (ctx->pc == 0x31F4B0u) {
        ctx->pc = 0x31F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4ACu;
        // 0x31f4b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F4B4u;
        goto label_31f4b4;
    }
    ctx->pc = 0x31F4ACu;
    SET_GPR_U32(ctx, 31, 0x31F4B4u);
    ctx->pc = 0x31F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4ACu;
    // 0x31f4b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31F4ACu, 0x31F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F4B4u;
label_31f4b4:
    // 0x31f4b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31f4b8:
    // 0x31f4b8: 0xc08750a  jal         func_21D428
label_31f4bc:
    if (ctx->pc == 0x31F4BCu) {
        ctx->pc = 0x31F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4B8u;
        // 0x31f4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F4C0u;
        goto label_31f4c0;
    }
    ctx->pc = 0x31F4B8u;
    SET_GPR_U32(ctx, 31, 0x31F4C0u);
    ctx->pc = 0x31F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4B8u;
    // 0x31f4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x31F4B8u, 0x31F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F4C0u;
label_31f4c0:
    // 0x31f4c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31f4c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f4c4:
    // 0x31f4c4: 0x86220030  lh          $v0, 0x30($s1)
    ctx->pc = 0x31f4c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_31f4c8:
    // 0x31f4c8: 0x54540004  bnel        $v0, $s4, . + 4 + (0x4 << 2)
label_31f4cc:
    if (ctx->pc == 0x31F4CCu) {
        ctx->pc = 0x31F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4C8u;
        // 0x31f4cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F4D0u;
        goto label_31f4d0;
    }
    ctx->pc = 0x31F4C8u;
    {
        const bool branch_taken_0x31f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x31f4c8) {
            ctx->pc = 0x31F4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F4C8u;
            // 0x31f4cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F4DCu;
            goto label_31f4dc;
        }
    }
    ctx->pc = 0x31F4D0u;
label_31f4d0:
    // 0x31f4d0: 0x92620270  lbu         $v0, 0x270($s3)
    ctx->pc = 0x31f4d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 624)));
label_31f4d4:
    // 0x31f4d4: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x31f4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
label_31f4d8:
    // 0x31f4d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f4dc:
    // 0x31f4dc: 0xc059856  jal         func_166158
label_31f4e0:
    if (ctx->pc == 0x31F4E0u) {
        ctx->pc = 0x31F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4DCu;
        // 0x31f4e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F4E4u;
        goto label_31f4e4;
    }
    ctx->pc = 0x31F4DCu;
    SET_GPR_U32(ctx, 31, 0x31F4E4u);
    ctx->pc = 0x31F4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4DCu;
    // 0x31f4e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31F4DCu, 0x31F4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F4E4u;
label_31f4e4:
    // 0x31f4e4: 0x86250032  lh          $a1, 0x32($s1)
    ctx->pc = 0x31f4e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_31f4e8:
    // 0x31f4e8: 0x14b40011  bne         $a1, $s4, . + 4 + (0x11 << 2)
label_31f4ec:
    if (ctx->pc == 0x31F4ECu) {
        ctx->pc = 0x31F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4E8u;
        // 0x31f4ec: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F4F0u;
        goto label_31f4f0;
    }
    ctx->pc = 0x31F4E8u;
    {
        const bool branch_taken_0x31f4e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x31F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4E8u;
        // 0x31f4ec: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f4e8) {
            ctx->pc = 0x31F530u;
            goto label_31f530;
        }
    }
    ctx->pc = 0x31F4F0u;
label_31f4f0:
    // 0x31f4f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31f4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31f4f4:
    // 0x31f4f4: 0xc0a576c  jal         func_295DB0
label_31f4f8:
    if (ctx->pc == 0x31F4F8u) {
        ctx->pc = 0x31F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4F4u;
        // 0x31f4f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F4FCu;
        goto label_31f4fc;
    }
    ctx->pc = 0x31F4F4u;
    SET_GPR_U32(ctx, 31, 0x31F4FCu);
    ctx->pc = 0x31F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4F4u;
    // 0x31f4f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31F4F4u, 0x31F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F4FCu;
label_31f4fc:
    // 0x31f4fc: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x31f4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_31f500:
    // 0x31f500: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x31f500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_31f504:
    // 0x31f504: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x31f504u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_31f508:
    // 0x31f508: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31f508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31f50c:
    // 0x31f50c: 0xc0a5776  jal         func_295DD8
label_31f510:
    if (ctx->pc == 0x31F510u) {
        ctx->pc = 0x31F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F50Cu;
        // 0x31f510: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F514u;
        goto label_31f514;
    }
    ctx->pc = 0x31F50Cu;
    SET_GPR_U32(ctx, 31, 0x31F514u);
    ctx->pc = 0x31F510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F50Cu;
    // 0x31f510: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x31F50Cu, 0x31F514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F514u;
label_31f514:
    // 0x31f514: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x31f514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_31f518:
    // 0x31f518: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31f518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31f51c:
    // 0x31f51c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31f51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31f520:
    // 0x31f520: 0xc0a5922  jal         func_296488
label_31f524:
    if (ctx->pc == 0x31F524u) {
        ctx->pc = 0x31F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F520u;
        // 0x31f524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F528u;
        goto label_31f528;
    }
    ctx->pc = 0x31F520u;
    SET_GPR_U32(ctx, 31, 0x31F528u);
    ctx->pc = 0x31F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F520u;
    // 0x31f524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296488u, 0x31F520u, 0x31F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F528u;
label_31f528:
    // 0x31f528: 0x10000004  b           . + 4 + (0x4 << 2)
label_31f52c:
    if (ctx->pc == 0x31F52Cu) {
        ctx->pc = 0x31F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F528u;
        // 0x31f52c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F530u;
        goto label_31f530;
    }
    ctx->pc = 0x31F528u;
    {
        const bool branch_taken_0x31f528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F528u;
        // 0x31f52c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f528) {
            ctx->pc = 0x31F53Cu;
            goto label_31f53c;
        }
    }
    ctx->pc = 0x31F530u;
label_31f530:
    // 0x31f530: 0xc0a576c  jal         func_295DB0
label_31f534:
    if (ctx->pc == 0x31F534u) {
        ctx->pc = 0x31F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F530u;
        // 0x31f534: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F538u;
        goto label_31f538;
    }
    ctx->pc = 0x31F530u;
    SET_GPR_U32(ctx, 31, 0x31F538u);
    ctx->pc = 0x31F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F530u;
    // 0x31f534: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31F530u, 0x31F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F538u;
label_31f538:
    // 0x31f538: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f53c:
    // 0x31f53c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31f53cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f540:
    // 0x31f540: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x31f540u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31f544:
    // 0x31f544: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31f544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31f548:
    // 0x31f548: 0xc137826  jal         func_4DE098
label_31f54c:
    if (ctx->pc == 0x31F54Cu) {
        ctx->pc = 0x31F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F548u;
        // 0x31f54c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F550u;
        goto label_31f550;
    }
    ctx->pc = 0x31F548u;
    SET_GPR_U32(ctx, 31, 0x31F550u);
    ctx->pc = 0x31F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F548u;
    // 0x31f54c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31F548u, 0x31F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F550u;
label_31f550:
    // 0x31f550: 0xc0e409a  jal         func_390268
label_31f554:
    if (ctx->pc == 0x31F554u) {
        ctx->pc = 0x31F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F550u;
        // 0x31f554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F558u;
        goto label_31f558;
    }
    ctx->pc = 0x31F550u;
    SET_GPR_U32(ctx, 31, 0x31F558u);
    ctx->pc = 0x31F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F550u;
    // 0x31f554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31F550u, 0x31F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F558u;
label_31f558:
    // 0x31f558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f55c:
    // 0x31f55c: 0x5220002a  beql        $s1, $zero, . + 4 + (0x2A << 2)
label_31f560:
    if (ctx->pc == 0x31F560u) {
        ctx->pc = 0x31F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F55Cu;
        // 0x31f560: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F564u;
        goto label_31f564;
    }
    ctx->pc = 0x31F55Cu;
    {
        const bool branch_taken_0x31f55c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f55c) {
            ctx->pc = 0x31F560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F55Cu;
            // 0x31f560: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F608u;
            goto label_31f608;
        }
    }
    ctx->pc = 0x31F564u;
label_31f564:
    // 0x31f564: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x31f564u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_31f568:
    // 0x31f568: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31f568u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31f56c:
    // 0x31f56c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_31f570:
    if (ctx->pc == 0x31F570u) {
        ctx->pc = 0x31F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F56Cu;
        // 0x31f570: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F574u;
        goto label_31f574;
    }
    ctx->pc = 0x31F56Cu;
    {
        const bool branch_taken_0x31f56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F56Cu;
        // 0x31f570: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f56c) {
            ctx->pc = 0x31F604u;
            goto label_31f604;
        }
    }
    ctx->pc = 0x31F574u;
label_31f574:
    // 0x31f574: 0x52320024  beql        $s1, $s2, . + 4 + (0x24 << 2)
label_31f578:
    if (ctx->pc == 0x31F578u) {
        ctx->pc = 0x31F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F574u;
        // 0x31f578: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F57Cu;
        goto label_31f57c;
    }
    ctx->pc = 0x31F574u;
    {
        const bool branch_taken_0x31f574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x31f574) {
            ctx->pc = 0x31F578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F574u;
            // 0x31f578: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F608u;
            goto label_31f608;
        }
    }
    ctx->pc = 0x31F57Cu;
label_31f57c:
    // 0x31f57c: 0xc088edc  jal         func_223B70
label_31f580:
    if (ctx->pc == 0x31F580u) {
        ctx->pc = 0x31F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F57Cu;
        // 0x31f580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F584u;
        goto label_31f584;
    }
    ctx->pc = 0x31F57Cu;
    SET_GPR_U32(ctx, 31, 0x31F584u);
    ctx->pc = 0x31F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F57Cu;
    // 0x31f580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x31F57Cu, 0x31F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F584u;
label_31f584:
    // 0x31f584: 0x50500020  beql        $v0, $s0, . + 4 + (0x20 << 2)
label_31f588:
    if (ctx->pc == 0x31F588u) {
        ctx->pc = 0x31F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F584u;
        // 0x31f588: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F58Cu;
        goto label_31f58c;
    }
    ctx->pc = 0x31F584u;
    {
        const bool branch_taken_0x31f584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x31f584) {
            ctx->pc = 0x31F588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F584u;
            // 0x31f588: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F608u;
            goto label_31f608;
        }
    }
    ctx->pc = 0x31F58Cu;
label_31f58c:
    // 0x31f58c: 0xc089f98  jal         func_227E60
label_31f590:
    if (ctx->pc == 0x31F590u) {
        ctx->pc = 0x31F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F58Cu;
        // 0x31f590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F594u;
        goto label_31f594;
    }
    ctx->pc = 0x31F58Cu;
    SET_GPR_U32(ctx, 31, 0x31F594u);
    ctx->pc = 0x31F590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F58Cu;
    // 0x31f590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x31F58Cu, 0x31F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F594u;
label_31f594:
    // 0x31f594: 0x1050001b  beq         $v0, $s0, . + 4 + (0x1B << 2)
label_31f598:
    if (ctx->pc == 0x31F598u) {
        ctx->pc = 0x31F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F594u;
        // 0x31f598: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F59Cu;
        goto label_31f59c;
    }
    ctx->pc = 0x31F594u;
    {
        const bool branch_taken_0x31f594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x31F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F594u;
        // 0x31f598: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f594) {
            ctx->pc = 0x31F604u;
            goto label_31f604;
        }
    }
    ctx->pc = 0x31F59Cu;
label_31f59c:
    // 0x31f59c: 0xc0a57ca  jal         func_295F28
label_31f5a0:
    if (ctx->pc == 0x31F5A0u) {
        ctx->pc = 0x31F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F59Cu;
        // 0x31f5a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F5A4u;
        goto label_31f5a4;
    }
    ctx->pc = 0x31F59Cu;
    SET_GPR_U32(ctx, 31, 0x31F5A4u);
    ctx->pc = 0x31F5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F59Cu;
    // 0x31f5a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x31F59Cu, 0x31F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F5A4u;
label_31f5a4:
    // 0x31f5a4: 0xc087502  jal         func_21D408
label_31f5a8:
    if (ctx->pc == 0x31F5A8u) {
        ctx->pc = 0x31F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5A4u;
        // 0x31f5a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F5ACu;
        goto label_31f5ac;
    }
    ctx->pc = 0x31F5A4u;
    SET_GPR_U32(ctx, 31, 0x31F5ACu);
    ctx->pc = 0x31F5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F5A4u;
    // 0x31f5a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31F5A4u, 0x31F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F5ACu;
label_31f5ac:
    // 0x31f5ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f5b0:
    // 0x31f5b0: 0xc0a3630  jal         func_28D8C0
label_31f5b4:
    if (ctx->pc == 0x31F5B4u) {
        ctx->pc = 0x31F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5B0u;
        // 0x31f5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F5B8u;
        goto label_31f5b8;
    }
    ctx->pc = 0x31F5B0u;
    SET_GPR_U32(ctx, 31, 0x31F5B8u);
    ctx->pc = 0x31F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F5B0u;
    // 0x31f5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31F5B0u, 0x31F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F5B8u;
label_31f5b8:
    // 0x31f5b8: 0xc0a3628  jal         func_28D8A0
label_31f5bc:
    if (ctx->pc == 0x31F5BCu) {
        ctx->pc = 0x31F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5B8u;
        // 0x31f5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F5C0u;
        goto label_31f5c0;
    }
    ctx->pc = 0x31F5B8u;
    SET_GPR_U32(ctx, 31, 0x31F5C0u);
    ctx->pc = 0x31F5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F5B8u;
    // 0x31f5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31F5B8u, 0x31F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F5C0u;
label_31f5c0:
    // 0x31f5c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f5c4:
    // 0x31f5c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31f5c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31f5c8:
    // 0x31f5c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31f5cc:
    // 0x31f5cc: 0x40f809  jalr        $v0
label_31f5d0:
    if (ctx->pc == 0x31F5D0u) {
        ctx->pc = 0x31F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5CCu;
        // 0x31f5d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F5D4u;
        goto label_31f5d4;
    }
    ctx->pc = 0x31F5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31F5D4u);
        ctx->pc = 0x31F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5CCu;
        // 0x31f5d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F5CCu, 0x31F5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31F5D4u;
label_31f5d4:
    // 0x31f5d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31f5d8:
    // 0x31f5d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f5dc:
    // 0x31f5dc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31f5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31f5e0:
    // 0x31f5e0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31f5e4:
    // 0x31f5e4: 0x40f809  jalr        $v0
label_31f5e8:
    if (ctx->pc == 0x31F5E8u) {
        ctx->pc = 0x31F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5E4u;
        // 0x31f5e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F5ECu;
        goto label_31f5ec;
    }
    ctx->pc = 0x31F5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31F5ECu);
        ctx->pc = 0x31F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5E4u;
        // 0x31f5e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F5E4u, 0x31F5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31F5ECu;
label_31f5ec:
    // 0x31f5ec: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x31f5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_31f5f0:
    // 0x31f5f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31f5f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31f5f4:
    // 0x31f5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31f5f8:
    // 0x31f5f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31f5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f5fc:
    // 0x31f5fc: 0xc0b78b2  jal         func_2DE2C8
label_31f600:
    if (ctx->pc == 0x31F600u) {
        ctx->pc = 0x31F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5FCu;
        // 0x31f600: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F604u;
        goto label_31f604;
    }
    ctx->pc = 0x31F5FCu;
    SET_GPR_U32(ctx, 31, 0x31F604u);
    ctx->pc = 0x31F600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F5FCu;
    // 0x31f600: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2C8u, 0x31F5FCu, 0x31F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F604u;
label_31f604:
    // 0x31f604: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31f604u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_31f608:
    // 0x31f608: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x31f608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31f60c:
    // 0x31f60c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_31f610:
    if (ctx->pc == 0x31F610u) {
        ctx->pc = 0x31F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F60Cu;
        // 0x31f610: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F614u;
        goto label_31f614;
    }
    ctx->pc = 0x31F60Cu;
    {
        const bool branch_taken_0x31f60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F60Cu;
        // 0x31f610: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f60c) {
            ctx->pc = 0x31F548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f548;
        }
    }
    ctx->pc = 0x31F614u;
label_31f614:
    // 0x31f614: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31f614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31f618:
    // 0x31f618: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31f618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31f61c:
    // 0x31f61c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31f61cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31f620:
    // 0x31f620: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31f620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31f624:
    // 0x31f624: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31f624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31f628:
    // 0x31f628: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31f628u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31f62c:
    // 0x31f62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31f630:
    // 0x31f630: 0x3e00008  jr          $ra
label_31f634:
    if (ctx->pc == 0x31F634u) {
        ctx->pc = 0x31F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F630u;
        // 0x31f634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F638u;
        goto label_fallthrough_0x31f630;
    }
    ctx->pc = 0x31F630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F630u;
        // 0x31f634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31f630:
    ctx->pc = 0x31F638u;
}

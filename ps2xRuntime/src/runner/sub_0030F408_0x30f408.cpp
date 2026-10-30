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

// Function: sub_0030F408
// Address: 0x30f408 - 0x30f4b0
void sub_0030F408_0x30f408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F408_0x30f408");
#endif

    switch (ctx->pc) {
        case 0x30f408u: goto label_30f408;
        case 0x30f40cu: goto label_30f40c;
        case 0x30f410u: goto label_30f410;
        case 0x30f414u: goto label_30f414;
        case 0x30f418u: goto label_30f418;
        case 0x30f41cu: goto label_30f41c;
        case 0x30f420u: goto label_30f420;
        case 0x30f424u: goto label_30f424;
        case 0x30f428u: goto label_30f428;
        case 0x30f42cu: goto label_30f42c;
        case 0x30f430u: goto label_30f430;
        case 0x30f434u: goto label_30f434;
        case 0x30f438u: goto label_30f438;
        case 0x30f43cu: goto label_30f43c;
        case 0x30f440u: goto label_30f440;
        case 0x30f444u: goto label_30f444;
        case 0x30f448u: goto label_30f448;
        case 0x30f44cu: goto label_30f44c;
        case 0x30f450u: goto label_30f450;
        case 0x30f454u: goto label_30f454;
        case 0x30f458u: goto label_30f458;
        case 0x30f45cu: goto label_30f45c;
        case 0x30f460u: goto label_30f460;
        case 0x30f464u: goto label_30f464;
        case 0x30f468u: goto label_30f468;
        case 0x30f46cu: goto label_30f46c;
        case 0x30f470u: goto label_30f470;
        case 0x30f474u: goto label_30f474;
        case 0x30f478u: goto label_30f478;
        case 0x30f47cu: goto label_30f47c;
        case 0x30f480u: goto label_30f480;
        case 0x30f484u: goto label_30f484;
        case 0x30f488u: goto label_30f488;
        case 0x30f48cu: goto label_30f48c;
        case 0x30f490u: goto label_30f490;
        case 0x30f494u: goto label_30f494;
        case 0x30f498u: goto label_30f498;
        case 0x30f49cu: goto label_30f49c;
        case 0x30f4a0u: goto label_30f4a0;
        case 0x30f4a4u: goto label_30f4a4;
        case 0x30f4a8u: goto label_30f4a8;
        case 0x30f4acu: goto label_30f4ac;
        default: break;
    }

    ctx->pc = 0x30f408u;

label_30f408:
    // 0x30f408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30f408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30f40c:
    // 0x30f40c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30f40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_30f410:
    // 0x30f410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30f414:
    // 0x30f414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30f414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30f418:
    // 0x30f418: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x30f418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_30f41c:
    // 0x30f41c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x30f41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30f420:
    // 0x30f420: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x30f420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_30f424:
    // 0x30f424: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_30f428:
    if (ctx->pc == 0x30F428u) {
        ctx->pc = 0x30F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F424u;
        // 0x30f428: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F42Cu;
        goto label_30f42c;
    }
    ctx->pc = 0x30F424u;
    {
        const bool branch_taken_0x30f424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F424u;
        // 0x30f428: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f424) {
            ctx->pc = 0x30F4B8u;
            return;
        }
    }
    ctx->pc = 0x30F42Cu;
label_30f42c:
    // 0x30f42c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30f430:
    // 0x30f430: 0x2442d660  addiu       $v0, $v0, -0x29A0
    ctx->pc = 0x30f430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956640));
label_30f434:
    // 0x30f434: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30f434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30f438:
    // 0x30f438: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30f438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30f43c:
    // 0x30f43c: 0x800008  jr          $a0
label_30f440:
    if (ctx->pc == 0x30F440u) {
        ctx->pc = 0x30F444u;
        goto label_30f444;
    }
    ctx->pc = 0x30F43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30F444u: goto label_30f444;
            case 0x30F474u: goto label_30f474;
            case 0x30F480u: goto label_30f480;
            case 0x30F4A0u: goto label_30f4a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F43Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30F444u;
label_30f444:
    // 0x30f444: 0xc08a61a  jal         func_229868
label_30f448:
    if (ctx->pc == 0x30F448u) {
        ctx->pc = 0x30F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F444u;
        // 0x30f448: 0x8cc40024  lw          $a0, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F44Cu;
        goto label_30f44c;
    }
    ctx->pc = 0x30F444u;
    SET_GPR_U32(ctx, 31, 0x30F44Cu);
    ctx->pc = 0x30F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F444u;
    // 0x30f448: 0x8cc40024  lw          $a0, 0x24($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30F444u, 0x30F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F44Cu;
label_30f44c:
    // 0x30f44c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_30f450:
    if (ctx->pc == 0x30F450u) {
        ctx->pc = 0x30F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F44Cu;
        // 0x30f450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F454u;
        goto label_30f454;
    }
    ctx->pc = 0x30F44Cu;
    {
        const bool branch_taken_0x30f44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f44c) {
            ctx->pc = 0x30F450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F44Cu;
            // 0x30f450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F4BCu;
            return;
        }
    }
    ctx->pc = 0x30F454u;
label_30f454:
    // 0x30f454: 0xc087502  jal         func_21D408
label_30f458:
    if (ctx->pc == 0x30F458u) {
        ctx->pc = 0x30F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F454u;
        // 0x30f458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F45Cu;
        goto label_30f45c;
    }
    ctx->pc = 0x30F454u;
    SET_GPR_U32(ctx, 31, 0x30F45Cu);
    ctx->pc = 0x30F458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F454u;
    // 0x30f458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30F454u, 0x30F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F45Cu;
label_30f45c:
    // 0x30f45c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x30f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_30f460:
    // 0x30f460: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30f460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30f464:
    // 0x30f464: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_30f468:
    if (ctx->pc == 0x30F468u) {
        ctx->pc = 0x30F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F464u;
        // 0x30f468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F46Cu;
        goto label_30f46c;
    }
    ctx->pc = 0x30F464u;
    {
        const bool branch_taken_0x30f464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F464u;
        // 0x30f468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f464) {
            ctx->pc = 0x30F4BCu;
            return;
        }
    }
    ctx->pc = 0x30F46Cu;
label_30f46c:
    // 0x30f46c: 0x1000000c  b           . + 4 + (0xC << 2)
label_30f470:
    if (ctx->pc == 0x30F470u) {
        ctx->pc = 0x30F474u;
        goto label_30f474;
    }
    ctx->pc = 0x30F46Cu;
    {
        const bool branch_taken_0x30f46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f46c) {
            ctx->pc = 0x30F4A0u;
            goto label_30f4a0;
        }
    }
    ctx->pc = 0x30F474u;
label_30f474:
    // 0x30f474: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x30f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_30f478:
    // 0x30f478: 0x10000003  b           . + 4 + (0x3 << 2)
label_30f47c:
    if (ctx->pc == 0x30F47Cu) {
        ctx->pc = 0x30F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F478u;
        // 0x30f47c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F480u;
        goto label_30f480;
    }
    ctx->pc = 0x30F478u;
    {
        const bool branch_taken_0x30f478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F478u;
        // 0x30f47c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f478) {
            ctx->pc = 0x30F488u;
            goto label_30f488;
        }
    }
    ctx->pc = 0x30F480u;
label_30f480:
    // 0x30f480: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x30f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_30f484:
    // 0x30f484: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x30f484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_30f488:
    // 0x30f488: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30f488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30f48c:
    // 0x30f48c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30f490:
    // 0x30f490: 0x60f809  jalr        $v1
label_30f494:
    if (ctx->pc == 0x30F494u) {
        ctx->pc = 0x30F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F490u;
        // 0x30f494: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F498u;
        goto label_30f498;
    }
    ctx->pc = 0x30F490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30F498u);
        ctx->pc = 0x30F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F490u;
        // 0x30f494: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F490u, 0x30F498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30F498u;
label_30f498:
    // 0x30f498: 0x10000008  b           . + 4 + (0x8 << 2)
label_30f49c:
    if (ctx->pc == 0x30F49Cu) {
        ctx->pc = 0x30F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F498u;
        // 0x30f49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F4A0u;
        goto label_30f4a0;
    }
    ctx->pc = 0x30F498u;
    {
        const bool branch_taken_0x30f498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F498u;
        // 0x30f49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f498) {
            ctx->pc = 0x30F4BCu;
            return;
        }
    }
    ctx->pc = 0x30F4A0u;
label_30f4a0:
    // 0x30f4a0: 0xc0c3a66  jal         func_30E998
label_30f4a4:
    if (ctx->pc == 0x30F4A4u) {
        ctx->pc = 0x30F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F4A0u;
        // 0x30f4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F4A8u;
        goto label_30f4a8;
    }
    ctx->pc = 0x30F4A0u;
    SET_GPR_U32(ctx, 31, 0x30F4A8u);
    ctx->pc = 0x30F4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F4A0u;
    // 0x30f4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E998u, 0x30F4A0u, 0x30F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F4A8u;
label_30f4a8:
    // 0x30f4a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_30f4ac:
    if (ctx->pc == 0x30F4ACu) {
        ctx->pc = 0x30F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F4A8u;
        // 0x30f4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F4B0u;
        goto label_fallthrough_0x30f4a8;
    }
    ctx->pc = 0x30F4A8u;
    {
        const bool branch_taken_0x30f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F4A8u;
        // 0x30f4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f4a8) {
            ctx->pc = 0x30F4BCu;
            return;
        }
    }
label_fallthrough_0x30f4a8:
    ctx->pc = 0x30F4B0u;
}

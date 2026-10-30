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

// Function: sub_003CA3E0
// Address: 0x3ca3e0 - 0x3ca500
void sub_003CA3E0_0x3ca3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA3E0_0x3ca3e0");
#endif

    switch (ctx->pc) {
        case 0x3ca3e0u: goto label_3ca3e0;
        case 0x3ca3e4u: goto label_3ca3e4;
        case 0x3ca3e8u: goto label_3ca3e8;
        case 0x3ca3ecu: goto label_3ca3ec;
        case 0x3ca3f0u: goto label_3ca3f0;
        case 0x3ca3f4u: goto label_3ca3f4;
        case 0x3ca3f8u: goto label_3ca3f8;
        case 0x3ca3fcu: goto label_3ca3fc;
        case 0x3ca400u: goto label_3ca400;
        case 0x3ca404u: goto label_3ca404;
        case 0x3ca408u: goto label_3ca408;
        case 0x3ca40cu: goto label_3ca40c;
        case 0x3ca410u: goto label_3ca410;
        case 0x3ca414u: goto label_3ca414;
        case 0x3ca418u: goto label_3ca418;
        case 0x3ca41cu: goto label_3ca41c;
        case 0x3ca420u: goto label_3ca420;
        case 0x3ca424u: goto label_3ca424;
        case 0x3ca428u: goto label_3ca428;
        case 0x3ca42cu: goto label_3ca42c;
        case 0x3ca430u: goto label_3ca430;
        case 0x3ca434u: goto label_3ca434;
        case 0x3ca438u: goto label_3ca438;
        case 0x3ca43cu: goto label_3ca43c;
        case 0x3ca440u: goto label_3ca440;
        case 0x3ca444u: goto label_3ca444;
        case 0x3ca448u: goto label_3ca448;
        case 0x3ca44cu: goto label_3ca44c;
        case 0x3ca450u: goto label_3ca450;
        case 0x3ca454u: goto label_3ca454;
        case 0x3ca458u: goto label_3ca458;
        case 0x3ca45cu: goto label_3ca45c;
        case 0x3ca460u: goto label_3ca460;
        case 0x3ca464u: goto label_3ca464;
        case 0x3ca468u: goto label_3ca468;
        case 0x3ca46cu: goto label_3ca46c;
        case 0x3ca470u: goto label_3ca470;
        case 0x3ca474u: goto label_3ca474;
        case 0x3ca478u: goto label_3ca478;
        case 0x3ca47cu: goto label_3ca47c;
        case 0x3ca480u: goto label_3ca480;
        case 0x3ca484u: goto label_3ca484;
        case 0x3ca488u: goto label_3ca488;
        case 0x3ca48cu: goto label_3ca48c;
        case 0x3ca490u: goto label_3ca490;
        case 0x3ca494u: goto label_3ca494;
        case 0x3ca498u: goto label_3ca498;
        case 0x3ca49cu: goto label_3ca49c;
        case 0x3ca4a0u: goto label_3ca4a0;
        case 0x3ca4a4u: goto label_3ca4a4;
        case 0x3ca4a8u: goto label_3ca4a8;
        case 0x3ca4acu: goto label_3ca4ac;
        case 0x3ca4b0u: goto label_3ca4b0;
        case 0x3ca4b4u: goto label_3ca4b4;
        case 0x3ca4b8u: goto label_3ca4b8;
        case 0x3ca4bcu: goto label_3ca4bc;
        case 0x3ca4c0u: goto label_3ca4c0;
        case 0x3ca4c4u: goto label_3ca4c4;
        case 0x3ca4c8u: goto label_3ca4c8;
        case 0x3ca4ccu: goto label_3ca4cc;
        case 0x3ca4d0u: goto label_3ca4d0;
        case 0x3ca4d4u: goto label_3ca4d4;
        case 0x3ca4d8u: goto label_3ca4d8;
        case 0x3ca4dcu: goto label_3ca4dc;
        case 0x3ca4e0u: goto label_3ca4e0;
        case 0x3ca4e4u: goto label_3ca4e4;
        case 0x3ca4e8u: goto label_3ca4e8;
        case 0x3ca4ecu: goto label_3ca4ec;
        case 0x3ca4f0u: goto label_3ca4f0;
        case 0x3ca4f4u: goto label_3ca4f4;
        case 0x3ca4f8u: goto label_3ca4f8;
        case 0x3ca4fcu: goto label_3ca4fc;
        default: break;
    }

    ctx->pc = 0x3ca3e0u;

label_3ca3e0:
    // 0x3ca3e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ca3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3ca3e4:
    // 0x3ca3e4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3ca3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3ca3e8:
    // 0x3ca3e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3ca3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3ca3ec:
    // 0x3ca3ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ca3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ca3f0:
    // 0x3ca3f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3ca3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3ca3f4:
    // 0x3ca3f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ca3f8:
    // 0x3ca3f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ca3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ca3fc:
    // 0x3ca3fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ca3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ca400:
    // 0x3ca400: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ca400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ca404:
    // 0x3ca404: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ca404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ca408:
    // 0x3ca408: 0x40f809  jalr        $v0
label_3ca40c:
    if (ctx->pc == 0x3CA40Cu) {
        ctx->pc = 0x3CA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA408u;
        // 0x3ca40c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA410u;
        goto label_3ca410;
    }
    ctx->pc = 0x3CA408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA410u);
        ctx->pc = 0x3CA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA408u;
        // 0x3ca40c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA408u, 0x3CA410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA410u;
label_3ca410:
    // 0x3ca410: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ca410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ca414:
    // 0x3ca414: 0xc0ea14c  jal         func_3A8530
label_3ca418:
    if (ctx->pc == 0x3CA418u) {
        ctx->pc = 0x3CA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA414u;
        // 0x3ca418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA41Cu;
        goto label_3ca41c;
    }
    ctx->pc = 0x3CA414u;
    SET_GPR_U32(ctx, 31, 0x3CA41Cu);
    ctx->pc = 0x3CA418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA414u;
    // 0x3ca418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CA414u, 0x3CA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA41Cu;
label_3ca41c:
    // 0x3ca41c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ca41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ca420:
    // 0x3ca420: 0xc0ea12a  jal         func_3A84A8
label_3ca424:
    if (ctx->pc == 0x3CA424u) {
        ctx->pc = 0x3CA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA420u;
        // 0x3ca424: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA428u;
        goto label_3ca428;
    }
    ctx->pc = 0x3CA420u;
    SET_GPR_U32(ctx, 31, 0x3CA428u);
    ctx->pc = 0x3CA424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA420u;
    // 0x3ca424: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CA420u, 0x3CA428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA428u;
label_3ca428:
    // 0x3ca428: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ca428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ca42c:
    // 0x3ca42c: 0xc0ea12a  jal         func_3A84A8
label_3ca430:
    if (ctx->pc == 0x3CA430u) {
        ctx->pc = 0x3CA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA42Cu;
        // 0x3ca430: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA434u;
        goto label_3ca434;
    }
    ctx->pc = 0x3CA42Cu;
    SET_GPR_U32(ctx, 31, 0x3CA434u);
    ctx->pc = 0x3CA430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA42Cu;
    // 0x3ca430: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CA42Cu, 0x3CA434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA434u;
label_3ca434:
    // 0x3ca434: 0xc0ea146  jal         func_3A8518
label_3ca438:
    if (ctx->pc == 0x3CA438u) {
        ctx->pc = 0x3CA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA434u;
        // 0x3ca438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA43Cu;
        goto label_3ca43c;
    }
    ctx->pc = 0x3CA434u;
    SET_GPR_U32(ctx, 31, 0x3CA43Cu);
    ctx->pc = 0x3CA438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA434u;
    // 0x3ca438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CA434u, 0x3CA43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA43Cu;
label_3ca43c:
    // 0x3ca43c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ca43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ca440:
    // 0x3ca440: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3ca440u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca444:
    // 0x3ca444: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3ca444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3ca448:
    // 0x3ca448: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ca448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ca44c:
    // 0x3ca44c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ca44cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ca450:
    // 0x3ca450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ca450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ca454:
    // 0x3ca454: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3ca454u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3ca458:
    // 0x3ca458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ca458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ca45c:
    // 0x3ca45c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3ca45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_3ca460:
    // 0x3ca460: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x3ca460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_3ca464:
    // 0x3ca464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ca464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca468:
    // 0x3ca468: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3ca468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3ca46c:
    // 0x3ca46c: 0xc0e858c  jal         func_3A1630
label_3ca470:
    if (ctx->pc == 0x3CA470u) {
        ctx->pc = 0x3CA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA46Cu;
        // 0x3ca470: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA474u;
        goto label_3ca474;
    }
    ctx->pc = 0x3CA46Cu;
    SET_GPR_U32(ctx, 31, 0x3CA474u);
    ctx->pc = 0x3CA470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA46Cu;
    // 0x3ca470: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CA46Cu, 0x3CA474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA474u;
label_3ca474:
    // 0x3ca474: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3ca474u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ca478:
    // 0x3ca478: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3ca478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3ca47c:
    // 0x3ca47c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3ca47cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ca480:
    // 0x3ca480: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3ca480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3ca484:
    // 0x3ca484: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3ca484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3ca488:
    // 0x3ca488: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ca488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ca48c:
    // 0x3ca48c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3ca48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ca490:
    // 0x3ca490: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3ca490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3ca494:
    // 0x3ca494: 0xae3000c4  sw          $s0, 0xC4($s1)
    ctx->pc = 0x3ca494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
label_3ca498:
    // 0x3ca498: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3ca498u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3ca49c:
    // 0x3ca49c: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3ca49cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3ca4a0:
    // 0x3ca4a0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x3ca4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_3ca4a4:
    // 0x3ca4a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ca4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ca4a8:
    // 0x3ca4a8: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3ca4a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3ca4ac:
    // 0x3ca4ac: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3ca4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3ca4b0:
    // 0x3ca4b0: 0x60f809  jalr        $v1
label_3ca4b4:
    if (ctx->pc == 0x3CA4B4u) {
        ctx->pc = 0x3CA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA4B0u;
        // 0x3ca4b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA4B8u;
        goto label_3ca4b8;
    }
    ctx->pc = 0x3CA4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CA4B8u);
        ctx->pc = 0x3CA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA4B0u;
        // 0x3ca4b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA4B0u, 0x3CA4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA4B8u;
label_3ca4b8:
    // 0x3ca4b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3ca4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ca4bc:
    // 0x3ca4bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ca4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca4c0:
    // 0x3ca4c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3ca4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3ca4c4:
    // 0x3ca4c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ca4c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ca4c8:
    // 0x3ca4c8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3ca4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3ca4cc:
    // 0x3ca4cc: 0xc0e496c  jal         func_3925B0
label_3ca4d0:
    if (ctx->pc == 0x3CA4D0u) {
        ctx->pc = 0x3CA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA4CCu;
        // 0x3ca4d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA4D4u;
        goto label_3ca4d4;
    }
    ctx->pc = 0x3CA4CCu;
    SET_GPR_U32(ctx, 31, 0x3CA4D4u);
    ctx->pc = 0x3CA4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA4CCu;
    // 0x3ca4d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3925B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3925B0u, 0x3CA4CCu, 0x3CA4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA4D4u;
label_3ca4d4:
    // 0x3ca4d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ca4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ca4d8:
    // 0x3ca4d8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3ca4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3ca4dc:
    // 0x3ca4dc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3ca4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3ca4e0:
    // 0x3ca4e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ca4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ca4e4:
    // 0x3ca4e4: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x3ca4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
label_3ca4e8:
    // 0x3ca4e8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3ca4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ca4ec:
    // 0x3ca4ec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3ca4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ca4f0:
    // 0x3ca4f0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3ca4f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ca4f4:
    // 0x3ca4f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ca4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ca4f8:
    // 0x3ca4f8: 0x3e00008  jr          $ra
label_3ca4fc:
    if (ctx->pc == 0x3CA4FCu) {
        ctx->pc = 0x3CA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA4F8u;
        // 0x3ca4fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA500u;
        goto label_fallthrough_0x3ca4f8;
    }
    ctx->pc = 0x3CA4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA4F8u;
        // 0x3ca4fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ca4f8:
    ctx->pc = 0x3CA500u;
}

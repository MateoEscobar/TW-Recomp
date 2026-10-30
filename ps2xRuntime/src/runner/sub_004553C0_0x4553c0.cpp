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

// Function: sub_004553C0
// Address: 0x4553c0 - 0x455500
void sub_004553C0_0x4553c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004553C0_0x4553c0");
#endif

    switch (ctx->pc) {
        case 0x4553c0u: goto label_4553c0;
        case 0x4553c4u: goto label_4553c4;
        case 0x4553c8u: goto label_4553c8;
        case 0x4553ccu: goto label_4553cc;
        case 0x4553d0u: goto label_4553d0;
        case 0x4553d4u: goto label_4553d4;
        case 0x4553d8u: goto label_4553d8;
        case 0x4553dcu: goto label_4553dc;
        case 0x4553e0u: goto label_4553e0;
        case 0x4553e4u: goto label_4553e4;
        case 0x4553e8u: goto label_4553e8;
        case 0x4553ecu: goto label_4553ec;
        case 0x4553f0u: goto label_4553f0;
        case 0x4553f4u: goto label_4553f4;
        case 0x4553f8u: goto label_4553f8;
        case 0x4553fcu: goto label_4553fc;
        case 0x455400u: goto label_455400;
        case 0x455404u: goto label_455404;
        case 0x455408u: goto label_455408;
        case 0x45540cu: goto label_45540c;
        case 0x455410u: goto label_455410;
        case 0x455414u: goto label_455414;
        case 0x455418u: goto label_455418;
        case 0x45541cu: goto label_45541c;
        case 0x455420u: goto label_455420;
        case 0x455424u: goto label_455424;
        case 0x455428u: goto label_455428;
        case 0x45542cu: goto label_45542c;
        case 0x455430u: goto label_455430;
        case 0x455434u: goto label_455434;
        case 0x455438u: goto label_455438;
        case 0x45543cu: goto label_45543c;
        case 0x455440u: goto label_455440;
        case 0x455444u: goto label_455444;
        case 0x455448u: goto label_455448;
        case 0x45544cu: goto label_45544c;
        case 0x455450u: goto label_455450;
        case 0x455454u: goto label_455454;
        case 0x455458u: goto label_455458;
        case 0x45545cu: goto label_45545c;
        case 0x455460u: goto label_455460;
        case 0x455464u: goto label_455464;
        case 0x455468u: goto label_455468;
        case 0x45546cu: goto label_45546c;
        case 0x455470u: goto label_455470;
        case 0x455474u: goto label_455474;
        case 0x455478u: goto label_455478;
        case 0x45547cu: goto label_45547c;
        case 0x455480u: goto label_455480;
        case 0x455484u: goto label_455484;
        case 0x455488u: goto label_455488;
        case 0x45548cu: goto label_45548c;
        case 0x455490u: goto label_455490;
        case 0x455494u: goto label_455494;
        case 0x455498u: goto label_455498;
        case 0x45549cu: goto label_45549c;
        case 0x4554a0u: goto label_4554a0;
        case 0x4554a4u: goto label_4554a4;
        case 0x4554a8u: goto label_4554a8;
        case 0x4554acu: goto label_4554ac;
        case 0x4554b0u: goto label_4554b0;
        case 0x4554b4u: goto label_4554b4;
        case 0x4554b8u: goto label_4554b8;
        case 0x4554bcu: goto label_4554bc;
        case 0x4554c0u: goto label_4554c0;
        case 0x4554c4u: goto label_4554c4;
        case 0x4554c8u: goto label_4554c8;
        case 0x4554ccu: goto label_4554cc;
        case 0x4554d0u: goto label_4554d0;
        case 0x4554d4u: goto label_4554d4;
        case 0x4554d8u: goto label_4554d8;
        case 0x4554dcu: goto label_4554dc;
        case 0x4554e0u: goto label_4554e0;
        case 0x4554e4u: goto label_4554e4;
        case 0x4554e8u: goto label_4554e8;
        case 0x4554ecu: goto label_4554ec;
        case 0x4554f0u: goto label_4554f0;
        case 0x4554f4u: goto label_4554f4;
        case 0x4554f8u: goto label_4554f8;
        case 0x4554fcu: goto label_4554fc;
        default: break;
    }

    ctx->pc = 0x4553c0u;

label_4553c0:
    // 0x4553c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4553c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4553c4:
    // 0x4553c4: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x4553c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_4553c8:
    // 0x4553c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4553c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4553cc:
    // 0x4553cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4553ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4553d0:
    // 0x4553d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4553d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4553d4:
    // 0x4553d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4553d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4553d8:
    // 0x4553d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4553d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4553dc:
    // 0x4553dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4553dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4553e0:
    // 0x4553e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4553e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4553e4:
    // 0x4553e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4553e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4553e8:
    // 0x4553e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4553e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4553ec:
    // 0x4553ec: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x4553ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_4553f0:
    // 0x4553f0: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_4553f4:
    if (ctx->pc == 0x4553F4u) {
        ctx->pc = 0x4553F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4553F0u;
        // 0x4553f4: 0x8c52009c  lw          $s2, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4553F8u;
        goto label_4553f8;
    }
    ctx->pc = 0x4553F0u;
    {
        const bool branch_taken_0x4553f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4553F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4553F0u;
        // 0x4553f4: 0x8c52009c  lw          $s2, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4553f0) {
            ctx->pc = 0x455450u;
            goto label_455450;
        }
    }
    ctx->pc = 0x4553F8u;
label_4553f8:
    // 0x4553f8: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4553f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_4553fc:
    // 0x4553fc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4553fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_455400:
    // 0x455400: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x455400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
label_455404:
    // 0x455404: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x455404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_455408:
    // 0x455408: 0x40f809  jalr        $v0
label_45540c:
    if (ctx->pc == 0x45540Cu) {
        ctx->pc = 0x45540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455408u;
        // 0x45540c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455410u;
        goto label_455410;
    }
    ctx->pc = 0x455408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x455410u);
        ctx->pc = 0x45540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455408u;
        // 0x45540c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455408u, 0x455410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455410u;
label_455410:
    // 0x455410: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x455410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_455414:
    // 0x455414: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x455414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_455418:
    // 0x455418: 0x40f809  jalr        $v0
label_45541c:
    if (ctx->pc == 0x45541Cu) {
        ctx->pc = 0x45541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455418u;
        // 0x45541c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455420u;
        goto label_455420;
    }
    ctx->pc = 0x455418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x455420u);
        ctx->pc = 0x45541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455418u;
        // 0x45541c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455418u, 0x455420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455420u;
label_455420:
    // 0x455420: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x455420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_455424:
    // 0x455424: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x455424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_455428:
    // 0x455428: 0x40f809  jalr        $v0
label_45542c:
    if (ctx->pc == 0x45542Cu) {
        ctx->pc = 0x45542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455428u;
        // 0x45542c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455430u;
        goto label_455430;
    }
    ctx->pc = 0x455428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x455430u);
        ctx->pc = 0x45542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455428u;
        // 0x45542c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455428u, 0x455430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455430u;
label_455430:
    // 0x455430: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x455430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_455434:
    // 0x455434: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x455434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_455438:
    // 0x455438: 0x40f809  jalr        $v0
label_45543c:
    if (ctx->pc == 0x45543Cu) {
        ctx->pc = 0x45543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455438u;
        // 0x45543c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x455440u;
        goto label_455440;
    }
    ctx->pc = 0x455438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x455440u);
        ctx->pc = 0x45543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455438u;
        // 0x45543c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455438u, 0x455440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455440u;
label_455440:
    // 0x455440: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x455440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_455444:
    // 0x455444: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x455444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_455448:
    // 0x455448: 0x40f809  jalr        $v0
label_45544c:
    if (ctx->pc == 0x45544Cu) {
        ctx->pc = 0x45544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455448u;
        // 0x45544c: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455450u;
        goto label_455450;
    }
    ctx->pc = 0x455448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x455450u);
        ctx->pc = 0x45544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455448u;
        // 0x45544c: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455448u, 0x455450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455450u;
label_455450:
    // 0x455450: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x455450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_455454:
    // 0x455454: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x455454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_455458:
    // 0x455458: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_45545c:
    if (ctx->pc == 0x45545Cu) {
        ctx->pc = 0x45545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455458u;
        // 0x45545c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455460u;
        goto label_455460;
    }
    ctx->pc = 0x455458u;
    {
        const bool branch_taken_0x455458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455458u;
        // 0x45545c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455458) {
            ctx->pc = 0x455478u;
            goto label_455478;
        }
    }
    ctx->pc = 0x455460u;
label_455460:
    // 0x455460: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x455460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_455464:
    // 0x455464: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x455464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_455468:
    // 0x455468: 0xc115246  jal         func_454918
label_45546c:
    if (ctx->pc == 0x45546Cu) {
        ctx->pc = 0x45546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455468u;
        // 0x45546c: 0x8e270024  lw          $a3, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455470u;
        goto label_455470;
    }
    ctx->pc = 0x455468u;
    SET_GPR_U32(ctx, 31, 0x455470u);
    ctx->pc = 0x45546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x455468u;
    // 0x45546c: 0x8e270024  lw          $a3, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x454918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x454918u, 0x455468u, 0x455470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455470u;
label_455470:
    // 0x455470: 0x1000000e  b           . + 4 + (0xE << 2)
label_455474:
    if (ctx->pc == 0x455474u) {
        ctx->pc = 0x455474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455470u;
        // 0x455474: 0x8e220064  lw          $v0, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455478u;
        goto label_455478;
    }
    ctx->pc = 0x455470u;
    {
        const bool branch_taken_0x455470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455470u;
        // 0x455474: 0x8e220064  lw          $v0, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455470) {
            ctx->pc = 0x4554ACu;
            goto label_4554ac;
        }
    }
    ctx->pc = 0x455478u;
label_455478:
    // 0x455478: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x455478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_45547c:
    // 0x45547c: 0xc12104a  jal         func_484128
label_455480:
    if (ctx->pc == 0x455480u) {
        ctx->pc = 0x455480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45547Cu;
        // 0x455480: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455484u;
        goto label_455484;
    }
    ctx->pc = 0x45547Cu;
    SET_GPR_U32(ctx, 31, 0x455484u);
    ctx->pc = 0x455480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45547Cu;
    // 0x455480: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x45547Cu, 0x455484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455484u;
label_455484:
    // 0x455484: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x455484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_455488:
    // 0x455488: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x455488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_45548c:
    // 0x45548c: 0xc11888e  jal         func_462238
label_455490:
    if (ctx->pc == 0x455490u) {
        ctx->pc = 0x455490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45548Cu;
        // 0x455490: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455494u;
        goto label_455494;
    }
    ctx->pc = 0x45548Cu;
    SET_GPR_U32(ctx, 31, 0x455494u);
    ctx->pc = 0x455490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45548Cu;
    // 0x455490: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x462238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462238u, 0x45548Cu, 0x455494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455494u;
label_455494:
    // 0x455494: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x455494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_455498:
    // 0x455498: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x455498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45549c:
    // 0x45549c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x45549cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4554a0:
    // 0x4554a0: 0xc115342  jal         func_454D08
label_4554a4:
    if (ctx->pc == 0x4554A4u) {
        ctx->pc = 0x4554A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4554A0u;
        // 0x4554a4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4554A8u;
        goto label_4554a8;
    }
    ctx->pc = 0x4554A0u;
    SET_GPR_U32(ctx, 31, 0x4554A8u);
    ctx->pc = 0x4554A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4554A0u;
    // 0x4554a4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x454D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x454D08u, 0x4554A0u, 0x4554A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4554A8u;
label_4554a8:
    // 0x4554a8: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x4554a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_4554ac:
    // 0x4554ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4554b0:
    if (ctx->pc == 0x4554B0u) {
        ctx->pc = 0x4554B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4554ACu;
        // 0x4554b0: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4554B4u;
        goto label_4554b4;
    }
    ctx->pc = 0x4554ACu;
    {
        const bool branch_taken_0x4554ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4554B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4554ACu;
        // 0x4554b0: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4554ac) {
            ctx->pc = 0x4554D8u;
            goto label_4554d8;
        }
    }
    ctx->pc = 0x4554B4u;
label_4554b4:
    // 0x4554b4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4554b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4554b8:
    // 0x4554b8: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x4554b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
label_4554bc:
    // 0x4554bc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4554bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4554c0:
    // 0x4554c0: 0x40f809  jalr        $v0
label_4554c4:
    if (ctx->pc == 0x4554C4u) {
        ctx->pc = 0x4554C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4554C0u;
        // 0x4554c4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4554C8u;
        goto label_4554c8;
    }
    ctx->pc = 0x4554C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4554C8u);
        ctx->pc = 0x4554C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4554C0u;
        // 0x4554c4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4554C0u, 0x4554C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4554C8u;
label_4554c8:
    // 0x4554c8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4554c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4554cc:
    // 0x4554cc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4554ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4554d0:
    // 0x4554d0: 0x40f809  jalr        $v0
label_4554d4:
    if (ctx->pc == 0x4554D4u) {
        ctx->pc = 0x4554D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4554D0u;
        // 0x4554d4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4554D8u;
        goto label_4554d8;
    }
    ctx->pc = 0x4554D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4554D8u);
        ctx->pc = 0x4554D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4554D0u;
        // 0x4554d4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4554D0u, 0x4554D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4554D8u;
label_4554d8:
    // 0x4554d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4554d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4554dc:
    // 0x4554dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4554dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4554e0:
    // 0x4554e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4554e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4554e4:
    // 0x4554e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4554e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4554e8:
    // 0x4554e8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4554e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4554ec:
    // 0x4554ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4554ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4554f0:
    // 0x4554f0: 0x3e00008  jr          $ra
label_4554f4:
    if (ctx->pc == 0x4554F4u) {
        ctx->pc = 0x4554F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4554F0u;
        // 0x4554f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4554F8u;
        goto label_4554f8;
    }
    ctx->pc = 0x4554F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4554F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4554F0u;
        // 0x4554f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4554F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4554F8u;
label_4554f8:
    // 0x4554f8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x4554f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_4554fc:
    // 0x4554fc: 0x0  nop
    ctx->pc = 0x4554fcu;
    // NOP
    ctx->pc = 0x455500u;
}

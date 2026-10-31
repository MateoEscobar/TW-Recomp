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

// Function: sub_003E03D8
// Address: 0x3e03d8 - 0x3e0538
void sub_003E03D8_0x3e03d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E03D8_0x3e03d8");
#endif

    switch (ctx->pc) {
        case 0x3e03d8u: goto label_3e03d8;
        case 0x3e03dcu: goto label_3e03dc;
        case 0x3e03e0u: goto label_3e03e0;
        case 0x3e03e4u: goto label_3e03e4;
        case 0x3e03e8u: goto label_3e03e8;
        case 0x3e03ecu: goto label_3e03ec;
        case 0x3e03f0u: goto label_3e03f0;
        case 0x3e03f4u: goto label_3e03f4;
        case 0x3e03f8u: goto label_3e03f8;
        case 0x3e03fcu: goto label_3e03fc;
        case 0x3e0400u: goto label_3e0400;
        case 0x3e0404u: goto label_3e0404;
        case 0x3e0408u: goto label_3e0408;
        case 0x3e040cu: goto label_3e040c;
        case 0x3e0410u: goto label_3e0410;
        case 0x3e0414u: goto label_3e0414;
        case 0x3e0418u: goto label_3e0418;
        case 0x3e041cu: goto label_3e041c;
        case 0x3e0420u: goto label_3e0420;
        case 0x3e0424u: goto label_3e0424;
        case 0x3e0428u: goto label_3e0428;
        case 0x3e042cu: goto label_3e042c;
        case 0x3e0430u: goto label_3e0430;
        case 0x3e0434u: goto label_3e0434;
        case 0x3e0438u: goto label_3e0438;
        case 0x3e043cu: goto label_3e043c;
        case 0x3e0440u: goto label_3e0440;
        case 0x3e0444u: goto label_3e0444;
        case 0x3e0448u: goto label_3e0448;
        case 0x3e044cu: goto label_3e044c;
        case 0x3e0450u: goto label_3e0450;
        case 0x3e0454u: goto label_3e0454;
        case 0x3e0458u: goto label_3e0458;
        case 0x3e045cu: goto label_3e045c;
        case 0x3e0460u: goto label_3e0460;
        case 0x3e0464u: goto label_3e0464;
        case 0x3e0468u: goto label_3e0468;
        case 0x3e046cu: goto label_3e046c;
        case 0x3e0470u: goto label_3e0470;
        case 0x3e0474u: goto label_3e0474;
        case 0x3e0478u: goto label_3e0478;
        case 0x3e047cu: goto label_3e047c;
        case 0x3e0480u: goto label_3e0480;
        case 0x3e0484u: goto label_3e0484;
        case 0x3e0488u: goto label_3e0488;
        case 0x3e048cu: goto label_3e048c;
        case 0x3e0490u: goto label_3e0490;
        case 0x3e0494u: goto label_3e0494;
        case 0x3e0498u: goto label_3e0498;
        case 0x3e049cu: goto label_3e049c;
        case 0x3e04a0u: goto label_3e04a0;
        case 0x3e04a4u: goto label_3e04a4;
        case 0x3e04a8u: goto label_3e04a8;
        case 0x3e04acu: goto label_3e04ac;
        case 0x3e04b0u: goto label_3e04b0;
        case 0x3e04b4u: goto label_3e04b4;
        case 0x3e04b8u: goto label_3e04b8;
        case 0x3e04bcu: goto label_3e04bc;
        case 0x3e04c0u: goto label_3e04c0;
        case 0x3e04c4u: goto label_3e04c4;
        case 0x3e04c8u: goto label_3e04c8;
        case 0x3e04ccu: goto label_3e04cc;
        case 0x3e04d0u: goto label_3e04d0;
        case 0x3e04d4u: goto label_3e04d4;
        case 0x3e04d8u: goto label_3e04d8;
        case 0x3e04dcu: goto label_3e04dc;
        case 0x3e04e0u: goto label_3e04e0;
        case 0x3e04e4u: goto label_3e04e4;
        case 0x3e04e8u: goto label_3e04e8;
        case 0x3e04ecu: goto label_3e04ec;
        case 0x3e04f0u: goto label_3e04f0;
        case 0x3e04f4u: goto label_3e04f4;
        case 0x3e04f8u: goto label_3e04f8;
        case 0x3e04fcu: goto label_3e04fc;
        case 0x3e0500u: goto label_3e0500;
        case 0x3e0504u: goto label_3e0504;
        case 0x3e0508u: goto label_3e0508;
        case 0x3e050cu: goto label_3e050c;
        case 0x3e0510u: goto label_3e0510;
        case 0x3e0514u: goto label_3e0514;
        case 0x3e0518u: goto label_3e0518;
        case 0x3e051cu: goto label_3e051c;
        case 0x3e0520u: goto label_3e0520;
        case 0x3e0524u: goto label_3e0524;
        case 0x3e0528u: goto label_3e0528;
        case 0x3e052cu: goto label_3e052c;
        case 0x3e0530u: goto label_3e0530;
        case 0x3e0534u: goto label_3e0534;
        default: break;
    }

    ctx->pc = 0x3e03d8u;

label_3e03d8:
    // 0x3e03d8: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3e03d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3e03dc:
    // 0x3e03dc: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3e03dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3e03e0:
    // 0x3e03e0: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3e03e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3e03e4:
    // 0x3e03e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e03e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e03e8:
    // 0x3e03e8: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3e03e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3e03ec:
    // 0x3e03ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e03f0:
    // 0x3e03f0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e03f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e03f4:
    // 0x3e03f4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e03f8:
    // 0x3e03f8: 0x40f809  jalr        $v0
label_3e03fc:
    if (ctx->pc == 0x3E03FCu) {
        ctx->pc = 0x3E03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03F8u;
        // 0x3e03fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0400u;
        goto label_3e0400;
    }
    ctx->pc = 0x3E03F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E0400u);
        ctx->pc = 0x3E03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03F8u;
        // 0x3e03fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E03F8u, 0x3E0400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0400u;
label_3e0400:
    // 0x3e0400: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e0400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0404:
    // 0x3e0404: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e0404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e0408:
    // 0x3e0408: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e0408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e040c:
    // 0x3e040c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e0410:
    // 0x3e0410: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e0410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e0414:
    // 0x3e0414: 0x0  nop
    ctx->pc = 0x3e0414u;
    // NOP
label_3e0418:
    // 0x3e0418: 0x0  nop
    ctx->pc = 0x3e0418u;
    // NOP
label_3e041c:
    // 0x3e041c: 0x0  nop
    ctx->pc = 0x3e041cu;
    // NOP
label_3e0420:
    // 0x3e0420: 0x0  nop
    ctx->pc = 0x3e0420u;
    // NOP
label_3e0424:
    // 0x3e0424: 0x0  nop
    ctx->pc = 0x3e0424u;
    // NOP
label_3e0428:
    // 0x3e0428: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e042c:
    if (ctx->pc == 0x3E042Cu) {
        ctx->pc = 0x3E042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0428u;
        // 0x3e042c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0430u;
        goto label_3e0430;
    }
    ctx->pc = 0x3E0428u;
    {
        const bool branch_taken_0x3e0428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0428u;
        // 0x3e042c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0428) {
            ctx->pc = 0x3E0418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0418;
        }
    }
    ctx->pc = 0x3E0430u;
label_3e0430:
    // 0x3e0430: 0xc138ddc  jal         func_4E3770
label_3e0434:
    if (ctx->pc == 0x3E0434u) {
        ctx->pc = 0x3E0438u;
        goto label_3e0438;
    }
    ctx->pc = 0x3E0430u;
    SET_GPR_U32(ctx, 31, 0x3E0438u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E0430u, 0x3E0438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0438u;
label_3e0438:
    // 0x3e0438: 0xc0e8650  jal         func_3A1940
label_3e043c:
    if (ctx->pc == 0x3E043Cu) {
        ctx->pc = 0x3E043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0438u;
        // 0x3e043c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0440u;
        goto label_3e0440;
    }
    ctx->pc = 0x3E0438u;
    SET_GPR_U32(ctx, 31, 0x3E0440u);
    ctx->pc = 0x3E043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0438u;
    // 0x3e043c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1940u, 0x3E0438u, 0x3E0440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0440u;
label_3e0440:
    // 0x3e0440: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3e0444:
    if (ctx->pc == 0x3E0444u) {
        ctx->pc = 0x3E0448u;
        goto label_3e0448;
    }
    ctx->pc = 0x3E0440u;
    {
        const bool branch_taken_0x3e0440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0440) {
            ctx->pc = 0x3E0458u;
            goto label_3e0458;
        }
    }
    ctx->pc = 0x3E0448u;
label_3e0448:
    // 0x3e0448: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x3e0448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3e044c:
    // 0x3e044c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3e044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e0450:
    // 0x3e0450: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
label_3e0454:
    if (ctx->pc == 0x3E0454u) {
        ctx->pc = 0x3E0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0450u;
        // 0x3e0454: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0458u;
        goto label_3e0458;
    }
    ctx->pc = 0x3E0450u;
    {
        const bool branch_taken_0x3e0450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e0450) {
            ctx->pc = 0x3E0454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0450u;
            // 0x3e0454: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0458u;
            goto label_3e0458;
        }
    }
    ctx->pc = 0x3E0458u;
label_3e0458:
    // 0x3e0458: 0xc0e8650  jal         func_3A1940
label_3e045c:
    if (ctx->pc == 0x3E045Cu) {
        ctx->pc = 0x3E045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0458u;
        // 0x3e045c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0460u;
        goto label_3e0460;
    }
    ctx->pc = 0x3E0458u;
    SET_GPR_U32(ctx, 31, 0x3E0460u);
    ctx->pc = 0x3E045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0458u;
    // 0x3e045c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1940u, 0x3E0458u, 0x3E0460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0460u;
label_3e0460:
    // 0x3e0460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e0460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0464:
    // 0x3e0464: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
label_3e0468:
    if (ctx->pc == 0x3E0468u) {
        ctx->pc = 0x3E0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0464u;
        // 0x3e0468: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E046Cu;
        goto label_3e046c;
    }
    ctx->pc = 0x3E0464u;
    {
        const bool branch_taken_0x3e0464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e0464) {
            ctx->pc = 0x3E0468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0464u;
            // 0x3e0468: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E04B0u;
            goto label_3e04b0;
        }
    }
    ctx->pc = 0x3E046Cu;
label_3e046c:
    // 0x3e046c: 0x9605006e  lhu         $a1, 0x6E($s0)
    ctx->pc = 0x3e046cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
label_3e0470:
    // 0x3e0470: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3e0470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3e0474:
    // 0x3e0474: 0xc0cd4ee  jal         func_3353B8
label_3e0478:
    if (ctx->pc == 0x3E0478u) {
        ctx->pc = 0x3E0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0474u;
        // 0x3e0478: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E047Cu;
        goto label_3e047c;
    }
    ctx->pc = 0x3E0474u;
    SET_GPR_U32(ctx, 31, 0x3E047Cu);
    ctx->pc = 0x3E0478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0474u;
    // 0x3e0478: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E0474u, 0x3E047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E047Cu;
label_3e047c:
    // 0x3e047c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e0480:
    // 0x3e0480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e0480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0484:
    // 0x3e0484: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3e0484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3e0488:
    // 0x3e0488: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e0488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e048c:
    // 0x3e048c: 0xc0e858c  jal         func_3A1630
label_3e0490:
    if (ctx->pc == 0x3E0490u) {
        ctx->pc = 0x3E0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E048Cu;
        // 0x3e0490: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0494u;
        goto label_3e0494;
    }
    ctx->pc = 0x3E048Cu;
    SET_GPR_U32(ctx, 31, 0x3E0494u);
    ctx->pc = 0x3E0490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E048Cu;
    // 0x3e0490: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E048Cu, 0x3E0494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0494u;
label_3e0494:
    // 0x3e0494: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3e0494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e0498:
    // 0x3e0498: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x3e0498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3e049c:
    // 0x3e049c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_3e04a0:
    if (ctx->pc == 0x3E04A0u) {
        ctx->pc = 0x3E04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E049Cu;
        // 0x3e04a0: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E04A4u;
        goto label_3e04a4;
    }
    ctx->pc = 0x3E049Cu;
    {
        const bool branch_taken_0x3e049c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e049c) {
            ctx->pc = 0x3E04A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E049Cu;
            // 0x3e04a0: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E04ACu;
            goto label_3e04ac;
        }
    }
    ctx->pc = 0x3E04A4u;
label_3e04a4:
    // 0x3e04a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3e04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3e04a8:
    // 0x3e04a8: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3e04a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3e04ac:
    // 0x3e04ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e04acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e04b0:
    // 0x3e04b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e04b4:
    // 0x3e04b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3e04b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e04b8:
    // 0x3e04b8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_3e04bc:
    if (ctx->pc == 0x3E04BCu) {
        ctx->pc = 0x3E04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04B8u;
        // 0x3e04bc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E04C0u;
        goto label_3e04c0;
    }
    ctx->pc = 0x3E04B8u;
    {
        const bool branch_taken_0x3e04b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e04b8) {
            ctx->pc = 0x3E04BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E04B8u;
            // 0x3e04bc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0514u;
            goto label_3e0514;
        }
    }
    ctx->pc = 0x3E04C0u;
label_3e04c0:
    // 0x3e04c0: 0xc0e8650  jal         func_3A1940
label_3e04c4:
    if (ctx->pc == 0x3E04C4u) {
        ctx->pc = 0x3E04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04C0u;
        // 0x3e04c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E04C8u;
        goto label_3e04c8;
    }
    ctx->pc = 0x3E04C0u;
    SET_GPR_U32(ctx, 31, 0x3E04C8u);
    ctx->pc = 0x3E04C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E04C0u;
    // 0x3e04c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1940u, 0x3E04C0u, 0x3E04C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E04C8u;
label_3e04c8:
    // 0x3e04c8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3e04cc:
    if (ctx->pc == 0x3E04CCu) {
        ctx->pc = 0x3E04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04C8u;
        // 0x3e04cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E04D0u;
        goto label_3e04d0;
    }
    ctx->pc = 0x3E04C8u;
    {
        const bool branch_taken_0x3e04c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04C8u;
        // 0x3e04cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e04c8) {
            ctx->pc = 0x3E04F0u;
            goto label_3e04f0;
        }
    }
    ctx->pc = 0x3E04D0u;
label_3e04d0:
    // 0x3e04d0: 0xc0e858c  jal         func_3A1630
label_3e04d4:
    if (ctx->pc == 0x3E04D4u) {
        ctx->pc = 0x3E04D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04D0u;
        // 0x3e04d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E04D8u;
        goto label_3e04d8;
    }
    ctx->pc = 0x3E04D0u;
    SET_GPR_U32(ctx, 31, 0x3E04D8u);
    ctx->pc = 0x3E04D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E04D0u;
    // 0x3e04d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E04D0u, 0x3E04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E04D8u;
label_3e04d8:
    // 0x3e04d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e04d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e04dc:
    // 0x3e04dc: 0xc0e896c  jal         func_3A25B0
label_3e04e0:
    if (ctx->pc == 0x3E04E0u) {
        ctx->pc = 0x3E04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04DCu;
        // 0x3e04e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E04E4u;
        goto label_3e04e4;
    }
    ctx->pc = 0x3E04DCu;
    SET_GPR_U32(ctx, 31, 0x3E04E4u);
    ctx->pc = 0x3E04E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E04DCu;
    // 0x3e04e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3E04DCu, 0x3E04E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E04E4u;
label_3e04e4:
    // 0x3e04e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3e04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3e04e8:
    // 0x3e04e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3e04ec:
    if (ctx->pc == 0x3E04ECu) {
        ctx->pc = 0x3E04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04E8u;
        // 0x3e04ec: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E04F0u;
        goto label_3e04f0;
    }
    ctx->pc = 0x3E04E8u;
    {
        const bool branch_taken_0x3e04e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04E8u;
        // 0x3e04ec: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e04e8) {
            ctx->pc = 0x3E050Cu;
            goto label_3e050c;
        }
    }
    ctx->pc = 0x3E04F0u;
label_3e04f0:
    // 0x3e04f0: 0xc0e896c  jal         func_3A25B0
label_3e04f4:
    if (ctx->pc == 0x3E04F4u) {
        ctx->pc = 0x3E04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04F0u;
        // 0x3e04f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E04F8u;
        goto label_3e04f8;
    }
    ctx->pc = 0x3E04F0u;
    SET_GPR_U32(ctx, 31, 0x3E04F8u);
    ctx->pc = 0x3E04F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E04F0u;
    // 0x3e04f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3E04F0u, 0x3E04F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E04F8u;
label_3e04f8:
    // 0x3e04f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3e04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e04fc:
    // 0x3e04fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e04fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0500:
    // 0x3e0500: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3e0500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3e0504:
    // 0x3e0504: 0xc0e858c  jal         func_3A1630
label_3e0508:
    if (ctx->pc == 0x3E0508u) {
        ctx->pc = 0x3E0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0504u;
        // 0x3e0508: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E050Cu;
        goto label_3e050c;
    }
    ctx->pc = 0x3E0504u;
    SET_GPR_U32(ctx, 31, 0x3E050Cu);
    ctx->pc = 0x3E0508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0504u;
    // 0x3e0508: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E0504u, 0x3E050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E050Cu;
label_3e050c:
    // 0x3e050c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3e050cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3e0510:
    // 0x3e0510: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e0510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e0514:
    // 0x3e0514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e0514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e0518:
    // 0x3e0518: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3e0518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e051c:
    // 0x3e051c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e051cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e0520:
    // 0x3e0520: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3e0520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3e0524:
    // 0x3e0524: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3e0524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_3e0528:
    // 0x3e0528: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3e0528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3e052c:
    // 0x3e052c: 0x3e00008  jr          $ra
label_3e0530:
    if (ctx->pc == 0x3E0530u) {
        ctx->pc = 0x3E0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E052Cu;
        // 0x3e0530: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0534u;
        goto label_3e0534;
    }
    ctx->pc = 0x3E052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E052Cu;
        // 0x3e0530: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E052Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0534u;
label_3e0534:
    // 0x3e0534: 0x0  nop
    ctx->pc = 0x3e0534u;
    // NOP
    ctx->pc = 0x3e0538u;
}

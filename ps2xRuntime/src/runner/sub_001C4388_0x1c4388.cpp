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

// Function: sub_001C4388
// Address: 0x1c4388 - 0x1c4448
void sub_001C4388_0x1c4388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4388_0x1c4388");
#endif

    switch (ctx->pc) {
        case 0x1c4388u: goto label_1c4388;
        case 0x1c438cu: goto label_1c438c;
        case 0x1c4390u: goto label_1c4390;
        case 0x1c4394u: goto label_1c4394;
        case 0x1c4398u: goto label_1c4398;
        case 0x1c439cu: goto label_1c439c;
        case 0x1c43a0u: goto label_1c43a0;
        case 0x1c43a4u: goto label_1c43a4;
        case 0x1c43a8u: goto label_1c43a8;
        case 0x1c43acu: goto label_1c43ac;
        case 0x1c43b0u: goto label_1c43b0;
        case 0x1c43b4u: goto label_1c43b4;
        case 0x1c43b8u: goto label_1c43b8;
        case 0x1c43bcu: goto label_1c43bc;
        case 0x1c43c0u: goto label_1c43c0;
        case 0x1c43c4u: goto label_1c43c4;
        case 0x1c43c8u: goto label_1c43c8;
        case 0x1c43ccu: goto label_1c43cc;
        case 0x1c43d0u: goto label_1c43d0;
        case 0x1c43d4u: goto label_1c43d4;
        case 0x1c43d8u: goto label_1c43d8;
        case 0x1c43dcu: goto label_1c43dc;
        case 0x1c43e0u: goto label_1c43e0;
        case 0x1c43e4u: goto label_1c43e4;
        case 0x1c43e8u: goto label_1c43e8;
        case 0x1c43ecu: goto label_1c43ec;
        case 0x1c43f0u: goto label_1c43f0;
        case 0x1c43f4u: goto label_1c43f4;
        case 0x1c43f8u: goto label_1c43f8;
        case 0x1c43fcu: goto label_1c43fc;
        case 0x1c4400u: goto label_1c4400;
        case 0x1c4404u: goto label_1c4404;
        case 0x1c4408u: goto label_1c4408;
        case 0x1c440cu: goto label_1c440c;
        case 0x1c4410u: goto label_1c4410;
        case 0x1c4414u: goto label_1c4414;
        case 0x1c4418u: goto label_1c4418;
        case 0x1c441cu: goto label_1c441c;
        case 0x1c4420u: goto label_1c4420;
        case 0x1c4424u: goto label_1c4424;
        case 0x1c4428u: goto label_1c4428;
        case 0x1c442cu: goto label_1c442c;
        case 0x1c4430u: goto label_1c4430;
        case 0x1c4434u: goto label_1c4434;
        case 0x1c4438u: goto label_1c4438;
        case 0x1c443cu: goto label_1c443c;
        case 0x1c4440u: goto label_1c4440;
        case 0x1c4444u: goto label_1c4444;
        default: break;
    }

    ctx->pc = 0x1c4388u;

label_1c4388:
    // 0x1c4388: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c4388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c438c:
    // 0x1c438c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c4390:
    // 0x1c4390: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c4390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1c4394:
    // 0x1c4394: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c4394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c4398:
    // 0x1c4398: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c4398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c439c:
    // 0x1c439c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1c43a0:
    // 0x1c43a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c43a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c43a4:
    // 0x1c43a4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1c43a8:
    // 0x1c43a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1c43ac:
    if (ctx->pc == 0x1C43ACu) {
        ctx->pc = 0x1C43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43A8u;
        // 0x1c43ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43B0u;
        goto label_1c43b0;
    }
    ctx->pc = 0x1C43A8u;
    {
        const bool branch_taken_0x1c43a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43A8u;
        // 0x1c43ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43a8) {
            ctx->pc = 0x1C442Cu;
            goto label_1c442c;
        }
    }
    ctx->pc = 0x1C43B0u;
label_1c43b0:
    // 0x1c43b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c43b4:
    // 0x1c43b4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1c43b8:
    if (ctx->pc == 0x1C43B8u) {
        ctx->pc = 0x1C43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43B4u;
        // 0x1c43b8: 0x26510944  addiu       $s1, $s2, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43BCu;
        goto label_1c43bc;
    }
    ctx->pc = 0x1C43B4u;
    {
        const bool branch_taken_0x1c43b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43B4u;
        // 0x1c43b8: 0x26510944  addiu       $s1, $s2, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43b4) {
            ctx->pc = 0x1C441Cu;
            goto label_1c441c;
        }
    }
    ctx->pc = 0x1C43BCu;
label_1c43bc:
    // 0x1c43bc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1c43bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c43c0:
    // 0x1c43c0: 0x2413007f  addiu       $s3, $zero, 0x7F
    ctx->pc = 0x1c43c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1c43c4:
    // 0x1c43c4: 0x0  nop
    ctx->pc = 0x1c43c4u;
    // NOP
label_1c43c8:
    // 0x1c43c8: 0x92020951  lbu         $v0, 0x951($s0)
    ctx->pc = 0x1c43c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2385)));
label_1c43cc:
    // 0x1c43cc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1c43d0:
    if (ctx->pc == 0x1C43D0u) {
        ctx->pc = 0x1C43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43CCu;
        // 0x1c43d0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43D4u;
        goto label_1c43d4;
    }
    ctx->pc = 0x1C43CCu;
    {
        const bool branch_taken_0x1c43cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c43cc) {
            ctx->pc = 0x1C43D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C43CCu;
            // 0x1c43d0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4410u;
            goto label_1c4410;
        }
    }
    ctx->pc = 0x1C43D4u;
label_1c43d4:
    // 0x1c43d4: 0x8e060948  lw          $a2, 0x948($s0)
    ctx->pc = 0x1c43d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
label_1c43d8:
    // 0x1c43d8: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
label_1c43dc:
    if (ctx->pc == 0x1C43DCu) {
        ctx->pc = 0x1C43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43D8u;
        // 0x1c43dc: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43E0u;
        goto label_1c43e0;
    }
    ctx->pc = 0x1C43D8u;
    {
        const bool branch_taken_0x1c43d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c43d8) {
            ctx->pc = 0x1C43DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C43D8u;
            // 0x1c43dc: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C43F8u;
            goto label_1c43f8;
        }
    }
    ctx->pc = 0x1C43E0u;
label_1c43e0:
    // 0x1c43e0: 0xc0e4060  jal         func_390180
label_1c43e4:
    if (ctx->pc == 0x1C43E4u) {
        ctx->pc = 0x1C43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43E0u;
        // 0x1c43e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43E8u;
        goto label_1c43e8;
    }
    ctx->pc = 0x1C43E0u;
    SET_GPR_U32(ctx, 31, 0x1C43E8u);
    ctx->pc = 0x1C43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43E0u;
    // 0x1c43e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C43E0u, 0x1C43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43E8u;
label_1c43e8:
    // 0x1c43e8: 0xc07a6ba  jal         func_1E9AE8
label_1c43ec:
    if (ctx->pc == 0x1C43ECu) {
        ctx->pc = 0x1C43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43E8u;
        // 0x1c43ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43F0u;
        goto label_1c43f0;
    }
    ctx->pc = 0x1C43E8u;
    SET_GPR_U32(ctx, 31, 0x1C43F0u);
    ctx->pc = 0x1C43ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43E8u;
    // 0x1c43ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AE8u, 0x1C43E8u, 0x1C43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43F0u;
label_1c43f0:
    // 0x1c43f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c43f4:
    if (ctx->pc == 0x1C43F4u) {
        ctx->pc = 0x1C43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43F0u;
        // 0x1c43f4: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43F8u;
        goto label_1c43f8;
    }
    ctx->pc = 0x1C43F0u;
    {
        const bool branch_taken_0x1c43f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43F0u;
        // 0x1c43f4: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43f0) {
            ctx->pc = 0x1C4410u;
            goto label_1c4410;
        }
    }
    ctx->pc = 0x1C43F8u;
label_1c43f8:
    // 0x1c43f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c43f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c43fc:
    // 0x1c43fc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1c43fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1c4400:
    // 0x1c4400: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1c4400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1c4404:
    // 0x1c4404: 0x60f809  jalr        $v1
label_1c4408:
    if (ctx->pc == 0x1C4408u) {
        ctx->pc = 0x1C4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4404u;
        // 0x1c4408: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C440Cu;
        goto label_1c440c;
    }
    ctx->pc = 0x1C4404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C440Cu);
        ctx->pc = 0x1C4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4404u;
        // 0x1c4408: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4404u, 0x1C440Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C440Cu;
label_1c440c:
    // 0x1c440c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1c440cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1c4410:
    // 0x1c4410: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1c4410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1c4414:
    // 0x1c4414: 0x661ffec  bgez        $s3, . + 4 + (-0x14 << 2)
label_1c4418:
    if (ctx->pc == 0x1C4418u) {
        ctx->pc = 0x1C4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4414u;
        // 0x1c4418: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C441Cu;
        goto label_1c441c;
    }
    ctx->pc = 0x1C4414u;
    {
        const bool branch_taken_0x1c4414 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1C4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4414u;
        // 0x1c4418: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4414) {
            ctx->pc = 0x1C43C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c43c8;
        }
    }
    ctx->pc = 0x1C441Cu;
label_1c441c:
    // 0x1c441c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4420:
    // 0x1c4420: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1c4420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1c4424:
    // 0x1c4424: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1c4424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1c4428:
    // 0x1c4428: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c4428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c442c:
    // 0x1c442c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c442cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4430:
    // 0x1c4430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c4434:
    // 0x1c4434: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c4434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4438:
    // 0x1c4438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c443c:
    // 0x1c443c: 0x3e00008  jr          $ra
label_1c4440:
    if (ctx->pc == 0x1C4440u) {
        ctx->pc = 0x1C4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C443Cu;
        // 0x1c4440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4444u;
        goto label_1c4444;
    }
    ctx->pc = 0x1C443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C443Cu;
        // 0x1c4440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C443Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4444u;
label_1c4444:
    // 0x1c4444: 0x0  nop
    ctx->pc = 0x1c4444u;
    // NOP
    ctx->pc = 0x1c4448u;
}

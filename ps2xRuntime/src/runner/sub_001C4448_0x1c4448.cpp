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

// Function: sub_001C4448
// Address: 0x1c4448 - 0x1c4500
void sub_001C4448_0x1c4448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4448_0x1c4448");
#endif

    switch (ctx->pc) {
        case 0x1c4448u: goto label_1c4448;
        case 0x1c444cu: goto label_1c444c;
        case 0x1c4450u: goto label_1c4450;
        case 0x1c4454u: goto label_1c4454;
        case 0x1c4458u: goto label_1c4458;
        case 0x1c445cu: goto label_1c445c;
        case 0x1c4460u: goto label_1c4460;
        case 0x1c4464u: goto label_1c4464;
        case 0x1c4468u: goto label_1c4468;
        case 0x1c446cu: goto label_1c446c;
        case 0x1c4470u: goto label_1c4470;
        case 0x1c4474u: goto label_1c4474;
        case 0x1c4478u: goto label_1c4478;
        case 0x1c447cu: goto label_1c447c;
        case 0x1c4480u: goto label_1c4480;
        case 0x1c4484u: goto label_1c4484;
        case 0x1c4488u: goto label_1c4488;
        case 0x1c448cu: goto label_1c448c;
        case 0x1c4490u: goto label_1c4490;
        case 0x1c4494u: goto label_1c4494;
        case 0x1c4498u: goto label_1c4498;
        case 0x1c449cu: goto label_1c449c;
        case 0x1c44a0u: goto label_1c44a0;
        case 0x1c44a4u: goto label_1c44a4;
        case 0x1c44a8u: goto label_1c44a8;
        case 0x1c44acu: goto label_1c44ac;
        case 0x1c44b0u: goto label_1c44b0;
        case 0x1c44b4u: goto label_1c44b4;
        case 0x1c44b8u: goto label_1c44b8;
        case 0x1c44bcu: goto label_1c44bc;
        case 0x1c44c0u: goto label_1c44c0;
        case 0x1c44c4u: goto label_1c44c4;
        case 0x1c44c8u: goto label_1c44c8;
        case 0x1c44ccu: goto label_1c44cc;
        case 0x1c44d0u: goto label_1c44d0;
        case 0x1c44d4u: goto label_1c44d4;
        case 0x1c44d8u: goto label_1c44d8;
        case 0x1c44dcu: goto label_1c44dc;
        case 0x1c44e0u: goto label_1c44e0;
        case 0x1c44e4u: goto label_1c44e4;
        case 0x1c44e8u: goto label_1c44e8;
        case 0x1c44ecu: goto label_1c44ec;
        case 0x1c44f0u: goto label_1c44f0;
        case 0x1c44f4u: goto label_1c44f4;
        case 0x1c44f8u: goto label_1c44f8;
        case 0x1c44fcu: goto label_1c44fc;
        default: break;
    }

    ctx->pc = 0x1c4448u;

label_1c4448:
    // 0x1c4448: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c4448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c444c:
    // 0x1c444c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c4450:
    // 0x1c4450: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c4450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1c4454:
    // 0x1c4454: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c4454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c4458:
    // 0x1c4458: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c4458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c445c:
    // 0x1c445c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1c4460:
    // 0x1c4460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c4464:
    // 0x1c4464: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1c4468:
    // 0x1c4468: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1c446c:
    if (ctx->pc == 0x1C446Cu) {
        ctx->pc = 0x1C446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4468u;
        // 0x1c446c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4470u;
        goto label_1c4470;
    }
    ctx->pc = 0x1C4468u;
    {
        const bool branch_taken_0x1c4468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4468u;
        // 0x1c446c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4468) {
            ctx->pc = 0x1C44E4u;
            goto label_1c44e4;
        }
    }
    ctx->pc = 0x1C4470u;
label_1c4470:
    // 0x1c4470: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c4470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c4474:
    // 0x1c4474: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1c4478:
    if (ctx->pc == 0x1C4478u) {
        ctx->pc = 0x1C4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4474u;
        // 0x1c4478: 0x26510944  addiu       $s1, $s2, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C447Cu;
        goto label_1c447c;
    }
    ctx->pc = 0x1C4474u;
    {
        const bool branch_taken_0x1c4474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4474u;
        // 0x1c4478: 0x26510944  addiu       $s1, $s2, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4474) {
            ctx->pc = 0x1C44DCu;
            goto label_1c44dc;
        }
    }
    ctx->pc = 0x1C447Cu;
label_1c447c:
    // 0x1c447c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1c447cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c4480:
    // 0x1c4480: 0x2413007f  addiu       $s3, $zero, 0x7F
    ctx->pc = 0x1c4480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1c4484:
    // 0x1c4484: 0x0  nop
    ctx->pc = 0x1c4484u;
    // NOP
label_1c4488:
    // 0x1c4488: 0x92020951  lbu         $v0, 0x951($s0)
    ctx->pc = 0x1c4488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2385)));
label_1c448c:
    // 0x1c448c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1c4490:
    if (ctx->pc == 0x1C4490u) {
        ctx->pc = 0x1C4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C448Cu;
        // 0x1c4490: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4494u;
        goto label_1c4494;
    }
    ctx->pc = 0x1C448Cu;
    {
        const bool branch_taken_0x1c448c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c448c) {
            ctx->pc = 0x1C4490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C448Cu;
            // 0x1c4490: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C44D0u;
            goto label_1c44d0;
        }
    }
    ctx->pc = 0x1C4494u;
label_1c4494:
    // 0x1c4494: 0x8e060948  lw          $a2, 0x948($s0)
    ctx->pc = 0x1c4494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
label_1c4498:
    // 0x1c4498: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
label_1c449c:
    if (ctx->pc == 0x1C449Cu) {
        ctx->pc = 0x1C449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4498u;
        // 0x1c449c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C44A0u;
        goto label_1c44a0;
    }
    ctx->pc = 0x1C4498u;
    {
        const bool branch_taken_0x1c4498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4498) {
            ctx->pc = 0x1C449Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4498u;
            // 0x1c449c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C44B8u;
            goto label_1c44b8;
        }
    }
    ctx->pc = 0x1C44A0u;
label_1c44a0:
    // 0x1c44a0: 0xc0e4060  jal         func_390180
label_1c44a4:
    if (ctx->pc == 0x1C44A4u) {
        ctx->pc = 0x1C44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44A0u;
        // 0x1c44a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C44A8u;
        goto label_1c44a8;
    }
    ctx->pc = 0x1C44A0u;
    SET_GPR_U32(ctx, 31, 0x1C44A8u);
    ctx->pc = 0x1C44A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44A0u;
    // 0x1c44a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C44A0u, 0x1C44A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44A8u;
label_1c44a8:
    // 0x1c44a8: 0xc07a6ce  jal         func_1E9B38
label_1c44ac:
    if (ctx->pc == 0x1C44ACu) {
        ctx->pc = 0x1C44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44A8u;
        // 0x1c44ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C44B0u;
        goto label_1c44b0;
    }
    ctx->pc = 0x1C44A8u;
    SET_GPR_U32(ctx, 31, 0x1C44B0u);
    ctx->pc = 0x1C44ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44A8u;
    // 0x1c44ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9B38u, 0x1C44A8u, 0x1C44B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44B0u;
label_1c44b0:
    // 0x1c44b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c44b4:
    if (ctx->pc == 0x1C44B4u) {
        ctx->pc = 0x1C44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44B0u;
        // 0x1c44b4: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C44B8u;
        goto label_1c44b8;
    }
    ctx->pc = 0x1C44B0u;
    {
        const bool branch_taken_0x1c44b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44B0u;
        // 0x1c44b4: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44b0) {
            ctx->pc = 0x1C44D0u;
            goto label_1c44d0;
        }
    }
    ctx->pc = 0x1C44B8u;
label_1c44b8:
    // 0x1c44b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c44b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c44bc:
    // 0x1c44bc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1c44bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1c44c0:
    // 0x1c44c0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1c44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1c44c4:
    // 0x1c44c4: 0x60f809  jalr        $v1
label_1c44c8:
    if (ctx->pc == 0x1C44C8u) {
        ctx->pc = 0x1C44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44C4u;
        // 0x1c44c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C44CCu;
        goto label_1c44cc;
    }
    ctx->pc = 0x1C44C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C44CCu);
        ctx->pc = 0x1C44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44C4u;
        // 0x1c44c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44C4u, 0x1C44CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C44CCu;
label_1c44cc:
    // 0x1c44cc: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1c44ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1c44d0:
    // 0x1c44d0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1c44d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1c44d4:
    // 0x1c44d4: 0x661ffec  bgez        $s3, . + 4 + (-0x14 << 2)
label_1c44d8:
    if (ctx->pc == 0x1C44D8u) {
        ctx->pc = 0x1C44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44D4u;
        // 0x1c44d8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C44DCu;
        goto label_1c44dc;
    }
    ctx->pc = 0x1C44D4u;
    {
        const bool branch_taken_0x1c44d4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1C44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44D4u;
        // 0x1c44d8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44d4) {
            ctx->pc = 0x1C4488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4488;
        }
    }
    ctx->pc = 0x1C44DCu;
label_1c44dc:
    // 0x1c44dc: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1c44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1c44e0:
    // 0x1c44e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c44e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c44e4:
    // 0x1c44e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c44e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c44e8:
    // 0x1c44e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c44e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c44ec:
    // 0x1c44ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c44ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c44f0:
    // 0x1c44f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c44f4:
    // 0x1c44f4: 0x3e00008  jr          $ra
label_1c44f8:
    if (ctx->pc == 0x1C44F8u) {
        ctx->pc = 0x1C44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44F4u;
        // 0x1c44f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C44FCu;
        goto label_1c44fc;
    }
    ctx->pc = 0x1C44F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44F4u;
        // 0x1c44f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C44FCu;
label_1c44fc:
    // 0x1c44fc: 0x0  nop
    ctx->pc = 0x1c44fcu;
    // NOP
    ctx->pc = 0x1c4500u;
}

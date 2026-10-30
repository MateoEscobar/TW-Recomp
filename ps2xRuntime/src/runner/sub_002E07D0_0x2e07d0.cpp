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

// Function: sub_002E07D0
// Address: 0x2e07d0 - 0x2e0918
void sub_002E07D0_0x2e07d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E07D0_0x2e07d0");
#endif

    switch (ctx->pc) {
        case 0x2e086cu: goto label_2e086c;
        default: break;
    }

    ctx->pc = 0x2e07d0u;

    // 0x2e07d0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2e07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e07d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E07D4u;
    {
        const bool branch_taken_0x2e07d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E07D4u;
        // 0x2e07d8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e07d4) {
            ctx->pc = 0x2E07F0u;
            goto label_2e07f0;
        }
    }
    ctx->pc = 0x2E07DCu;
    // 0x2e07dc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2e07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e07e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e07e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e07e4: 0x94620032  lhu         $v0, 0x32($v1)
    ctx->pc = 0x2e07e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x2e07e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E07E8u;
    {
        const bool branch_taken_0x2e07e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E07E8u;
        // 0x2e07ec: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e07e8) {
            ctx->pc = 0x2E07F4u;
            goto label_2e07f4;
        }
    }
    ctx->pc = 0x2E07F0u;
label_2e07f0:
    // 0x2e07f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e07f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e07f4:
    // 0x2e07f4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2e07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2e07f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e07fc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E07FCu;
    {
        const bool branch_taken_0x2e07fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E0800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E07FCu;
        // 0x2e0800: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e07fc) {
            ctx->pc = 0x2E0824u;
            goto label_2e0824;
        }
    }
    ctx->pc = 0x2E0804u;
    // 0x2e0804: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2e0804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e0808: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0808u;
    {
        const bool branch_taken_0x2e0808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0808) {
            ctx->pc = 0x2E080Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0808u;
            // 0x2e080c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E081Cu;
            goto label_2e081c;
        }
    }
    ctx->pc = 0x2E0810u;
    // 0x2e0810: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2e0810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e0814: 0x94430032  lhu         $v1, 0x32($v0)
    ctx->pc = 0x2e0814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x2e0818: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e0818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e081c:
    // 0x2e081c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E081Cu;
    {
        const bool branch_taken_0x2e081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E081Cu;
        // 0x2e0820: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e081c) {
            ctx->pc = 0x2E0828u;
            goto label_2e0828;
        }
    }
    ctx->pc = 0x2E0824u;
label_2e0824:
    // 0x2e0824: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x2e0824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
label_2e0828:
    // 0x2e0828: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2e0828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e082c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0830: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E0830u;
    {
        const bool branch_taken_0x2e0830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0830u;
        // 0x2e0834: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0830) {
            ctx->pc = 0x2E08A0u;
            goto label_2e08a0;
        }
    }
    ctx->pc = 0x2E0838u;
    // 0x2e0838: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0838u;
    {
        const bool branch_taken_0x2e0838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0838u;
        // 0x2e083c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0838) {
            ctx->pc = 0x2E0850u;
            goto label_2e0850;
        }
    }
    ctx->pc = 0x2E0840u;
    // 0x2e0840: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0840u;
    {
        const bool branch_taken_0x2e0840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0840u;
        // 0x2e0844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0840) {
            ctx->pc = 0x2E0860u;
            goto label_2e0860;
        }
    }
    ctx->pc = 0x2E0848u;
    // 0x2e0848: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2E0848u;
    {
        const bool branch_taken_0x2e0848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0848) {
            ctx->pc = 0x2E090Cu;
            goto label_2e090c;
        }
    }
    ctx->pc = 0x2E0850u;
label_2e0850:
    // 0x2e0850: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E0850u;
    {
        const bool branch_taken_0x2e0850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0850u;
        // 0x2e0854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0850) {
            ctx->pc = 0x2E08DCu;
            goto label_2e08dc;
        }
    }
    ctx->pc = 0x2E0858u;
    // 0x2e0858: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2E0858u;
    {
        const bool branch_taken_0x2e0858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0858) {
            ctx->pc = 0x2E090Cu;
            goto label_2e090c;
        }
    }
    ctx->pc = 0x2E0860u;
label_2e0860:
    // 0x2e0860: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0860u;
    {
        const bool branch_taken_0x2e0860 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2E0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0860u;
        // 0x2e0864: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0860) {
            ctx->pc = 0x2E0890u;
            goto label_2e0890;
        }
    }
    ctx->pc = 0x2E0868u;
    // 0x2e0868: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e0868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2e086c:
    // 0x2e086c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E086Cu;
    {
        const bool branch_taken_0x2e086c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E086Cu;
        // 0x2e0870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e086c) {
            ctx->pc = 0x2E090Cu;
            goto label_2e090c;
        }
    }
    ctx->pc = 0x2E0874u;
    // 0x2e0874: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2e0874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e0878: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2e0878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2e087c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E087Cu;
    {
        const bool branch_taken_0x2e087c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e087c) {
            ctx->pc = 0x2E0880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E087Cu;
            // 0x2e0880: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0898u;
            goto label_2e0898;
        }
    }
    ctx->pc = 0x2E0884u;
    // 0x2e0884: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x2e0884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x2e0888: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0888u;
        // 0x2e088c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0890u;
label_2e0890:
    // 0x2e0890: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x2E0890u;
    {
        const bool branch_taken_0x2e0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0890u;
        // 0x2e0894: 0x45102a  slt         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0890) {
            ctx->pc = 0x2E086Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e086c;
        }
    }
    ctx->pc = 0x2E0898u;
label_2e0898:
    // 0x2e0898: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E0898u;
    {
        const bool branch_taken_0x2e0898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0898u;
        // 0x2e089c: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0898) {
            ctx->pc = 0x2E0908u;
            goto label_2e0908;
        }
    }
    ctx->pc = 0x2E08A0u;
label_2e08a0:
    // 0x2e08a0: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E08A0u;
    {
        const bool branch_taken_0x2e08a0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2E08A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08A0u;
        // 0x2e08a4: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08a0) {
            ctx->pc = 0x2E08BCu;
            goto label_2e08bc;
        }
    }
    ctx->pc = 0x2E08A8u;
    // 0x2e08a8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e08a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e08ac: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E08ACu;
    {
        const bool branch_taken_0x2e08ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e08ac) {
            ctx->pc = 0x2E08B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E08ACu;
            // 0x2e08b0: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0908u;
            goto label_2e0908;
        }
    }
    ctx->pc = 0x2E08B4u;
    // 0x2e08b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E08B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E08B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08B4u;
        // 0x2e08b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E08B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E08BCu;
label_2e08bc:
    // 0x2e08bc: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2e08bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e08c0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E08C0u;
    {
        const bool branch_taken_0x2e08c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08C0u;
        // 0x2e08c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08c0) {
            ctx->pc = 0x2E090Cu;
            goto label_2e090c;
        }
    }
    ctx->pc = 0x2E08C8u;
    // 0x2e08c8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2e08c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e08cc: 0x94620032  lhu         $v0, 0x32($v1)
    ctx->pc = 0x2e08ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x2e08d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e08d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e08d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E08D4u;
    {
        const bool branch_taken_0x2e08d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08D4u;
        // 0x2e08d8: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08d4) {
            ctx->pc = 0x2E0908u;
            goto label_2e0908;
        }
    }
    ctx->pc = 0x2E08DCu;
label_2e08dc:
    // 0x2e08dc: 0x18c00003  blez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E08DCu;
    {
        const bool branch_taken_0x2e08dc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2E08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08DCu;
        // 0x2e08e0: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08dc) {
            ctx->pc = 0x2E08ECu;
            goto label_2e08ec;
        }
    }
    ctx->pc = 0x2E08E4u;
    // 0x2e08e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E08E4u;
    {
        const bool branch_taken_0x2e08e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08E4u;
        // 0x2e08e8: 0xa3102a  slt         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08e4) {
            ctx->pc = 0x2E08F0u;
            goto label_2e08f0;
        }
    }
    ctx->pc = 0x2E08ECu;
label_2e08ec:
    // 0x2e08ec: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2e08ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2e08f0:
    // 0x2e08f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E08F0u;
    {
        const bool branch_taken_0x2e08f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08F0u;
        // 0x2e08f4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08f0) {
            ctx->pc = 0x2E0908u;
            goto label_2e0908;
        }
    }
    ctx->pc = 0x2E08F8u;
    // 0x2e08f8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2e08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e08fc: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x2e08fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x2e0900: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e0900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e0904: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x2e0904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_2e0908:
    // 0x2e0908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e090c:
    // 0x2e090c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E090Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E090Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0914u;
    // 0x2e0914: 0x0  nop
    ctx->pc = 0x2e0914u;
    // NOP
    ctx->pc = 0x2e0918u;
}

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

// Function: sub_0016BAC0
// Address: 0x16bac0 - 0x16bb58
void sub_0016BAC0_0x16bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BAC0_0x16bac0");
#endif

    switch (ctx->pc) {
        case 0x16baf0u: goto label_16baf0;
        case 0x16bb08u: goto label_16bb08;
        case 0x16bb10u: goto label_16bb10;
        case 0x16bb18u: goto label_16bb18;
        case 0x16bb28u: goto label_16bb28;
        default: break;
    }

    ctx->pc = 0x16bac0u;

    // 0x16bac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16bac4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16bac8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16bacc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16baccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16bad0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16bad4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16bad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bad8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16badc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16badcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bae0: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16BAE0u;
    {
        const bool branch_taken_0x16bae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAE0u;
        // 0x16bae4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bae0) {
            ctx->pc = 0x16BB3Cu;
            goto label_16bb3c;
        }
    }
    ctx->pc = 0x16BAE8u;
    // 0x16bae8: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16BAE8u;
    SET_GPR_U32(ctx, 31, 0x16BAF0u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16BAE8u, 0x16BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BAF0u;
label_16baf0:
    // 0x16baf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16baf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16baf4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16baf8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16BAF8u;
    {
        const bool branch_taken_0x16baf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAF8u;
        // 0x16bafc: 0x24910048  addiu       $s1, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16baf8) {
            ctx->pc = 0x16BB3Cu;
            goto label_16bb3c;
        }
    }
    ctx->pc = 0x16BB00u;
    // 0x16bb00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16bb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bb08:
    // 0x16bb08: 0xc137826  jal         func_4DE098
    ctx->pc = 0x16BB08u;
    SET_GPR_U32(ctx, 31, 0x16BB10u);
    ctx->pc = 0x16BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BB08u;
    // 0x16bb0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16BB08u, 0x16BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB10u;
label_16bb10:
    // 0x16bb10: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16BB10u;
    SET_GPR_U32(ctx, 31, 0x16BB18u);
    ctx->pc = 0x16BB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BB10u;
    // 0x16bb14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16BB10u, 0x16BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB18u;
label_16bb18:
    // 0x16bb18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BB18u;
    {
        const bool branch_taken_0x16bb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bb18) {
            ctx->pc = 0x16BB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BB18u;
            // 0x16bb1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BB30u;
            goto label_16bb30;
        }
    }
    ctx->pc = 0x16BB20u;
    // 0x16bb20: 0xc087502  jal         func_21D408
    ctx->pc = 0x16BB20u;
    SET_GPR_U32(ctx, 31, 0x16BB28u);
    ctx->pc = 0x16BB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BB20u;
    // 0x16bb24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16BB20u, 0x16BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB28u;
label_16bb28:
    // 0x16bb28: 0xa0520120  sb          $s2, 0x120($v0)
    ctx->pc = 0x16bb28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 288), (uint8_t)GPR_U32(ctx, 18));
    // 0x16bb2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16bb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16bb30:
    // 0x16bb30: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16bb30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16bb34: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x16BB34u;
    {
        const bool branch_taken_0x16bb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bb34) {
            ctx->pc = 0x16BB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BB34u;
            // 0x16bb38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bb08;
        }
    }
    ctx->pc = 0x16BB3Cu;
label_16bb3c:
    // 0x16bb3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16bb3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bb40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16bb40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bb44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16bb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bb48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x16BB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB4Cu;
        // 0x16bb50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BB54u;
    // 0x16bb54: 0x0  nop
    ctx->pc = 0x16bb54u;
    // NOP
    ctx->pc = 0x16bb58u;
}

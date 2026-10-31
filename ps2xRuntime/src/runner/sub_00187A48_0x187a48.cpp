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

// Function: sub_00187A48
// Address: 0x187a48 - 0x187aa8
void sub_00187A48_0x187a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187A48_0x187a48");
#endif

    switch (ctx->pc) {
        case 0x187a5cu: goto label_187a5c;
        case 0x187a68u: goto label_187a68;
        case 0x187a94u: goto label_187a94;
        default: break;
    }

    ctx->pc = 0x187a48u;

    // 0x187a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187a4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x187a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x187a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187a54: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x187A54u;
    SET_GPR_U32(ctx, 31, 0x187A5Cu);
    ctx->pc = 0x187A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A54u;
    // 0x187a58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x187A54u, 0x187A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A5Cu;
label_187a5c:
    // 0x187a5c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x187a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x187a60: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x187a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x187a64: 0x0  nop
    ctx->pc = 0x187a64u;
    // NOP
label_187a68:
    // 0x187a68: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x187a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x187a6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187A6Cu;
    {
        const bool branch_taken_0x187a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A6Cu;
        // 0x187a70: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a6c) {
            ctx->pc = 0x187A8Cu;
            goto label_187a8c;
        }
    }
    ctx->pc = 0x187A74u;
    // 0x187a74: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x187a74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x187a78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187A78u;
    {
        const bool branch_taken_0x187a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A78u;
        // 0x187a7c: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a78) {
            ctx->pc = 0x187A88u;
            goto label_187a88;
        }
    }
    ctx->pc = 0x187A80u;
    // 0x187a80: 0x5462fff9  bnel        $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x187A80u;
    {
        const bool branch_taken_0x187a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x187a80) {
            ctx->pc = 0x187A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187A80u;
            // 0x187a84: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187a68;
        }
    }
    ctx->pc = 0x187A88u;
label_187a88:
    // 0x187a88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x187a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_187a8c:
    // 0x187a8c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x187A8Cu;
    SET_GPR_U32(ctx, 31, 0x187A94u);
    ctx->pc = 0x187A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A8Cu;
    // 0x187a90: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x187A8Cu, 0x187A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A94u;
label_187a94:
    // 0x187a94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x187a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x187A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A9Cu;
        // 0x187aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187AA4u;
    // 0x187aa4: 0x0  nop
    ctx->pc = 0x187aa4u;
    // NOP
    ctx->pc = 0x187aa8u;
}

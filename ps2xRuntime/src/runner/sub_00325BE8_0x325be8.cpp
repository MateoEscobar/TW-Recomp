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

// Function: sub_00325BE8
// Address: 0x325be8 - 0x325cb0
void sub_00325BE8_0x325be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325BE8_0x325be8");
#endif

    switch (ctx->pc) {
        case 0x325c08u: goto label_325c08;
        case 0x325c1cu: goto label_325c1c;
        case 0x325c24u: goto label_325c24;
        case 0x325c28u: goto label_325c28;
        case 0x325c30u: goto label_325c30;
        case 0x325c48u: goto label_325c48;
        case 0x325c54u: goto label_325c54;
        case 0x325c60u: goto label_325c60;
        case 0x325c70u: goto label_325c70;
        case 0x325c7cu: goto label_325c7c;
        case 0x325c90u: goto label_325c90;
        default: break;
    }

    ctx->pc = 0x325be8u;

    // 0x325be8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325bf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x325bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x325bf4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x325bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x325bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x325bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325c00: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x325C00u;
    SET_GPR_U32(ctx, 31, 0x325C08u);
    ctx->pc = 0x325C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C00u;
    // 0x325c04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x325C00u, 0x325C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C08u;
label_325c08:
    // 0x325c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x325c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x325c10: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x325c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x325c14: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x325C14u;
    SET_GPR_U32(ctx, 31, 0x325C1Cu);
    ctx->pc = 0x325C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C14u;
    // 0x325c18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x325C14u, 0x325C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C1Cu;
label_325c1c:
    // 0x325c1c: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x325C1Cu;
    SET_GPR_U32(ctx, 31, 0x325C24u);
    ctx->pc = 0x325C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C1Cu;
    // 0x325c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x325C1Cu, 0x325C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C24u;
label_325c24:
    // 0x325c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_325c28:
    // 0x325c28: 0xc0c9088  jal         func_324220
    ctx->pc = 0x325C28u;
    SET_GPR_U32(ctx, 31, 0x325C30u);
    ctx->pc = 0x325C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C28u;
    // 0x325c2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324220u, 0x325C28u, 0x325C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C30u;
label_325c30:
    // 0x325c30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x325C30u;
    {
        const bool branch_taken_0x325c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C30u;
        // 0x325c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c30) {
            ctx->pc = 0x325C40u;
            goto label_325c40;
        }
    }
    ctx->pc = 0x325C38u;
    // 0x325c38: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x325C38u;
    {
        const bool branch_taken_0x325c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C38u;
        // 0x325c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c38) {
            ctx->pc = 0x325C98u;
            goto label_325c98;
        }
    }
    ctx->pc = 0x325C40u;
label_325c40:
    // 0x325c40: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x325C40u;
    SET_GPR_U32(ctx, 31, 0x325C48u);
    ctx->pc = 0x325C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C40u;
    // 0x325c44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x325C40u, 0x325C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C48u;
label_325c48:
    // 0x325c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c4c: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x325C4Cu;
    SET_GPR_U32(ctx, 31, 0x325C54u);
    ctx->pc = 0x325C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C4Cu;
    // 0x325c50: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x325C4Cu, 0x325C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C54u;
label_325c54:
    // 0x325c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c58: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x325C58u;
    SET_GPR_U32(ctx, 31, 0x325C60u);
    ctx->pc = 0x325C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C58u;
    // 0x325c5c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x325C58u, 0x325C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C60u;
label_325c60:
    // 0x325c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x325c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x325c68: 0xc0c9048  jal         func_324120
    ctx->pc = 0x325C68u;
    SET_GPR_U32(ctx, 31, 0x325C70u);
    ctx->pc = 0x325C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C68u;
    // 0x325c6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324120u, 0x325C68u, 0x325C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C70u;
label_325c70:
    // 0x325c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c74: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x325C74u;
    SET_GPR_U32(ctx, 31, 0x325C7Cu);
    ctx->pc = 0x325C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C74u;
    // 0x325c78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x325C74u, 0x325C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C7Cu;
label_325c7c:
    // 0x325c7c: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x325C7Cu;
    {
        const bool branch_taken_0x325c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x325C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C7Cu;
        // 0x325c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c7c) {
            ctx->pc = 0x325C98u;
            goto label_325c98;
        }
    }
    ctx->pc = 0x325C84u;
    // 0x325c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c88: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x325C88u;
    SET_GPR_U32(ctx, 31, 0x325C90u);
    ctx->pc = 0x325C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C88u;
    // 0x325c8c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x325C88u, 0x325C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C90u;
label_325c90:
    // 0x325c90: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x325C90u;
    {
        const bool branch_taken_0x325c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C90u;
        // 0x325c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c90) {
            ctx->pc = 0x325C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325c28;
        }
    }
    ctx->pc = 0x325C98u;
label_325c98:
    // 0x325c98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x325c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x325c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x325CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CA4u;
        // 0x325ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325CACu;
    // 0x325cac: 0x0  nop
    ctx->pc = 0x325cacu;
    // NOP
    ctx->pc = 0x325cb0u;
}

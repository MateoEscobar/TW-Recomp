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

// Function: sub_00226EE8
// Address: 0x226ee8 - 0x226f70
void sub_00226EE8_0x226ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226EE8_0x226ee8");
#endif

    switch (ctx->pc) {
        case 0x226efcu: goto label_226efc;
        case 0x226f04u: goto label_226f04;
        case 0x226f14u: goto label_226f14;
        case 0x226f1cu: goto label_226f1c;
        case 0x226f28u: goto label_226f28;
        case 0x226f30u: goto label_226f30;
        case 0x226f38u: goto label_226f38;
        case 0x226f48u: goto label_226f48;
        case 0x226f50u: goto label_226f50;
        case 0x226f5cu: goto label_226f5c;
        default: break;
    }

    ctx->pc = 0x226ee8u;

    // 0x226ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226eec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226ef4: 0xc087502  jal         func_21D408
    ctx->pc = 0x226EF4u;
    SET_GPR_U32(ctx, 31, 0x226EFCu);
    ctx->pc = 0x226EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EF4u;
    // 0x226ef8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226EF4u, 0x226EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EFCu;
label_226efc:
    // 0x226efc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x226EFCu;
    SET_GPR_U32(ctx, 31, 0x226F04u);
    ctx->pc = 0x226F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EFCu;
    // 0x226f00: 0x24440128  addiu       $a0, $v0, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x226EFCu, 0x226F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F04u;
label_226f04:
    // 0x226f04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226F04u;
    {
        const bool branch_taken_0x226f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226f04) {
            ctx->pc = 0x226F28u;
            goto label_226f28;
        }
    }
    ctx->pc = 0x226F0Cu;
    // 0x226f0c: 0xc087502  jal         func_21D408
    ctx->pc = 0x226F0Cu;
    SET_GPR_U32(ctx, 31, 0x226F14u);
    ctx->pc = 0x226F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F0Cu;
    // 0x226f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226F0Cu, 0x226F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F14u;
label_226f14:
    // 0x226f14: 0xc0e4060  jal         func_390180
    ctx->pc = 0x226F14u;
    SET_GPR_U32(ctx, 31, 0x226F1Cu);
    ctx->pc = 0x226F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F14u;
    // 0x226f18: 0x24440128  addiu       $a0, $v0, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x226F14u, 0x226F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F1Cu;
label_226f1c:
    // 0x226f1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x226f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f20: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x226F20u;
    SET_GPR_U32(ctx, 31, 0x226F28u);
    ctx->pc = 0x226F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F20u;
    // 0x226f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x226F20u, 0x226F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F28u;
label_226f28:
    // 0x226f28: 0xc087502  jal         func_21D408
    ctx->pc = 0x226F28u;
    SET_GPR_U32(ctx, 31, 0x226F30u);
    ctx->pc = 0x226F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F28u;
    // 0x226f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226F28u, 0x226F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F30u;
label_226f30:
    // 0x226f30: 0xc0e409a  jal         func_390268
    ctx->pc = 0x226F30u;
    SET_GPR_U32(ctx, 31, 0x226F38u);
    ctx->pc = 0x226F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F30u;
    // 0x226f34: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x226F30u, 0x226F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F38u;
label_226f38:
    // 0x226f38: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x226F38u;
    {
        const bool branch_taken_0x226f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226f38) {
            ctx->pc = 0x226F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226F38u;
            // 0x226f3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F60u;
            goto label_226f60;
        }
    }
    ctx->pc = 0x226F40u;
    // 0x226f40: 0xc087502  jal         func_21D408
    ctx->pc = 0x226F40u;
    SET_GPR_U32(ctx, 31, 0x226F48u);
    ctx->pc = 0x226F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F40u;
    // 0x226f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226F40u, 0x226F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F48u;
label_226f48:
    // 0x226f48: 0xc0e409a  jal         func_390268
    ctx->pc = 0x226F48u;
    SET_GPR_U32(ctx, 31, 0x226F50u);
    ctx->pc = 0x226F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F48u;
    // 0x226f4c: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x226F48u, 0x226F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F50u;
label_226f50:
    // 0x226f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f54: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x226F54u;
    SET_GPR_U32(ctx, 31, 0x226F5Cu);
    ctx->pc = 0x226F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F54u;
    // 0x226f58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x226F54u, 0x226F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F5Cu;
label_226f5c:
    // 0x226f5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226f60:
    // 0x226f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226f64: 0x3e00008  jr          $ra
    ctx->pc = 0x226F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F64u;
        // 0x226f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226F6Cu;
    // 0x226f6c: 0x0  nop
    ctx->pc = 0x226f6cu;
    // NOP
    ctx->pc = 0x226f70u;
}

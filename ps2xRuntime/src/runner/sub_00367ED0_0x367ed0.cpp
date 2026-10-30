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

// Function: sub_00367ED0
// Address: 0x367ed0 - 0x367f48
void sub_00367ED0_0x367ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367ED0_0x367ed0");
#endif

    switch (ctx->pc) {
        case 0x367ef0u: goto label_367ef0;
        case 0x367ef8u: goto label_367ef8;
        case 0x367f00u: goto label_367f00;
        case 0x367f0cu: goto label_367f0c;
        case 0x367f24u: goto label_367f24;
        case 0x367f30u: goto label_367f30;
        default: break;
    }

    ctx->pc = 0x367ed0u;

    // 0x367ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x367ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x367ed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x367ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x367edc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ee0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x367ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x367ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367ee8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367EE8u;
    SET_GPR_U32(ctx, 31, 0x367EF0u);
    ctx->pc = 0x367EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EE8u;
    // 0x367eec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367EE8u, 0x367EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367EF0u;
label_367ef0:
    // 0x367ef0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367EF0u;
    SET_GPR_U32(ctx, 31, 0x367EF8u);
    ctx->pc = 0x367EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EF0u;
    // 0x367ef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367EF0u, 0x367EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367EF8u;
label_367ef8:
    // 0x367ef8: 0xc0d502e  jal         func_3540B8
    ctx->pc = 0x367EF8u;
    SET_GPR_U32(ctx, 31, 0x367F00u);
    ctx->pc = 0x367EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EF8u;
    // 0x367efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3540B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3540B8u, 0x367EF8u, 0x367F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F00u;
label_367f00:
    // 0x367f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x367f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f04: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x367F04u;
    SET_GPR_U32(ctx, 31, 0x367F0Cu);
    ctx->pc = 0x367F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F04u;
    // 0x367f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x367F04u, 0x367F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F0Cu;
label_367f0c:
    // 0x367f0c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x367F0Cu;
    {
        const bool branch_taken_0x367f0c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x367F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F0Cu;
        // 0x367f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f0c) {
            ctx->pc = 0x367F28u;
            goto label_367f28;
        }
    }
    ctx->pc = 0x367F14u;
    // 0x367f14: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x367f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x367f18: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x367f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x367f1c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x367F1Cu;
    SET_GPR_U32(ctx, 31, 0x367F24u);
    ctx->pc = 0x367F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F1Cu;
    // 0x367f20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x367F1Cu, 0x367F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F24u;
label_367f24:
    // 0x367f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_367f28:
    // 0x367f28: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x367F28u;
    SET_GPR_U32(ctx, 31, 0x367F30u);
    ctx->pc = 0x367F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F28u;
    // 0x367f2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x367F28u, 0x367F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F30u;
label_367f30:
    // 0x367f30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x367f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x367f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x367f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367f40: 0x3e00008  jr          $ra
    ctx->pc = 0x367F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F40u;
        // 0x367f44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367F48u;
}

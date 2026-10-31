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

// Function: sub_00379F80
// Address: 0x379f80 - 0x379fd0
void sub_00379F80_0x379f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379F80_0x379f80");
#endif

    switch (ctx->pc) {
        case 0x379f9cu: goto label_379f9c;
        case 0x379fa4u: goto label_379fa4;
        case 0x379facu: goto label_379fac;
        case 0x379fb8u: goto label_379fb8;
        default: break;
    }

    ctx->pc = 0x379f80u;

    // 0x379f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x379f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x379f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x379f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x379f8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379f94: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379F94u;
    SET_GPR_U32(ctx, 31, 0x379F9Cu);
    ctx->pc = 0x379F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379F94u;
    // 0x379f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379F94u, 0x379F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379F9Cu;
label_379f9c:
    // 0x379f9c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379F9Cu;
    SET_GPR_U32(ctx, 31, 0x379FA4u);
    ctx->pc = 0x379FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379F9Cu;
    // 0x379fa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379F9Cu, 0x379FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379FA4u;
label_379fa4:
    // 0x379fa4: 0xc0e5d42  jal         func_397508
    ctx->pc = 0x379FA4u;
    SET_GPR_U32(ctx, 31, 0x379FACu);
    ctx->pc = 0x379FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379FA4u;
    // 0x379fa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397508u, 0x379FA4u, 0x379FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379FACu;
label_379fac:
    // 0x379fac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x379facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379fb0: 0xc102562  jal         func_409588
    ctx->pc = 0x379FB0u;
    SET_GPR_U32(ctx, 31, 0x379FB8u);
    ctx->pc = 0x379FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379FB0u;
    // 0x379fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x379FB0u, 0x379FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379FB8u;
label_379fb8:
    // 0x379fb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x379fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x379FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379FC4u;
        // 0x379fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379FCCu;
    // 0x379fcc: 0x0  nop
    ctx->pc = 0x379fccu;
    // NOP
    ctx->pc = 0x379fd0u;
}

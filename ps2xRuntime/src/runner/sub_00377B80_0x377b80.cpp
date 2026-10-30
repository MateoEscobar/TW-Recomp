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

// Function: sub_00377B80
// Address: 0x377b80 - 0x377bd0
void sub_00377B80_0x377b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377B80_0x377b80");
#endif

    switch (ctx->pc) {
        case 0x377b9cu: goto label_377b9c;
        case 0x377ba4u: goto label_377ba4;
        case 0x377bacu: goto label_377bac;
        case 0x377bb8u: goto label_377bb8;
        default: break;
    }

    ctx->pc = 0x377b80u;

    // 0x377b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x377b84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377b88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x377b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x377b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377b94: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377B94u;
    SET_GPR_U32(ctx, 31, 0x377B9Cu);
    ctx->pc = 0x377B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377B94u;
    // 0x377b98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377B94u, 0x377B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377B9Cu;
label_377b9c:
    // 0x377b9c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377B9Cu;
    SET_GPR_U32(ctx, 31, 0x377BA4u);
    ctx->pc = 0x377BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377B9Cu;
    // 0x377ba0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377B9Cu, 0x377BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377BA4u;
label_377ba4:
    // 0x377ba4: 0xc0e59ea  jal         func_3967A8
    ctx->pc = 0x377BA4u;
    SET_GPR_U32(ctx, 31, 0x377BACu);
    ctx->pc = 0x377BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377BA4u;
    // 0x377ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3967A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3967A8u, 0x377BA4u, 0x377BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377BACu;
label_377bac:
    // 0x377bac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x377bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377bb0: 0xc102562  jal         func_409588
    ctx->pc = 0x377BB0u;
    SET_GPR_U32(ctx, 31, 0x377BB8u);
    ctx->pc = 0x377BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377BB0u;
    // 0x377bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x377BB0u, 0x377BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377BB8u;
label_377bb8:
    // 0x377bb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x377bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x377bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x377BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377BC4u;
        // 0x377bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377BCCu;
    // 0x377bcc: 0x0  nop
    ctx->pc = 0x377bccu;
    // NOP
    ctx->pc = 0x377bd0u;
}

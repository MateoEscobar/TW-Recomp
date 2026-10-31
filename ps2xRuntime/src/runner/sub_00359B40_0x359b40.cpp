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

// Function: sub_00359B40
// Address: 0x359b40 - 0x359b90
void sub_00359B40_0x359b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359B40_0x359b40");
#endif

    switch (ctx->pc) {
        case 0x359b5cu: goto label_359b5c;
        case 0x359b64u: goto label_359b64;
        case 0x359b6cu: goto label_359b6c;
        case 0x359b78u: goto label_359b78;
        default: break;
    }

    ctx->pc = 0x359b40u;

    // 0x359b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x359b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x359b4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359b54: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359B54u;
    SET_GPR_U32(ctx, 31, 0x359B5Cu);
    ctx->pc = 0x359B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B54u;
    // 0x359b58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359B54u, 0x359B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B5Cu;
label_359b5c:
    // 0x359b5c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359B5Cu;
    SET_GPR_U32(ctx, 31, 0x359B64u);
    ctx->pc = 0x359B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B5Cu;
    // 0x359b60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359B5Cu, 0x359B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B64u;
label_359b64:
    // 0x359b64: 0xc08d7e0  jal         func_235F80
    ctx->pc = 0x359B64u;
    SET_GPR_U32(ctx, 31, 0x359B6Cu);
    ctx->pc = 0x359B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B64u;
    // 0x359b68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235F80u, 0x359B64u, 0x359B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B6Cu;
label_359b6c:
    // 0x359b6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x359b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b70: 0xc102562  jal         func_409588
    ctx->pc = 0x359B70u;
    SET_GPR_U32(ctx, 31, 0x359B78u);
    ctx->pc = 0x359B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B70u;
    // 0x359b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x359B70u, 0x359B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B78u;
label_359b78:
    // 0x359b78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x359b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x359b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359b84: 0x3e00008  jr          $ra
    ctx->pc = 0x359B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359B84u;
        // 0x359b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359B8Cu;
    // 0x359b8c: 0x0  nop
    ctx->pc = 0x359b8cu;
    // NOP
    ctx->pc = 0x359b90u;
}

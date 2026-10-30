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

// Function: sub_00105898
// Address: 0x105898 - 0x1058d8
void sub_00105898_0x105898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105898_0x105898");
#endif

    switch (ctx->pc) {
        case 0x1058b8u: goto label_1058b8;
        case 0x1058c0u: goto label_1058c0;
        default: break;
    }

    ctx->pc = 0x105898u;

    // 0x105898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10589c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10589cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1058a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1058a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1058a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1058a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058a8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1058a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1058ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1058acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1058b0: 0xc05d448  jal         func_175120
    ctx->pc = 0x1058B0u;
    SET_GPR_U32(ctx, 31, 0x1058B8u);
    ctx->pc = 0x1058B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1058B0u;
    // 0x1058b4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x1058B0u, 0x1058B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058B8u;
label_1058b8:
    // 0x1058b8: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x1058B8u;
    SET_GPR_U32(ctx, 31, 0x1058C0u);
    ctx->pc = 0x1058BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1058B8u;
    // 0x1058bc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x1058B8u, 0x1058C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058C0u;
label_1058c0:
    // 0x1058c0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1058c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1058c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1058c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1058c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1058c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1058cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1058CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1058D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058CCu;
        // 0x1058d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1058CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1058D4u;
    // 0x1058d4: 0x0  nop
    ctx->pc = 0x1058d4u;
    // NOP
    ctx->pc = 0x1058d8u;
}

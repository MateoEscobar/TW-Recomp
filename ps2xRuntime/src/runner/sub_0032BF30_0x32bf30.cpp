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

// Function: sub_0032BF30
// Address: 0x32bf30 - 0x32bf80
void sub_0032BF30_0x32bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BF30_0x32bf30");
#endif

    switch (ctx->pc) {
        case 0x32bf48u: goto label_32bf48;
        case 0x32bf50u: goto label_32bf50;
        case 0x32bf58u: goto label_32bf58;
        case 0x32bf60u: goto label_32bf60;
        case 0x32bf6cu: goto label_32bf6c;
        default: break;
    }

    ctx->pc = 0x32bf30u;

    // 0x32bf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bf34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32bf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bf38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32bf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32bf3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32bf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bf40: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BF40u;
    SET_GPR_U32(ctx, 31, 0x32BF48u);
    ctx->pc = 0x32BF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF40u;
    // 0x32bf44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BF40u, 0x32BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF48u;
label_32bf48:
    // 0x32bf48: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BF48u;
    SET_GPR_U32(ctx, 31, 0x32BF50u);
    ctx->pc = 0x32BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF48u;
    // 0x32bf4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BF48u, 0x32BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF50u;
label_32bf50:
    // 0x32bf50: 0xc12e2d6  jal         func_4B8B58
    ctx->pc = 0x32BF50u;
    SET_GPR_U32(ctx, 31, 0x32BF58u);
    ctx->pc = 0x32BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF50u;
    // 0x32bf54: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8B58u, 0x32BF50u, 0x32BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF58u;
label_32bf58:
    // 0x32bf58: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32BF58u;
    SET_GPR_U32(ctx, 31, 0x32BF60u);
    ctx->pc = 0x32BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF58u;
    // 0x32bf5c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32BF58u, 0x32BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF60u;
label_32bf60:
    // 0x32bf60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bf64: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32BF64u;
    SET_GPR_U32(ctx, 31, 0x32BF6Cu);
    ctx->pc = 0x32BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF64u;
    // 0x32bf68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32BF64u, 0x32BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF6Cu;
label_32bf6c:
    // 0x32bf6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32bf6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bf70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bf74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bf78: 0x3e00008  jr          $ra
    ctx->pc = 0x32BF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BF78u;
        // 0x32bf7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BF80u;
}

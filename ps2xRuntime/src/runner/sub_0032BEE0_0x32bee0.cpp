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

// Function: sub_0032BEE0
// Address: 0x32bee0 - 0x32bf30
void sub_0032BEE0_0x32bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BEE0_0x32bee0");
#endif

    switch (ctx->pc) {
        case 0x32bef8u: goto label_32bef8;
        case 0x32bf00u: goto label_32bf00;
        case 0x32bf08u: goto label_32bf08;
        case 0x32bf10u: goto label_32bf10;
        case 0x32bf1cu: goto label_32bf1c;
        default: break;
    }

    ctx->pc = 0x32bee0u;

    // 0x32bee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bee8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32bee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32beec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32beecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bef0: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BEF0u;
    SET_GPR_U32(ctx, 31, 0x32BEF8u);
    ctx->pc = 0x32BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BEF0u;
    // 0x32bef4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BEF0u, 0x32BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BEF8u;
label_32bef8:
    // 0x32bef8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BEF8u;
    SET_GPR_U32(ctx, 31, 0x32BF00u);
    ctx->pc = 0x32BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BEF8u;
    // 0x32befc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BEF8u, 0x32BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF00u;
label_32bf00:
    // 0x32bf00: 0xc12e266  jal         func_4B8998
    ctx->pc = 0x32BF00u;
    SET_GPR_U32(ctx, 31, 0x32BF08u);
    ctx->pc = 0x32BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF00u;
    // 0x32bf04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8998u, 0x32BF00u, 0x32BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF08u;
label_32bf08:
    // 0x32bf08: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32BF08u;
    SET_GPR_U32(ctx, 31, 0x32BF10u);
    ctx->pc = 0x32BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF08u;
    // 0x32bf0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32BF08u, 0x32BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF10u;
label_32bf10:
    // 0x32bf10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bf14: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32BF14u;
    SET_GPR_U32(ctx, 31, 0x32BF1Cu);
    ctx->pc = 0x32BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF14u;
    // 0x32bf18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32BF14u, 0x32BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF1Cu;
label_32bf1c:
    // 0x32bf1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32bf1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bf20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bf24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bf28: 0x3e00008  jr          $ra
    ctx->pc = 0x32BF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BF28u;
        // 0x32bf2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BF30u;
}

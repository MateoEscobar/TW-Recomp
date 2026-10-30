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

// Function: sub_0032BE60
// Address: 0x32be60 - 0x32bee0
void sub_0032BE60_0x32be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BE60_0x32be60");
#endif

    switch (ctx->pc) {
        case 0x32be7cu: goto label_32be7c;
        case 0x32be84u: goto label_32be84;
        case 0x32be94u: goto label_32be94;
        case 0x32be9cu: goto label_32be9c;
        case 0x32bea8u: goto label_32bea8;
        case 0x32bebcu: goto label_32bebc;
        case 0x32bec8u: goto label_32bec8;
        default: break;
    }

    ctx->pc = 0x32be60u;

    // 0x32be60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32be60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32be64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32be64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32be68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32be68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32be6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32be6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32be70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32be74: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BE74u;
    SET_GPR_U32(ctx, 31, 0x32BE7Cu);
    ctx->pc = 0x32BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE74u;
    // 0x32be78: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BE74u, 0x32BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE7Cu;
label_32be7c:
    // 0x32be7c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BE7Cu;
    SET_GPR_U32(ctx, 31, 0x32BE84u);
    ctx->pc = 0x32BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE7Cu;
    // 0x32be80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BE7Cu, 0x32BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE84u;
label_32be84:
    // 0x32be84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x32be84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32be88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32be88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x32be8c: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BE8Cu;
    SET_GPR_U32(ctx, 31, 0x32BE94u);
    ctx->pc = 0x32BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE8Cu;
    // 0x32be90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BE8Cu, 0x32BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE94u;
label_32be94:
    // 0x32be94: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BE94u;
    SET_GPR_U32(ctx, 31, 0x32BE9Cu);
    ctx->pc = 0x32BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE94u;
    // 0x32be98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BE94u, 0x32BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE9Cu;
label_32be9c:
    // 0x32be9c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x32be9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x32bea0: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x32BEA0u;
    SET_GPR_U32(ctx, 31, 0x32BEA8u);
    ctx->pc = 0x32BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BEA0u;
    // 0x32bea4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x32BEA0u, 0x32BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BEA8u;
label_32bea8:
    // 0x32bea8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x32bea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x32beac: 0x34212edf  ori         $at, $at, 0x2EDF
    ctx->pc = 0x32beacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11999);
    // 0x32beb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x32beb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32beb4: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32BEB4u;
    SET_GPR_U32(ctx, 31, 0x32BEBCu);
    ctx->pc = 0x32BEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BEB4u;
    // 0x32beb8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32BEB4u, 0x32BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BEBCu;
label_32bebc:
    // 0x32bebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bec0: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32BEC0u;
    SET_GPR_U32(ctx, 31, 0x32BEC8u);
    ctx->pc = 0x32BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BEC0u;
    // 0x32bec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32BEC0u, 0x32BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BEC8u;
label_32bec8:
    // 0x32bec8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32bec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32becc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32beccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bed4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x32bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32bed8: 0x3e00008  jr          $ra
    ctx->pc = 0x32BED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BED8u;
        // 0x32bedc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BEE0u;
}

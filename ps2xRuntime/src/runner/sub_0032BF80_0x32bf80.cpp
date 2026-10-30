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

// Function: sub_0032BF80
// Address: 0x32bf80 - 0x32bff8
void sub_0032BF80_0x32bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BF80_0x32bf80");
#endif

    switch (ctx->pc) {
        case 0x32bf9cu: goto label_32bf9c;
        case 0x32bfa4u: goto label_32bfa4;
        case 0x32bfb4u: goto label_32bfb4;
        case 0x32bfbcu: goto label_32bfbc;
        case 0x32bfc8u: goto label_32bfc8;
        case 0x32bfd0u: goto label_32bfd0;
        case 0x32bfdcu: goto label_32bfdc;
        default: break;
    }

    ctx->pc = 0x32bf80u;

    // 0x32bf80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32bf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32bf84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bf88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32bf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32bf8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32bf8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bf90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32bf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bf94: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BF94u;
    SET_GPR_U32(ctx, 31, 0x32BF9Cu);
    ctx->pc = 0x32BF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF94u;
    // 0x32bf98: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BF94u, 0x32BF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF9Cu;
label_32bf9c:
    // 0x32bf9c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BF9Cu;
    SET_GPR_U32(ctx, 31, 0x32BFA4u);
    ctx->pc = 0x32BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF9Cu;
    // 0x32bfa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BF9Cu, 0x32BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFA4u;
label_32bfa4:
    // 0x32bfa4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x32bfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bfa8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32bfa8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x32bfac: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BFACu;
    SET_GPR_U32(ctx, 31, 0x32BFB4u);
    ctx->pc = 0x32BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFACu;
    // 0x32bfb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BFACu, 0x32BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFB4u;
label_32bfb4:
    // 0x32bfb4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BFB4u;
    SET_GPR_U32(ctx, 31, 0x32BFBCu);
    ctx->pc = 0x32BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFB4u;
    // 0x32bfb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BFB4u, 0x32BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFBCu;
label_32bfbc:
    // 0x32bfbc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x32bfbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x32bfc0: 0xc12e61c  jal         func_4B9870
    ctx->pc = 0x32BFC0u;
    SET_GPR_U32(ctx, 31, 0x32BFC8u);
    ctx->pc = 0x32BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFC0u;
    // 0x32bfc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B9870u, 0x32BFC0u, 0x32BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFC8u;
label_32bfc8:
    // 0x32bfc8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32BFC8u;
    SET_GPR_U32(ctx, 31, 0x32BFD0u);
    ctx->pc = 0x32BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFC8u;
    // 0x32bfcc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32BFC8u, 0x32BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFD0u;
label_32bfd0:
    // 0x32bfd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bfd4: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32BFD4u;
    SET_GPR_U32(ctx, 31, 0x32BFDCu);
    ctx->pc = 0x32BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFD4u;
    // 0x32bfd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32BFD4u, 0x32BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFDCu;
label_32bfdc:
    // 0x32bfdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32bfdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bfe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bfe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bfe8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x32bfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32bfec: 0x3e00008  jr          $ra
    ctx->pc = 0x32BFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BFECu;
        // 0x32bff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BFF4u;
    // 0x32bff4: 0x0  nop
    ctx->pc = 0x32bff4u;
    // NOP
    ctx->pc = 0x32bff8u;
}

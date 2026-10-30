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

// Function: sub_002FDF70
// Address: 0x2fdf70 - 0x2fe000
void sub_002FDF70_0x2fdf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDF70_0x2fdf70");
#endif

    switch (ctx->pc) {
        case 0x2fdfa0u: goto label_2fdfa0;
        case 0x2fdfa8u: goto label_2fdfa8;
        case 0x2fdfb8u: goto label_2fdfb8;
        case 0x2fdfc4u: goto label_2fdfc4;
        case 0x2fdfe0u: goto label_2fdfe0;
        default: break;
    }

    ctx->pc = 0x2fdf70u;

    // 0x2fdf70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fdf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fdf74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fdf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fdf78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2fdf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2fdf7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fdf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdf80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fdf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fdf84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fdf84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdf88: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2fdf88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fdf8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2fdf8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdf90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2fdf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2fdf94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fdf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fdf98: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FDF98u;
    SET_GPR_U32(ctx, 31, 0x2FDFA0u);
    ctx->pc = 0x2FDF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDF98u;
    // 0x2fdf9c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FDF98u, 0x2FDFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDFA0u;
label_2fdfa0:
    // 0x2fdfa0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2FDFA0u;
    SET_GPR_U32(ctx, 31, 0x2FDFA8u);
    ctx->pc = 0x2FDFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDFA0u;
    // 0x2fdfa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2FDFA0u, 0x2FDFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDFA8u;
label_2fdfa8:
    // 0x2fdfa8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FDFA8u;
    {
        const bool branch_taken_0x2fdfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDFA8u;
        // 0x2fdfac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdfa8) {
            ctx->pc = 0x2FDFE4u;
            goto label_2fdfe4;
        }
    }
    ctx->pc = 0x2FDFB0u;
    // 0x2fdfb0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2FDFB0u;
    SET_GPR_U32(ctx, 31, 0x2FDFB8u);
    ctx->pc = 0x2FDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDFB0u;
    // 0x2fdfb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FDFB0u, 0x2FDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDFB8u;
label_2fdfb8:
    // 0x2fdfb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fdfb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfbc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2FDFBCu;
    SET_GPR_U32(ctx, 31, 0x2FDFC4u);
    ctx->pc = 0x2FDFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDFBCu;
    // 0x2fdfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2FDFBCu, 0x2FDFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDFC4u;
label_2fdfc4:
    // 0x2fdfc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDFC4u;
    {
        const bool branch_taken_0x2fdfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDFC4u;
        // 0x2fdfc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdfc4) {
            ctx->pc = 0x2FDFE0u;
            goto label_2fdfe0;
        }
    }
    ctx->pc = 0x2FDFCCu;
    // 0x2fdfcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fdfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2fdfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2fdfd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2fdfd8: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2FDFD8u;
    SET_GPR_U32(ctx, 31, 0x2FDFE0u);
    ctx->pc = 0x2FDFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDFD8u;
    // 0x2fdfdc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2FDFD8u, 0x2FDFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDFE0u;
label_2fdfe0:
    // 0x2fdfe0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2fdfe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fdfe4:
    // 0x2fdfe4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2fdfe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fdfe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fdfe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fdfec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fdfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdff0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2fdff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fdff4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDFF4u;
        // 0x2fdff8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDFFCu;
    // 0x2fdffc: 0x0  nop
    ctx->pc = 0x2fdffcu;
    // NOP
    ctx->pc = 0x2fe000u;
}

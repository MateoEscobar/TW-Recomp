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

// Function: sub_0012DE48
// Address: 0x12de48 - 0x12ded8
void sub_0012DE48_0x12de48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DE48_0x12de48");
#endif

    switch (ctx->pc) {
        case 0x12de94u: goto label_12de94;
        case 0x12deb0u: goto label_12deb0;
        default: break;
    }

    ctx->pc = 0x12de48u;

    // 0x12de48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12de48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12de4c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x12de4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x12de50: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x12de50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x12de54: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x12de54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12de58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x12de58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x12de5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12de5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12de60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12de64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12de64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12de68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12de6c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12de6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de70: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x12de70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x12de74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12de74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de78: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x12de78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x12de7c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x12de7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x12de80: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12de80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x12de84: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x12de84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12de88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12de88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de8c: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x12DE8Cu;
    SET_GPR_U32(ctx, 31, 0x12DE94u);
    ctx->pc = 0x12DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE8Cu;
    // 0x12de90: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x12DE8Cu, 0x12DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE94u;
label_12de94:
    // 0x12de94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12de94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12de98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12de9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dea0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12dea0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12dea4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x12dea4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x12dea8: 0xc04b7b6  jal         func_12DED8
    ctx->pc = 0x12DEA8u;
    SET_GPR_U32(ctx, 31, 0x12DEB0u);
    ctx->pc = 0x12DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DEA8u;
    // 0x12deac: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED8u, 0x12DEA8u, 0x12DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DEB0u;
label_12deb0:
    // 0x12deb0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x12deb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12deb4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x12deb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12deb8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x12deb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12debc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12debcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12dec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12dec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12dec4: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x12dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12dec8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x12dec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12decc: 0x3e00008  jr          $ra
    ctx->pc = 0x12DECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DECCu;
        // 0x12ded0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DED4u;
    // 0x12ded4: 0x0  nop
    ctx->pc = 0x12ded4u;
    // NOP
    ctx->pc = 0x12ded8u;
}

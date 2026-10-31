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

// Function: sub_0036EA78
// Address: 0x36ea78 - 0x36eb80
void sub_0036EA78_0x36ea78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EA78_0x36ea78");
#endif

    switch (ctx->pc) {
        case 0x36eaacu: goto label_36eaac;
        case 0x36eab4u: goto label_36eab4;
        case 0x36eac8u: goto label_36eac8;
        case 0x36ead0u: goto label_36ead0;
        case 0x36eae4u: goto label_36eae4;
        case 0x36eaecu: goto label_36eaec;
        case 0x36eb00u: goto label_36eb00;
        case 0x36eb20u: goto label_36eb20;
        case 0x36eb28u: goto label_36eb28;
        case 0x36eb3cu: goto label_36eb3c;
        case 0x36eb58u: goto label_36eb58;
        default: break;
    }

    ctx->pc = 0x36ea78u;

    // 0x36ea78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36ea78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36ea7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ea80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36ea80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36ea84: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36ea84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36ea88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36ea88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ea8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36ea8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ea90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36ea90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36ea94: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36ea94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x36ea98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ea98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ea9c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x36ea9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36eaa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36eaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36eaa4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36EAA4u;
    SET_GPR_U32(ctx, 31, 0x36EAACu);
    ctx->pc = 0x36EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAA4u;
    // 0x36eaa8: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36EAA4u, 0x36EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAACu;
label_36eaac:
    // 0x36eaac: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36EAACu;
    SET_GPR_U32(ctx, 31, 0x36EAB4u);
    ctx->pc = 0x36EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAACu;
    // 0x36eab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36EAACu, 0x36EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAB4u;
label_36eab4:
    // 0x36eab4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36eab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eab8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36eab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eabc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36eac0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36EAC0u;
    SET_GPR_U32(ctx, 31, 0x36EAC8u);
    ctx->pc = 0x36EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAC0u;
    // 0x36eac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36EAC0u, 0x36EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAC8u;
label_36eac8:
    // 0x36eac8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36EAC8u;
    SET_GPR_U32(ctx, 31, 0x36EAD0u);
    ctx->pc = 0x36EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAC8u;
    // 0x36eacc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36EAC8u, 0x36EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAD0u;
label_36ead0:
    // 0x36ead0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ead0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ead4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36ead4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ead8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36eadc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36EADCu;
    SET_GPR_U32(ctx, 31, 0x36EAE4u);
    ctx->pc = 0x36EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EADCu;
    // 0x36eae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36EADCu, 0x36EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAE4u;
label_36eae4:
    // 0x36eae4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36EAE4u;
    SET_GPR_U32(ctx, 31, 0x36EAECu);
    ctx->pc = 0x36EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAE4u;
    // 0x36eae8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36EAE4u, 0x36EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAECu;
label_36eaec:
    // 0x36eaec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36eaecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36eaf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36eaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eaf4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36eaf8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36EAF8u;
    SET_GPR_U32(ctx, 31, 0x36EB00u);
    ctx->pc = 0x36EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAF8u;
    // 0x36eafc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36EAF8u, 0x36EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB00u;
label_36eb00:
    // 0x36eb00: 0x3406814e  ori         $a2, $zero, 0x814E
    ctx->pc = 0x36eb00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33102);
    // 0x36eb04: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x36eb04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x36eb08: 0x34c6e000  ori         $a2, $a2, 0xE000
    ctx->pc = 0x36eb08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x36eb0c: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x36eb0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x36eb10: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x36eb10u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36eb14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36eb18: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36EB18u;
    SET_GPR_U32(ctx, 31, 0x36EB20u);
    ctx->pc = 0x36EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EB18u;
    // 0x36eb1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36EB18u, 0x36EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB20u;
label_36eb20:
    // 0x36eb20: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36EB20u;
    SET_GPR_U32(ctx, 31, 0x36EB28u);
    ctx->pc = 0x36EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EB20u;
    // 0x36eb24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36EB20u, 0x36EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB28u;
label_36eb28:
    // 0x36eb28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36eb28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36eb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb30: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36eb34: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36EB34u;
    SET_GPR_U32(ctx, 31, 0x36EB3Cu);
    ctx->pc = 0x36EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EB34u;
    // 0x36eb38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36EB34u, 0x36EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB3Cu;
label_36eb3c:
    // 0x36eb3c: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x36eb3cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36eb40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36eb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36eb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36eb48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36eb4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36eb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb50: 0xc06d1f8  jal         func_1B47E0
    ctx->pc = 0x36EB50u;
    SET_GPR_U32(ctx, 31, 0x36EB58u);
    ctx->pc = 0x36EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EB50u;
    // 0x36eb54: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B47E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47E0u, 0x36EB50u, 0x36EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB58u;
label_36eb58:
    // 0x36eb58: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x36eb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36eb5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36eb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb60: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36eb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36eb64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36eb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36eb68: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x36eb68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36eb6c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36eb6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36eb70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36eb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36eb74: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x36eb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36eb78: 0x3e00008  jr          $ra
    ctx->pc = 0x36EB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB78u;
        // 0x36eb7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EB80u;
}

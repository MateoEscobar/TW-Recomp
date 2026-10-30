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

// Function: sub_00360F28
// Address: 0x360f28 - 0x361030
void sub_00360F28_0x360f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360F28_0x360f28");
#endif

    switch (ctx->pc) {
        case 0x360f5cu: goto label_360f5c;
        case 0x360f64u: goto label_360f64;
        case 0x360f78u: goto label_360f78;
        case 0x360f80u: goto label_360f80;
        case 0x360f94u: goto label_360f94;
        case 0x360f9cu: goto label_360f9c;
        case 0x360fb0u: goto label_360fb0;
        case 0x360fb8u: goto label_360fb8;
        case 0x360fccu: goto label_360fcc;
        case 0x360fe4u: goto label_360fe4;
        case 0x360fecu: goto label_360fec;
        case 0x361008u: goto label_361008;
        default: break;
    }

    ctx->pc = 0x360f28u;

    // 0x360f28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x360f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x360f2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x360f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360f30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x360f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x360f34: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x360f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x360f38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x360f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x360f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x360f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x360f44: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x360f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x360f48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f4c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x360f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x360f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360f54: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360F54u;
    SET_GPR_U32(ctx, 31, 0x360F5Cu);
    ctx->pc = 0x360F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360F54u;
    // 0x360f58: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360F54u, 0x360F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F5Cu;
label_360f5c:
    // 0x360f5c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360F5Cu;
    SET_GPR_U32(ctx, 31, 0x360F64u);
    ctx->pc = 0x360F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360F5Cu;
    // 0x360f60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360F5Cu, 0x360F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F64u;
label_360f64:
    // 0x360f64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x360f68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x360f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x360f70: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360F70u;
    SET_GPR_U32(ctx, 31, 0x360F78u);
    ctx->pc = 0x360F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360F70u;
    // 0x360f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360F70u, 0x360F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F78u;
label_360f78:
    // 0x360f78: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360F78u;
    SET_GPR_U32(ctx, 31, 0x360F80u);
    ctx->pc = 0x360F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360F78u;
    // 0x360f7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360F78u, 0x360F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F80u;
label_360f80:
    // 0x360f80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x360f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x360f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360f8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360F8Cu;
    SET_GPR_U32(ctx, 31, 0x360F94u);
    ctx->pc = 0x360F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360F8Cu;
    // 0x360f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360F8Cu, 0x360F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F94u;
label_360f94:
    // 0x360f94: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360F94u;
    SET_GPR_U32(ctx, 31, 0x360F9Cu);
    ctx->pc = 0x360F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360F94u;
    // 0x360f98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360F94u, 0x360F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F9Cu;
label_360f9c:
    // 0x360f9c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360f9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x360fa0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360fa4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x360fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x360fa8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360FA8u;
    SET_GPR_U32(ctx, 31, 0x360FB0u);
    ctx->pc = 0x360FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360FA8u;
    // 0x360fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360FA8u, 0x360FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360FB0u;
label_360fb0:
    // 0x360fb0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360FB0u;
    SET_GPR_U32(ctx, 31, 0x360FB8u);
    ctx->pc = 0x360FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360FB0u;
    // 0x360fb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360FB0u, 0x360FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360FB8u;
label_360fb8:
    // 0x360fb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x360fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360fc0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x360fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x360fc4: 0xc102488  jal         func_409220
    ctx->pc = 0x360FC4u;
    SET_GPR_U32(ctx, 31, 0x360FCCu);
    ctx->pc = 0x360FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360FC4u;
    // 0x360fc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x360FC4u, 0x360FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360FCCu;
label_360fcc:
    // 0x360fcc: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x360fccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x360fd0: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x360fd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x360fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x360fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360fd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360fdc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360FDCu;
    SET_GPR_U32(ctx, 31, 0x360FE4u);
    ctx->pc = 0x360FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360FDCu;
    // 0x360fe0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360FDCu, 0x360FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360FE4u;
label_360fe4:
    // 0x360fe4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360FE4u;
    SET_GPR_U32(ctx, 31, 0x360FECu);
    ctx->pc = 0x360FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360FE4u;
    // 0x360fe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360FE4u, 0x360FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360FECu;
label_360fec:
    // 0x360fec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x360fecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ff0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x360ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ff4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x360ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ff8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x360ff8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x360ffc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x360ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361000: 0xc0ade6e  jal         func_2B79B8
    ctx->pc = 0x361000u;
    SET_GPR_U32(ctx, 31, 0x361008u);
    ctx->pc = 0x361004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361000u;
    // 0x361004: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79B8u, 0x361000u, 0x361008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361008u;
label_361008:
    // 0x361008: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x361008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36100c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36100cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361010: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x361010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361014: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x361014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361018: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x361018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36101c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36101cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361024: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x361024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x361028: 0x3e00008  jr          $ra
    ctx->pc = 0x361028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361028u;
        // 0x36102c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361030u;
}

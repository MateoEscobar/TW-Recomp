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

// Function: sub_00375EF8
// Address: 0x375ef8 - 0x376008
void sub_00375EF8_0x375ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375EF8_0x375ef8");
#endif

    switch (ctx->pc) {
        case 0x375f2cu: goto label_375f2c;
        case 0x375f34u: goto label_375f34;
        case 0x375f48u: goto label_375f48;
        case 0x375f50u: goto label_375f50;
        case 0x375f64u: goto label_375f64;
        case 0x375f6cu: goto label_375f6c;
        case 0x375f80u: goto label_375f80;
        case 0x375f88u: goto label_375f88;
        case 0x375fa0u: goto label_375fa0;
        case 0x375fa8u: goto label_375fa8;
        case 0x375fc0u: goto label_375fc0;
        case 0x375fdcu: goto label_375fdc;
        default: break;
    }

    ctx->pc = 0x375ef8u;

    // 0x375ef8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x375ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x375efc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x375efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375f00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x375f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x375f04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x375f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x375f08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x375f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x375f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x375f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x375f14: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x375f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x375f18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x375f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375f20: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x375f20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x375f24: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375F24u;
    SET_GPR_U32(ctx, 31, 0x375F2Cu);
    ctx->pc = 0x375F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F24u;
    // 0x375f28: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375F24u, 0x375F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F2Cu;
label_375f2c:
    // 0x375f2c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375F2Cu;
    SET_GPR_U32(ctx, 31, 0x375F34u);
    ctx->pc = 0x375F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F2Cu;
    // 0x375f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375F2Cu, 0x375F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F34u;
label_375f34:
    // 0x375f34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x375f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x375f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375f40: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375F40u;
    SET_GPR_U32(ctx, 31, 0x375F48u);
    ctx->pc = 0x375F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F40u;
    // 0x375f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375F40u, 0x375F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F48u;
label_375f48:
    // 0x375f48: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x375F48u;
    SET_GPR_U32(ctx, 31, 0x375F50u);
    ctx->pc = 0x375F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F48u;
    // 0x375f4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x375F48u, 0x375F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F50u;
label_375f50:
    // 0x375f50: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x375f50u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x375f54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x375f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375f5c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375F5Cu;
    SET_GPR_U32(ctx, 31, 0x375F64u);
    ctx->pc = 0x375F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F5Cu;
    // 0x375f60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375F5Cu, 0x375F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F64u;
label_375f64:
    // 0x375f64: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x375F64u;
    SET_GPR_U32(ctx, 31, 0x375F6Cu);
    ctx->pc = 0x375F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F64u;
    // 0x375f68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x375F64u, 0x375F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F6Cu;
label_375f6c:
    // 0x375f6c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x375f6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x375f70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x375f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x375f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375f78: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375F78u;
    SET_GPR_U32(ctx, 31, 0x375F80u);
    ctx->pc = 0x375F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F78u;
    // 0x375f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375F78u, 0x375F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F80u;
label_375f80:
    // 0x375f80: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375F80u;
    SET_GPR_U32(ctx, 31, 0x375F88u);
    ctx->pc = 0x375F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F80u;
    // 0x375f84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375F80u, 0x375F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F88u;
label_375f88:
    // 0x375f88: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x375f88u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x375f8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x375f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f90: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x375f90u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x375f94: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x375f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x375f98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375F98u;
    SET_GPR_U32(ctx, 31, 0x375FA0u);
    ctx->pc = 0x375F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F98u;
    // 0x375f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375F98u, 0x375FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375FA0u;
label_375fa0:
    // 0x375fa0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375FA0u;
    SET_GPR_U32(ctx, 31, 0x375FA8u);
    ctx->pc = 0x375FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375FA0u;
    // 0x375fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375FA0u, 0x375FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375FA8u;
label_375fa8:
    // 0x375fa8: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x375fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x375fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x375facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375fb0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x375fb0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x375fb4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x375fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x375fb8: 0xc102488  jal         func_409220
    ctx->pc = 0x375FB8u;
    SET_GPR_U32(ctx, 31, 0x375FC0u);
    ctx->pc = 0x375FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375FB8u;
    // 0x375fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375FB8u, 0x375FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375FC0u;
label_375fc0:
    // 0x375fc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x375fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375fc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x375fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375fc8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x375fc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x375fcc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x375fccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x375fd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x375fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375fd4: 0xc0c5a9a  jal         func_316A68
    ctx->pc = 0x375FD4u;
    SET_GPR_U32(ctx, 31, 0x375FDCu);
    ctx->pc = 0x375FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375FD4u;
    // 0x375fd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316A68u, 0x375FD4u, 0x375FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375FDCu;
label_375fdc:
    // 0x375fdc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x375fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375fe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375fe4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x375fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375fe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x375fe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375fec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x375fecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375ff4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x375ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x375ff8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x375ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x375ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x375FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375FFCu;
        // 0x376000: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376004u;
    // 0x376004: 0x0  nop
    ctx->pc = 0x376004u;
    // NOP
    ctx->pc = 0x376008u;
}

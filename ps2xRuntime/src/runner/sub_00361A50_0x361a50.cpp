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

// Function: sub_00361A50
// Address: 0x361a50 - 0x361b80
void sub_00361A50_0x361a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361A50_0x361a50");
#endif

    switch (ctx->pc) {
        case 0x361a88u: goto label_361a88;
        case 0x361a90u: goto label_361a90;
        case 0x361aa4u: goto label_361aa4;
        case 0x361aacu: goto label_361aac;
        case 0x361ac4u: goto label_361ac4;
        case 0x361accu: goto label_361acc;
        case 0x361ae0u: goto label_361ae0;
        case 0x361ae8u: goto label_361ae8;
        case 0x361afcu: goto label_361afc;
        case 0x361b04u: goto label_361b04;
        case 0x361b1cu: goto label_361b1c;
        case 0x361b30u: goto label_361b30;
        case 0x361b50u: goto label_361b50;
        default: break;
    }

    ctx->pc = 0x361a50u;

    // 0x361a50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x361a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x361a54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361a58: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x361a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x361a5c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x361a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x361a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x361a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x361a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x361a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x361a6c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x361a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x361a70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a74: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x361a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x361a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x361a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361a7c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x361a7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x361a80: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361A80u;
    SET_GPR_U32(ctx, 31, 0x361A88u);
    ctx->pc = 0x361A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A80u;
    // 0x361a84: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361A80u, 0x361A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A88u;
label_361a88:
    // 0x361a88: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361A88u;
    SET_GPR_U32(ctx, 31, 0x361A90u);
    ctx->pc = 0x361A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A88u;
    // 0x361a8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361A88u, 0x361A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A90u;
label_361a90:
    // 0x361a90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x361a94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x361a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361a9c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361A9Cu;
    SET_GPR_U32(ctx, 31, 0x361AA4u);
    ctx->pc = 0x361AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A9Cu;
    // 0x361aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361A9Cu, 0x361AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361AA4u;
label_361aa4:
    // 0x361aa4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361AA4u;
    SET_GPR_U32(ctx, 31, 0x361AACu);
    ctx->pc = 0x361AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361AA4u;
    // 0x361aa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361AA4u, 0x361AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361AACu;
label_361aac:
    // 0x361aac: 0x29400  sll         $s2, $v0, 16
    ctx->pc = 0x361aacu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x361ab0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361ab4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x361ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361ab8: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x361ab8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x361abc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361ABCu;
    SET_GPR_U32(ctx, 31, 0x361AC4u);
    ctx->pc = 0x361AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361ABCu;
    // 0x361ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361ABCu, 0x361AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361AC4u;
label_361ac4:
    // 0x361ac4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x361AC4u;
    SET_GPR_U32(ctx, 31, 0x361ACCu);
    ctx->pc = 0x361AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361AC4u;
    // 0x361ac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x361AC4u, 0x361ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361ACCu;
label_361acc:
    // 0x361acc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x361accu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x361ad0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361ad4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x361ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x361ad8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361AD8u;
    SET_GPR_U32(ctx, 31, 0x361AE0u);
    ctx->pc = 0x361ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361AD8u;
    // 0x361adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361AD8u, 0x361AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361AE0u;
label_361ae0:
    // 0x361ae0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x361AE0u;
    SET_GPR_U32(ctx, 31, 0x361AE8u);
    ctx->pc = 0x361AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361AE0u;
    // 0x361ae4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x361AE0u, 0x361AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361AE8u;
label_361ae8:
    // 0x361ae8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x361ae8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x361aec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361af0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x361af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x361af4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361AF4u;
    SET_GPR_U32(ctx, 31, 0x361AFCu);
    ctx->pc = 0x361AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361AF4u;
    // 0x361af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361AF4u, 0x361AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361AFCu;
label_361afc:
    // 0x361afc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361AFCu;
    SET_GPR_U32(ctx, 31, 0x361B04u);
    ctx->pc = 0x361B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361AFCu;
    // 0x361b00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361AFCu, 0x361B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361B04u;
label_361b04:
    // 0x361b04: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x361b04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x361b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b0c: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x361b0cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x361b10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x361b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x361b14: 0xc1024c6  jal         func_409318
    ctx->pc = 0x361B14u;
    SET_GPR_U32(ctx, 31, 0x361B1Cu);
    ctx->pc = 0x361B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361B14u;
    // 0x361b18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x361B14u, 0x361B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361B1Cu;
label_361b1c:
    // 0x361b1c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x361b1cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b24: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x361b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x361b28: 0xc102488  jal         func_409220
    ctx->pc = 0x361B28u;
    SET_GPR_U32(ctx, 31, 0x361B30u);
    ctx->pc = 0x361B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361B28u;
    // 0x361b2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x361B28u, 0x361B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361B30u;
label_361b30:
    // 0x361b30: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x361b30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x361b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x361b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b3c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x361b3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x361b40: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x361b40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x361b44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b48: 0xc0a8c3a  jal         func_2A30E8
    ctx->pc = 0x361B48u;
    SET_GPR_U32(ctx, 31, 0x361B50u);
    ctx->pc = 0x361B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361B48u;
    // 0x361b4c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A30E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A30E8u, 0x361B48u, 0x361B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361B50u;
label_361b50:
    // 0x361b50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x361b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x361b54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b58: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x361b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361b5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x361b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361b60: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x361b60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361b64: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x361b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361b6c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x361b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x361b70: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x361b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x361b74: 0x3e00008  jr          $ra
    ctx->pc = 0x361B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361B74u;
        // 0x361b78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361B7Cu;
    // 0x361b7c: 0x0  nop
    ctx->pc = 0x361b7cu;
    // NOP
    ctx->pc = 0x361b80u;
}

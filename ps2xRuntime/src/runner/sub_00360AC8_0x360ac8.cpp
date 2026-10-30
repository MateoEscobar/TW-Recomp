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

// Function: sub_00360AC8
// Address: 0x360ac8 - 0x360c10
void sub_00360AC8_0x360ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360AC8_0x360ac8");
#endif

    switch (ctx->pc) {
        case 0x360b00u: goto label_360b00;
        case 0x360b08u: goto label_360b08;
        case 0x360b14u: goto label_360b14;
        case 0x360b2cu: goto label_360b2c;
        case 0x360b44u: goto label_360b44;
        case 0x360b4cu: goto label_360b4c;
        case 0x360b60u: goto label_360b60;
        case 0x360b68u: goto label_360b68;
        case 0x360b7cu: goto label_360b7c;
        case 0x360b84u: goto label_360b84;
        case 0x360b98u: goto label_360b98;
        case 0x360ba0u: goto label_360ba0;
        case 0x360bb4u: goto label_360bb4;
        case 0x360bbcu: goto label_360bbc;
        case 0x360bdcu: goto label_360bdc;
        default: break;
    }

    ctx->pc = 0x360ac8u;

    // 0x360ac8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x360ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x360acc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x360accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360ad0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x360ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x360ad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x360ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ad8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x360ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360adc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x360adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x360ae0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x360ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x360ae4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x360ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x360ae8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x360ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x360aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360af0: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x360af0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x360af4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x360af4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x360af8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360AF8u;
    SET_GPR_U32(ctx, 31, 0x360B00u);
    ctx->pc = 0x360AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360AF8u;
    // 0x360afc: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360AF8u, 0x360B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B00u;
label_360b00:
    // 0x360b00: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360B00u;
    SET_GPR_U32(ctx, 31, 0x360B08u);
    ctx->pc = 0x360B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B00u;
    // 0x360b04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360B00u, 0x360B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B08u;
label_360b08:
    // 0x360b08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x360b08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b0c: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x360B0Cu;
    SET_GPR_U32(ctx, 31, 0x360B14u);
    ctx->pc = 0x360B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B0Cu;
    // 0x360b10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x360B0Cu, 0x360B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B14u;
label_360b14:
    // 0x360b14: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x360b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x360b18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x360B18u;
    {
        const bool branch_taken_0x360b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B18u;
        // 0x360b1c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360b18) {
            ctx->pc = 0x360B30u;
            goto label_360b30;
        }
    }
    ctx->pc = 0x360B20u;
    // 0x360b20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x360b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b24: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x360B24u;
    SET_GPR_U32(ctx, 31, 0x360B2Cu);
    ctx->pc = 0x360B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B24u;
    // 0x360b28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x360B24u, 0x360B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B2Cu;
label_360b2c:
    // 0x360b2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x360b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_360b30:
    // 0x360b30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x360b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x360b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360b38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360B3Cu;
    SET_GPR_U32(ctx, 31, 0x360B44u);
    ctx->pc = 0x360B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B3Cu;
    // 0x360b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360B3Cu, 0x360B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B44u;
label_360b44:
    // 0x360b44: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360B44u;
    SET_GPR_U32(ctx, 31, 0x360B4Cu);
    ctx->pc = 0x360B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B44u;
    // 0x360b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360B44u, 0x360B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B4Cu;
label_360b4c:
    // 0x360b4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x360b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x360b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x360b58: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360B58u;
    SET_GPR_U32(ctx, 31, 0x360B60u);
    ctx->pc = 0x360B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B58u;
    // 0x360b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360B58u, 0x360B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B60u;
label_360b60:
    // 0x360b60: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360B60u;
    SET_GPR_U32(ctx, 31, 0x360B68u);
    ctx->pc = 0x360B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B60u;
    // 0x360b64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360B60u, 0x360B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B68u;
label_360b68:
    // 0x360b68: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x360b68u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x360b6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b70: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x360b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x360b74: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360B74u;
    SET_GPR_U32(ctx, 31, 0x360B7Cu);
    ctx->pc = 0x360B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B74u;
    // 0x360b78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360B74u, 0x360B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B7Cu;
label_360b7c:
    // 0x360b7c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360B7Cu;
    SET_GPR_U32(ctx, 31, 0x360B84u);
    ctx->pc = 0x360B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B7Cu;
    // 0x360b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360B7Cu, 0x360B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B84u;
label_360b84:
    // 0x360b84: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x360b84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x360b88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b8c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x360b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x360b90: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360B90u;
    SET_GPR_U32(ctx, 31, 0x360B98u);
    ctx->pc = 0x360B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B90u;
    // 0x360b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360B90u, 0x360B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B98u;
label_360b98:
    // 0x360b98: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360B98u;
    SET_GPR_U32(ctx, 31, 0x360BA0u);
    ctx->pc = 0x360B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B98u;
    // 0x360b9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360B98u, 0x360BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360BA0u;
label_360ba0:
    // 0x360ba0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360ba0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x360ba4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x360ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360bac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360BACu;
    SET_GPR_U32(ctx, 31, 0x360BB4u);
    ctx->pc = 0x360BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360BACu;
    // 0x360bb0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360BACu, 0x360BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360BB4u;
label_360bb4:
    // 0x360bb4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360BB4u;
    SET_GPR_U32(ctx, 31, 0x360BBCu);
    ctx->pc = 0x360BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360BB4u;
    // 0x360bb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360BB4u, 0x360BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360BBCu;
label_360bbc:
    // 0x360bbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x360bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360bc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x360bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360bc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x360bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360bc8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x360bc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x360bcc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x360bccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x360bd0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x360bd0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x360bd4: 0xc0b829e  jal         func_2E0A78
    ctx->pc = 0x360BD4u;
    SET_GPR_U32(ctx, 31, 0x360BDCu);
    ctx->pc = 0x360BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360BD4u;
    // 0x360bd8: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A78u, 0x360BD4u, 0x360BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360BDCu;
label_360bdc:
    // 0x360bdc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x360bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x360be0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360be4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x360be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360be8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x360be8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360bec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x360becu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360bf0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x360bf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360bf8: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x360bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x360bfc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x360bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x360c00: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x360c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360c04: 0x3e00008  jr          $ra
    ctx->pc = 0x360C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360C04u;
        // 0x360c08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360C0Cu;
    // 0x360c0c: 0x0  nop
    ctx->pc = 0x360c0cu;
    // NOP
    ctx->pc = 0x360c10u;
}

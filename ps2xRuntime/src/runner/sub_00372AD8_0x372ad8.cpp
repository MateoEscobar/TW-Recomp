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

// Function: sub_00372AD8
// Address: 0x372ad8 - 0x372c78
void sub_00372AD8_0x372ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372AD8_0x372ad8");
#endif

    switch (ctx->pc) {
        case 0x372b20u: goto label_372b20;
        case 0x372b30u: goto label_372b30;
        case 0x372b44u: goto label_372b44;
        case 0x372b4cu: goto label_372b4c;
        case 0x372b60u: goto label_372b60;
        case 0x372b68u: goto label_372b68;
        case 0x372b7cu: goto label_372b7c;
        case 0x372b84u: goto label_372b84;
        case 0x372b98u: goto label_372b98;
        case 0x372ba0u: goto label_372ba0;
        case 0x372bb4u: goto label_372bb4;
        case 0x372bbcu: goto label_372bbc;
        case 0x372bd0u: goto label_372bd0;
        case 0x372bd8u: goto label_372bd8;
        case 0x372becu: goto label_372bec;
        case 0x372bf4u: goto label_372bf4;
        case 0x372c08u: goto label_372c08;
        case 0x372c10u: goto label_372c10;
        case 0x372c38u: goto label_372c38;
        default: break;
    }

    ctx->pc = 0x372ad8u;

    // 0x372ad8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x372ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x372adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372ae0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x372ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x372ae4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x372ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x372ae8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372aec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x372aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372af0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x372af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x372af4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x372af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x372af8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x372af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372afc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x372afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x372b00: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x372b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x372b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372b08: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x372b08u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x372b0c: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x372b0cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x372b10: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x372b10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x372b14: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x372b14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x372b18: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372B18u;
    SET_GPR_U32(ctx, 31, 0x372B20u);
    ctx->pc = 0x372B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B18u;
    // 0x372b1c: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372B18u, 0x372B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B20u;
label_372b20:
    // 0x372b20: 0x3411ffc0  ori         $s1, $zero, 0xFFC0
    ctx->pc = 0x372b20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x372b24: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x372b24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x372b28: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372B28u;
    SET_GPR_U32(ctx, 31, 0x372B30u);
    ctx->pc = 0x372B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B28u;
    // 0x372b2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372B28u, 0x372B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B30u;
label_372b30:
    // 0x372b30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x372b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b34: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x372b34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372b3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372B3Cu;
    SET_GPR_U32(ctx, 31, 0x372B44u);
    ctx->pc = 0x372B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B3Cu;
    // 0x372b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372B3Cu, 0x372B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B44u;
label_372b44:
    // 0x372b44: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372B44u;
    SET_GPR_U32(ctx, 31, 0x372B4Cu);
    ctx->pc = 0x372B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B44u;
    // 0x372b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372B44u, 0x372B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B4Cu;
label_372b4c:
    // 0x372b4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x372b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x372b50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x372b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372b58: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372B58u;
    SET_GPR_U32(ctx, 31, 0x372B60u);
    ctx->pc = 0x372B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B58u;
    // 0x372b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372B58u, 0x372B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B60u;
label_372b60:
    // 0x372b60: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372B60u;
    SET_GPR_U32(ctx, 31, 0x372B68u);
    ctx->pc = 0x372B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B60u;
    // 0x372b64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372B60u, 0x372B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B68u;
label_372b68:
    // 0x372b68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x372b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x372b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x372b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x372b74: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372B74u;
    SET_GPR_U32(ctx, 31, 0x372B7Cu);
    ctx->pc = 0x372B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B74u;
    // 0x372b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372B74u, 0x372B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B7Cu;
label_372b7c:
    // 0x372b7c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372B7Cu;
    SET_GPR_U32(ctx, 31, 0x372B84u);
    ctx->pc = 0x372B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B7Cu;
    // 0x372b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372B7Cu, 0x372B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B84u;
label_372b84:
    // 0x372b84: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x372b84u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x372b88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x372b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b8c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x372b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x372b90: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372B90u;
    SET_GPR_U32(ctx, 31, 0x372B98u);
    ctx->pc = 0x372B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B90u;
    // 0x372b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372B90u, 0x372B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B98u;
label_372b98:
    // 0x372b98: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372B98u;
    SET_GPR_U32(ctx, 31, 0x372BA0u);
    ctx->pc = 0x372B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B98u;
    // 0x372b9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372B98u, 0x372BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BA0u;
label_372ba0:
    // 0x372ba0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x372ba0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x372ba4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x372ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ba8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x372ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x372bac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372BACu;
    SET_GPR_U32(ctx, 31, 0x372BB4u);
    ctx->pc = 0x372BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372BACu;
    // 0x372bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372BACu, 0x372BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BB4u;
label_372bb4:
    // 0x372bb4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372BB4u;
    SET_GPR_U32(ctx, 31, 0x372BBCu);
    ctx->pc = 0x372BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372BB4u;
    // 0x372bb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372BB4u, 0x372BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BBCu;
label_372bbc:
    // 0x372bbc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x372bbcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x372bc0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x372bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372bc4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x372bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x372bc8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372BC8u;
    SET_GPR_U32(ctx, 31, 0x372BD0u);
    ctx->pc = 0x372BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372BC8u;
    // 0x372bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372BC8u, 0x372BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BD0u;
label_372bd0:
    // 0x372bd0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372BD0u;
    SET_GPR_U32(ctx, 31, 0x372BD8u);
    ctx->pc = 0x372BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372BD0u;
    // 0x372bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372BD0u, 0x372BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BD8u;
label_372bd8:
    // 0x372bd8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x372bd8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x372bdc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x372bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372be0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x372be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x372be4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372BE4u;
    SET_GPR_U32(ctx, 31, 0x372BECu);
    ctx->pc = 0x372BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372BE4u;
    // 0x372be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372BE4u, 0x372BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BECu;
label_372bec:
    // 0x372bec: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372BECu;
    SET_GPR_U32(ctx, 31, 0x372BF4u);
    ctx->pc = 0x372BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372BECu;
    // 0x372bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372BECu, 0x372BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BF4u;
label_372bf4:
    // 0x372bf4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x372bf4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x372bf8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x372bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c00: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372C00u;
    SET_GPR_U32(ctx, 31, 0x372C08u);
    ctx->pc = 0x372C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372C00u;
    // 0x372c04: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372C00u, 0x372C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C08u;
label_372c08:
    // 0x372c08: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372C08u;
    SET_GPR_U32(ctx, 31, 0x372C10u);
    ctx->pc = 0x372C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372C08u;
    // 0x372c0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372C08u, 0x372C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C10u;
label_372c10:
    // 0x372c10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x372c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x372c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x372c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c1c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x372c1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x372c20: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x372c20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x372c24: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x372c24u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x372c28: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x372c28u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x372c2c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x372c2cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x372c30: 0xc044f54  jal         func_113D50
    ctx->pc = 0x372C30u;
    SET_GPR_U32(ctx, 31, 0x372C38u);
    ctx->pc = 0x372C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372C30u;
    // 0x372c34: 0x46000446  mov.s       $f17, $f0 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D50u, 0x372C30u, 0x372C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C38u;
label_372c38:
    // 0x372c38: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x372c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x372c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c40: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x372c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x372c44: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x372c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x372c48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x372c48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x372c4c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x372c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372c50: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x372c50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372c58: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x372c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x372c5c: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x372c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x372c60: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x372c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x372c64: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x372c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x372c68: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x372c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x372c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x372C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C6Cu;
        // 0x372c70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372C74u;
    // 0x372c74: 0x0  nop
    ctx->pc = 0x372c74u;
    // NOP
    ctx->pc = 0x372c78u;
}

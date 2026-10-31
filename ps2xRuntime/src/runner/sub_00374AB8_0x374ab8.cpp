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

// Function: sub_00374AB8
// Address: 0x374ab8 - 0x374c18
void sub_00374AB8_0x374ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374AB8_0x374ab8");
#endif

    switch (ctx->pc) {
        case 0x374af4u: goto label_374af4;
        case 0x374afcu: goto label_374afc;
        case 0x374b10u: goto label_374b10;
        case 0x374b18u: goto label_374b18;
        case 0x374b2cu: goto label_374b2c;
        case 0x374b34u: goto label_374b34;
        case 0x374b48u: goto label_374b48;
        case 0x374b50u: goto label_374b50;
        case 0x374b68u: goto label_374b68;
        case 0x374b70u: goto label_374b70;
        case 0x374b88u: goto label_374b88;
        case 0x374b90u: goto label_374b90;
        case 0x374ba8u: goto label_374ba8;
        case 0x374bb0u: goto label_374bb0;
        case 0x374bc4u: goto label_374bc4;
        case 0x374be8u: goto label_374be8;
        default: break;
    }

    ctx->pc = 0x374ab8u;

    // 0x374ab8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x374ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x374abc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374ac0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x374ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x374ac4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x374ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x374ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374acc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x374accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ad0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x374ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x374ad4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x374ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x374ad8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374adc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x374adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x374ae0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x374ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x374ae4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x374ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x374ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374aec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374AECu;
    SET_GPR_U32(ctx, 31, 0x374AF4u);
    ctx->pc = 0x374AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374AECu;
    // 0x374af0: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374AECu, 0x374AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374AF4u;
label_374af4:
    // 0x374af4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374AF4u;
    SET_GPR_U32(ctx, 31, 0x374AFCu);
    ctx->pc = 0x374AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374AF4u;
    // 0x374af8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374AF4u, 0x374AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374AFCu;
label_374afc:
    // 0x374afc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b00: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x374b00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374b08: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374B08u;
    SET_GPR_U32(ctx, 31, 0x374B10u);
    ctx->pc = 0x374B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B08u;
    // 0x374b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374B08u, 0x374B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B10u;
label_374b10:
    // 0x374b10: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374B10u;
    SET_GPR_U32(ctx, 31, 0x374B18u);
    ctx->pc = 0x374B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B10u;
    // 0x374b14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374B10u, 0x374B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B18u;
label_374b18:
    // 0x374b18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b1c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x374b1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x374b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374b24: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374B24u;
    SET_GPR_U32(ctx, 31, 0x374B2Cu);
    ctx->pc = 0x374B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B24u;
    // 0x374b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374B24u, 0x374B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B2Cu;
label_374b2c:
    // 0x374b2c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374B2Cu;
    SET_GPR_U32(ctx, 31, 0x374B34u);
    ctx->pc = 0x374B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B2Cu;
    // 0x374b30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374B2Cu, 0x374B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B34u;
label_374b34:
    // 0x374b34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b38: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x374b38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x374b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x374b40: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374B40u;
    SET_GPR_U32(ctx, 31, 0x374B48u);
    ctx->pc = 0x374B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B40u;
    // 0x374b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374B40u, 0x374B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B48u;
label_374b48:
    // 0x374b48: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374B48u;
    SET_GPR_U32(ctx, 31, 0x374B50u);
    ctx->pc = 0x374B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B48u;
    // 0x374b4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374B48u, 0x374B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B50u;
label_374b50:
    // 0x374b50: 0x34068028  ori         $a2, $zero, 0x8028
    ctx->pc = 0x374b50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x374b54: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x374b54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x374b58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x374b58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b5c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x374b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x374b60: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374B60u;
    SET_GPR_U32(ctx, 31, 0x374B68u);
    ctx->pc = 0x374B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B60u;
    // 0x374b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374B60u, 0x374B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B68u;
label_374b68:
    // 0x374b68: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374B68u;
    SET_GPR_U32(ctx, 31, 0x374B70u);
    ctx->pc = 0x374B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B68u;
    // 0x374b6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374B68u, 0x374B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B70u;
label_374b70:
    // 0x374b70: 0x34068068  ori         $a2, $zero, 0x8068
    ctx->pc = 0x374b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32872);
    // 0x374b74: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x374b74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x374b78: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x374b78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x374b7c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x374b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x374b80: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374B80u;
    SET_GPR_U32(ctx, 31, 0x374B88u);
    ctx->pc = 0x374B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B80u;
    // 0x374b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374B80u, 0x374B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B88u;
label_374b88:
    // 0x374b88: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374B88u;
    SET_GPR_U32(ctx, 31, 0x374B90u);
    ctx->pc = 0x374B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B88u;
    // 0x374b8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374B88u, 0x374B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B90u;
label_374b90:
    // 0x374b90: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x374b90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x374b94: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x374b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x374b98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x374b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b9c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x374b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x374ba0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374BA0u;
    SET_GPR_U32(ctx, 31, 0x374BA8u);
    ctx->pc = 0x374BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374BA0u;
    // 0x374ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374BA0u, 0x374BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374BA8u;
label_374ba8:
    // 0x374ba8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x374BA8u;
    SET_GPR_U32(ctx, 31, 0x374BB0u);
    ctx->pc = 0x374BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374BA8u;
    // 0x374bac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x374BA8u, 0x374BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374BB0u;
label_374bb0:
    // 0x374bb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x374bb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x374bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bb8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x374bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374bbc: 0xc102488  jal         func_409220
    ctx->pc = 0x374BBCu;
    SET_GPR_U32(ctx, 31, 0x374BC4u);
    ctx->pc = 0x374BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374BBCu;
    // 0x374bc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x374BBCu, 0x374BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374BC4u;
label_374bc4:
    // 0x374bc4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x374bc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x374bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bcc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x374bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bd0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x374bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bd4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x374bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bd8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x374bd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bdc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x374bdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374be0: 0xc0c4f8c  jal         func_313E30
    ctx->pc = 0x374BE0u;
    SET_GPR_U32(ctx, 31, 0x374BE8u);
    ctx->pc = 0x374BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374BE0u;
    // 0x374be4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x313E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313E30u, 0x374BE0u, 0x374BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374BE8u;
label_374be8:
    // 0x374be8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x374be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x374bec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bf0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x374bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374bf4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x374bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374bf8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x374bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374bfc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x374bfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374c00: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x374c00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374c04: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x374c04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374c0c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x374c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x374c10: 0x3e00008  jr          $ra
    ctx->pc = 0x374C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374C10u;
        // 0x374c14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374C18u;
}

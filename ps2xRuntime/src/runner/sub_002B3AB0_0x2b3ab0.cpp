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

// Function: sub_002B3AB0
// Address: 0x2b3ab0 - 0x2b4098
void sub_002B3AB0_0x2b3ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3AB0_0x2b3ab0");
#endif

    switch (ctx->pc) {
        case 0x2b3af4u: goto label_2b3af4;
        case 0x2b3b00u: goto label_2b3b00;
        case 0x2b3b0cu: goto label_2b3b0c;
        case 0x2b3b20u: goto label_2b3b20;
        case 0x2b3b38u: goto label_2b3b38;
        case 0x2b3b48u: goto label_2b3b48;
        case 0x2b3b8cu: goto label_2b3b8c;
        case 0x2b3bc4u: goto label_2b3bc4;
        case 0x2b3bd4u: goto label_2b3bd4;
        case 0x2b3c0cu: goto label_2b3c0c;
        case 0x2b3c38u: goto label_2b3c38;
        case 0x2b3c40u: goto label_2b3c40;
        case 0x2b3c68u: goto label_2b3c68;
        case 0x2b3c74u: goto label_2b3c74;
        case 0x2b3c8cu: goto label_2b3c8c;
        case 0x2b3ca8u: goto label_2b3ca8;
        case 0x2b3cbcu: goto label_2b3cbc;
        case 0x2b3cccu: goto label_2b3ccc;
        case 0x2b3cfcu: goto label_2b3cfc;
        case 0x2b3d08u: goto label_2b3d08;
        case 0x2b3d40u: goto label_2b3d40;
        case 0x2b3d50u: goto label_2b3d50;
        case 0x2b3d64u: goto label_2b3d64;
        case 0x2b3d9cu: goto label_2b3d9c;
        case 0x2b3dacu: goto label_2b3dac;
        case 0x2b3df4u: goto label_2b3df4;
        case 0x2b3e04u: goto label_2b3e04;
        case 0x2b3e0cu: goto label_2b3e0c;
        case 0x2b3e1cu: goto label_2b3e1c;
        case 0x2b3e34u: goto label_2b3e34;
        case 0x2b3e48u: goto label_2b3e48;
        case 0x2b3e64u: goto label_2b3e64;
        case 0x2b3e94u: goto label_2b3e94;
        case 0x2b3eb4u: goto label_2b3eb4;
        case 0x2b3ee0u: goto label_2b3ee0;
        case 0x2b3f04u: goto label_2b3f04;
        case 0x2b3f18u: goto label_2b3f18;
        case 0x2b3f4cu: goto label_2b3f4c;
        case 0x2b3f78u: goto label_2b3f78;
        case 0x2b3f90u: goto label_2b3f90;
        case 0x2b3fb4u: goto label_2b3fb4;
        case 0x2b4000u: goto label_2b4000;
        case 0x2b4014u: goto label_2b4014;
        case 0x2b404cu: goto label_2b404c;
        case 0x2b4064u: goto label_2b4064;
        default: break;
    }

    ctx->pc = 0x2b3ab0u;

    // 0x2b3ab0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b3ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b3ab4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2b3ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2b3ab8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2b3ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2b3abc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2b3abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2b3ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b3ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ac4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2b3ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2b3ac8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b3ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2b3acc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2b3accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2b3ad0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b3ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b3ad4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2b3ad4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2b3ad8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2b3ad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2b3adc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2b3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2b3ae0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3ae4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b3ae8: 0x24840124  addiu       $a0, $a0, 0x124
    ctx->pc = 0x2b3ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    // 0x2b3aec: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B3AECu;
    SET_GPR_U32(ctx, 31, 0x2B3AF4u);
    ctx->pc = 0x2B3AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AECu;
    // 0x2b3af0: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B3AECu, 0x2B3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3AF4u;
label_2b3af4:
    // 0x2b3af4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b3af4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3af8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B3AF8u;
    SET_GPR_U32(ctx, 31, 0x2B3B00u);
    ctx->pc = 0x2B3AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AF8u;
    // 0x2b3afc: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B3AF8u, 0x2B3B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B00u;
label_2b3b00:
    // 0x2b3b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b04: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2B3B04u;
    SET_GPR_U32(ctx, 31, 0x2B3B0Cu);
    ctx->pc = 0x2B3B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B04u;
    // 0x2b3b08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B3B04u, 0x2B3B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B0Cu;
label_2b3b0c:
    // 0x2b3b0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b3b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b10: 0x12600155  beqz        $s3, . + 4 + (0x155 << 2)
    ctx->pc = 0x2B3B10u;
    {
        const bool branch_taken_0x2b3b10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B10u;
        // 0x2b3b14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b10) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B3B18u;
    // 0x2b3b18: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B3B18u;
    SET_GPR_U32(ctx, 31, 0x2B3B20u);
    ctx->pc = 0x2B3B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B18u;
    // 0x2b3b1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B3B18u, 0x2B3B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B20u;
label_2b3b20:
    // 0x2b3b20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b3b20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3b28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b3b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b2c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2b3b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b3b30: 0xc0a3792  jal         func_28DE48
    ctx->pc = 0x2B3B30u;
    SET_GPR_U32(ctx, 31, 0x2B3B38u);
    ctx->pc = 0x2B3B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B30u;
    // 0x2b3b34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2B3B30u, 0x2B3B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B38u;
label_2b3b38:
    // 0x2b3b38: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2B3B38u;
    {
        const bool branch_taken_0x2b3b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B38u;
        // 0x2b3b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b38) {
            ctx->pc = 0x2B3D6Cu;
            goto label_2b3d6c;
        }
    }
    ctx->pc = 0x2B3B40u;
    // 0x2b3b40: 0xc0acb8a  jal         func_2B2E28
    ctx->pc = 0x2B3B40u;
    SET_GPR_U32(ctx, 31, 0x2B3B48u);
    ctx->pc = 0x2B3B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B40u;
    // 0x2b3b44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2E28u, 0x2B3B40u, 0x2B3B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B48u;
label_2b3b48:
    // 0x2b3b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3b4c: 0x10430145  beq         $v0, $v1, . + 4 + (0x145 << 2)
    ctx->pc = 0x2B3B4Cu;
    {
        const bool branch_taken_0x2b3b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B4Cu;
        // 0x2b3b50: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b4c) {
            ctx->pc = 0x2B4064u;
            goto label_2b4064;
        }
    }
    ctx->pc = 0x2B3B54u;
    // 0x2b3b54: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2b3b54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2b3b58: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2b3b58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2b3b5c: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2b3b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x2b3b60: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2b3b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2b3b64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b3b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b68: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2b3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b3b6c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2b3b6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b3b70: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2b3b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2b3b74: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x2b3b74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x2b3b78: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2b3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2b3b7c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2b3b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b3b80: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2b3b80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b3b84: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2B3B84u;
    SET_GPR_U32(ctx, 31, 0x2B3B8Cu);
    ctx->pc = 0x2B3B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B84u;
    // 0x2b3b88: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B3B84u, 0x2B3B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B8Cu;
label_2b3b8c:
    // 0x2b3b8c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3b90: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b3b90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b3b94: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2b3b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2b3b98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b3b98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b3b9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b3b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3ba0: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2b3ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3ba4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b3ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b3ba8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b3ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b3bac: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b3bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3bb0: 0x0  nop
    ctx->pc = 0x2b3bb0u;
    // NOP
    // 0x2b3bb4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3BB4u;
    {
        const bool branch_taken_0x2b3bb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BB4u;
        // 0x2b3bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bb4) {
            ctx->pc = 0x2B3BDCu;
            goto label_2b3bdc;
        }
    }
    ctx->pc = 0x2B3BBCu;
    // 0x2b3bbc: 0xc088fa8  jal         func_223EA0
    ctx->pc = 0x2B3BBCu;
    SET_GPR_U32(ctx, 31, 0x2B3BC4u);
    ctx->pc = 0x2B3BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3BBCu;
    // 0x2b3bc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2B3BBCu, 0x2B3BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3BC4u;
label_2b3bc4:
    // 0x2b3bc4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3BC4u;
    {
        const bool branch_taken_0x2b3bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3bc4) {
            ctx->pc = 0x2B3BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BC4u;
            // 0x2b3bc8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3BE0u;
            goto label_2b3be0;
        }
    }
    ctx->pc = 0x2B3BCCu;
    // 0x2b3bcc: 0xc089000  jal         func_224000
    ctx->pc = 0x2B3BCCu;
    SET_GPR_U32(ctx, 31, 0x2B3BD4u);
    ctx->pc = 0x2B3BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3BCCu;
    // 0x2b3bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2B3BCCu, 0x2B3BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3BD4u;
label_2b3bd4:
    // 0x2b3bd4: 0x10400124  beqz        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x2B3BD4u;
    {
        const bool branch_taken_0x2b3bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BD4u;
        // 0x2b3bd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bd4) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B3BDCu;
label_2b3bdc:
    // 0x2b3bdc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2b3bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2b3be0:
    // 0x2b3be0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b3be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b3be4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3BE4u;
    {
        const bool branch_taken_0x2b3be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3be4) {
            ctx->pc = 0x2B3BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BE4u;
            // 0x2b3be8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3BECu;
            goto label_2b3bec;
        }
    }
    ctx->pc = 0x2B3BECu;
label_2b3bec:
    // 0x2b3bec: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2b3becu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b3bf0: 0x1810  mfhi        $v1
    ctx->pc = 0x2b3bf0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b3bf4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3BF4u;
    {
        const bool branch_taken_0x2b3bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BF4u;
        // 0x2b3bf8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bf4) {
            ctx->pc = 0x2B3C14u;
            goto label_2b3c14;
        }
    }
    ctx->pc = 0x2B3BFCu;
    // 0x2b3bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b3bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b3c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c04: 0xc08886c  jal         func_2221B0
    ctx->pc = 0x2B3C04u;
    SET_GPR_U32(ctx, 31, 0x2B3C0Cu);
    ctx->pc = 0x2B3C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C04u;
    // 0x2b3c08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221B0u, 0x2B3C04u, 0x2B3C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C0Cu;
label_2b3c0c:
    // 0x2b3c0c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2B3C0Cu;
    {
        const bool branch_taken_0x2b3c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C0Cu;
        // 0x2b3c10: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c0c) {
            ctx->pc = 0x2B3D6Cu;
            goto label_2b3d6c;
        }
    }
    ctx->pc = 0x2B3C14u;
label_2b3c14:
    // 0x2b3c14: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2b3c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2b3c18: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2b3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x2b3c1c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2b3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2b3c20: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2b3c20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b3c24: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B3C24u;
    {
        const bool branch_taken_0x2b3c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C24u;
        // 0x2b3c28: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c24) {
            ctx->pc = 0x2B3CB0u;
            goto label_2b3cb0;
        }
    }
    ctx->pc = 0x2B3C2Cu;
    // 0x2b3c2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3c30: 0xc0a3fa4  jal         func_28FE90
    ctx->pc = 0x2B3C30u;
    SET_GPR_U32(ctx, 31, 0x2B3C38u);
    ctx->pc = 0x2B3C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C30u;
    // 0x2b3c34: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2B3C30u, 0x2B3C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C38u;
label_2b3c38:
    // 0x2b3c38: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B3C38u;
    SET_GPR_U32(ctx, 31, 0x2B3C40u);
    ctx->pc = 0x2B3C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C38u;
    // 0x2b3c3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B3C38u, 0x2B3C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C40u;
label_2b3c40:
    // 0x2b3c40: 0x8ea3b734  lw          $v1, -0x48CC($s5)
    ctx->pc = 0x2b3c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
    // 0x2b3c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c48: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2b3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b3c4c: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2b3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2b3c50: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B3C50u;
    {
        const bool branch_taken_0x2b3c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C50u;
        // 0x2b3c54: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c50) {
            ctx->pc = 0x2B3CB0u;
            goto label_2b3cb0;
        }
    }
    ctx->pc = 0x2B3C58u;
    // 0x2b3c58: 0x12130016  beq         $s0, $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B3C58u;
    {
        const bool branch_taken_0x2b3c58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x2B3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C58u;
        // 0x2b3c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c58) {
            ctx->pc = 0x2B3CB4u;
            goto label_2b3cb4;
        }
    }
    ctx->pc = 0x2B3C60u;
    // 0x2b3c60: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B3C60u;
    SET_GPR_U32(ctx, 31, 0x2B3C68u);
    ctx->pc = 0x2B3C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C60u;
    // 0x2b3c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B3C60u, 0x2B3C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C68u;
label_2b3c68:
    // 0x2b3c68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3c6c: 0xc0a404e  jal         func_290138
    ctx->pc = 0x2B3C6Cu;
    SET_GPR_U32(ctx, 31, 0x2B3C74u);
    ctx->pc = 0x2B3C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C6Cu;
    // 0x2b3c70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2B3C6Cu, 0x2B3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C74u;
label_2b3c74:
    // 0x2b3c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3c78: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2B3C78u;
    {
        const bool branch_taken_0x2b3c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C78u;
        // 0x2b3c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c78) {
            ctx->pc = 0x2B3CB4u;
            goto label_2b3cb4;
        }
    }
    ctx->pc = 0x2B3C80u;
    // 0x2b3c80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3c84: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2B3C84u;
    SET_GPR_U32(ctx, 31, 0x2B3C8Cu);
    ctx->pc = 0x2B3C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C84u;
    // 0x2b3c88: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2B3C84u, 0x2B3C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C8Cu;
label_2b3c8c:
    // 0x2b3c8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3c90: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3C90u;
    {
        const bool branch_taken_0x2b3c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C90u;
        // 0x2b3c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c90) {
            ctx->pc = 0x2B3CB4u;
            goto label_2b3cb4;
        }
    }
    ctx->pc = 0x2B3C98u;
    // 0x2b3c98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3c9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b3c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ca0: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2B3CA0u;
    SET_GPR_U32(ctx, 31, 0x2B3CA8u);
    ctx->pc = 0x2B3CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CA0u;
    // 0x2b3ca4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B3CA0u, 0x2B3CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CA8u;
label_2b3ca8:
    // 0x2b3ca8: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x2B3CA8u;
    {
        const bool branch_taken_0x2b3ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CA8u;
        // 0x2b3cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ca8) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B3CB0u;
label_2b3cb0:
    // 0x2b3cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b3cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b3cb4:
    // 0x2b3cb4: 0xc0a7c26  jal         func_29F098
    ctx->pc = 0x2B3CB4u;
    SET_GPR_U32(ctx, 31, 0x2B3CBCu);
    ctx->pc = 0x2B3CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CB4u;
    // 0x2b3cb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F098u, 0x2B3CB4u, 0x2B3CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CBCu;
label_2b3cbc:
    // 0x2b3cbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3CBCu;
    {
        const bool branch_taken_0x2b3cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CBCu;
        // 0x2b3cc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cbc) {
            ctx->pc = 0x2B3CD4u;
            goto label_2b3cd4;
        }
    }
    ctx->pc = 0x2B3CC4u;
    // 0x2b3cc4: 0xc0a445e  jal         func_291178
    ctx->pc = 0x2B3CC4u;
    SET_GPR_U32(ctx, 31, 0x2B3CCCu);
    ctx->pc = 0x2B3CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CC4u;
    // 0x2b3cc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2B3CC4u, 0x2B3CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CCCu;
label_2b3ccc:
    // 0x2b3ccc: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x2B3CCCu;
    {
        const bool branch_taken_0x2b3ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CCCu;
        // 0x2b3cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ccc) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B3CD4u;
label_2b3cd4:
    // 0x2b3cd4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3cd8: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2b3cd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x2b3cdc: 0x1c6000e2  bgtz        $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x2B3CDCu;
    {
        const bool branch_taken_0x2b3cdc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2B3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CDCu;
        // 0x2b3ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cdc) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B3CE4u;
    // 0x2b3ce4: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x2b3ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2b3ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3cec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3CECu;
    {
        const bool branch_taken_0x2b3cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CECu;
        // 0x2b3cf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cec) {
            ctx->pc = 0x2B3D00u;
            goto label_2b3d00;
        }
    }
    ctx->pc = 0x2B3CF4u;
    // 0x2b3cf4: 0xc0a445e  jal         func_291178
    ctx->pc = 0x2B3CF4u;
    SET_GPR_U32(ctx, 31, 0x2B3CFCu);
    ctx->pc = 0x2B3CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CF4u;
    // 0x2b3cf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2B3CF4u, 0x2B3CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CFCu;
label_2b3cfc:
    // 0x2b3cfc: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x2b3cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
label_2b3d00:
    // 0x2b3d00: 0xc08a200  jal         func_228800
    ctx->pc = 0x2B3D00u;
    SET_GPR_U32(ctx, 31, 0x2B3D08u);
    ctx->pc = 0x2B3D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D00u;
    // 0x2b3d04: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2B3D00u, 0x2B3D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D08u;
label_2b3d08:
    // 0x2b3d08: 0x9050011b  lbu         $s0, 0x11B($v0)
    ctx->pc = 0x2b3d08u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x2b3d0c: 0x8ea2b734  lw          $v0, -0x48CC($s5)
    ctx->pc = 0x2b3d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
    // 0x2b3d10: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2b3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2b3d14: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2b3d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2b3d18: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2b3d18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b3d1c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B3D1Cu;
    {
        const bool branch_taken_0x2b3d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D1Cu;
        // 0x2b3d20: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d1c) {
            ctx->pc = 0x2B3D74u;
            goto label_2b3d74;
        }
    }
    ctx->pc = 0x2B3D24u;
    // 0x2b3d24: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3D24u;
    {
        const bool branch_taken_0x2b3d24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D24u;
        // 0x2b3d28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d24) {
            ctx->pc = 0x2B3D38u;
            goto label_2b3d38;
        }
    }
    ctx->pc = 0x2B3D2Cu;
    // 0x2b3d2c: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x2b3d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x2b3d30: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x2B3D30u;
    {
        const bool branch_taken_0x2b3d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D30u;
        // 0x2b3d34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d30) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B3D38u;
label_2b3d38:
    // 0x2b3d38: 0xc0a446a  jal         func_2911A8
    ctx->pc = 0x2B3D38u;
    SET_GPR_U32(ctx, 31, 0x2B3D40u);
    ctx->pc = 0x2B3D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D38u;
    // 0x2b3d3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911A8u, 0x2B3D38u, 0x2B3D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D40u;
label_2b3d40:
    // 0x2b3d40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B3D40u;
    {
        const bool branch_taken_0x2b3d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D40u;
        // 0x2b3d44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d40) {
            ctx->pc = 0x2B3D6Cu;
            goto label_2b3d6c;
        }
    }
    ctx->pc = 0x2B3D48u;
    // 0x2b3d48: 0xc0a43aa  jal         func_290EA8
    ctx->pc = 0x2B3D48u;
    SET_GPR_U32(ctx, 31, 0x2B3D50u);
    ctx->pc = 0x2B3D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D48u;
    // 0x2b3d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290EA8u, 0x2B3D48u, 0x2B3D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D50u;
label_2b3d50:
    // 0x2b3d50: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2B3D50u;
    {
        const bool branch_taken_0x2b3d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D50u;
        // 0x2b3d54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d50) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B3D58u;
    // 0x2b3d58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3d5c: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2B3D5Cu;
    SET_GPR_U32(ctx, 31, 0x2B3D64u);
    ctx->pc = 0x2B3D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D5Cu;
    // 0x2b3d60: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2B3D5Cu, 0x2B3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D64u;
label_2b3d64:
    // 0x2b3d64: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3D64u;
    {
        const bool branch_taken_0x2b3d64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2b3d64) {
            ctx->pc = 0x2B3D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3D64u;
            // 0x2b3d68: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3D78u;
            goto label_2b3d78;
        }
    }
    ctx->pc = 0x2B3D6Cu;
label_2b3d6c:
    // 0x2b3d6c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2B3D6Cu;
    {
        const bool branch_taken_0x2b3d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D6Cu;
        // 0x2b3d70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d6c) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B3D74u;
label_2b3d74:
    // 0x2b3d74: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2b3d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b3d78:
    // 0x2b3d78: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2b3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b3d7c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3D7Cu;
    {
        const bool branch_taken_0x2b3d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3d7c) {
            ctx->pc = 0x2B3D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3D7Cu;
            // 0x2b3d80: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3DA4u;
            goto label_2b3da4;
        }
    }
    ctx->pc = 0x2B3D84u;
    // 0x2b3d84: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2b3d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2b3d88: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3d8c: 0x68463fcf  ldl         $a2, 0x3FCF($v0)
    ctx->pc = 0x2b3d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b3d90: 0x6c463fc8  ldr         $a2, 0x3FC8($v0)
    ctx->pc = 0x2b3d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b3d94: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2B3D94u;
    SET_GPR_U32(ctx, 31, 0x2B3D9Cu);
    ctx->pc = 0x2B3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D94u;
    // 0x2b3d98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B3D94u, 0x2B3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D9Cu;
label_2b3d9c:
    // 0x2b3d9c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2b3d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2b3da0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2b3da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b3da4:
    // 0x2b3da4: 0xc08a6d8  jal         func_229B60
    ctx->pc = 0x2B3DA4u;
    SET_GPR_U32(ctx, 31, 0x2B3DACu);
    ctx->pc = 0x2B3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3DA4u;
    // 0x2b3da8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B60u, 0x2B3DA4u, 0x2B3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3DACu;
label_2b3dac:
    // 0x2b3dac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3db0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3DB0u;
    {
        const bool branch_taken_0x2b3db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DB0u;
        // 0x2b3db4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3db0) {
            ctx->pc = 0x2B3DD0u;
            goto label_2b3dd0;
        }
    }
    ctx->pc = 0x2B3DB8u;
    // 0x2b3db8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2b3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b3dbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3DBCu;
    {
        const bool branch_taken_0x2b3dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DBCu;
        // 0x2b3dc0: 0x38420015  xori        $v0, $v0, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)21);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dbc) {
            ctx->pc = 0x2B3DCCu;
            goto label_2b3dcc;
        }
    }
    ctx->pc = 0x2B3DC4u;
    // 0x2b3dc4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3DC4u;
    {
        const bool branch_taken_0x2b3dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3dc4) {
            ctx->pc = 0x2B3DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3DC4u;
            // 0x2b3dc8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3DE4u;
            goto label_2b3de4;
        }
    }
    ctx->pc = 0x2B3DCCu;
label_2b3dcc:
    // 0x2b3dcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b3dd0:
    // 0x2b3dd0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3DD0u;
    {
        const bool branch_taken_0x2b3dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DD0u;
        // 0x2b3dd4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dd0) {
            ctx->pc = 0x2B3DE0u;
            goto label_2b3de0;
        }
    }
    ctx->pc = 0x2B3DD8u;
    // 0x2b3dd8: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3DD8u;
    {
        const bool branch_taken_0x2b3dd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3dd8) {
            ctx->pc = 0x2B3DE4u;
            goto label_2b3de4;
        }
    }
    ctx->pc = 0x2B3DE0u;
label_2b3de0:
    // 0x2b3de0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2b3de0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3de4:
    // 0x2b3de4: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3DE4u;
    {
        const bool branch_taken_0x2b3de4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3de4) {
            ctx->pc = 0x2B3DFCu;
            goto label_2b3dfc;
        }
    }
    ctx->pc = 0x2B3DECu;
    // 0x2b3dec: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2B3DECu;
    SET_GPR_U32(ctx, 31, 0x2B3DF4u);
    ctx->pc = 0x2B3DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3DECu;
    // 0x2b3df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2B3DECu, 0x2B3DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3DF4u;
label_2b3df4:
    // 0x2b3df4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3DF4u;
    {
        const bool branch_taken_0x2b3df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3df4) {
            ctx->pc = 0x2B3E04u;
            goto label_2b3e04;
        }
    }
    ctx->pc = 0x2B3DFCu;
label_2b3dfc:
    // 0x2b3dfc: 0xc08bfa0  jal         func_22FE80
    ctx->pc = 0x2B3DFCu;
    SET_GPR_U32(ctx, 31, 0x2B3E04u);
    ctx->pc = 0x2B3E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3DFCu;
    // 0x2b3e00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2B3DFCu, 0x2B3E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E04u;
label_2b3e04:
    // 0x2b3e04: 0xc089018  jal         func_224060
    ctx->pc = 0x2B3E04u;
    SET_GPR_U32(ctx, 31, 0x2B3E0Cu);
    ctx->pc = 0x2B3E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E04u;
    // 0x2b3e08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2B3E04u, 0x2B3E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E0Cu;
label_2b3e0c:
    // 0x2b3e0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3e10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b3e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e14: 0xc0a41ae  jal         func_2906B8
    ctx->pc = 0x2B3E14u;
    SET_GPR_U32(ctx, 31, 0x2B3E1Cu);
    ctx->pc = 0x2B3E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E14u;
    // 0x2b3e18: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906B8u, 0x2B3E14u, 0x2B3E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E1Cu;
label_2b3e1c:
    // 0x2b3e1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3e24: 0x1602008b  bne         $s0, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x2B3E24u;
    {
        const bool branch_taken_0x2b3e24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E24u;
        // 0x2b3e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e24) {
            ctx->pc = 0x2B4054u;
            goto label_2b4054;
        }
    }
    ctx->pc = 0x2B3E2Cu;
    // 0x2b3e2c: 0xc08a200  jal         func_228800
    ctx->pc = 0x2B3E2Cu;
    SET_GPR_U32(ctx, 31, 0x2B3E34u);
    ctx->pc = 0x2B3E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E2Cu;
    // 0x2b3e30: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2B3E2Cu, 0x2B3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E34u;
label_2b3e34:
    // 0x2b3e34: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2b3e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b3e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b3e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e3c: 0x9054011b  lbu         $s4, 0x11B($v0)
    ctx->pc = 0x2b3e3cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x2b3e40: 0xc08c340  jal         func_230D00
    ctx->pc = 0x2B3E40u;
    SET_GPR_U32(ctx, 31, 0x2B3E48u);
    ctx->pc = 0x2B3E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E40u;
    // 0x2b3e44: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2B3E40u, 0x2B3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E48u;
label_2b3e48:
    // 0x2b3e48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b3e48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b3e4c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2b3e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3e50: 0x0  nop
    ctx->pc = 0x2b3e50u;
    // NOP
    // 0x2b3e54: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x2B3E54u;
    {
        const bool branch_taken_0x2b3e54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E54u;
        // 0x2b3e58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e54) {
            ctx->pc = 0x2B3EE8u;
            goto label_2b3ee8;
        }
    }
    ctx->pc = 0x2B3E5Cu;
    // 0x2b3e5c: 0xc086618  jal         func_219860
    ctx->pc = 0x2B3E5Cu;
    SET_GPR_U32(ctx, 31, 0x2B3E64u);
    ctx->pc = 0x2B3E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E5Cu;
    // 0x2b3e60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2B3E5Cu, 0x2B3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E64u;
label_2b3e64:
    // 0x2b3e64: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2b3e64u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2b3e68: 0x0  nop
    ctx->pc = 0x2b3e68u;
    // NOP
    // 0x2b3e6c: 0x0  nop
    ctx->pc = 0x2b3e6cu;
    // NOP
    // 0x2b3e70: 0x46140044  c1          0x140044
    ctx->pc = 0x2b3e70u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b3e74: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b3e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2b3e78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b3e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b3e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3e84: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2b3e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2b3e88: 0x46000d28  max.s       $f20, $f1, $f0
    ctx->pc = 0x2b3e88u;
    ctx->f[20] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2b3e8c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B3E8Cu;
    SET_GPR_U32(ctx, 31, 0x2B3E94u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B3E8Cu, 0x2B3E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E94u;
label_2b3e94:
    // 0x2b3e94: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2B3E94u;
    {
        const bool branch_taken_0x2b3e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E94u;
        // 0x2b3e98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e94) {
            ctx->pc = 0x2B4064u;
            goto label_2b4064;
        }
    }
    ctx->pc = 0x2B3E9Cu;
    // 0x2b3e9c: 0x3a82000d  xori        $v0, $s4, 0xD
    ctx->pc = 0x2b3e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)13);
    // 0x2b3ea0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3EA0u;
    {
        const bool branch_taken_0x2b3ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EA0u;
        // 0x2b3ea4: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ea0) {
            ctx->pc = 0x2B3EC4u;
            goto label_2b3ec4;
        }
    }
    ctx->pc = 0x2B3EA8u;
    // 0x2b3ea8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3eac: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2B3EACu;
    SET_GPR_U32(ctx, 31, 0x2B3EB4u);
    ctx->pc = 0x2B3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3EACu;
    // 0x2b3eb0: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2B3EACu, 0x2B3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EB4u;
label_2b3eb4:
    // 0x2b3eb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3eb8: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3EB8u;
    {
        const bool branch_taken_0x2b3eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EB8u;
        // 0x2b3ebc: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3eb8) {
            ctx->pc = 0x2B3EC4u;
            goto label_2b3ec4;
        }
    }
    ctx->pc = 0x2B3EC0u;
    // 0x2b3ec0: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x2b3ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2b3ec4:
    // 0x2b3ec4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b3ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ecc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b3eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ed0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b3ed0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2b3ed4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b3ed4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2b3ed8: 0xc0bf3d4  jal         func_2FCF50
    ctx->pc = 0x2B3ED8u;
    SET_GPR_U32(ctx, 31, 0x2B3EE0u);
    ctx->pc = 0x2B3EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3ED8u;
    // 0x2b3edc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2B3ED8u, 0x2B3EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EE0u;
label_2b3ee0:
    // 0x2b3ee0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2B3EE0u;
    {
        const bool branch_taken_0x2b3ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EE0u;
        // 0x2b3ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ee0) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B3EE8u;
label_2b3ee8:
    // 0x2b3ee8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b3ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b3eec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b3ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ef4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b3ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ef8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b3ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b3efc: 0xc0accd8  jal         func_2B3360
    ctx->pc = 0x2B3EFCu;
    SET_GPR_U32(ctx, 31, 0x2B3F04u);
    ctx->pc = 0x2B3F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3EFCu;
    // 0x2b3f00: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3360u, 0x2B3EFCu, 0x2B3F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F04u;
label_2b3f04:
    // 0x2b3f04: 0x10500057  beq         $v0, $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2B3F04u;
    {
        const bool branch_taken_0x2b3f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F04u;
        // 0x2b3f08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f04) {
            ctx->pc = 0x2B4064u;
            goto label_2b4064;
        }
    }
    ctx->pc = 0x2B3F0Cu;
    // 0x2b3f0c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2b3f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b3f10: 0xc0891de  jal         func_224778
    ctx->pc = 0x2B3F10u;
    SET_GPR_U32(ctx, 31, 0x2B3F18u);
    ctx->pc = 0x2B3F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F10u;
    // 0x2b3f14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2B3F10u, 0x2B3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F18u;
label_2b3f18:
    // 0x2b3f18: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B3F18u;
    {
        const bool branch_taken_0x2b3f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3f18) {
            ctx->pc = 0x2B3F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3F18u;
            // 0x2b3f1c: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3F98u;
            goto label_2b3f98;
        }
    }
    ctx->pc = 0x2B3F20u;
    // 0x2b3f20: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2b3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b3f24: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2b3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b3f28: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B3F28u;
    {
        const bool branch_taken_0x2b3f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F28u;
        // 0x2b3f2c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f28) {
            ctx->pc = 0x2B3F7Cu;
            goto label_2b3f7c;
        }
    }
    ctx->pc = 0x2B3F30u;
    // 0x2b3f30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3f34: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2b3f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2b3f38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b3f38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b3f3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b3f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3f40: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2b3f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3f44: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B3F44u;
    SET_GPR_U32(ctx, 31, 0x2B3F4Cu);
    ctx->pc = 0x2B3F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F44u;
    // 0x2b3f48: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B3F44u, 0x2B3F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F4Cu;
label_2b3f4c:
    // 0x2b3f4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B3F4Cu;
    {
        const bool branch_taken_0x2b3f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F4Cu;
        // 0x2b3f50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f4c) {
            ctx->pc = 0x2B3F78u;
            goto label_2b3f78;
        }
    }
    ctx->pc = 0x2B3F54u;
    // 0x2b3f54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b3f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b3f58: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b3f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b3f5c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f64: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2b3f64u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x2b3f68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b3f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f70: 0xc0bf3d4  jal         func_2FCF50
    ctx->pc = 0x2B3F70u;
    SET_GPR_U32(ctx, 31, 0x2B3F78u);
    ctx->pc = 0x2B3F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F70u;
    // 0x2b3f74: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2B3F70u, 0x2B3F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F78u;
label_2b3f78:
    // 0x2b3f78: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2b3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2b3f7c:
    // 0x2b3f7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3f80: 0x68463fff  ldl         $a2, 0x3FFF($v0)
    ctx->pc = 0x2b3f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b3f84: 0x6c463ff8  ldr         $a2, 0x3FF8($v0)
    ctx->pc = 0x2b3f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b3f88: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2B3F88u;
    SET_GPR_U32(ctx, 31, 0x2B3F90u);
    ctx->pc = 0x2B3F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F88u;
    // 0x2b3f8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B3F88u, 0x2B3F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F90u;
label_2b3f90:
    // 0x2b3f90: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2B3F90u;
    {
        const bool branch_taken_0x2b3f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F90u;
        // 0x2b3f94: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f90) {
            ctx->pc = 0x2B4064u;
            goto label_2b4064;
        }
    }
    ctx->pc = 0x2B3F98u;
label_2b3f98:
    // 0x2b3f98: 0x38c2002d  xori        $v0, $a2, 0x2D
    ctx->pc = 0x2b3f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)45);
    // 0x2b3f9c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2B3F9Cu;
    {
        const bool branch_taken_0x2b3f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F9Cu;
        // 0x2b3fa0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f9c) {
            ctx->pc = 0x2B4064u;
            goto label_2b4064;
        }
    }
    ctx->pc = 0x2B3FA4u;
    // 0x2b3fa4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3fa8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2b3fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b3fac: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2B3FACu;
    SET_GPR_U32(ctx, 31, 0x2B3FB4u);
    ctx->pc = 0x2B3FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FACu;
    // 0x2b3fb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2B3FACu, 0x2B3FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FB4u;
label_2b3fb4:
    // 0x2b3fb4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2b3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b3fb8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2b3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b3fbc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2b3fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2b3fc0: 0x1283000b  beq         $s4, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B3FC0u;
    {
        const bool branch_taken_0x2b3fc0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FC0u;
        // 0x2b3fc4: 0xa2300028  sb          $s0, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fc0) {
            ctx->pc = 0x2B3FF0u;
            goto label_2b3ff0;
        }
    }
    ctx->pc = 0x2B3FC8u;
    // 0x2b3fc8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b3fcc: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3FCCu;
    {
        const bool branch_taken_0x2b3fcc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FCCu;
        // 0x2b3fd0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fcc) {
            ctx->pc = 0x2B3FF0u;
            goto label_2b3ff0;
        }
    }
    ctx->pc = 0x2B3FD4u;
    // 0x2b3fd4: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3FD4u;
    {
        const bool branch_taken_0x2b3fd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FD4u;
        // 0x2b3fd8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fd4) {
            ctx->pc = 0x2B3FF4u;
            goto label_2b3ff4;
        }
    }
    ctx->pc = 0x2B3FDCu;
    // 0x2b3fdc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b3fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3fe0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b3fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b3fe4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2b3fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b3fe8: 0x1464001f  bne         $v1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B3FE8u;
    {
        const bool branch_taken_0x2b3fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FE8u;
        // 0x2b3fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fe8) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B3FF0u;
label_2b3ff0:
    // 0x2b3ff0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b3ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2b3ff4:
    // 0x2b3ff4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b3ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b3ff8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B3FF8u;
    SET_GPR_U32(ctx, 31, 0x2B4000u);
    ctx->pc = 0x2B3FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FF8u;
    // 0x2b3ffc: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B3FF8u, 0x2B4000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4000u;
label_2b4000:
    // 0x2b4000: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x2b4000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2b4004: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B4004u;
    {
        const bool branch_taken_0x2b4004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4004u;
        // 0x2b4008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4004) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B400Cu;
    // 0x2b400c: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2B400Cu;
    SET_GPR_U32(ctx, 31, 0x2B4014u);
    ctx->pc = 0x2B4010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B400Cu;
    // 0x2b4010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2B400Cu, 0x2B4014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4014u;
label_2b4014:
    // 0x2b4014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4018: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B4018u;
    {
        const bool branch_taken_0x2b4018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4018u;
        // 0x2b401c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4018) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B4020u;
    // 0x2b4020: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b4020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2b4024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b4024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b4028: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b4028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b402c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2b402cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2b4030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b4030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4034: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2b4034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2b4038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b403c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b403cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b4040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4044: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2B4044u;
    SET_GPR_U32(ctx, 31, 0x2B404Cu);
    ctx->pc = 0x2B4048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4044u;
    // 0x2b4048: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2B4044u, 0x2B404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B404Cu;
label_2b404c:
    // 0x2b404c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B404Cu;
    {
        const bool branch_taken_0x2b404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B404Cu;
        // 0x2b4050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b404c) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B4054u;
label_2b4054:
    // 0x2b4054: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4058: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b4058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2b405c: 0xc0acbf2  jal         func_2B2FC8
    ctx->pc = 0x2B405Cu;
    SET_GPR_U32(ctx, 31, 0x2B4064u);
    ctx->pc = 0x2B4060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B405Cu;
    // 0x2b4060: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FC8u, 0x2B405Cu, 0x2B4064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4064u;
label_2b4064:
    // 0x2b4064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b4064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4068:
    // 0x2b4068: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2b4068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b406c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2b406cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b4070: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2b4070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b4074: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2b4074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b4078: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2b4078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b407c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2b407cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4080: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b4080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4084: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2b4084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4088: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2b4088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b408c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B408Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B408Cu;
        // 0x2b4090: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B408Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4094u;
    // 0x2b4094: 0x0  nop
    ctx->pc = 0x2b4094u;
    // NOP
    ctx->pc = 0x2b4098u;
}

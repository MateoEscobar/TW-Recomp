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

// Function: sub_004B9AF8
// Address: 0x4b9af8 - 0x4ba000
void sub_004B9AF8_0x4b9af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B9AF8_0x4b9af8");
#endif

    switch (ctx->pc) {
        case 0x4b9b30u: goto label_4b9b30;
        case 0x4b9b48u: goto label_4b9b48;
        case 0x4b9b58u: goto label_4b9b58;
        case 0x4b9b90u: goto label_4b9b90;
        case 0x4b9b9cu: goto label_4b9b9c;
        case 0x4b9ba8u: goto label_4b9ba8;
        case 0x4b9bb8u: goto label_4b9bb8;
        case 0x4b9bd0u: goto label_4b9bd0;
        case 0x4b9be0u: goto label_4b9be0;
        case 0x4b9c24u: goto label_4b9c24;
        case 0x4b9c30u: goto label_4b9c30;
        case 0x4b9c48u: goto label_4b9c48;
        case 0x4b9c58u: goto label_4b9c58;
        case 0x4b9c68u: goto label_4b9c68;
        case 0x4b9c9cu: goto label_4b9c9c;
        case 0x4b9ca8u: goto label_4b9ca8;
        case 0x4b9cccu: goto label_4b9ccc;
        case 0x4b9ce8u: goto label_4b9ce8;
        case 0x4b9cf8u: goto label_4b9cf8;
        case 0x4b9d08u: goto label_4b9d08;
        case 0x4b9d18u: goto label_4b9d18;
        case 0x4b9d28u: goto label_4b9d28;
        case 0x4b9d38u: goto label_4b9d38;
        case 0x4b9d5cu: goto label_4b9d5c;
        case 0x4b9d68u: goto label_4b9d68;
        case 0x4b9da0u: goto label_4b9da0;
        case 0x4b9db0u: goto label_4b9db0;
        case 0x4b9dd4u: goto label_4b9dd4;
        case 0x4b9de0u: goto label_4b9de0;
        case 0x4b9dfcu: goto label_4b9dfc;
        case 0x4b9e0cu: goto label_4b9e0c;
        case 0x4b9e14u: goto label_4b9e14;
        case 0x4b9e20u: goto label_4b9e20;
        case 0x4b9e2cu: goto label_4b9e2c;
        case 0x4b9e3cu: goto label_4b9e3c;
        case 0x4b9e44u: goto label_4b9e44;
        case 0x4b9e50u: goto label_4b9e50;
        case 0x4b9e5cu: goto label_4b9e5c;
        case 0x4b9e8cu: goto label_4b9e8c;
        case 0x4b9e9cu: goto label_4b9e9c;
        case 0x4b9ea4u: goto label_4b9ea4;
        case 0x4b9eb0u: goto label_4b9eb0;
        case 0x4b9ebcu: goto label_4b9ebc;
        case 0x4b9eccu: goto label_4b9ecc;
        case 0x4b9ed4u: goto label_4b9ed4;
        case 0x4b9ee0u: goto label_4b9ee0;
        case 0x4b9eecu: goto label_4b9eec;
        case 0x4b9efcu: goto label_4b9efc;
        case 0x4b9f28u: goto label_4b9f28;
        case 0x4b9f38u: goto label_4b9f38;
        case 0x4b9f5cu: goto label_4b9f5c;
        case 0x4b9f68u: goto label_4b9f68;
        case 0x4b9f8cu: goto label_4b9f8c;
        case 0x4b9f9cu: goto label_4b9f9c;
        case 0x4b9fb8u: goto label_4b9fb8;
        case 0x4b9fc8u: goto label_4b9fc8;
        default: break;
    }

    ctx->pc = 0x4b9af8u;

    // 0x4b9af8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4b9af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4b9afc: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x4b9afcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4b9b00: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x4b9b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x4b9b04: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x4b9b04u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x4b9b08: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x4b9b08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x4b9b0c: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x4b9b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x4b9b10: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4b9b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4b9b14: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x4b9b14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x4b9b18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4b9b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4b9b1c: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x4b9b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    // 0x4b9b20: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4b9b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4b9b24: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x4b9b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x4b9b28: 0xc12f1b4  jal         func_4BC6D0
    ctx->pc = 0x4B9B28u;
    SET_GPR_U32(ctx, 31, 0x4B9B30u);
    ctx->pc = 0x4B9B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9B28u;
    // 0x4b9b2c: 0xe7b60090  swc1        $f22, 0x90($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BC6D0u, 0x4B9B28u, 0x4B9B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9B30u;
label_4b9b30:
    // 0x4b9b30: 0x8e701974  lw          $s0, 0x1974($s3)
    ctx->pc = 0x4b9b30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b9b34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b9b38: 0x12020125  beq         $s0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x4B9B38u;
    {
        const bool branch_taken_0x4b9b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9B38u;
        // 0x4b9b3c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9b38) {
            ctx->pc = 0x4B9FD0u;
            goto label_4b9fd0;
        }
    }
    ctx->pc = 0x4B9B40u;
    // 0x4b9b40: 0xc12f982  jal         func_4BE608
    ctx->pc = 0x4B9B40u;
    SET_GPR_U32(ctx, 31, 0x4B9B48u);
    ctx->pc = 0x4B9B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9B40u;
    // 0x4b9b44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE608u, 0x4B9B40u, 0x4B9B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9B48u;
label_4b9b48:
    // 0x4b9b48: 0x14400122  bnez        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x4B9B48u;
    {
        const bool branch_taken_0x4b9b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9B48u;
        // 0x4b9b4c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9b48) {
            ctx->pc = 0x4B9FD4u;
            goto label_4b9fd4;
        }
    }
    ctx->pc = 0x4B9B50u;
    // 0x4b9b50: 0xc12f982  jal         func_4BE608
    ctx->pc = 0x4B9B50u;
    SET_GPR_U32(ctx, 31, 0x4B9B58u);
    ctx->pc = 0x4B9B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9B50u;
    // 0x4b9b54: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE608u, 0x4B9B50u, 0x4B9B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9B58u;
label_4b9b58:
    // 0x4b9b58: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4B9B58u;
    {
        const bool branch_taken_0x4b9b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9b58) {
            ctx->pc = 0x4B9BE8u;
            goto label_4b9be8;
        }
    }
    ctx->pc = 0x4B9B60u;
    // 0x4b9b60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b9b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b9b64: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4b9b64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b9b68: 0x0  nop
    ctx->pc = 0x4b9b68u;
    // NOP
    // 0x4b9b6c: 0x45000118  bc1f        . + 4 + (0x118 << 2)
    ctx->pc = 0x4B9B6Cu;
    {
        const bool branch_taken_0x4b9b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9B6Cu;
        // 0x4b9b70: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9b6c) {
            ctx->pc = 0x4B9FD0u;
            goto label_4b9fd0;
        }
    }
    ctx->pc = 0x4B9B74u;
    // 0x4b9b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b9b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b9b78: 0x24420fd8  addiu       $v0, $v0, 0xFD8
    ctx->pc = 0x4b9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
    // 0x4b9b7c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b9b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b9b80: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b9b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b9b84: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4b9b84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x4b9b88: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9B88u;
    SET_GPR_U32(ctx, 31, 0x4B9B90u);
    ctx->pc = 0x4B9B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9B88u;
    // 0x4b9b8c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9B88u, 0x4B9B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9B90u;
label_4b9b90:
    // 0x4b9b90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b9b90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b9b94: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9B94u;
    SET_GPR_U32(ctx, 31, 0x4B9B9Cu);
    ctx->pc = 0x4B9B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9B94u;
    // 0x4b9b98: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9B94u, 0x4B9B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9B9Cu;
label_4b9b9c:
    // 0x4b9b9c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x4b9b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x4b9ba0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9BA0u;
    SET_GPR_U32(ctx, 31, 0x4B9BA8u);
    ctx->pc = 0x4B9BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9BA0u;
    // 0x4b9ba4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9BA0u, 0x4B9BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9BA8u;
label_4b9ba8:
    // 0x4b9ba8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x4b9ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x4b9bac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9bb0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9BB0u;
    {
        const bool branch_taken_0x4b9bb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b9bb0) {
            ctx->pc = 0x4B9BC8u;
            goto label_4b9bc8;
        }
    }
    ctx->pc = 0x4B9BB8u;
label_4b9bb8:
    // 0x4b9bb8: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x4b9bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4b9bbc: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x4b9bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x4b9bc0: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x4B9BC0u;
    {
        const bool branch_taken_0x4b9bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9BC0u;
        // 0x4b9bc4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9bc0) {
            ctx->pc = 0x4B9FA4u;
            goto label_4b9fa4;
        }
    }
    ctx->pc = 0x4B9BC8u;
label_4b9bc8:
    // 0x4b9bc8: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9BC8u;
    SET_GPR_U32(ctx, 31, 0x4B9BD0u);
    ctx->pc = 0x4B9BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9BC8u;
    // 0x4b9bcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9BC8u, 0x4B9BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9BD0u;
label_4b9bd0:
    // 0x4b9bd0: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x4B9BD0u;
    {
        const bool branch_taken_0x4b9bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9BD0u;
        // 0x4b9bd4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9bd0) {
            ctx->pc = 0x4B9FA8u;
            goto label_4b9fa8;
        }
    }
    ctx->pc = 0x4B9BD8u;
    // 0x4b9bd8: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9BD8u;
    SET_GPR_U32(ctx, 31, 0x4B9BE0u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9BD8u, 0x4B9BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9BE0u;
label_4b9be0:
    // 0x4b9be0: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x4B9BE0u;
    {
        const bool branch_taken_0x4b9be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9BE0u;
        // 0x4b9be4: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9be0) {
            ctx->pc = 0x4B9FA0u;
            goto label_4b9fa0;
        }
    }
    ctx->pc = 0x4B9BE8u;
label_4b9be8:
    // 0x4b9be8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x4b9be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x4b9bec: 0x4616b832  c.eq.s      $f23, $f22
    ctx->pc = 0x4b9becu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b9bf0: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x4B9BF0u;
    {
        const bool branch_taken_0x4b9bf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b9bf0) {
            ctx->pc = 0x4B9D00u;
            goto label_4b9d00;
        }
    }
    ctx->pc = 0x4B9BF8u;
    // 0x4b9bf8: 0x4616a032  c.eq.s      $f20, $f22
    ctx->pc = 0x4b9bf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b9bfc: 0x0  nop
    ctx->pc = 0x4b9bfcu;
    // NOP
    // 0x4b9c00: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x4B9C00u;
    {
        const bool branch_taken_0x4b9c00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9C00u;
        // 0x4b9c04: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9c00) {
            ctx->pc = 0x4B9C60u;
            goto label_4b9c60;
        }
    }
    ctx->pc = 0x4B9C08u;
    // 0x4b9c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b9c0c: 0x24420fd8  addiu       $v0, $v0, 0xFD8
    ctx->pc = 0x4b9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
    // 0x4b9c10: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b9c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b9c14: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b9c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b9c18: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4b9c18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x4b9c1c: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9C1Cu;
    SET_GPR_U32(ctx, 31, 0x4B9C24u);
    ctx->pc = 0x4B9C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9C1Cu;
    // 0x4b9c20: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9C1Cu, 0x4B9C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C24u;
label_4b9c24:
    // 0x4b9c24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b9c24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b9c28: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9C28u;
    SET_GPR_U32(ctx, 31, 0x4B9C30u);
    ctx->pc = 0x4B9C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9C28u;
    // 0x4b9c2c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9C28u, 0x4B9C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C30u;
label_4b9c30:
    // 0x4b9c30: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x4b9c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x4b9c34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b9c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9c38: 0x1600ffdf  bnez        $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x4B9C38u;
    {
        const bool branch_taken_0x4b9c38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9C38u;
        // 0x4b9c3c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9c38) {
            ctx->pc = 0x4B9BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b9bb8;
        }
    }
    ctx->pc = 0x4B9C40u;
    // 0x4b9c40: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9C40u;
    SET_GPR_U32(ctx, 31, 0x4B9C48u);
    ctx->pc = 0x4B9C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9C40u;
    // 0x4b9c44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9C40u, 0x4B9C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C48u;
label_4b9c48:
    // 0x4b9c48: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x4B9C48u;
    {
        const bool branch_taken_0x4b9c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9C48u;
        // 0x4b9c4c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9c48) {
            ctx->pc = 0x4B9FA8u;
            goto label_4b9fa8;
        }
    }
    ctx->pc = 0x4B9C50u;
    // 0x4b9c50: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9C50u;
    SET_GPR_U32(ctx, 31, 0x4B9C58u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9C50u, 0x4B9C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C58u;
label_4b9c58:
    // 0x4b9c58: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x4B9C58u;
    {
        const bool branch_taken_0x4b9c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9C58u;
        // 0x4b9c5c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9c58) {
            ctx->pc = 0x4B9FA0u;
            goto label_4b9fa0;
        }
    }
    ctx->pc = 0x4B9C60u;
label_4b9c60:
    // 0x4b9c60: 0xc12f978  jal         func_4BE5E0
    ctx->pc = 0x4B9C60u;
    SET_GPR_U32(ctx, 31, 0x4B9C68u);
    ctx->pc = 0x4B9C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9C60u;
    // 0x4b9c64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE5E0u, 0x4B9C60u, 0x4B9C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C68u;
label_4b9c68:
    // 0x4b9c68: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x4B9C68u;
    {
        const bool branch_taken_0x4b9c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9C68u;
        // 0x4b9c6c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9c68) {
            ctx->pc = 0x4B9FD4u;
            goto label_4b9fd4;
        }
    }
    ctx->pc = 0x4B9C70u;
    // 0x4b9c70: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x4b9c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b9c74: 0x0  nop
    ctx->pc = 0x4b9c74u;
    // NOP
    // 0x4b9c78: 0x450000d6  bc1f        . + 4 + (0xD6 << 2)
    ctx->pc = 0x4B9C78u;
    {
        const bool branch_taken_0x4b9c78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9C78u;
        // 0x4b9c7c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9c78) {
            ctx->pc = 0x4B9FD4u;
            goto label_4b9fd4;
        }
    }
    ctx->pc = 0x4B9C80u;
    // 0x4b9c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b9c84: 0x24420fd8  addiu       $v0, $v0, 0xFD8
    ctx->pc = 0x4b9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
    // 0x4b9c88: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b9c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b9c8c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b9c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b9c90: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4b9c90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x4b9c94: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9C94u;
    SET_GPR_U32(ctx, 31, 0x4B9C9Cu);
    ctx->pc = 0x4B9C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9C94u;
    // 0x4b9c98: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9C94u, 0x4B9C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9C9Cu;
label_4b9c9c:
    // 0x4b9c9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b9c9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b9ca0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9CA0u;
    SET_GPR_U32(ctx, 31, 0x4B9CA8u);
    ctx->pc = 0x4B9CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9CA0u;
    // 0x4b9ca4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9CA0u, 0x4B9CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9CA8u;
label_4b9ca8:
    // 0x4b9ca8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B9CA8u;
    {
        const bool branch_taken_0x4b9ca8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9CA8u;
        // 0x4b9cac: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9ca8) {
            ctx->pc = 0x4B9CBCu;
            goto label_4b9cbc;
        }
    }
    ctx->pc = 0x4B9CB0u;
    // 0x4b9cb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b9cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9cb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B9CB4u;
    {
        const bool branch_taken_0x4b9cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9CB4u;
        // 0x4b9cb8: 0xffa40018  sd          $a0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9cb4) {
            ctx->pc = 0x4B9CD0u;
            goto label_4b9cd0;
        }
    }
    ctx->pc = 0x4B9CBCu;
label_4b9cbc:
    // 0x4b9cbc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b9cc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b9cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9cc4: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B9CC4u;
    SET_GPR_U32(ctx, 31, 0x4B9CCCu);
    ctx->pc = 0x4B9CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9CC4u;
    // 0x4b9cc8: 0xdc450ed8  ld          $a1, 0xED8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 3800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B9CC4u, 0x4B9CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9CCCu;
label_4b9ccc:
    // 0x4b9ccc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x4b9cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_4b9cd0:
    // 0x4b9cd0: 0x8e631974  lw          $v1, 0x1974($s3)
    ctx->pc = 0x4b9cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b9cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9cd8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9CD8u;
    {
        const bool branch_taken_0x4b9cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b9cd8) {
            ctx->pc = 0x4B9CF0u;
            goto label_4b9cf0;
        }
    }
    ctx->pc = 0x4B9CE0u;
    // 0x4b9ce0: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9CE0u;
    SET_GPR_U32(ctx, 31, 0x4B9CE8u);
    ctx->pc = 0x4B9CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9CE0u;
    // 0x4b9ce4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9CE0u, 0x4B9CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9CE8u;
label_4b9ce8:
    // 0x4b9ce8: 0x144000af  bnez        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x4B9CE8u;
    {
        const bool branch_taken_0x4b9ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9CE8u;
        // 0x4b9cec: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9ce8) {
            ctx->pc = 0x4B9FA8u;
            goto label_4b9fa8;
        }
    }
    ctx->pc = 0x4B9CF0u;
label_4b9cf0:
    // 0x4b9cf0: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9CF0u;
    SET_GPR_U32(ctx, 31, 0x4B9CF8u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9CF0u, 0x4B9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9CF8u;
label_4b9cf8:
    // 0x4b9cf8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x4B9CF8u;
    {
        const bool branch_taken_0x4b9cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9CF8u;
        // 0x4b9cfc: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9cf8) {
            ctx->pc = 0x4B9FA0u;
            goto label_4b9fa0;
        }
    }
    ctx->pc = 0x4B9D00u;
label_4b9d00:
    // 0x4b9d00: 0xc12f978  jal         func_4BE5E0
    ctx->pc = 0x4B9D00u;
    SET_GPR_U32(ctx, 31, 0x4B9D08u);
    ctx->pc = 0x4B9D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9D00u;
    // 0x4b9d04: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE5E0u, 0x4B9D00u, 0x4B9D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9D08u;
label_4b9d08:
    // 0x4b9d08: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x4B9D08u;
    {
        const bool branch_taken_0x4b9d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b9d08) {
            ctx->pc = 0x4B9F0Cu;
            goto label_4b9f0c;
        }
    }
    ctx->pc = 0x4B9D10u;
    // 0x4b9d10: 0xc12f978  jal         func_4BE5E0
    ctx->pc = 0x4B9D10u;
    SET_GPR_U32(ctx, 31, 0x4B9D18u);
    ctx->pc = 0x4B9D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9D10u;
    // 0x4b9d14: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE5E0u, 0x4B9D10u, 0x4B9D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9D18u;
label_4b9d18:
    // 0x4b9d18: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x4B9D18u;
    {
        const bool branch_taken_0x4b9d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9d18) {
            ctx->pc = 0x4B9F0Cu;
            goto label_4b9f0c;
        }
    }
    ctx->pc = 0x4B9D20u;
    // 0x4b9d20: 0xc12f978  jal         func_4BE5E0
    ctx->pc = 0x4B9D20u;
    SET_GPR_U32(ctx, 31, 0x4B9D28u);
    ctx->pc = 0x4B9D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9D20u;
    // 0x4b9d24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE5E0u, 0x4B9D20u, 0x4B9D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9D28u;
label_4b9d28:
    // 0x4b9d28: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x4B9D28u;
    {
        const bool branch_taken_0x4b9d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9d28) {
            ctx->pc = 0x4B9F0Cu;
            goto label_4b9f0c;
        }
    }
    ctx->pc = 0x4B9D30u;
    // 0x4b9d30: 0xc12f982  jal         func_4BE608
    ctx->pc = 0x4B9D30u;
    SET_GPR_U32(ctx, 31, 0x4B9D38u);
    ctx->pc = 0x4B9D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9D30u;
    // 0x4b9d34: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE608u, 0x4B9D30u, 0x4B9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9D38u;
label_4b9d38:
    // 0x4b9d38: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4B9D38u;
    {
        const bool branch_taken_0x4b9d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9D38u;
        // 0x4b9d3c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9d38) {
            ctx->pc = 0x4B9DB8u;
            goto label_4b9db8;
        }
    }
    ctx->pc = 0x4B9D40u;
    // 0x4b9d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b9d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b9d44: 0x24420fd8  addiu       $v0, $v0, 0xFD8
    ctx->pc = 0x4b9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
    // 0x4b9d48: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b9d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b9d4c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b9d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b9d50: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4b9d50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x4b9d54: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9D54u;
    SET_GPR_U32(ctx, 31, 0x4B9D5Cu);
    ctx->pc = 0x4B9D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9D54u;
    // 0x4b9d58: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9D54u, 0x4B9D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9D5Cu;
label_4b9d5c:
    // 0x4b9d5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b9d5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b9d60: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9D60u;
    SET_GPR_U32(ctx, 31, 0x4B9D68u);
    ctx->pc = 0x4B9D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9D60u;
    // 0x4b9d64: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9D60u, 0x4B9D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9D68u;
label_4b9d68:
    // 0x4b9d68: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B9D68u;
    {
        const bool branch_taken_0x4b9d68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9D68u;
        // 0x4b9d6c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9d68) {
            ctx->pc = 0x4B9D7Cu;
            goto label_4b9d7c;
        }
    }
    ctx->pc = 0x4B9D70u;
    // 0x4b9d70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b9d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9d74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B9D74u;
    {
        const bool branch_taken_0x4b9d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9D74u;
        // 0x4b9d78: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9d74) {
            ctx->pc = 0x4B9D88u;
            goto label_4b9d88;
        }
    }
    ctx->pc = 0x4B9D7Cu;
label_4b9d7c:
    // 0x4b9d7c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b9d80: 0xdc430fe0  ld          $v1, 0xFE0($v0)
    ctx->pc = 0x4b9d80u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x590FE0u));
    // 0x4b9d84: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4b9d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_4b9d88:
    // 0x4b9d88: 0x8e631974  lw          $v1, 0x1974($s3)
    ctx->pc = 0x4b9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b9d8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9d90: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9D90u;
    {
        const bool branch_taken_0x4b9d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b9d90) {
            ctx->pc = 0x4B9DA8u;
            goto label_4b9da8;
        }
    }
    ctx->pc = 0x4B9D98u;
    // 0x4b9d98: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9D98u;
    SET_GPR_U32(ctx, 31, 0x4B9DA0u);
    ctx->pc = 0x4B9D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9D98u;
    // 0x4b9d9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9D98u, 0x4B9DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9DA0u;
label_4b9da0:
    // 0x4b9da0: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x4B9DA0u;
    {
        const bool branch_taken_0x4b9da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9DA0u;
        // 0x4b9da4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9da0) {
            ctx->pc = 0x4B9FA8u;
            goto label_4b9fa8;
        }
    }
    ctx->pc = 0x4B9DA8u;
label_4b9da8:
    // 0x4b9da8: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9DA8u;
    SET_GPR_U32(ctx, 31, 0x4B9DB0u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9DA8u, 0x4B9DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9DB0u;
label_4b9db0:
    // 0x4b9db0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x4B9DB0u;
    {
        const bool branch_taken_0x4b9db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9DB0u;
        // 0x4b9db4: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9db0) {
            ctx->pc = 0x4B9FA0u;
            goto label_4b9fa0;
        }
    }
    ctx->pc = 0x4B9DB8u;
label_4b9db8:
    // 0x4b9db8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b9db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b9dbc: 0x24420fd8  addiu       $v0, $v0, 0xFD8
    ctx->pc = 0x4b9dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
    // 0x4b9dc0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b9dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b9dc4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b9dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b9dc8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4b9dc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x4b9dcc: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9DCCu;
    SET_GPR_U32(ctx, 31, 0x4B9DD4u);
    ctx->pc = 0x4B9DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9DCCu;
    // 0x4b9dd0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9DCCu, 0x4B9DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9DD4u;
label_4b9dd4:
    // 0x4b9dd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b9dd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b9dd8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9DD8u;
    SET_GPR_U32(ctx, 31, 0x4B9DE0u);
    ctx->pc = 0x4B9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9DD8u;
    // 0x4b9ddc: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9DD8u, 0x4B9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9DE0u;
label_4b9de0:
    // 0x4b9de0: 0x16000024  bnez        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4B9DE0u;
    {
        const bool branch_taken_0x4b9de0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9DE0u;
        // 0x4b9de4: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9de0) {
            ctx->pc = 0x4B9E74u;
            goto label_4b9e74;
        }
    }
    ctx->pc = 0x4B9DE8u;
    // 0x4b9de8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b9de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b9dec: 0xdc220fe8  ld          $v0, 0xFE8($at)
    ctx->pc = 0x4b9decu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x590FE8u));
    // 0x4b9df0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b9df0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b9df4: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9DF4u;
    SET_GPR_U32(ctx, 31, 0x4B9DFCu);
    ctx->pc = 0x4B9DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9DF4u;
    // 0x4b9df8: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9DF4u, 0x4B9DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9DFCu;
label_4b9dfc:
    // 0x4b9dfc: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4b9dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b9e00: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b9e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b9e04: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B9E04u;
    SET_GPR_U32(ctx, 31, 0x4B9E0Cu);
    ctx->pc = 0x4B9E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E04u;
    // 0x4b9e08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B9E04u, 0x4B9E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9E0Cu;
label_4b9e0c:
    // 0x4b9e0c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x4B9E0Cu;
    SET_GPR_U32(ctx, 31, 0x4B9E14u);
    ctx->pc = 0x4B9E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E0Cu;
    // 0x4b9e10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x4B9E0Cu, 0x4B9E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9E14u;
label_4b9e14:
    // 0x4b9e14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4b9e14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4b9e18: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9E18u;
    SET_GPR_U32(ctx, 31, 0x4B9E20u);
    ctx->pc = 0x4B9E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E18u;
    // 0x4b9e1c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9E18u, 0x4B9E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9E20u;
label_4b9e20:
    // 0x4b9e20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b9e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9e24: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B9E24u;
    SET_GPR_U32(ctx, 31, 0x4B9E2Cu);
    ctx->pc = 0x4B9E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E24u;
    // 0x4b9e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B9E24u, 0x4B9E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9E2Cu;
label_4b9e2c:
    // 0x4b9e2c: 0x4410035  bgez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4B9E2Cu;
    {
        const bool branch_taken_0x4b9e2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9E2Cu;
        // 0x4b9e30: 0x8e631974  lw          $v1, 0x1974($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9e2c) {
            ctx->pc = 0x4B9F04u;
            goto label_4b9f04;
        }
    }
    ctx->pc = 0x4B9E34u;
    // 0x4b9e34: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9E34u;
    SET_GPR_U32(ctx, 31, 0x4B9E3Cu);
    ctx->pc = 0x4B9E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E34u;
    // 0x4b9e38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9E34u, 0x4B9E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9E3Cu;
label_4b9e3c:
    // 0x4b9e3c: 0xc12f8f0  jal         func_4BE3C0
    ctx->pc = 0x4B9E3Cu;
    SET_GPR_U32(ctx, 31, 0x4B9E44u);
    ctx->pc = 0x4B9E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E3Cu;
    // 0x4b9e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE3C0u, 0x4B9E3Cu, 0x4B9E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9E44u;
label_4b9e44:
    // 0x4b9e44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b9e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9e48: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9E48u;
    SET_GPR_U32(ctx, 31, 0x4B9E50u);
    ctx->pc = 0x4B9E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E48u;
    // 0x4b9e4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9E48u, 0x4B9E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9E50u;
label_4b9e50:
    // 0x4b9e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b9e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9e54: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B9E54u;
    SET_GPR_U32(ctx, 31, 0x4B9E5Cu);
    ctx->pc = 0x4B9E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E54u;
    // 0x4b9e58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B9E54u, 0x4B9E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9E5Cu;
label_4b9e5c:
    // 0x4b9e5c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x4B9E5Cu;
    {
        const bool branch_taken_0x4b9e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9E5Cu;
        // 0x4b9e60: 0x8e631974  lw          $v1, 0x1974($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9e5c) {
            ctx->pc = 0x4B9F04u;
            goto label_4b9f04;
        }
    }
    ctx->pc = 0x4B9E64u;
    // 0x4b9e64: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b9e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b9e68: 0xdc220ff0  ld          $v0, 0xFF0($at)
    ctx->pc = 0x4b9e68u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x590FF0u));
    // 0x4b9e6c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x4B9E6Cu;
    {
        const bool branch_taken_0x4b9e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9E6Cu;
        // 0x4b9e70: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9e6c) {
            ctx->pc = 0x4B9F04u;
            goto label_4b9f04;
        }
    }
    ctx->pc = 0x4B9E74u;
label_4b9e74:
    // 0x4b9e74: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b9e78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b9e78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b9e7c: 0xdc510ed8  ld          $s1, 0xED8($v0)
    ctx->pc = 0x4b9e7cu;
    SET_GPR_U64(ctx, 17, FAST_READ64(0x590ED8u));
    // 0x4b9e80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b9e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9e84: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9E84u;
    SET_GPR_U32(ctx, 31, 0x4B9E8Cu);
    ctx->pc = 0x4B9E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E84u;
    // 0x4b9e88: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9E84u, 0x4B9E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9E8Cu;
label_4b9e8c:
    // 0x4b9e8c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4b9e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b9e90: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b9e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b9e94: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B9E94u;
    SET_GPR_U32(ctx, 31, 0x4B9E9Cu);
    ctx->pc = 0x4B9E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E94u;
    // 0x4b9e98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B9E94u, 0x4B9E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9E9Cu;
label_4b9e9c:
    // 0x4b9e9c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x4B9E9Cu;
    SET_GPR_U32(ctx, 31, 0x4B9EA4u);
    ctx->pc = 0x4B9EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9E9Cu;
    // 0x4b9ea0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x4B9E9Cu, 0x4B9EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9EA4u;
label_4b9ea4:
    // 0x4b9ea4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4b9ea4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4b9ea8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9EA8u;
    SET_GPR_U32(ctx, 31, 0x4B9EB0u);
    ctx->pc = 0x4B9EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9EA8u;
    // 0x4b9eac: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9EA8u, 0x4B9EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9EB0u;
label_4b9eb0:
    // 0x4b9eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b9eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9eb4: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B9EB4u;
    SET_GPR_U32(ctx, 31, 0x4B9EBCu);
    ctx->pc = 0x4B9EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9EB4u;
    // 0x4b9eb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B9EB4u, 0x4B9EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9EBCu;
label_4b9ebc:
    // 0x4b9ebc: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B9EBCu;
    {
        const bool branch_taken_0x4b9ebc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9EBCu;
        // 0x4b9ec0: 0x8e631974  lw          $v1, 0x1974($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9ebc) {
            ctx->pc = 0x4B9F04u;
            goto label_4b9f04;
        }
    }
    ctx->pc = 0x4B9EC4u;
    // 0x4b9ec4: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9EC4u;
    SET_GPR_U32(ctx, 31, 0x4B9ECCu);
    ctx->pc = 0x4B9EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9EC4u;
    // 0x4b9ec8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9EC4u, 0x4B9ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9ECCu;
label_4b9ecc:
    // 0x4b9ecc: 0xc12f8f0  jal         func_4BE3C0
    ctx->pc = 0x4B9ECCu;
    SET_GPR_U32(ctx, 31, 0x4B9ED4u);
    ctx->pc = 0x4B9ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9ECCu;
    // 0x4b9ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE3C0u, 0x4B9ECCu, 0x4B9ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9ED4u;
label_4b9ed4:
    // 0x4b9ed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b9ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9ed8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9ED8u;
    SET_GPR_U32(ctx, 31, 0x4B9EE0u);
    ctx->pc = 0x4B9EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9ED8u;
    // 0x4b9edc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9ED8u, 0x4B9EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9EE0u;
label_4b9ee0:
    // 0x4b9ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b9ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9ee4: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B9EE4u;
    SET_GPR_U32(ctx, 31, 0x4B9EECu);
    ctx->pc = 0x4B9EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9EE4u;
    // 0x4b9ee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B9EE4u, 0x4B9EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9EECu;
label_4b9eec:
    // 0x4b9eec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B9EECu;
    {
        const bool branch_taken_0x4b9eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9EECu;
        // 0x4b9ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9eec) {
            ctx->pc = 0x4B9F00u;
            goto label_4b9f00;
        }
    }
    ctx->pc = 0x4B9EF4u;
    // 0x4b9ef4: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B9EF4u;
    SET_GPR_U32(ctx, 31, 0x4B9EFCu);
    ctx->pc = 0x4B9EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9EF4u;
    // 0x4b9ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B9EF4u, 0x4B9EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9EFCu;
label_4b9efc:
    // 0x4b9efc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x4b9efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_4b9f00:
    // 0x4b9f00: 0x8e631974  lw          $v1, 0x1974($s3)
    ctx->pc = 0x4b9f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
label_4b9f04:
    // 0x4b9f04: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4B9F04u;
    {
        const bool branch_taken_0x4b9f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9F04u;
        // 0x4b9f08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9f04) {
            ctx->pc = 0x4B9F7Cu;
            goto label_4b9f7c;
        }
    }
    ctx->pc = 0x4B9F0Cu;
label_4b9f0c:
    // 0x4b9f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b9f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b9f10: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x4b9f10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b9f14: 0x0  nop
    ctx->pc = 0x4b9f14u;
    // NOP
    // 0x4b9f18: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x4B9F18u;
    {
        const bool branch_taken_0x4b9f18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9F18u;
        // 0x4b9f1c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9f18) {
            ctx->pc = 0x4B9FD4u;
            goto label_4b9fd4;
        }
    }
    ctx->pc = 0x4B9F20u;
    // 0x4b9f20: 0xc12f978  jal         func_4BE5E0
    ctx->pc = 0x4B9F20u;
    SET_GPR_U32(ctx, 31, 0x4B9F28u);
    ctx->pc = 0x4B9F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9F20u;
    // 0x4b9f24: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE5E0u, 0x4B9F20u, 0x4B9F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9F28u;
label_4b9f28:
    // 0x4b9f28: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4B9F28u;
    {
        const bool branch_taken_0x4b9f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9F28u;
        // 0x4b9f2c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9f28) {
            ctx->pc = 0x4B9FD4u;
            goto label_4b9fd4;
        }
    }
    ctx->pc = 0x4B9F30u;
    // 0x4b9f30: 0xc12f978  jal         func_4BE5E0
    ctx->pc = 0x4B9F30u;
    SET_GPR_U32(ctx, 31, 0x4B9F38u);
    ctx->pc = 0x4B9F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9F30u;
    // 0x4b9f34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE5E0u, 0x4B9F30u, 0x4B9F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9F38u;
label_4b9f38:
    // 0x4b9f38: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4B9F38u;
    {
        const bool branch_taken_0x4b9f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9F38u;
        // 0x4b9f3c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9f38) {
            ctx->pc = 0x4B9FD0u;
            goto label_4b9fd0;
        }
    }
    ctx->pc = 0x4B9F40u;
    // 0x4b9f40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b9f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b9f44: 0x24420fd8  addiu       $v0, $v0, 0xFD8
    ctx->pc = 0x4b9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
    // 0x4b9f48: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b9f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b9f4c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b9f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b9f50: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4b9f50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x4b9f54: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9F54u;
    SET_GPR_U32(ctx, 31, 0x4B9F5Cu);
    ctx->pc = 0x4B9F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9F54u;
    // 0x4b9f58: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9F54u, 0x4B9F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9F5Cu;
label_4b9f5c:
    // 0x4b9f5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b9f5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b9f60: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9F60u;
    SET_GPR_U32(ctx, 31, 0x4B9F68u);
    ctx->pc = 0x4B9F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9F60u;
    // 0x4b9f64: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9F60u, 0x4B9F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9F68u;
label_4b9f68:
    // 0x4b9f68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b9f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9f6c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x4b9f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x4b9f70: 0x8e631974  lw          $v1, 0x1974($s3)
    ctx->pc = 0x4b9f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b9f74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9f78: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x4b9f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_4b9f7c:
    // 0x4b9f7c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9F7Cu;
    {
        const bool branch_taken_0x4b9f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b9f7c) {
            ctx->pc = 0x4B9F94u;
            goto label_4b9f94;
        }
    }
    ctx->pc = 0x4B9F84u;
    // 0x4b9f84: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9F84u;
    SET_GPR_U32(ctx, 31, 0x4B9F8Cu);
    ctx->pc = 0x4B9F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9F84u;
    // 0x4b9f88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9F84u, 0x4B9F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9F8Cu;
label_4b9f8c:
    // 0x4b9f8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B9F8Cu;
    {
        const bool branch_taken_0x4b9f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9F8Cu;
        // 0x4b9f90: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9f8c) {
            ctx->pc = 0x4B9FA8u;
            goto label_4b9fa8;
        }
    }
    ctx->pc = 0x4B9F94u;
label_4b9f94:
    // 0x4b9f94: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9F94u;
    SET_GPR_U32(ctx, 31, 0x4B9F9Cu);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9F94u, 0x4B9F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9F9Cu;
label_4b9f9c:
    // 0x4b9f9c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x4b9f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_4b9fa0:
    // 0x4b9fa0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b9fa4:
    // 0x4b9fa4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b9fa8:
    // 0x4b9fa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9FA8u;
    {
        const bool branch_taken_0x4b9fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9fa8) {
            ctx->pc = 0x4B9FC0u;
            goto label_4b9fc0;
        }
    }
    ctx->pc = 0x4B9FB0u;
    // 0x4b9fb0: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9FB0u;
    SET_GPR_U32(ctx, 31, 0x4B9FB8u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9FB0u, 0x4B9FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9FB8u;
label_4b9fb8:
    // 0x4b9fb8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4b9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9fbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b9fc0:
    // 0x4b9fc0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x4B9FC0u;
    SET_GPR_U32(ctx, 31, 0x4B9FC8u);
    ctx->pc = 0x4B9FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9FC0u;
    // 0x4b9fc4: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x4B9FC0u, 0x4B9FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9FC8u;
label_4b9fc8:
    // 0x4b9fc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B9FC8u;
    {
        const bool branch_taken_0x4b9fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9FC8u;
        // 0x4b9fcc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9fc8) {
            ctx->pc = 0x4B9FD8u;
            goto label_4b9fd8;
        }
    }
    ctx->pc = 0x4B9FD0u;
label_4b9fd0:
    // 0x4b9fd0: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x4b9fd0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_4b9fd4:
    // 0x4b9fd4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4b9fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4b9fd8:
    // 0x4b9fd8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x4b9fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b9fdc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4b9fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b9fe0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x4b9fe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b9fe4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4b9fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b9fe8: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x4b9fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4b9fec: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x4b9fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4b9ff0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x4b9ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4b9ff4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x4b9ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4b9ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B9FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9FF8u;
        // 0x4b9ffc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B9FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BA000u;
}

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

// Function: sub_003D8AB8
// Address: 0x3d8ab8 - 0x3d8b88
void sub_003D8AB8_0x3d8ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8AB8_0x3d8ab8");
#endif

    switch (ctx->pc) {
        case 0x3d8ab8u: goto label_3d8ab8;
        case 0x3d8abcu: goto label_3d8abc;
        case 0x3d8ac0u: goto label_3d8ac0;
        case 0x3d8ac4u: goto label_3d8ac4;
        case 0x3d8ac8u: goto label_3d8ac8;
        case 0x3d8accu: goto label_3d8acc;
        case 0x3d8ad0u: goto label_3d8ad0;
        case 0x3d8ad4u: goto label_3d8ad4;
        case 0x3d8ad8u: goto label_3d8ad8;
        case 0x3d8adcu: goto label_3d8adc;
        case 0x3d8ae0u: goto label_3d8ae0;
        case 0x3d8ae4u: goto label_3d8ae4;
        case 0x3d8ae8u: goto label_3d8ae8;
        case 0x3d8aecu: goto label_3d8aec;
        case 0x3d8af0u: goto label_3d8af0;
        case 0x3d8af4u: goto label_3d8af4;
        case 0x3d8af8u: goto label_3d8af8;
        case 0x3d8afcu: goto label_3d8afc;
        case 0x3d8b00u: goto label_3d8b00;
        case 0x3d8b04u: goto label_3d8b04;
        case 0x3d8b08u: goto label_3d8b08;
        case 0x3d8b0cu: goto label_3d8b0c;
        case 0x3d8b10u: goto label_3d8b10;
        case 0x3d8b14u: goto label_3d8b14;
        case 0x3d8b18u: goto label_3d8b18;
        case 0x3d8b1cu: goto label_3d8b1c;
        case 0x3d8b20u: goto label_3d8b20;
        case 0x3d8b24u: goto label_3d8b24;
        case 0x3d8b28u: goto label_3d8b28;
        case 0x3d8b2cu: goto label_3d8b2c;
        case 0x3d8b30u: goto label_3d8b30;
        case 0x3d8b34u: goto label_3d8b34;
        case 0x3d8b38u: goto label_3d8b38;
        case 0x3d8b3cu: goto label_3d8b3c;
        case 0x3d8b40u: goto label_3d8b40;
        case 0x3d8b44u: goto label_3d8b44;
        case 0x3d8b48u: goto label_3d8b48;
        case 0x3d8b4cu: goto label_3d8b4c;
        case 0x3d8b50u: goto label_3d8b50;
        case 0x3d8b54u: goto label_3d8b54;
        case 0x3d8b58u: goto label_3d8b58;
        case 0x3d8b5cu: goto label_3d8b5c;
        case 0x3d8b60u: goto label_3d8b60;
        case 0x3d8b64u: goto label_3d8b64;
        case 0x3d8b68u: goto label_3d8b68;
        case 0x3d8b6cu: goto label_3d8b6c;
        case 0x3d8b70u: goto label_3d8b70;
        case 0x3d8b74u: goto label_3d8b74;
        case 0x3d8b78u: goto label_3d8b78;
        case 0x3d8b7cu: goto label_3d8b7c;
        case 0x3d8b80u: goto label_3d8b80;
        case 0x3d8b84u: goto label_3d8b84;
        default: break;
    }

    ctx->pc = 0x3d8ab8u;

label_3d8ab8:
    // 0x3d8ab8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d8ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d8abc:
    // 0x3d8abc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d8abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d8ac0:
    // 0x3d8ac0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d8ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d8ac4:
    // 0x3d8ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d8ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8ac8:
    // 0x3d8ac8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d8ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d8acc:
    // 0x3d8acc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d8accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d8ad0:
    // 0x3d8ad0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d8ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d8ad4:
    // 0x3d8ad4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d8ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d8ad8:
    // 0x3d8ad8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d8ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d8adc:
    // 0x3d8adc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d8ae0:
    // 0x3d8ae0: 0x40f809  jalr        $v0
label_3d8ae4:
    if (ctx->pc == 0x3D8AE4u) {
        ctx->pc = 0x3D8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8AE0u;
        // 0x3d8ae4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8AE8u;
        goto label_3d8ae8;
    }
    ctx->pc = 0x3D8AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D8AE8u);
        ctx->pc = 0x3D8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8AE0u;
        // 0x3d8ae4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8AE0u, 0x3D8AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8AE8u;
label_3d8ae8:
    // 0x3d8ae8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3d8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_3d8aec:
    // 0x3d8aec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d8aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8af0:
    // 0x3d8af0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3d8af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3d8af4:
    // 0x3d8af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8af8:
    // 0x3d8af8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3d8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3d8afc:
    // 0x3d8afc: 0xc0e858c  jal         func_3A1630
label_3d8b00:
    if (ctx->pc == 0x3D8B00u) {
        ctx->pc = 0x3D8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8AFCu;
        // 0x3d8b00: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8B04u;
        goto label_3d8b04;
    }
    ctx->pc = 0x3D8AFCu;
    SET_GPR_U32(ctx, 31, 0x3D8B04u);
    ctx->pc = 0x3D8B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8AFCu;
    // 0x3d8b00: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D8AFCu, 0x3D8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8B04u;
label_3d8b04:
    // 0x3d8b04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d8b08:
    // 0x3d8b08: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3d8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3d8b0c:
    // 0x3d8b0c: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x3d8b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_3d8b10:
    // 0x3d8b10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d8b14:
    // 0x3d8b14: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3d8b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_3d8b18:
    // 0x3d8b18: 0xc0ea12a  jal         func_3A84A8
label_3d8b1c:
    if (ctx->pc == 0x3D8B1Cu) {
        ctx->pc = 0x3D8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B18u;
        // 0x3d8b1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8B20u;
        goto label_3d8b20;
    }
    ctx->pc = 0x3D8B18u;
    SET_GPR_U32(ctx, 31, 0x3D8B20u);
    ctx->pc = 0x3D8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8B18u;
    // 0x3d8b1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D8B18u, 0x3D8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8B20u;
label_3d8b20:
    // 0x3d8b20: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d8b20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8b24:
    // 0x3d8b24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d8b28:
    // 0x3d8b28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d8b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8b2c:
    // 0x3d8b2c: 0xc0ea12a  jal         func_3A84A8
label_3d8b30:
    if (ctx->pc == 0x3D8B30u) {
        ctx->pc = 0x3D8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B2Cu;
        // 0x3d8b30: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8B34u;
        goto label_3d8b34;
    }
    ctx->pc = 0x3D8B2Cu;
    SET_GPR_U32(ctx, 31, 0x3D8B34u);
    ctx->pc = 0x3D8B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8B2Cu;
    // 0x3d8b30: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D8B2Cu, 0x3D8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8B34u;
label_3d8b34:
    // 0x3d8b34: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3d8b34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8b38:
    // 0x3d8b38: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3d8b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3d8b3c:
    // 0x3d8b3c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d8b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8b40:
    // 0x3d8b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8b44:
    // 0x3d8b44: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x3d8b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
label_3d8b48:
    // 0x3d8b48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d8b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d8b4c:
    // 0x3d8b4c: 0x34a50023  ori         $a1, $a1, 0x23
    ctx->pc = 0x3d8b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35);
label_3d8b50:
    // 0x3d8b50: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3d8b50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3d8b54:
    // 0x3d8b54: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3d8b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3d8b58:
    // 0x3d8b58: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x3d8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_3d8b5c:
    // 0x3d8b5c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3d8b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3d8b60:
    // 0x3d8b60: 0xc0e9404  jal         func_3A5010
label_3d8b64:
    if (ctx->pc == 0x3D8B64u) {
        ctx->pc = 0x3D8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B60u;
        // 0x3d8b64: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8B68u;
        goto label_3d8b68;
    }
    ctx->pc = 0x3D8B60u;
    SET_GPR_U32(ctx, 31, 0x3D8B68u);
    ctx->pc = 0x3D8B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8B60u;
    // 0x3d8b64: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3D8B60u, 0x3D8B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8B68u;
label_3d8b68:
    // 0x3d8b68: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3d8b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3d8b6c:
    // 0x3d8b6c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d8b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d8b70:
    // 0x3d8b70: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d8b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d8b74:
    // 0x3d8b74: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d8b74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d8b78:
    // 0x3d8b78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d8b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d8b7c:
    // 0x3d8b7c: 0x3e00008  jr          $ra
label_3d8b80:
    if (ctx->pc == 0x3D8B80u) {
        ctx->pc = 0x3D8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B7Cu;
        // 0x3d8b80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8B84u;
        goto label_3d8b84;
    }
    ctx->pc = 0x3D8B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B7Cu;
        // 0x3d8b80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8B84u;
label_3d8b84:
    // 0x3d8b84: 0x0  nop
    ctx->pc = 0x3d8b84u;
    // NOP
    ctx->pc = 0x3d8b88u;
}

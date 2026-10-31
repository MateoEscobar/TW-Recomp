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

// Function: sub_003D7B38
// Address: 0x3d7b38 - 0x3d7c38
void sub_003D7B38_0x3d7b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7B38_0x3d7b38");
#endif

    switch (ctx->pc) {
        case 0x3d7b38u: goto label_3d7b38;
        case 0x3d7b3cu: goto label_3d7b3c;
        case 0x3d7b40u: goto label_3d7b40;
        case 0x3d7b44u: goto label_3d7b44;
        case 0x3d7b48u: goto label_3d7b48;
        case 0x3d7b4cu: goto label_3d7b4c;
        case 0x3d7b50u: goto label_3d7b50;
        case 0x3d7b54u: goto label_3d7b54;
        case 0x3d7b58u: goto label_3d7b58;
        case 0x3d7b5cu: goto label_3d7b5c;
        case 0x3d7b60u: goto label_3d7b60;
        case 0x3d7b64u: goto label_3d7b64;
        case 0x3d7b68u: goto label_3d7b68;
        case 0x3d7b6cu: goto label_3d7b6c;
        case 0x3d7b70u: goto label_3d7b70;
        case 0x3d7b74u: goto label_3d7b74;
        case 0x3d7b78u: goto label_3d7b78;
        case 0x3d7b7cu: goto label_3d7b7c;
        case 0x3d7b80u: goto label_3d7b80;
        case 0x3d7b84u: goto label_3d7b84;
        case 0x3d7b88u: goto label_3d7b88;
        case 0x3d7b8cu: goto label_3d7b8c;
        case 0x3d7b90u: goto label_3d7b90;
        case 0x3d7b94u: goto label_3d7b94;
        case 0x3d7b98u: goto label_3d7b98;
        case 0x3d7b9cu: goto label_3d7b9c;
        case 0x3d7ba0u: goto label_3d7ba0;
        case 0x3d7ba4u: goto label_3d7ba4;
        case 0x3d7ba8u: goto label_3d7ba8;
        case 0x3d7bacu: goto label_3d7bac;
        case 0x3d7bb0u: goto label_3d7bb0;
        case 0x3d7bb4u: goto label_3d7bb4;
        case 0x3d7bb8u: goto label_3d7bb8;
        case 0x3d7bbcu: goto label_3d7bbc;
        case 0x3d7bc0u: goto label_3d7bc0;
        case 0x3d7bc4u: goto label_3d7bc4;
        case 0x3d7bc8u: goto label_3d7bc8;
        case 0x3d7bccu: goto label_3d7bcc;
        case 0x3d7bd0u: goto label_3d7bd0;
        case 0x3d7bd4u: goto label_3d7bd4;
        case 0x3d7bd8u: goto label_3d7bd8;
        case 0x3d7bdcu: goto label_3d7bdc;
        case 0x3d7be0u: goto label_3d7be0;
        case 0x3d7be4u: goto label_3d7be4;
        case 0x3d7be8u: goto label_3d7be8;
        case 0x3d7becu: goto label_3d7bec;
        case 0x3d7bf0u: goto label_3d7bf0;
        case 0x3d7bf4u: goto label_3d7bf4;
        case 0x3d7bf8u: goto label_3d7bf8;
        case 0x3d7bfcu: goto label_3d7bfc;
        case 0x3d7c00u: goto label_3d7c00;
        case 0x3d7c04u: goto label_3d7c04;
        case 0x3d7c08u: goto label_3d7c08;
        case 0x3d7c0cu: goto label_3d7c0c;
        case 0x3d7c10u: goto label_3d7c10;
        case 0x3d7c14u: goto label_3d7c14;
        case 0x3d7c18u: goto label_3d7c18;
        case 0x3d7c1cu: goto label_3d7c1c;
        case 0x3d7c20u: goto label_3d7c20;
        case 0x3d7c24u: goto label_3d7c24;
        case 0x3d7c28u: goto label_3d7c28;
        case 0x3d7c2cu: goto label_3d7c2c;
        case 0x3d7c30u: goto label_3d7c30;
        case 0x3d7c34u: goto label_3d7c34;
        default: break;
    }

    ctx->pc = 0x3d7b38u;

label_3d7b38:
    // 0x3d7b38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d7b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d7b3c:
    // 0x3d7b3c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d7b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d7b40:
    // 0x3d7b40: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d7b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d7b44:
    // 0x3d7b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d7b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7b48:
    // 0x3d7b48: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d7b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d7b4c:
    // 0x3d7b4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d7b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d7b50:
    // 0x3d7b50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d7b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d7b54:
    // 0x3d7b54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d7b58:
    // 0x3d7b58: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d7b58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d7b5c:
    // 0x3d7b5c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d7b60:
    // 0x3d7b60: 0x40f809  jalr        $v0
label_3d7b64:
    if (ctx->pc == 0x3D7B64u) {
        ctx->pc = 0x3D7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B60u;
        // 0x3d7b64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B68u;
        goto label_3d7b68;
    }
    ctx->pc = 0x3D7B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7B68u);
        ctx->pc = 0x3D7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B60u;
        // 0x3d7b64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7B60u, 0x3D7B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7B68u;
label_3d7b68:
    // 0x3d7b68: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3d7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_3d7b6c:
    // 0x3d7b6c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3d7b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3d7b70:
    // 0x3d7b70: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x3d7b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_3d7b74:
    // 0x3d7b74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d7b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7b78:
    // 0x3d7b78: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3d7b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3d7b7c:
    // 0x3d7b7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d7b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d7b80:
    // 0x3d7b80: 0xc0e858c  jal         func_3A1630
label_3d7b84:
    if (ctx->pc == 0x3D7B84u) {
        ctx->pc = 0x3D7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B80u;
        // 0x3d7b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B88u;
        goto label_3d7b88;
    }
    ctx->pc = 0x3D7B80u;
    SET_GPR_U32(ctx, 31, 0x3D7B88u);
    ctx->pc = 0x3D7B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7B80u;
    // 0x3d7b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D7B80u, 0x3D7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7B88u;
label_3d7b88:
    // 0x3d7b88: 0xc0ea14c  jal         func_3A8530
label_3d7b8c:
    if (ctx->pc == 0x3D7B8Cu) {
        ctx->pc = 0x3D7B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B88u;
        // 0x3d7b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B90u;
        goto label_3d7b90;
    }
    ctx->pc = 0x3D7B88u;
    SET_GPR_U32(ctx, 31, 0x3D7B90u);
    ctx->pc = 0x3D7B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7B88u;
    // 0x3d7b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D7B88u, 0x3D7B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7B90u;
label_3d7b90:
    // 0x3d7b90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d7b94:
    // 0x3d7b94: 0xc0ea12a  jal         func_3A84A8
label_3d7b98:
    if (ctx->pc == 0x3D7B98u) {
        ctx->pc = 0x3D7B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B94u;
        // 0x3d7b98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B9Cu;
        goto label_3d7b9c;
    }
    ctx->pc = 0x3D7B94u;
    SET_GPR_U32(ctx, 31, 0x3D7B9Cu);
    ctx->pc = 0x3D7B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7B94u;
    // 0x3d7b98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D7B94u, 0x3D7B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7B9Cu;
label_3d7b9c:
    // 0x3d7b9c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d7b9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7ba0:
    // 0x3d7ba0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d7ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d7ba4:
    // 0x3d7ba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d7ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7ba8:
    // 0x3d7ba8: 0xc0ea12a  jal         func_3A84A8
label_3d7bac:
    if (ctx->pc == 0x3D7BACu) {
        ctx->pc = 0x3D7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BA8u;
        // 0x3d7bac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BB0u;
        goto label_3d7bb0;
    }
    ctx->pc = 0x3D7BA8u;
    SET_GPR_U32(ctx, 31, 0x3D7BB0u);
    ctx->pc = 0x3D7BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7BA8u;
    // 0x3d7bac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D7BA8u, 0x3D7BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7BB0u;
label_3d7bb0:
    // 0x3d7bb0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d7bb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7bb4:
    // 0x3d7bb4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d7bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d7bb8:
    // 0x3d7bb8: 0x8e070054  lw          $a3, 0x54($s0)
    ctx->pc = 0x3d7bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d7bbc:
    // 0x3d7bbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7bc0:
    // 0x3d7bc0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d7bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d7bc4:
    // 0x3d7bc4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3d7bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3d7bc8:
    // 0x3d7bc8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3d7bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3d7bcc:
    // 0x3d7bcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d7bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d7bd0:
    // 0x3d7bd0: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x3d7bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_3d7bd4:
    // 0x3d7bd4: 0xc0e93a2  jal         func_3A4E88
label_3d7bd8:
    if (ctx->pc == 0x3D7BD8u) {
        ctx->pc = 0x3D7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BD4u;
        // 0x3d7bd8: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BDCu;
        goto label_3d7bdc;
    }
    ctx->pc = 0x3D7BD4u;
    SET_GPR_U32(ctx, 31, 0x3D7BDCu);
    ctx->pc = 0x3D7BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7BD4u;
    // 0x3d7bd8: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3D7BD4u, 0x3D7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7BDCu;
label_3d7bdc:
    // 0x3d7bdc: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3d7bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3d7be0:
    // 0x3d7be0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d7be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d7be4:
    // 0x3d7be4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3d7be8:
    // 0x3d7be8: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x3d7be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_3d7bec:
    // 0x3d7bec: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3d7becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3d7bf0:
    // 0x3d7bf0: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3d7bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3d7bf4:
    // 0x3d7bf4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d7bf8:
    // 0x3d7bf8: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3d7bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3d7bfc:
    // 0x3d7bfc: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d7c00:
    // 0x3d7c00: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3d7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_3d7c04:
    // 0x3d7c04: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3d7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3d7c08:
    // 0x3d7c08: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3d7c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3d7c0c:
    // 0x3d7c0c: 0xc0cd4ee  jal         func_3353B8
label_3d7c10:
    if (ctx->pc == 0x3D7C10u) {
        ctx->pc = 0x3D7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C0Cu;
        // 0x3d7c10: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C14u;
        goto label_3d7c14;
    }
    ctx->pc = 0x3D7C0Cu;
    SET_GPR_U32(ctx, 31, 0x3D7C14u);
    ctx->pc = 0x3D7C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7C0Cu;
    // 0x3d7c10: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D7C0Cu, 0x3D7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7C14u;
label_3d7c14:
    // 0x3d7c14: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x3d7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_3d7c18:
    // 0x3d7c18: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3d7c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3d7c1c:
    // 0x3d7c1c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3d7c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3d7c20:
    // 0x3d7c20: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d7c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d7c24:
    // 0x3d7c24: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d7c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d7c28:
    // 0x3d7c28: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d7c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7c2c:
    // 0x3d7c2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d7c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7c30:
    // 0x3d7c30: 0x3e00008  jr          $ra
label_3d7c34:
    if (ctx->pc == 0x3D7C34u) {
        ctx->pc = 0x3D7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C30u;
        // 0x3d7c34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C38u;
        goto label_fallthrough_0x3d7c30;
    }
    ctx->pc = 0x3D7C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C30u;
        // 0x3d7c34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d7c30:
    ctx->pc = 0x3D7C38u;
}

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

// Function: sub_002D3A18
// Address: 0x2d3a18 - 0x2d3c08
void sub_002D3A18_0x2d3a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3A18_0x2d3a18");
#endif

    switch (ctx->pc) {
        case 0x2d3a18u: goto label_2d3a18;
        case 0x2d3a1cu: goto label_2d3a1c;
        case 0x2d3a20u: goto label_2d3a20;
        case 0x2d3a24u: goto label_2d3a24;
        case 0x2d3a28u: goto label_2d3a28;
        case 0x2d3a2cu: goto label_2d3a2c;
        case 0x2d3a30u: goto label_2d3a30;
        case 0x2d3a34u: goto label_2d3a34;
        case 0x2d3a38u: goto label_2d3a38;
        case 0x2d3a3cu: goto label_2d3a3c;
        case 0x2d3a40u: goto label_2d3a40;
        case 0x2d3a44u: goto label_2d3a44;
        case 0x2d3a48u: goto label_2d3a48;
        case 0x2d3a4cu: goto label_2d3a4c;
        case 0x2d3a50u: goto label_2d3a50;
        case 0x2d3a54u: goto label_2d3a54;
        case 0x2d3a58u: goto label_2d3a58;
        case 0x2d3a5cu: goto label_2d3a5c;
        case 0x2d3a60u: goto label_2d3a60;
        case 0x2d3a64u: goto label_2d3a64;
        case 0x2d3a68u: goto label_2d3a68;
        case 0x2d3a6cu: goto label_2d3a6c;
        case 0x2d3a70u: goto label_2d3a70;
        case 0x2d3a74u: goto label_2d3a74;
        case 0x2d3a78u: goto label_2d3a78;
        case 0x2d3a7cu: goto label_2d3a7c;
        case 0x2d3a80u: goto label_2d3a80;
        case 0x2d3a84u: goto label_2d3a84;
        case 0x2d3a88u: goto label_2d3a88;
        case 0x2d3a8cu: goto label_2d3a8c;
        case 0x2d3a90u: goto label_2d3a90;
        case 0x2d3a94u: goto label_2d3a94;
        case 0x2d3a98u: goto label_2d3a98;
        case 0x2d3a9cu: goto label_2d3a9c;
        case 0x2d3aa0u: goto label_2d3aa0;
        case 0x2d3aa4u: goto label_2d3aa4;
        case 0x2d3aa8u: goto label_2d3aa8;
        case 0x2d3aacu: goto label_2d3aac;
        case 0x2d3ab0u: goto label_2d3ab0;
        case 0x2d3ab4u: goto label_2d3ab4;
        case 0x2d3ab8u: goto label_2d3ab8;
        case 0x2d3abcu: goto label_2d3abc;
        case 0x2d3ac0u: goto label_2d3ac0;
        case 0x2d3ac4u: goto label_2d3ac4;
        case 0x2d3ac8u: goto label_2d3ac8;
        case 0x2d3accu: goto label_2d3acc;
        case 0x2d3ad0u: goto label_2d3ad0;
        case 0x2d3ad4u: goto label_2d3ad4;
        case 0x2d3ad8u: goto label_2d3ad8;
        case 0x2d3adcu: goto label_2d3adc;
        case 0x2d3ae0u: goto label_2d3ae0;
        case 0x2d3ae4u: goto label_2d3ae4;
        case 0x2d3ae8u: goto label_2d3ae8;
        case 0x2d3aecu: goto label_2d3aec;
        case 0x2d3af0u: goto label_2d3af0;
        case 0x2d3af4u: goto label_2d3af4;
        case 0x2d3af8u: goto label_2d3af8;
        case 0x2d3afcu: goto label_2d3afc;
        case 0x2d3b00u: goto label_2d3b00;
        case 0x2d3b04u: goto label_2d3b04;
        case 0x2d3b08u: goto label_2d3b08;
        case 0x2d3b0cu: goto label_2d3b0c;
        case 0x2d3b10u: goto label_2d3b10;
        case 0x2d3b14u: goto label_2d3b14;
        case 0x2d3b18u: goto label_2d3b18;
        case 0x2d3b1cu: goto label_2d3b1c;
        case 0x2d3b20u: goto label_2d3b20;
        case 0x2d3b24u: goto label_2d3b24;
        case 0x2d3b28u: goto label_2d3b28;
        case 0x2d3b2cu: goto label_2d3b2c;
        case 0x2d3b30u: goto label_2d3b30;
        case 0x2d3b34u: goto label_2d3b34;
        case 0x2d3b38u: goto label_2d3b38;
        case 0x2d3b3cu: goto label_2d3b3c;
        case 0x2d3b40u: goto label_2d3b40;
        case 0x2d3b44u: goto label_2d3b44;
        case 0x2d3b48u: goto label_2d3b48;
        case 0x2d3b4cu: goto label_2d3b4c;
        case 0x2d3b50u: goto label_2d3b50;
        case 0x2d3b54u: goto label_2d3b54;
        case 0x2d3b58u: goto label_2d3b58;
        case 0x2d3b5cu: goto label_2d3b5c;
        case 0x2d3b60u: goto label_2d3b60;
        case 0x2d3b64u: goto label_2d3b64;
        case 0x2d3b68u: goto label_2d3b68;
        case 0x2d3b6cu: goto label_2d3b6c;
        case 0x2d3b70u: goto label_2d3b70;
        case 0x2d3b74u: goto label_2d3b74;
        case 0x2d3b78u: goto label_2d3b78;
        case 0x2d3b7cu: goto label_2d3b7c;
        case 0x2d3b80u: goto label_2d3b80;
        case 0x2d3b84u: goto label_2d3b84;
        case 0x2d3b88u: goto label_2d3b88;
        case 0x2d3b8cu: goto label_2d3b8c;
        case 0x2d3b90u: goto label_2d3b90;
        case 0x2d3b94u: goto label_2d3b94;
        case 0x2d3b98u: goto label_2d3b98;
        case 0x2d3b9cu: goto label_2d3b9c;
        case 0x2d3ba0u: goto label_2d3ba0;
        case 0x2d3ba4u: goto label_2d3ba4;
        case 0x2d3ba8u: goto label_2d3ba8;
        case 0x2d3bacu: goto label_2d3bac;
        case 0x2d3bb0u: goto label_2d3bb0;
        case 0x2d3bb4u: goto label_2d3bb4;
        case 0x2d3bb8u: goto label_2d3bb8;
        case 0x2d3bbcu: goto label_2d3bbc;
        case 0x2d3bc0u: goto label_2d3bc0;
        case 0x2d3bc4u: goto label_2d3bc4;
        case 0x2d3bc8u: goto label_2d3bc8;
        case 0x2d3bccu: goto label_2d3bcc;
        case 0x2d3bd0u: goto label_2d3bd0;
        case 0x2d3bd4u: goto label_2d3bd4;
        case 0x2d3bd8u: goto label_2d3bd8;
        case 0x2d3bdcu: goto label_2d3bdc;
        case 0x2d3be0u: goto label_2d3be0;
        case 0x2d3be4u: goto label_2d3be4;
        case 0x2d3be8u: goto label_2d3be8;
        case 0x2d3becu: goto label_2d3bec;
        case 0x2d3bf0u: goto label_2d3bf0;
        case 0x2d3bf4u: goto label_2d3bf4;
        case 0x2d3bf8u: goto label_2d3bf8;
        case 0x2d3bfcu: goto label_2d3bfc;
        case 0x2d3c00u: goto label_2d3c00;
        case 0x2d3c04u: goto label_2d3c04;
        default: break;
    }

    ctx->pc = 0x2d3a18u;

label_2d3a18:
    // 0x2d3a18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d3a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2d3a1c:
    // 0x2d3a1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2d3a20:
    // 0x2d3a20: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2d3a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2d3a24:
    // 0x2d3a24: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2d3a28:
    // 0x2d3a28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d3a2c:
    // 0x2d3a2c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2d3a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2d3a30:
    // 0x2d3a30: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2d3a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2d3a34:
    // 0x2d3a34: 0x246313b0  addiu       $v1, $v1, 0x13B0
    ctx->pc = 0x2d3a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5040));
label_2d3a38:
    // 0x2d3a38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d3a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2d3a3c:
    // 0x2d3a3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d3a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2d3a40:
    // 0x2d3a40: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2d3a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2d3a44:
    // 0x2d3a44: 0x26130014  addiu       $s3, $s0, 0x14
    ctx->pc = 0x2d3a44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2d3a48:
    // 0x2d3a48: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2d3a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2d3a4c:
    // 0x2d3a4c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d3a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d3a50:
    // 0x2d3a50: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2d3a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_2d3a54:
    // 0x2d3a54: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2d3a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2d3a58:
    // 0x2d3a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d3a5c:
    // 0x2d3a5c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2d3a5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2d3a60:
    // 0x2d3a60: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2d3a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2d3a64:
    // 0x2d3a64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d3a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3a68:
    // 0x2d3a68: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2d3a6c:
    // 0x2d3a6c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2d3a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d3a70:
    // 0x2d3a70: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d3a74:
    // 0x2d3a74: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2d3a74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d3a78:
    // 0x2d3a78: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2d3a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2d3a7c:
    // 0x2d3a7c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2d3a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2d3a80:
    // 0x2d3a80: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2d3a80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2d3a84:
    // 0x2d3a84: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x2d3a84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
label_2d3a88:
    // 0x2d3a88: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x2d3a88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
label_2d3a8c:
    // 0x2d3a8c: 0xa2000026  sb          $zero, 0x26($s0)
    ctx->pc = 0x2d3a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 0));
label_2d3a90:
    // 0x2d3a90: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2d3a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2d3a94:
    // 0x2d3a94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d3a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2d3a98:
    // 0x2d3a98: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x2d3a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2d3a9c:
    // 0x2d3a9c: 0x0  nop
    ctx->pc = 0x2d3a9cu;
    // NOP
label_2d3aa0:
    // 0x2d3aa0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2d3aa4:
    if (ctx->pc == 0x2D3AA4u) {
        ctx->pc = 0x2D3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AA0u;
        // 0x2d3aa4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3AA8u;
        goto label_2d3aa8;
    }
    ctx->pc = 0x2D3AA0u;
    {
        const bool branch_taken_0x2d3aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AA0u;
        // 0x2d3aa4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3aa0) {
            ctx->pc = 0x2D3A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3a90;
        }
    }
    ctx->pc = 0x2D3AA8u;
label_2d3aa8:
    // 0x2d3aa8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_2d3aac:
    if (ctx->pc == 0x2D3AACu) {
        ctx->pc = 0x2D3AB0u;
        goto label_2d3ab0;
    }
    ctx->pc = 0x2D3AA8u;
    {
        const bool branch_taken_0x2d3aa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3aa8) {
            ctx->pc = 0x2D3AD8u;
            goto label_2d3ad8;
        }
    }
    ctx->pc = 0x2D3AB0u;
label_2d3ab0:
    // 0x2d3ab0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2d3ab0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2d3ab4:
    // 0x2d3ab4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2d3ab8:
    if (ctx->pc == 0x2D3AB8u) {
        ctx->pc = 0x2D3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AB4u;
        // 0x2d3ab8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3ABCu;
        goto label_2d3abc;
    }
    ctx->pc = 0x2D3AB4u;
    {
        const bool branch_taken_0x2d3ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AB4u;
        // 0x2d3ab8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ab4) {
            ctx->pc = 0x2D3AD8u;
            goto label_2d3ad8;
        }
    }
    ctx->pc = 0x2D3ABCu;
label_2d3abc:
    // 0x2d3abc: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x2d3abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2d3ac0:
    // 0x2d3ac0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d3ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d3ac4:
    // 0x2d3ac4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2d3ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2d3ac8:
    // 0x2d3ac8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2d3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2d3acc:
    // 0x2d3acc: 0x40f809  jalr        $v0
label_2d3ad0:
    if (ctx->pc == 0x2D3AD0u) {
        ctx->pc = 0x2D3AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3ACCu;
        // 0x2d3ad0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3AD4u;
        goto label_2d3ad4;
    }
    ctx->pc = 0x2D3ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D3AD4u);
        ctx->pc = 0x2D3AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3ACCu;
        // 0x2d3ad0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3ACCu, 0x2D3AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D3AD4u;
label_2d3ad4:
    // 0x2d3ad4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2d3ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2d3ad8:
    // 0x2d3ad8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2d3adc:
    if (ctx->pc == 0x2D3ADCu) {
        ctx->pc = 0x2D3AE0u;
        goto label_2d3ae0;
    }
    ctx->pc = 0x2D3AD8u;
    {
        const bool branch_taken_0x2d3ad8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3ad8) {
            ctx->pc = 0x2D3B0Cu;
            goto label_2d3b0c;
        }
    }
    ctx->pc = 0x2D3AE0u;
label_2d3ae0:
    // 0x2d3ae0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2d3ae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2d3ae4:
    // 0x2d3ae4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d3ae8:
    if (ctx->pc == 0x2D3AE8u) {
        ctx->pc = 0x2D3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AE4u;
        // 0x2d3ae8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3AECu;
        goto label_2d3aec;
    }
    ctx->pc = 0x2D3AE4u;
    {
        const bool branch_taken_0x2d3ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AE4u;
        // 0x2d3ae8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ae4) {
            ctx->pc = 0x2D3B0Cu;
            goto label_2d3b0c;
        }
    }
    ctx->pc = 0x2D3AECu;
label_2d3aec:
    // 0x2d3aec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d3aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d3af0:
    // 0x2d3af0: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x2d3af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2d3af4:
    // 0x2d3af4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d3af8:
    // 0x2d3af8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2d3af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2d3afc:
    // 0x2d3afc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2d3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2d3b00:
    // 0x2d3b00: 0x40f809  jalr        $v0
label_2d3b04:
    if (ctx->pc == 0x2D3B04u) {
        ctx->pc = 0x2D3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B00u;
        // 0x2d3b04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3B08u;
        goto label_2d3b08;
    }
    ctx->pc = 0x2D3B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D3B08u);
        ctx->pc = 0x2D3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B00u;
        // 0x2d3b04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3B00u, 0x2D3B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D3B08u;
label_2d3b08:
    // 0x2d3b08: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2d3b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2d3b0c:
    // 0x2d3b0c: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
label_2d3b10:
    if (ctx->pc == 0x2D3B10u) {
        ctx->pc = 0x2D3B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B0Cu;
        // 0x2d3b10: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3B14u;
        goto label_2d3b14;
    }
    ctx->pc = 0x2D3B0Cu;
    {
        const bool branch_taken_0x2d3b0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3b0c) {
            ctx->pc = 0x2D3B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3B0Cu;
            // 0x2d3b10: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3B44u;
            goto label_2d3b44;
        }
    }
    ctx->pc = 0x2D3B14u;
label_2d3b14:
    // 0x2d3b14: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2d3b14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2d3b18:
    // 0x2d3b18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d3b1c:
    if (ctx->pc == 0x2D3B1Cu) {
        ctx->pc = 0x2D3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B18u;
        // 0x2d3b1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3B20u;
        goto label_2d3b20;
    }
    ctx->pc = 0x2D3B18u;
    {
        const bool branch_taken_0x2d3b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B18u;
        // 0x2d3b1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b18) {
            ctx->pc = 0x2D3B40u;
            goto label_2d3b40;
        }
    }
    ctx->pc = 0x2D3B20u;
label_2d3b20:
    // 0x2d3b20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d3b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d3b24:
    // 0x2d3b24: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x2d3b24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2d3b28:
    // 0x2d3b28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d3b2c:
    // 0x2d3b2c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2d3b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2d3b30:
    // 0x2d3b30: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2d3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2d3b34:
    // 0x2d3b34: 0x40f809  jalr        $v0
label_2d3b38:
    if (ctx->pc == 0x2D3B38u) {
        ctx->pc = 0x2D3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B34u;
        // 0x2d3b38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3B3Cu;
        goto label_2d3b3c;
    }
    ctx->pc = 0x2D3B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D3B3Cu);
        ctx->pc = 0x2D3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B34u;
        // 0x2d3b38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3B34u, 0x2D3B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D3B3Cu;
label_2d3b3c:
    // 0x2d3b3c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2d3b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2d3b40:
    // 0x2d3b40: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2d3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2d3b44:
    // 0x2d3b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3b48:
    // 0x2d3b48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2d3b4c:
    if (ctx->pc == 0x2D3B4Cu) {
        ctx->pc = 0x2D3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B48u;
        // 0x2d3b4c: 0xae140020  sw          $s4, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3B50u;
        goto label_2d3b50;
    }
    ctx->pc = 0x2D3B48u;
    {
        const bool branch_taken_0x2d3b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B48u;
        // 0x2d3b4c: 0xae140020  sw          $s4, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b48) {
            ctx->pc = 0x2D3B68u;
            goto label_2d3b68;
        }
    }
    ctx->pc = 0x2D3B50u;
label_2d3b50:
    // 0x2d3b50: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2d3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2d3b54:
    // 0x2d3b54: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2d3b58:
    if (ctx->pc == 0x2D3B58u) {
        ctx->pc = 0x2D3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B54u;
        // 0x2d3b58: 0xa2050025  sb          $a1, 0x25($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3B5Cu;
        goto label_2d3b5c;
    }
    ctx->pc = 0x2D3B54u;
    {
        const bool branch_taken_0x2d3b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3b54) {
            ctx->pc = 0x2D3B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3B54u;
            // 0x2d3b58: 0xa2050025  sb          $a1, 0x25($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3B6Cu;
            goto label_2d3b6c;
        }
    }
    ctx->pc = 0x2D3B5Cu;
label_2d3b5c:
    // 0x2d3b5c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2d3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d3b60:
    // 0x2d3b60: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2d3b64:
    // 0x2d3b64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d3b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d3b68:
    // 0x2d3b68: 0xa2050025  sb          $a1, 0x25($s0)
    ctx->pc = 0x2d3b68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 5));
label_2d3b6c:
    // 0x2d3b6c: 0x2415029f  addiu       $s5, $zero, 0x29F
    ctx->pc = 0x2d3b6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
label_2d3b70:
    // 0x2d3b70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d3b74:
    // 0x2d3b74: 0x2402029c  addiu       $v0, $zero, 0x29C
    ctx->pc = 0x2d3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d3b78:
    // 0x2d3b78: 0x45a80b  movn        $s5, $v0, $a1
    ctx->pc = 0x2d3b78u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_2d3b7c:
    // 0x2d3b7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d3b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3b80:
    // 0x2d3b80: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2d3b80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d3b84:
    // 0x2d3b84: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2d3b84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d3b88:
    // 0x2d3b88: 0x26920468  addiu       $s2, $s4, 0x468
    ctx->pc = 0x2d3b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1128));
label_2d3b8c:
    // 0x2d3b8c: 0x0  nop
    ctx->pc = 0x2d3b8cu;
    // NOP
label_2d3b90:
    // 0x2d3b90: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2d3b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d3b94:
    // 0x2d3b94: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2d3b98:
    if (ctx->pc == 0x2D3B98u) {
        ctx->pc = 0x2D3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B94u;
        // 0x2d3b98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3B9Cu;
        goto label_2d3b9c;
    }
    ctx->pc = 0x2D3B94u;
    {
        const bool branch_taken_0x2d3b94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B94u;
        // 0x2d3b98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b94) {
            ctx->pc = 0x2D3BACu;
            goto label_2d3bac;
        }
    }
    ctx->pc = 0x2D3B9Cu;
label_2d3b9c:
    // 0x2d3b9c: 0xc042f0e  jal         func_10BC38
label_2d3ba0:
    if (ctx->pc == 0x2D3BA0u) {
        ctx->pc = 0x2D3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B9Cu;
        // 0x2d3ba0: 0x2b13021  addu        $a2, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3BA4u;
        goto label_2d3ba4;
    }
    ctx->pc = 0x2D3B9Cu;
    SET_GPR_U32(ctx, 31, 0x2D3BA4u);
    ctx->pc = 0x2D3BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3B9Cu;
    // 0x2d3ba0: 0x2b13021  addu        $a2, $s5, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D3B9Cu, 0x2D3BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BA4u;
label_2d3ba4:
    // 0x2d3ba4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2d3ba8:
    if (ctx->pc == 0x2D3BA8u) {
        ctx->pc = 0x2D3BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BA4u;
        // 0x2d3ba8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3BACu;
        goto label_2d3bac;
    }
    ctx->pc = 0x2D3BA4u;
    {
        const bool branch_taken_0x2d3ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BA4u;
        // 0x2d3ba8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ba4) {
            ctx->pc = 0x2D3BC8u;
            goto label_2d3bc8;
        }
    }
    ctx->pc = 0x2D3BACu;
label_2d3bac:
    // 0x2d3bac: 0x56360006  bnel        $s1, $s6, . + 4 + (0x6 << 2)
label_2d3bb0:
    if (ctx->pc == 0x2D3BB0u) {
        ctx->pc = 0x2D3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BACu;
        // 0x2d3bb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3BB4u;
        goto label_2d3bb4;
    }
    ctx->pc = 0x2D3BACu;
    {
        const bool branch_taken_0x2d3bac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        if (branch_taken_0x2d3bac) {
            ctx->pc = 0x2D3BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3BACu;
            // 0x2d3bb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3BC8u;
            goto label_2d3bc8;
        }
    }
    ctx->pc = 0x2D3BB4u;
label_2d3bb4:
    // 0x2d3bb4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2d3bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2d3bb8:
    // 0x2d3bb8: 0x26840490  addiu       $a0, $s4, 0x490
    ctx->pc = 0x2d3bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1168));
label_2d3bbc:
    // 0x2d3bbc: 0xc042f0e  jal         func_10BC38
label_2d3bc0:
    if (ctx->pc == 0x2D3BC0u) {
        ctx->pc = 0x2D3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BBCu;
        // 0x2d3bc0: 0x26a60001  addiu       $a2, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3BC4u;
        goto label_2d3bc4;
    }
    ctx->pc = 0x2D3BBCu;
    SET_GPR_U32(ctx, 31, 0x2D3BC4u);
    ctx->pc = 0x2D3BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3BBCu;
    // 0x2d3bc0: 0x26a60001  addiu       $a2, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D3BBCu, 0x2D3BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BC4u;
label_2d3bc4:
    // 0x2d3bc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d3bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d3bc8:
    // 0x2d3bc8: 0x26520028  addiu       $s2, $s2, 0x28
    ctx->pc = 0x2d3bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_2d3bcc:
    // 0x2d3bcc: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x2d3bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2d3bd0:
    // 0x2d3bd0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2d3bd4:
    if (ctx->pc == 0x2D3BD4u) {
        ctx->pc = 0x2D3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BD0u;
        // 0x2d3bd4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3BD8u;
        goto label_2d3bd8;
    }
    ctx->pc = 0x2D3BD0u;
    {
        const bool branch_taken_0x2d3bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BD0u;
        // 0x2d3bd4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3bd0) {
            ctx->pc = 0x2D3B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3b90;
        }
    }
    ctx->pc = 0x2D3BD8u;
label_2d3bd8:
    // 0x2d3bd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d3bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d3bdc:
    // 0x2d3bdc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2d3bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d3be0:
    // 0x2d3be0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2d3be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d3be4:
    // 0x2d3be4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2d3be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d3be8:
    // 0x2d3be8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d3be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d3bec:
    // 0x2d3bec: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2d3becu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d3bf0:
    // 0x2d3bf0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2d3bf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d3bf4:
    // 0x2d3bf4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2d3bf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d3bf8:
    // 0x2d3bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d3bfc:
    // 0x2d3bfc: 0x3e00008  jr          $ra
label_2d3c00:
    if (ctx->pc == 0x2D3C00u) {
        ctx->pc = 0x2D3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BFCu;
        // 0x2d3c00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3C04u;
        goto label_2d3c04;
    }
    ctx->pc = 0x2D3BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BFCu;
        // 0x2d3c00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3C04u;
label_2d3c04:
    // 0x2d3c04: 0x0  nop
    ctx->pc = 0x2d3c04u;
    // NOP
    ctx->pc = 0x2d3c08u;
}

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

// Function: sub_00154AE0
// Address: 0x154ae0 - 0x154d50
void sub_00154AE0_0x154ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154AE0_0x154ae0");
#endif

    switch (ctx->pc) {
        case 0x154ae0u: goto label_154ae0;
        case 0x154ae4u: goto label_154ae4;
        case 0x154ae8u: goto label_154ae8;
        case 0x154aecu: goto label_154aec;
        case 0x154af0u: goto label_154af0;
        case 0x154af4u: goto label_154af4;
        case 0x154af8u: goto label_154af8;
        case 0x154afcu: goto label_154afc;
        case 0x154b00u: goto label_154b00;
        case 0x154b04u: goto label_154b04;
        case 0x154b08u: goto label_154b08;
        case 0x154b0cu: goto label_154b0c;
        case 0x154b10u: goto label_154b10;
        case 0x154b14u: goto label_154b14;
        case 0x154b18u: goto label_154b18;
        case 0x154b1cu: goto label_154b1c;
        case 0x154b20u: goto label_154b20;
        case 0x154b24u: goto label_154b24;
        case 0x154b28u: goto label_154b28;
        case 0x154b2cu: goto label_154b2c;
        case 0x154b30u: goto label_154b30;
        case 0x154b34u: goto label_154b34;
        case 0x154b38u: goto label_154b38;
        case 0x154b3cu: goto label_154b3c;
        case 0x154b40u: goto label_154b40;
        case 0x154b44u: goto label_154b44;
        case 0x154b48u: goto label_154b48;
        case 0x154b4cu: goto label_154b4c;
        case 0x154b50u: goto label_154b50;
        case 0x154b54u: goto label_154b54;
        case 0x154b58u: goto label_154b58;
        case 0x154b5cu: goto label_154b5c;
        case 0x154b60u: goto label_154b60;
        case 0x154b64u: goto label_154b64;
        case 0x154b68u: goto label_154b68;
        case 0x154b6cu: goto label_154b6c;
        case 0x154b70u: goto label_154b70;
        case 0x154b74u: goto label_154b74;
        case 0x154b78u: goto label_154b78;
        case 0x154b7cu: goto label_154b7c;
        case 0x154b80u: goto label_154b80;
        case 0x154b84u: goto label_154b84;
        case 0x154b88u: goto label_154b88;
        case 0x154b8cu: goto label_154b8c;
        case 0x154b90u: goto label_154b90;
        case 0x154b94u: goto label_154b94;
        case 0x154b98u: goto label_154b98;
        case 0x154b9cu: goto label_154b9c;
        case 0x154ba0u: goto label_154ba0;
        case 0x154ba4u: goto label_154ba4;
        case 0x154ba8u: goto label_154ba8;
        case 0x154bacu: goto label_154bac;
        case 0x154bb0u: goto label_154bb0;
        case 0x154bb4u: goto label_154bb4;
        case 0x154bb8u: goto label_154bb8;
        case 0x154bbcu: goto label_154bbc;
        case 0x154bc0u: goto label_154bc0;
        case 0x154bc4u: goto label_154bc4;
        case 0x154bc8u: goto label_154bc8;
        case 0x154bccu: goto label_154bcc;
        case 0x154bd0u: goto label_154bd0;
        case 0x154bd4u: goto label_154bd4;
        case 0x154bd8u: goto label_154bd8;
        case 0x154bdcu: goto label_154bdc;
        case 0x154be0u: goto label_154be0;
        case 0x154be4u: goto label_154be4;
        case 0x154be8u: goto label_154be8;
        case 0x154becu: goto label_154bec;
        case 0x154bf0u: goto label_154bf0;
        case 0x154bf4u: goto label_154bf4;
        case 0x154bf8u: goto label_154bf8;
        case 0x154bfcu: goto label_154bfc;
        case 0x154c00u: goto label_154c00;
        case 0x154c04u: goto label_154c04;
        case 0x154c08u: goto label_154c08;
        case 0x154c0cu: goto label_154c0c;
        case 0x154c10u: goto label_154c10;
        case 0x154c14u: goto label_154c14;
        case 0x154c18u: goto label_154c18;
        case 0x154c1cu: goto label_154c1c;
        case 0x154c20u: goto label_154c20;
        case 0x154c24u: goto label_154c24;
        case 0x154c28u: goto label_154c28;
        case 0x154c2cu: goto label_154c2c;
        case 0x154c30u: goto label_154c30;
        case 0x154c34u: goto label_154c34;
        case 0x154c38u: goto label_154c38;
        case 0x154c3cu: goto label_154c3c;
        case 0x154c40u: goto label_154c40;
        case 0x154c44u: goto label_154c44;
        case 0x154c48u: goto label_154c48;
        case 0x154c4cu: goto label_154c4c;
        case 0x154c50u: goto label_154c50;
        case 0x154c54u: goto label_154c54;
        case 0x154c58u: goto label_154c58;
        case 0x154c5cu: goto label_154c5c;
        case 0x154c60u: goto label_154c60;
        case 0x154c64u: goto label_154c64;
        case 0x154c68u: goto label_154c68;
        case 0x154c6cu: goto label_154c6c;
        case 0x154c70u: goto label_154c70;
        case 0x154c74u: goto label_154c74;
        case 0x154c78u: goto label_154c78;
        case 0x154c7cu: goto label_154c7c;
        case 0x154c80u: goto label_154c80;
        case 0x154c84u: goto label_154c84;
        case 0x154c88u: goto label_154c88;
        case 0x154c8cu: goto label_154c8c;
        case 0x154c90u: goto label_154c90;
        case 0x154c94u: goto label_154c94;
        case 0x154c98u: goto label_154c98;
        case 0x154c9cu: goto label_154c9c;
        case 0x154ca0u: goto label_154ca0;
        case 0x154ca4u: goto label_154ca4;
        case 0x154ca8u: goto label_154ca8;
        case 0x154cacu: goto label_154cac;
        case 0x154cb0u: goto label_154cb0;
        case 0x154cb4u: goto label_154cb4;
        case 0x154cb8u: goto label_154cb8;
        case 0x154cbcu: goto label_154cbc;
        case 0x154cc0u: goto label_154cc0;
        case 0x154cc4u: goto label_154cc4;
        case 0x154cc8u: goto label_154cc8;
        case 0x154cccu: goto label_154ccc;
        case 0x154cd0u: goto label_154cd0;
        case 0x154cd4u: goto label_154cd4;
        case 0x154cd8u: goto label_154cd8;
        case 0x154cdcu: goto label_154cdc;
        case 0x154ce0u: goto label_154ce0;
        case 0x154ce4u: goto label_154ce4;
        case 0x154ce8u: goto label_154ce8;
        case 0x154cecu: goto label_154cec;
        case 0x154cf0u: goto label_154cf0;
        case 0x154cf4u: goto label_154cf4;
        case 0x154cf8u: goto label_154cf8;
        case 0x154cfcu: goto label_154cfc;
        case 0x154d00u: goto label_154d00;
        case 0x154d04u: goto label_154d04;
        case 0x154d08u: goto label_154d08;
        case 0x154d0cu: goto label_154d0c;
        case 0x154d10u: goto label_154d10;
        case 0x154d14u: goto label_154d14;
        case 0x154d18u: goto label_154d18;
        case 0x154d1cu: goto label_154d1c;
        case 0x154d20u: goto label_154d20;
        case 0x154d24u: goto label_154d24;
        case 0x154d28u: goto label_154d28;
        case 0x154d2cu: goto label_154d2c;
        case 0x154d30u: goto label_154d30;
        case 0x154d34u: goto label_154d34;
        case 0x154d38u: goto label_154d38;
        case 0x154d3cu: goto label_154d3c;
        case 0x154d40u: goto label_154d40;
        case 0x154d44u: goto label_154d44;
        case 0x154d48u: goto label_154d48;
        case 0x154d4cu: goto label_154d4c;
        default: break;
    }

    ctx->pc = 0x154ae0u;

label_154ae0:
    // 0x154ae0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x154ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_154ae4:
    // 0x154ae4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x154ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_154ae8:
    // 0x154ae8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x154ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_154aec:
    // 0x154aec: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x154aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_154af0:
    // 0x154af0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x154af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154af4:
    // 0x154af4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x154af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_154af8:
    // 0x154af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x154af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154afc:
    // 0x154afc: 0x8c43c64c  lw          $v1, -0x39B4($v0)
    ctx->pc = 0x154afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952524)));
label_154b00:
    // 0x154b00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x154b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_154b04:
    // 0x154b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154b08:
    // 0x154b08: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_154b0c:
    if (ctx->pc == 0x154B0Cu) {
        ctx->pc = 0x154B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B08u;
        // 0x154b0c: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B10u;
        goto label_154b10;
    }
    ctx->pc = 0x154B08u;
    {
        const bool branch_taken_0x154b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B08u;
        // 0x154b0c: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b08) {
            ctx->pc = 0x154B30u;
            goto label_154b30;
        }
    }
    ctx->pc = 0x154B10u;
label_154b10:
    // 0x154b10: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x154b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_154b14:
    // 0x154b14: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x154b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_154b18:
    // 0x154b18: 0x10430087  beq         $v0, $v1, . + 4 + (0x87 << 2)
label_154b1c:
    if (ctx->pc == 0x154B1Cu) {
        ctx->pc = 0x154B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B18u;
        // 0x154b1c: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B20u;
        goto label_154b20;
    }
    ctx->pc = 0x154B18u;
    {
        const bool branch_taken_0x154b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x154B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B18u;
        // 0x154b1c: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b18) {
            ctx->pc = 0x154D38u;
            goto label_154d38;
        }
    }
    ctx->pc = 0x154B20u;
label_154b20:
    // 0x154b20: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_154b24:
    if (ctx->pc == 0x154B24u) {
        ctx->pc = 0x154B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B20u;
        // 0x154b24: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B28u;
        goto label_154b28;
    }
    ctx->pc = 0x154B20u;
    {
        const bool branch_taken_0x154b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b20) {
            ctx->pc = 0x154B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154B20u;
            // 0x154b24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x154B28u;
            goto label_154b28;
        }
    }
    ctx->pc = 0x154B28u;
label_154b28:
    // 0x154b28: 0x10000084  b           . + 4 + (0x84 << 2)
label_154b2c:
    if (ctx->pc == 0x154B2Cu) {
        ctx->pc = 0x154B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B28u;
        // 0x154b2c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B30u;
        goto label_154b30;
    }
    ctx->pc = 0x154B28u;
    {
        const bool branch_taken_0x154b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B28u;
        // 0x154b2c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b28) {
            ctx->pc = 0x154D3Cu;
            goto label_154d3c;
        }
    }
    ctx->pc = 0x154B30u;
label_154b30:
    // 0x154b30: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x154b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_154b34:
    // 0x154b34: 0xae42c64c  sw          $v0, -0x39B4($s2)
    ctx->pc = 0x154b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952524), GPR_U32(ctx, 2));
label_154b38:
    // 0x154b38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x154b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_154b3c:
    // 0x154b3c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x154b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_154b40:
    // 0x154b40: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x154b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_154b44:
    // 0x154b44: 0x60f809  jalr        $v1
label_154b48:
    if (ctx->pc == 0x154B48u) {
        ctx->pc = 0x154B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B44u;
        // 0x154b48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B4Cu;
        goto label_154b4c;
    }
    ctx->pc = 0x154B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154B4Cu);
        ctx->pc = 0x154B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B44u;
        // 0x154b48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154B44u, 0x154B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154B4Cu;
label_154b4c:
    // 0x154b4c: 0x0  nop
    ctx->pc = 0x154b4cu;
    // NOP
label_154b50:
    // 0x154b50: 0xc05526a  jal         func_1549A8
label_154b54:
    if (ctx->pc == 0x154B54u) {
        ctx->pc = 0x154B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B50u;
        // 0x154b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B58u;
        goto label_154b58;
    }
    ctx->pc = 0x154B50u;
    SET_GPR_U32(ctx, 31, 0x154B58u);
    ctx->pc = 0x154B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B50u;
    // 0x154b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1549A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1549A8u, 0x154B50u, 0x154B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B58u;
label_154b58:
    // 0x154b58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154b5c:
    if (ctx->pc == 0x154B5Cu) {
        ctx->pc = 0x154B60u;
        goto label_154b60;
    }
    ctx->pc = 0x154B58u;
    {
        const bool branch_taken_0x154b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b58) {
            ctx->pc = 0x154B70u;
            goto label_154b70;
        }
    }
    ctx->pc = 0x154B60u;
label_154b60:
    // 0x154b60: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_154b64:
    if (ctx->pc == 0x154B64u) {
        ctx->pc = 0x154B68u;
        goto label_154b68;
    }
    ctx->pc = 0x154B60u;
    {
        const bool branch_taken_0x154b60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b60) {
            ctx->pc = 0x154B70u;
            goto label_154b70;
        }
    }
    ctx->pc = 0x154B68u;
label_154b68:
    // 0x154b68: 0xc05527e  jal         func_1549F8
label_154b6c:
    if (ctx->pc == 0x154B6Cu) {
        ctx->pc = 0x154B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B68u;
        // 0x154b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B70u;
        goto label_154b70;
    }
    ctx->pc = 0x154B68u;
    SET_GPR_U32(ctx, 31, 0x154B70u);
    ctx->pc = 0x154B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B68u;
    // 0x154b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1549F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1549F8u, 0x154B68u, 0x154B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B70u;
label_154b70:
    // 0x154b70: 0xc05526a  jal         func_1549A8
label_154b74:
    if (ctx->pc == 0x154B74u) {
        ctx->pc = 0x154B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B70u;
        // 0x154b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B78u;
        goto label_154b78;
    }
    ctx->pc = 0x154B70u;
    SET_GPR_U32(ctx, 31, 0x154B78u);
    ctx->pc = 0x154B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B70u;
    // 0x154b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1549A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1549A8u, 0x154B70u, 0x154B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B78u;
label_154b78:
    // 0x154b78: 0x5040005a  beql        $v0, $zero, . + 4 + (0x5A << 2)
label_154b7c:
    if (ctx->pc == 0x154B7Cu) {
        ctx->pc = 0x154B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B78u;
        // 0x154b7c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B80u;
        goto label_154b80;
    }
    ctx->pc = 0x154B78u;
    {
        const bool branch_taken_0x154b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b78) {
            ctx->pc = 0x154B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154B78u;
            // 0x154b7c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154CE4u;
            goto label_154ce4;
        }
    }
    ctx->pc = 0x154B80u;
label_154b80:
    // 0x154b80: 0xc05526c  jal         func_1549B0
label_154b84:
    if (ctx->pc == 0x154B84u) {
        ctx->pc = 0x154B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B80u;
        // 0x154b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B88u;
        goto label_154b88;
    }
    ctx->pc = 0x154B80u;
    SET_GPR_U32(ctx, 31, 0x154B88u);
    ctx->pc = 0x154B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B80u;
    // 0x154b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1549B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1549B0u, 0x154B80u, 0x154B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B88u;
label_154b88:
    // 0x154b88: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_154b8c:
    if (ctx->pc == 0x154B8Cu) {
        ctx->pc = 0x154B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B88u;
        // 0x154b8c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B90u;
        goto label_154b90;
    }
    ctx->pc = 0x154B88u;
    {
        const bool branch_taken_0x154b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B88u;
        // 0x154b8c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b88) {
            ctx->pc = 0x154D34u;
            goto label_154d34;
        }
    }
    ctx->pc = 0x154B90u;
label_154b90:
    // 0x154b90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x154b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_154b94:
    // 0x154b94: 0x24425560  addiu       $v0, $v0, 0x5560
    ctx->pc = 0x154b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21856));
label_154b98:
    // 0x154b98: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x154b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_154b9c:
    // 0x154b9c: 0x54640009  bnel        $v1, $a0, . + 4 + (0x9 << 2)
label_154ba0:
    if (ctx->pc == 0x154BA0u) {
        ctx->pc = 0x154BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B9Cu;
        // 0x154ba0: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BA4u;
        goto label_154ba4;
    }
    ctx->pc = 0x154B9Cu;
    {
        const bool branch_taken_0x154b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x154b9c) {
            ctx->pc = 0x154BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154B9Cu;
            // 0x154ba0: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154BC4u;
            goto label_154bc4;
        }
    }
    ctx->pc = 0x154BA4u;
label_154ba4:
    // 0x154ba4: 0x12200064  beqz        $s1, . + 4 + (0x64 << 2)
label_154ba8:
    if (ctx->pc == 0x154BA8u) {
        ctx->pc = 0x154BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BA4u;
        // 0x154ba8: 0xae40c64c  sw          $zero, -0x39B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294952524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BACu;
        goto label_154bac;
    }
    ctx->pc = 0x154BA4u;
    {
        const bool branch_taken_0x154ba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BA4u;
        // 0x154ba8: 0xae40c64c  sw          $zero, -0x39B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294952524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ba4) {
            ctx->pc = 0x154D38u;
            goto label_154d38;
        }
    }
    ctx->pc = 0x154BACu;
label_154bac:
    // 0x154bac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x154bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154bb0:
    // 0x154bb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x154bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154bb4:
    // 0x154bb4: 0xc055e4c  jal         func_157930
label_154bb8:
    if (ctx->pc == 0x154BB8u) {
        ctx->pc = 0x154BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BB4u;
        // 0x154bb8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BBCu;
        goto label_154bbc;
    }
    ctx->pc = 0x154BB4u;
    SET_GPR_U32(ctx, 31, 0x154BBCu);
    ctx->pc = 0x154BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BB4u;
    // 0x154bb8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157930u, 0x154BB4u, 0x154BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BBCu;
label_154bbc:
    // 0x154bbc: 0x1000005f  b           . + 4 + (0x5F << 2)
label_154bc0:
    if (ctx->pc == 0x154BC0u) {
        ctx->pc = 0x154BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BBCu;
        // 0x154bc0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BC4u;
        goto label_154bc4;
    }
    ctx->pc = 0x154BBCu;
    {
        const bool branch_taken_0x154bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BBCu;
        // 0x154bc0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bbc) {
            ctx->pc = 0x154D3Cu;
            goto label_154d3c;
        }
    }
    ctx->pc = 0x154BC4u;
label_154bc4:
    // 0x154bc4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x154bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_154bc8:
    // 0x154bc8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_154bcc:
    if (ctx->pc == 0x154BCCu) {
        ctx->pc = 0x154BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BC8u;
        // 0x154bcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BD0u;
        goto label_154bd0;
    }
    ctx->pc = 0x154BC8u;
    {
        const bool branch_taken_0x154bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BC8u;
        // 0x154bcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bc8) {
            ctx->pc = 0x154C2Cu;
            goto label_154c2c;
        }
    }
    ctx->pc = 0x154BD0u;
label_154bd0:
    // 0x154bd0: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x154bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_154bd4:
    // 0x154bd4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x154bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_154bd8:
    // 0x154bd8: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x154bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_154bdc:
    // 0x154bdc: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x154bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_154be0:
    // 0x154be0: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x154be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_154be4:
    // 0x154be4: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x154be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_154be8:
    // 0x154be8: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x154be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_154bec:
    // 0x154bec: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x154becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_154bf0:
    // 0x154bf0: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x154bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_154bf4:
    // 0x154bf4: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x154bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_154bf8:
    // 0x154bf8: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x154bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_154bfc:
    // 0x154bfc: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x154bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_154c00:
    // 0x154c00: 0xb0a7000f  sdl         $a3, 0xF($a1)
    ctx->pc = 0x154c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_154c04:
    // 0x154c04: 0xb4a70008  sdr         $a3, 0x8($a1)
    ctx->pc = 0x154c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_154c08:
    // 0x154c08: 0xb0a80017  sdl         $t0, 0x17($a1)
    ctx->pc = 0x154c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_154c0c:
    // 0x154c0c: 0xb4a80010  sdr         $t0, 0x10($a1)
    ctx->pc = 0x154c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_154c10:
    // 0x154c10: 0xb0a9001f  sdl         $t1, 0x1F($a1)
    ctx->pc = 0x154c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_154c14:
    // 0x154c14: 0xb4a90018  sdr         $t1, 0x18($a1)
    ctx->pc = 0x154c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_154c18:
    // 0x154c18: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x154c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_154c1c:
    // 0x154c1c: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
label_154c20:
    if (ctx->pc == 0x154C20u) {
        ctx->pc = 0x154C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C1Cu;
        // 0x154c20: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C24u;
        goto label_154c24;
    }
    ctx->pc = 0x154C1Cu;
    {
        const bool branch_taken_0x154c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C1Cu;
        // 0x154c20: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c1c) {
            ctx->pc = 0x154BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154C24u;
label_154c24:
    // 0x154c24: 0x1000000e  b           . + 4 + (0xE << 2)
label_154c28:
    if (ctx->pc == 0x154C28u) {
        ctx->pc = 0x154C2Cu;
        goto label_154c2c;
    }
    ctx->pc = 0x154C24u;
    {
        const bool branch_taken_0x154c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154c24) {
            ctx->pc = 0x154C60u;
            goto label_154c60;
        }
    }
    ctx->pc = 0x154C2Cu;
label_154c2c:
    // 0x154c2c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x154c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_154c30:
    // 0x154c30: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x154c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_154c34:
    // 0x154c34: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x154c34u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_154c38:
    // 0x154c38: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x154c38u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_154c3c:
    // 0x154c3c: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x154c3cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_154c40:
    // 0x154c40: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x154c40u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_154c44:
    // 0x154c44: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x154c44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
label_154c48:
    // 0x154c48: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x154c48u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
label_154c4c:
    // 0x154c4c: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x154c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
label_154c50:
    // 0x154c50: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x154c50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
label_154c54:
    // 0x154c54: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x154c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_154c58:
    // 0x154c58: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_154c5c:
    if (ctx->pc == 0x154C5Cu) {
        ctx->pc = 0x154C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C58u;
        // 0x154c5c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C60u;
        goto label_154c60;
    }
    ctx->pc = 0x154C58u;
    {
        const bool branch_taken_0x154c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C58u;
        // 0x154c5c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c58) {
            ctx->pc = 0x154C34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154c34;
        }
    }
    ctx->pc = 0x154C60u;
label_154c60:
    // 0x154c60: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x154c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_154c64:
    // 0x154c64: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x154c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_154c68:
    // 0x154c68: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x154c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_154c6c:
    // 0x154c6c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x154c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_154c70:
    // 0x154c70: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x154c70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_154c74:
    // 0x154c74: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x154c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_154c78:
    // 0x154c78: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x154c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_154c7c:
    // 0x154c7c: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x154c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_154c80:
    // 0x154c80: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x154c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_154c84:
    // 0x154c84: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x154c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
label_154c88:
    // 0x154c88: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x154c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_154c8c:
    // 0x154c8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x154c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_154c90:
    // 0x154c90: 0x2442ffac  addiu       $v0, $v0, -0x54
    ctx->pc = 0x154c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
label_154c94:
    // 0x154c94: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_154c98:
    if (ctx->pc == 0x154C98u) {
        ctx->pc = 0x154C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C94u;
        // 0x154c98: 0x24620054  addiu       $v0, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C9Cu;
        goto label_154c9c;
    }
    ctx->pc = 0x154C94u;
    {
        const bool branch_taken_0x154c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C94u;
        // 0x154c98: 0x24620054  addiu       $v0, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c94) {
            ctx->pc = 0x154CA4u;
            goto label_154ca4;
        }
    }
    ctx->pc = 0x154C9Cu;
label_154c9c:
    // 0x154c9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_154ca0:
    if (ctx->pc == 0x154CA0u) {
        ctx->pc = 0x154CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C9Cu;
        // 0x154ca0: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CA4u;
        goto label_154ca4;
    }
    ctx->pc = 0x154C9Cu;
    {
        const bool branch_taken_0x154c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C9Cu;
        // 0x154ca0: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c9c) {
            ctx->pc = 0x154CACu;
            goto label_154cac;
        }
    }
    ctx->pc = 0x154CA4u;
label_154ca4:
    // 0x154ca4: 0xc13751a  jal         func_4DD468
label_154ca8:
    if (ctx->pc == 0x154CA8u) {
        ctx->pc = 0x154CACu;
        goto label_154cac;
    }
    ctx->pc = 0x154CA4u;
    SET_GPR_U32(ctx, 31, 0x154CACu);
    ctx->pc = 0x4DD468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD468u, 0x154CA4u, 0x154CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CACu;
label_154cac:
    // 0x154cac: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x154cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_154cb0:
    // 0x154cb0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x154cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_154cb4:
    // 0x154cb4: 0x40f809  jalr        $v0
label_154cb8:
    if (ctx->pc == 0x154CB8u) {
        ctx->pc = 0x154CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CB4u;
        // 0x154cb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CBCu;
        goto label_154cbc;
    }
    ctx->pc = 0x154CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154CBCu);
        ctx->pc = 0x154CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CB4u;
        // 0x154cb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154CB4u, 0x154CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154CBCu;
label_154cbc:
    // 0x154cbc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x154cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_154cc0:
    // 0x154cc0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x154cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_154cc4:
    // 0x154cc4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x154cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_154cc8:
    // 0x154cc8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x154cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_154ccc:
    // 0x154ccc: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x154cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_154cd0:
    // 0x154cd0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x154cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_154cd4:
    // 0x154cd4: 0x60f809  jalr        $v1
label_154cd8:
    if (ctx->pc == 0x154CD8u) {
        ctx->pc = 0x154CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CD4u;
        // 0x154cd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CDCu;
        goto label_154cdc;
    }
    ctx->pc = 0x154CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154CDCu);
        ctx->pc = 0x154CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CD4u;
        // 0x154cd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154CD4u, 0x154CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154CDCu;
label_154cdc:
    // 0x154cdc: 0x10000013  b           . + 4 + (0x13 << 2)
label_154ce0:
    if (ctx->pc == 0x154CE0u) {
        ctx->pc = 0x154CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CDCu;
        // 0x154ce0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CE4u;
        goto label_154ce4;
    }
    ctx->pc = 0x154CDCu;
    {
        const bool branch_taken_0x154cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CDCu;
        // 0x154ce0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154cdc) {
            ctx->pc = 0x154D2Cu;
            goto label_154d2c;
        }
    }
    ctx->pc = 0x154CE4u;
label_154ce4:
    // 0x154ce4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x154ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_154ce8:
    // 0x154ce8: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
label_154cec:
    if (ctx->pc == 0x154CECu) {
        ctx->pc = 0x154CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CE8u;
        // 0x154cec: 0x8e090000  lw          $t1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CF0u;
        goto label_154cf0;
    }
    ctx->pc = 0x154CE8u;
    {
        const bool branch_taken_0x154ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x154ce8) {
            ctx->pc = 0x154CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154CE8u;
            // 0x154cec: 0x8e090000  lw          $t1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154CF8u;
            goto label_154cf8;
        }
    }
    ctx->pc = 0x154CF0u;
label_154cf0:
    // 0x154cf0: 0x1000000e  b           . + 4 + (0xE << 2)
label_154cf4:
    if (ctx->pc == 0x154CF4u) {
        ctx->pc = 0x154CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CF0u;
        // 0x154cf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CF8u;
        goto label_154cf8;
    }
    ctx->pc = 0x154CF0u;
    {
        const bool branch_taken_0x154cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CF0u;
        // 0x154cf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154cf0) {
            ctx->pc = 0x154D2Cu;
            goto label_154d2c;
        }
    }
    ctx->pc = 0x154CF8u;
label_154cf8:
    // 0x154cf8: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x154cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_154cfc:
    // 0x154cfc: 0x8c870048  lw          $a3, 0x48($a0)
    ctx->pc = 0x154cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_154d00:
    // 0x154d00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x154d00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154d04:
    // 0x154d04: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x154d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_154d08:
    // 0x154d08: 0x8c860044  lw          $a2, 0x44($a0)
    ctx->pc = 0x154d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_154d0c:
    // 0x154d0c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x154d0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_154d10:
    // 0x154d10: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x154d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_154d14:
    // 0x154d14: 0x40f809  jalr        $v0
label_154d18:
    if (ctx->pc == 0x154D18u) {
        ctx->pc = 0x154D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D14u;
        // 0x154d18: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D1Cu;
        goto label_154d1c;
    }
    ctx->pc = 0x154D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154D1Cu);
        ctx->pc = 0x154D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D14u;
        // 0x154d18: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154D14u, 0x154D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154D1Cu;
label_154d1c:
    // 0x154d1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_154d20:
    if (ctx->pc == 0x154D20u) {
        ctx->pc = 0x154D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D1Cu;
        // 0x154d20: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D24u;
        goto label_154d24;
    }
    ctx->pc = 0x154D1Cu;
    {
        const bool branch_taken_0x154d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D1Cu;
        // 0x154d20: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d1c) {
            ctx->pc = 0x154D2Cu;
            goto label_154d2c;
        }
    }
    ctx->pc = 0x154D24u;
label_154d24:
    // 0x154d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154d28:
    // 0x154d28: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x154d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_154d2c:
    // 0x154d2c: 0x1620ff88  bnez        $s1, . + 4 + (-0x78 << 2)
label_154d30:
    if (ctx->pc == 0x154D30u) {
        ctx->pc = 0x154D34u;
        goto label_154d34;
    }
    ctx->pc = 0x154D2Cu;
    {
        const bool branch_taken_0x154d2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x154d2c) {
            ctx->pc = 0x154B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154b50;
        }
    }
    ctx->pc = 0x154D34u;
label_154d34:
    // 0x154d34: 0xae40c64c  sw          $zero, -0x39B4($s2)
    ctx->pc = 0x154d34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952524), GPR_U32(ctx, 0));
label_154d38:
    // 0x154d38: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x154d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_154d3c:
    // 0x154d3c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x154d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_154d40:
    // 0x154d40: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x154d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_154d44:
    // 0x154d44: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x154d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_154d48:
    // 0x154d48: 0x3e00008  jr          $ra
label_154d4c:
    if (ctx->pc == 0x154D4Cu) {
        ctx->pc = 0x154D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D48u;
        // 0x154d4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D50u;
        goto label_fallthrough_0x154d48;
    }
    ctx->pc = 0x154D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D48u;
        // 0x154d4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x154d48:
    ctx->pc = 0x154D50u;
}

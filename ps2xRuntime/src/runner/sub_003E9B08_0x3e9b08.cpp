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

// Function: sub_003E9B08
// Address: 0x3e9b08 - 0x3e9be0
void sub_003E9B08_0x3e9b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9B08_0x3e9b08");
#endif

    switch (ctx->pc) {
        case 0x3e9b08u: goto label_3e9b08;
        case 0x3e9b0cu: goto label_3e9b0c;
        case 0x3e9b10u: goto label_3e9b10;
        case 0x3e9b14u: goto label_3e9b14;
        case 0x3e9b18u: goto label_3e9b18;
        case 0x3e9b1cu: goto label_3e9b1c;
        case 0x3e9b20u: goto label_3e9b20;
        case 0x3e9b24u: goto label_3e9b24;
        case 0x3e9b28u: goto label_3e9b28;
        case 0x3e9b2cu: goto label_3e9b2c;
        case 0x3e9b30u: goto label_3e9b30;
        case 0x3e9b34u: goto label_3e9b34;
        case 0x3e9b38u: goto label_3e9b38;
        case 0x3e9b3cu: goto label_3e9b3c;
        case 0x3e9b40u: goto label_3e9b40;
        case 0x3e9b44u: goto label_3e9b44;
        case 0x3e9b48u: goto label_3e9b48;
        case 0x3e9b4cu: goto label_3e9b4c;
        case 0x3e9b50u: goto label_3e9b50;
        case 0x3e9b54u: goto label_3e9b54;
        case 0x3e9b58u: goto label_3e9b58;
        case 0x3e9b5cu: goto label_3e9b5c;
        case 0x3e9b60u: goto label_3e9b60;
        case 0x3e9b64u: goto label_3e9b64;
        case 0x3e9b68u: goto label_3e9b68;
        case 0x3e9b6cu: goto label_3e9b6c;
        case 0x3e9b70u: goto label_3e9b70;
        case 0x3e9b74u: goto label_3e9b74;
        case 0x3e9b78u: goto label_3e9b78;
        case 0x3e9b7cu: goto label_3e9b7c;
        case 0x3e9b80u: goto label_3e9b80;
        case 0x3e9b84u: goto label_3e9b84;
        case 0x3e9b88u: goto label_3e9b88;
        case 0x3e9b8cu: goto label_3e9b8c;
        case 0x3e9b90u: goto label_3e9b90;
        case 0x3e9b94u: goto label_3e9b94;
        case 0x3e9b98u: goto label_3e9b98;
        case 0x3e9b9cu: goto label_3e9b9c;
        case 0x3e9ba0u: goto label_3e9ba0;
        case 0x3e9ba4u: goto label_3e9ba4;
        case 0x3e9ba8u: goto label_3e9ba8;
        case 0x3e9bacu: goto label_3e9bac;
        case 0x3e9bb0u: goto label_3e9bb0;
        case 0x3e9bb4u: goto label_3e9bb4;
        case 0x3e9bb8u: goto label_3e9bb8;
        case 0x3e9bbcu: goto label_3e9bbc;
        case 0x3e9bc0u: goto label_3e9bc0;
        case 0x3e9bc4u: goto label_3e9bc4;
        case 0x3e9bc8u: goto label_3e9bc8;
        case 0x3e9bccu: goto label_3e9bcc;
        case 0x3e9bd0u: goto label_3e9bd0;
        case 0x3e9bd4u: goto label_3e9bd4;
        case 0x3e9bd8u: goto label_3e9bd8;
        case 0x3e9bdcu: goto label_3e9bdc;
        default: break;
    }

    ctx->pc = 0x3e9b08u;

label_3e9b08:
    // 0x3e9b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e9b0c:
    // 0x3e9b0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e9b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3e9b10:
    // 0x3e9b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e9b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e9b14:
    // 0x3e9b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e9b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9b18:
    // 0x3e9b18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e9b1c:
    // 0x3e9b1c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e9b1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e9b20:
    // 0x3e9b20: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e9b24:
    // 0x3e9b24: 0x40f809  jalr        $v0
label_3e9b28:
    if (ctx->pc == 0x3E9B28u) {
        ctx->pc = 0x3E9B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B24u;
        // 0x3e9b28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B2Cu;
        goto label_3e9b2c;
    }
    ctx->pc = 0x3E9B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9B2Cu);
        ctx->pc = 0x3E9B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B24u;
        // 0x3e9b28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9B24u, 0x3E9B2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9B2Cu;
label_3e9b2c:
    // 0x3e9b2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e9b2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9b30:
    // 0x3e9b30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3e9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3e9b34:
    // 0x3e9b34: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3e9b38:
    if (ctx->pc == 0x3E9B38u) {
        ctx->pc = 0x3E9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B34u;
        // 0x3e9b38: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B3Cu;
        goto label_3e9b3c;
    }
    ctx->pc = 0x3E9B34u;
    {
        const bool branch_taken_0x3e9b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9b34) {
            ctx->pc = 0x3E9B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9B34u;
            // 0x3e9b38: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9B50u;
            goto label_3e9b50;
        }
    }
    ctx->pc = 0x3E9B3Cu;
label_3e9b3c:
    // 0x3e9b3c: 0x920200c8  lbu         $v0, 0xC8($s0)
    ctx->pc = 0x3e9b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 200)));
label_3e9b40:
    // 0x3e9b40: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3e9b44:
    if (ctx->pc == 0x3E9B44u) {
        ctx->pc = 0x3E9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B40u;
        // 0x3e9b44: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B48u;
        goto label_3e9b48;
    }
    ctx->pc = 0x3E9B40u;
    {
        const bool branch_taken_0x3e9b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9b40) {
            ctx->pc = 0x3E9B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9B40u;
            // 0x3e9b44: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9B50u;
            goto label_3e9b50;
        }
    }
    ctx->pc = 0x3E9B48u;
label_3e9b48:
    // 0x3e9b48: 0x10000021  b           . + 4 + (0x21 << 2)
label_3e9b4c:
    if (ctx->pc == 0x3E9B4Cu) {
        ctx->pc = 0x3E9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B48u;
        // 0x3e9b4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B50u;
        goto label_3e9b50;
    }
    ctx->pc = 0x3E9B48u;
    {
        const bool branch_taken_0x3e9b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B48u;
        // 0x3e9b4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b48) {
            ctx->pc = 0x3E9BD0u;
            goto label_3e9bd0;
        }
    }
    ctx->pc = 0x3E9B50u;
label_3e9b50:
    // 0x3e9b50: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3e9b54:
    if (ctx->pc == 0x3E9B54u) {
        ctx->pc = 0x3E9B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B50u;
        // 0x3e9b54: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B58u;
        goto label_3e9b58;
    }
    ctx->pc = 0x3E9B50u;
    {
        const bool branch_taken_0x3e9b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9b50) {
            ctx->pc = 0x3E9B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9B50u;
            // 0x3e9b54: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9B94u;
            goto label_3e9b94;
        }
    }
    ctx->pc = 0x3E9B58u;
label_3e9b58:
    // 0x3e9b58: 0x8e0400c8  lw          $a0, 0xC8($s0)
    ctx->pc = 0x3e9b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_3e9b5c:
    // 0x3e9b5c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3e9b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3e9b60:
    // 0x3e9b60: 0x2c6200ff  sltiu       $v0, $v1, 0xFF
    ctx->pc = 0x3e9b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
label_3e9b64:
    // 0x3e9b64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3e9b68:
    if (ctx->pc == 0x3E9B68u) {
        ctx->pc = 0x3E9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B64u;
        // 0x3e9b68: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B6Cu;
        goto label_3e9b6c;
    }
    ctx->pc = 0x3E9B64u;
    {
        const bool branch_taken_0x3e9b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B64u;
        // 0x3e9b68: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b64) {
            ctx->pc = 0x3E9BCCu;
            goto label_3e9bcc;
        }
    }
    ctx->pc = 0x3E9B6Cu;
label_3e9b6c:
    // 0x3e9b6c: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x3e9b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_3e9b70:
    // 0x3e9b70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e9b74:
    if (ctx->pc == 0x3E9B74u) {
        ctx->pc = 0x3E9B78u;
        goto label_3e9b78;
    }
    ctx->pc = 0x3E9B70u;
    {
        const bool branch_taken_0x3e9b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9b70) {
            ctx->pc = 0x3E9B80u;
            goto label_3e9b80;
        }
    }
    ctx->pc = 0x3E9B78u;
label_3e9b78:
    // 0x3e9b78: 0x10000013  b           . + 4 + (0x13 << 2)
label_3e9b7c:
    if (ctx->pc == 0x3E9B7Cu) {
        ctx->pc = 0x3E9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B78u;
        // 0x3e9b7c: 0x348200ff  ori         $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B80u;
        goto label_3e9b80;
    }
    ctx->pc = 0x3E9B78u;
    {
        const bool branch_taken_0x3e9b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B78u;
        // 0x3e9b7c: 0x348200ff  ori         $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b78) {
            ctx->pc = 0x3E9BC8u;
            goto label_3e9bc8;
        }
    }
    ctx->pc = 0x3E9B80u;
label_3e9b80:
    // 0x3e9b80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e9b84:
    // 0x3e9b84: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e9b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3e9b88:
    // 0x3e9b88: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3e9b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3e9b8c:
    // 0x3e9b8c: 0x1000000e  b           . + 4 + (0xE << 2)
label_3e9b90:
    if (ctx->pc == 0x3E9B90u) {
        ctx->pc = 0x3E9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B8Cu;
        // 0x3e9b90: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B94u;
        goto label_3e9b94;
    }
    ctx->pc = 0x3E9B8Cu;
    {
        const bool branch_taken_0x3e9b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B8Cu;
        // 0x3e9b90: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b8c) {
            ctx->pc = 0x3E9BC8u;
            goto label_3e9bc8;
        }
    }
    ctx->pc = 0x3E9B94u;
label_3e9b94:
    // 0x3e9b94: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3e9b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e9b98:
    // 0x3e9b98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3e9b9c:
    if (ctx->pc == 0x3E9B9Cu) {
        ctx->pc = 0x3E9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B98u;
        // 0x3e9b9c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9BA0u;
        goto label_3e9ba0;
    }
    ctx->pc = 0x3E9B98u;
    {
        const bool branch_taken_0x3e9b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B98u;
        // 0x3e9b9c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b98) {
            ctx->pc = 0x3E9BCCu;
            goto label_3e9bcc;
        }
    }
    ctx->pc = 0x3E9BA0u;
label_3e9ba0:
    // 0x3e9ba0: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
label_3e9ba4:
    if (ctx->pc == 0x3E9BA4u) {
        ctx->pc = 0x3E9BA8u;
        goto label_3e9ba8;
    }
    ctx->pc = 0x3E9BA0u;
    {
        const bool branch_taken_0x3e9ba0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x3e9ba0) {
            ctx->pc = 0x3E9BBCu;
            goto label_3e9bbc;
        }
    }
    ctx->pc = 0x3E9BA8u;
label_3e9ba8:
    // 0x3e9ba8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e9bac:
    // 0x3e9bac: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e9bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3e9bb0:
    // 0x3e9bb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e9bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e9bb4:
    // 0x3e9bb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e9bb8:
    if (ctx->pc == 0x3E9BB8u) {
        ctx->pc = 0x3E9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BB4u;
        // 0x3e9bb8: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9BBCu;
        goto label_3e9bbc;
    }
    ctx->pc = 0x3E9BB4u;
    {
        const bool branch_taken_0x3e9bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BB4u;
        // 0x3e9bb8: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9bb4) {
            ctx->pc = 0x3E9BC8u;
            goto label_3e9bc8;
        }
    }
    ctx->pc = 0x3E9BBCu;
label_3e9bbc:
    // 0x3e9bbc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e9bc0:
    // 0x3e9bc0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e9bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3e9bc4:
    // 0x3e9bc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e9bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e9bc8:
    // 0x3e9bc8: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x3e9bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_3e9bcc:
    // 0x3e9bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e9bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9bd0:
    // 0x3e9bd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e9bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e9bd4:
    // 0x3e9bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e9bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9bd8:
    // 0x3e9bd8: 0x3e00008  jr          $ra
label_3e9bdc:
    if (ctx->pc == 0x3E9BDCu) {
        ctx->pc = 0x3E9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BD8u;
        // 0x3e9bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9BE0u;
        goto label_fallthrough_0x3e9bd8;
    }
    ctx->pc = 0x3E9BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BD8u;
        // 0x3e9bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e9bd8:
    ctx->pc = 0x3E9BE0u;
}

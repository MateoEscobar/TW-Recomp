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

// Function: sub_001F9B38
// Address: 0x1f9b38 - 0x1f9ce8
void sub_001F9B38_0x1f9b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9B38_0x1f9b38");
#endif

    switch (ctx->pc) {
        case 0x1f9b38u: goto label_1f9b38;
        case 0x1f9b3cu: goto label_1f9b3c;
        case 0x1f9b40u: goto label_1f9b40;
        case 0x1f9b44u: goto label_1f9b44;
        case 0x1f9b48u: goto label_1f9b48;
        case 0x1f9b4cu: goto label_1f9b4c;
        case 0x1f9b50u: goto label_1f9b50;
        case 0x1f9b54u: goto label_1f9b54;
        case 0x1f9b58u: goto label_1f9b58;
        case 0x1f9b5cu: goto label_1f9b5c;
        case 0x1f9b60u: goto label_1f9b60;
        case 0x1f9b64u: goto label_1f9b64;
        case 0x1f9b68u: goto label_1f9b68;
        case 0x1f9b6cu: goto label_1f9b6c;
        case 0x1f9b70u: goto label_1f9b70;
        case 0x1f9b74u: goto label_1f9b74;
        case 0x1f9b78u: goto label_1f9b78;
        case 0x1f9b7cu: goto label_1f9b7c;
        case 0x1f9b80u: goto label_1f9b80;
        case 0x1f9b84u: goto label_1f9b84;
        case 0x1f9b88u: goto label_1f9b88;
        case 0x1f9b8cu: goto label_1f9b8c;
        case 0x1f9b90u: goto label_1f9b90;
        case 0x1f9b94u: goto label_1f9b94;
        case 0x1f9b98u: goto label_1f9b98;
        case 0x1f9b9cu: goto label_1f9b9c;
        case 0x1f9ba0u: goto label_1f9ba0;
        case 0x1f9ba4u: goto label_1f9ba4;
        case 0x1f9ba8u: goto label_1f9ba8;
        case 0x1f9bacu: goto label_1f9bac;
        case 0x1f9bb0u: goto label_1f9bb0;
        case 0x1f9bb4u: goto label_1f9bb4;
        case 0x1f9bb8u: goto label_1f9bb8;
        case 0x1f9bbcu: goto label_1f9bbc;
        case 0x1f9bc0u: goto label_1f9bc0;
        case 0x1f9bc4u: goto label_1f9bc4;
        case 0x1f9bc8u: goto label_1f9bc8;
        case 0x1f9bccu: goto label_1f9bcc;
        case 0x1f9bd0u: goto label_1f9bd0;
        case 0x1f9bd4u: goto label_1f9bd4;
        case 0x1f9bd8u: goto label_1f9bd8;
        case 0x1f9bdcu: goto label_1f9bdc;
        case 0x1f9be0u: goto label_1f9be0;
        case 0x1f9be4u: goto label_1f9be4;
        case 0x1f9be8u: goto label_1f9be8;
        case 0x1f9becu: goto label_1f9bec;
        case 0x1f9bf0u: goto label_1f9bf0;
        case 0x1f9bf4u: goto label_1f9bf4;
        case 0x1f9bf8u: goto label_1f9bf8;
        case 0x1f9bfcu: goto label_1f9bfc;
        case 0x1f9c00u: goto label_1f9c00;
        case 0x1f9c04u: goto label_1f9c04;
        case 0x1f9c08u: goto label_1f9c08;
        case 0x1f9c0cu: goto label_1f9c0c;
        case 0x1f9c10u: goto label_1f9c10;
        case 0x1f9c14u: goto label_1f9c14;
        case 0x1f9c18u: goto label_1f9c18;
        case 0x1f9c1cu: goto label_1f9c1c;
        case 0x1f9c20u: goto label_1f9c20;
        case 0x1f9c24u: goto label_1f9c24;
        case 0x1f9c28u: goto label_1f9c28;
        case 0x1f9c2cu: goto label_1f9c2c;
        case 0x1f9c30u: goto label_1f9c30;
        case 0x1f9c34u: goto label_1f9c34;
        case 0x1f9c38u: goto label_1f9c38;
        case 0x1f9c3cu: goto label_1f9c3c;
        case 0x1f9c40u: goto label_1f9c40;
        case 0x1f9c44u: goto label_1f9c44;
        case 0x1f9c48u: goto label_1f9c48;
        case 0x1f9c4cu: goto label_1f9c4c;
        case 0x1f9c50u: goto label_1f9c50;
        case 0x1f9c54u: goto label_1f9c54;
        case 0x1f9c58u: goto label_1f9c58;
        case 0x1f9c5cu: goto label_1f9c5c;
        case 0x1f9c60u: goto label_1f9c60;
        case 0x1f9c64u: goto label_1f9c64;
        case 0x1f9c68u: goto label_1f9c68;
        case 0x1f9c6cu: goto label_1f9c6c;
        case 0x1f9c70u: goto label_1f9c70;
        case 0x1f9c74u: goto label_1f9c74;
        case 0x1f9c78u: goto label_1f9c78;
        case 0x1f9c7cu: goto label_1f9c7c;
        case 0x1f9c80u: goto label_1f9c80;
        case 0x1f9c84u: goto label_1f9c84;
        case 0x1f9c88u: goto label_1f9c88;
        case 0x1f9c8cu: goto label_1f9c8c;
        case 0x1f9c90u: goto label_1f9c90;
        case 0x1f9c94u: goto label_1f9c94;
        case 0x1f9c98u: goto label_1f9c98;
        case 0x1f9c9cu: goto label_1f9c9c;
        case 0x1f9ca0u: goto label_1f9ca0;
        case 0x1f9ca4u: goto label_1f9ca4;
        case 0x1f9ca8u: goto label_1f9ca8;
        case 0x1f9cacu: goto label_1f9cac;
        case 0x1f9cb0u: goto label_1f9cb0;
        case 0x1f9cb4u: goto label_1f9cb4;
        case 0x1f9cb8u: goto label_1f9cb8;
        case 0x1f9cbcu: goto label_1f9cbc;
        case 0x1f9cc0u: goto label_1f9cc0;
        case 0x1f9cc4u: goto label_1f9cc4;
        case 0x1f9cc8u: goto label_1f9cc8;
        case 0x1f9cccu: goto label_1f9ccc;
        case 0x1f9cd0u: goto label_1f9cd0;
        case 0x1f9cd4u: goto label_1f9cd4;
        case 0x1f9cd8u: goto label_1f9cd8;
        case 0x1f9cdcu: goto label_1f9cdc;
        case 0x1f9ce0u: goto label_1f9ce0;
        case 0x1f9ce4u: goto label_1f9ce4;
        default: break;
    }

    ctx->pc = 0x1f9b38u;

label_1f9b38:
    // 0x1f9b38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f9b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1f9b3c:
    // 0x1f9b3c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f9b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1f9b40:
    // 0x1f9b40: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f9b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1f9b44:
    // 0x1f9b44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f9b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9b48:
    // 0x1f9b48: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f9b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1f9b4c:
    // 0x1f9b4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f9b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f9b50:
    // 0x1f9b50: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1f9b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1f9b54:
    // 0x1f9b54: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1f9b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1f9b58:
    // 0x1f9b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f9b5c:
    // 0x1f9b5c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1f9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1f9b60:
    // 0x1f9b60: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_1f9b64:
    if (ctx->pc == 0x1F9B64u) {
        ctx->pc = 0x1F9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B60u;
        // 0x1f9b64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9B68u;
        goto label_1f9b68;
    }
    ctx->pc = 0x1F9B60u;
    {
        const bool branch_taken_0x1f9b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B60u;
        // 0x1f9b64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b60) {
            ctx->pc = 0x1F9CC0u;
            goto label_1f9cc0;
        }
    }
    ctx->pc = 0x1F9B68u;
label_1f9b68:
    // 0x1f9b68: 0x924200e5  lbu         $v0, 0xE5($s2)
    ctx->pc = 0x1f9b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 229)));
label_1f9b6c:
    // 0x1f9b6c: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x1f9b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_1f9b70:
    // 0x1f9b70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1f9b74:
    if (ctx->pc == 0x1F9B74u) {
        ctx->pc = 0x1F9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B70u;
        // 0x1f9b74: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9B78u;
        goto label_1f9b78;
    }
    ctx->pc = 0x1F9B70u;
    {
        const bool branch_taken_0x1f9b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B70u;
        // 0x1f9b74: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b70) {
            ctx->pc = 0x1F9BC8u;
            goto label_1f9bc8;
        }
    }
    ctx->pc = 0x1F9B78u;
label_1f9b78:
    // 0x1f9b78: 0x26530090  addiu       $s3, $s2, 0x90
    ctx->pc = 0x1f9b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_1f9b7c:
    // 0x1f9b7c: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1f9b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1f9b80:
    // 0x1f9b80: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1f9b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1f9b84:
    // 0x1f9b84: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f9b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9b88:
    // 0x1f9b88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9b8c:
    // 0x1f9b8c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f9b8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f9b90:
    // 0x1f9b90: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f9b94:
    // 0x1f9b94: 0x60f809  jalr        $v1
label_1f9b98:
    if (ctx->pc == 0x1F9B98u) {
        ctx->pc = 0x1F9B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B94u;
        // 0x1f9b98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9B9Cu;
        goto label_1f9b9c;
    }
    ctx->pc = 0x1F9B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9B9Cu);
        ctx->pc = 0x1F9B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B94u;
        // 0x1f9b98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9B94u, 0x1F9B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9B9Cu;
label_1f9b9c:
    // 0x1f9b9c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9ba0:
    // 0x1f9ba0: 0x26857a78  addiu       $a1, $s4, 0x7A78
    ctx->pc = 0x1f9ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 31352));
label_1f9ba4:
    // 0x1f9ba4: 0xc13a560  jal         func_4E9580
label_1f9ba8:
    if (ctx->pc == 0x1F9BA8u) {
        ctx->pc = 0x1F9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BA4u;
        // 0x1f9ba8: 0x240600f9  addiu       $a2, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9BACu;
        goto label_1f9bac;
    }
    ctx->pc = 0x1F9BA4u;
    SET_GPR_U32(ctx, 31, 0x1F9BACu);
    ctx->pc = 0x1F9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9BA4u;
    // 0x1f9ba8: 0x240600f9  addiu       $a2, $zero, 0xF9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x1F9BA4u, 0x1F9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BACu;
label_1f9bac:
    // 0x1f9bac: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1f9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f9bb0:
    // 0x1f9bb0: 0x924200e5  lbu         $v0, 0xE5($s2)
    ctx->pc = 0x1f9bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 229)));
label_1f9bb4:
    // 0x1f9bb4: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1f9bb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1f9bb8:
    // 0x1f9bb8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1f9bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f9bbc:
    // 0x1f9bbc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1f9bc0:
    if (ctx->pc == 0x1F9BC0u) {
        ctx->pc = 0x1F9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BBCu;
        // 0x1f9bc0: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9BC4u;
        goto label_1f9bc4;
    }
    ctx->pc = 0x1F9BBCu;
    {
        const bool branch_taken_0x1f9bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BBCu;
        // 0x1f9bc0: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bbc) {
            ctx->pc = 0x1F9B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9b80;
        }
    }
    ctx->pc = 0x1F9BC4u;
label_1f9bc4:
    // 0x1f9bc4: 0x924200e5  lbu         $v0, 0xE5($s2)
    ctx->pc = 0x1f9bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 229)));
label_1f9bc8:
    // 0x1f9bc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f9bcc:
    // 0x1f9bcc: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
label_1f9bd0:
    if (ctx->pc == 0x1F9BD0u) {
        ctx->pc = 0x1F9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BCCu;
        // 0x1f9bd0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9BD4u;
        goto label_1f9bd4;
    }
    ctx->pc = 0x1F9BCCu;
    {
        const bool branch_taken_0x1f9bcc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BCCu;
        // 0x1f9bd0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bcc) {
            ctx->pc = 0x1F9C28u;
            goto label_1f9c28;
        }
    }
    ctx->pc = 0x1F9BD4u;
label_1f9bd4:
    // 0x1f9bd4: 0x265300b8  addiu       $s3, $s2, 0xB8
    ctx->pc = 0x1f9bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
label_1f9bd8:
    // 0x1f9bd8: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1f9bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1f9bdc:
    // 0x1f9bdc: 0x0  nop
    ctx->pc = 0x1f9bdcu;
    // NOP
label_1f9be0:
    // 0x1f9be0: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1f9be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1f9be4:
    // 0x1f9be4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f9be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9be8:
    // 0x1f9be8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9bec:
    // 0x1f9bec: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1f9becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f9bf0:
    // 0x1f9bf0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f9bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f9bf4:
    // 0x1f9bf4: 0x60f809  jalr        $v1
label_1f9bf8:
    if (ctx->pc == 0x1F9BF8u) {
        ctx->pc = 0x1F9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BF4u;
        // 0x1f9bf8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9BFCu;
        goto label_1f9bfc;
    }
    ctx->pc = 0x1F9BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9BFCu);
        ctx->pc = 0x1F9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BF4u;
        // 0x1f9bf8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9BF4u, 0x1F9BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9BFCu;
label_1f9bfc:
    // 0x1f9bfc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9c00:
    // 0x1f9c00: 0x26857a78  addiu       $a1, $s4, 0x7A78
    ctx->pc = 0x1f9c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 31352));
label_1f9c04:
    // 0x1f9c04: 0xc138e72  jal         func_4E39C8
label_1f9c08:
    if (ctx->pc == 0x1F9C08u) {
        ctx->pc = 0x1F9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C04u;
        // 0x1f9c08: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C0Cu;
        goto label_1f9c0c;
    }
    ctx->pc = 0x1F9C04u;
    SET_GPR_U32(ctx, 31, 0x1F9C0Cu);
    ctx->pc = 0x1F9C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9C04u;
    // 0x1f9c08: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1F9C04u, 0x1F9C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C0Cu;
label_1f9c0c:
    // 0x1f9c0c: 0x924300e5  lbu         $v1, 0xE5($s2)
    ctx->pc = 0x1f9c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 229)));
label_1f9c10:
    // 0x1f9c10: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1f9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f9c14:
    // 0x1f9c14: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1f9c14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f9c18:
    // 0x1f9c18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f9c1c:
    // 0x1f9c1c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1f9c1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f9c20:
    // 0x1f9c20: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1f9c24:
    if (ctx->pc == 0x1F9C24u) {
        ctx->pc = 0x1F9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C20u;
        // 0x1f9c24: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C28u;
        goto label_1f9c28;
    }
    ctx->pc = 0x1F9C20u;
    {
        const bool branch_taken_0x1f9c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C20u;
        // 0x1f9c24: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c20) {
            ctx->pc = 0x1F9BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9be0;
        }
    }
    ctx->pc = 0x1F9C28u;
label_1f9c28:
    // 0x1f9c28: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x1f9c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_1f9c2c:
    // 0x1f9c2c: 0x26907a78  addiu       $s0, $s4, 0x7A78
    ctx->pc = 0x1f9c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 31352));
label_1f9c30:
    // 0x1f9c30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9c34:
    // 0x1f9c34: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f9c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f9c38:
    // 0x1f9c38: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f9c3c:
    // 0x1f9c3c: 0x60f809  jalr        $v1
label_1f9c40:
    if (ctx->pc == 0x1F9C40u) {
        ctx->pc = 0x1F9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C3Cu;
        // 0x1f9c40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C44u;
        goto label_1f9c44;
    }
    ctx->pc = 0x1F9C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9C44u);
        ctx->pc = 0x1F9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C3Cu;
        // 0x1f9c40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9C3Cu, 0x1F9C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9C44u;
label_1f9c44:
    // 0x1f9c44: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x1f9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_1f9c48:
    // 0x1f9c48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9c4c:
    // 0x1f9c4c: 0xc139fe8  jal         func_4E7FA0
label_1f9c50:
    if (ctx->pc == 0x1F9C50u) {
        ctx->pc = 0x1F9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C4Cu;
        // 0x1f9c50: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C54u;
        goto label_1f9c54;
    }
    ctx->pc = 0x1F9C4Cu;
    SET_GPR_U32(ctx, 31, 0x1F9C54u);
    ctx->pc = 0x1F9C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9C4Cu;
    // 0x1f9c50: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x1F9C4Cu, 0x1F9C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C54u;
label_1f9c54:
    // 0x1f9c54: 0xc073462  jal         func_1CD188
label_1f9c58:
    if (ctx->pc == 0x1F9C58u) {
        ctx->pc = 0x1F9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C54u;
        // 0x1f9c58: 0x8e4400e0  lw          $a0, 0xE0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C5Cu;
        goto label_1f9c5c;
    }
    ctx->pc = 0x1F9C54u;
    SET_GPR_U32(ctx, 31, 0x1F9C5Cu);
    ctx->pc = 0x1F9C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9C54u;
    // 0x1f9c58: 0x8e4400e0  lw          $a0, 0xE0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1F9C54u, 0x1F9C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C5Cu;
label_1f9c5c:
    // 0x1f9c5c: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x1f9c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_1f9c60:
    // 0x1f9c60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9c64:
    // 0x1f9c64: 0xc139138  jal         func_4E44E0
label_1f9c68:
    if (ctx->pc == 0x1F9C68u) {
        ctx->pc = 0x1F9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C64u;
        // 0x1f9c68: 0x24060108  addiu       $a2, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C6Cu;
        goto label_1f9c6c;
    }
    ctx->pc = 0x1F9C64u;
    SET_GPR_U32(ctx, 31, 0x1F9C6Cu);
    ctx->pc = 0x1F9C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9C64u;
    // 0x1f9c68: 0x24060108  addiu       $a2, $zero, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1F9C64u, 0x1F9C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C6Cu;
label_1f9c6c:
    // 0x1f9c6c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x1f9c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_1f9c70:
    // 0x1f9c70: 0xc0616ac  jal         func_185AB0
label_1f9c74:
    if (ctx->pc == 0x1F9C74u) {
        ctx->pc = 0x1F9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C70u;
        // 0x1f9c74: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C78u;
        goto label_1f9c78;
    }
    ctx->pc = 0x1F9C70u;
    SET_GPR_U32(ctx, 31, 0x1F9C78u);
    ctx->pc = 0x1F9C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9C70u;
    // 0x1f9c74: 0x8e450060  lw          $a1, 0x60($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1F9C70u, 0x1F9C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C78u;
label_1f9c78:
    // 0x1f9c78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f9c7c:
    if (ctx->pc == 0x1F9C7Cu) {
        ctx->pc = 0x1F9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C78u;
        // 0x1f9c7c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C80u;
        goto label_1f9c80;
    }
    ctx->pc = 0x1F9C78u;
    {
        const bool branch_taken_0x1f9c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C78u;
        // 0x1f9c7c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c78) {
            ctx->pc = 0x1F9C88u;
            goto label_1f9c88;
        }
    }
    ctx->pc = 0x1F9C80u;
label_1f9c80:
    // 0x1f9c80: 0xc062be2  jal         func_18AF88
label_1f9c84:
    if (ctx->pc == 0x1F9C84u) {
        ctx->pc = 0x1F9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C80u;
        // 0x1f9c84: 0x96450060  lhu         $a1, 0x60($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C88u;
        goto label_1f9c88;
    }
    ctx->pc = 0x1F9C80u;
    SET_GPR_U32(ctx, 31, 0x1F9C88u);
    ctx->pc = 0x1F9C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9C80u;
    // 0x1f9c84: 0x96450060  lhu         $a1, 0x60($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x1F9C80u, 0x1F9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C88u;
label_1f9c88:
    // 0x1f9c88: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x1f9c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_1f9c8c:
    // 0x1f9c8c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f9c90:
    if (ctx->pc == 0x1F9C90u) {
        ctx->pc = 0x1F9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C8Cu;
        // 0x1f9c90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C94u;
        goto label_1f9c94;
    }
    ctx->pc = 0x1F9C8Cu;
    {
        const bool branch_taken_0x1f9c8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C8Cu;
        // 0x1f9c90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c8c) {
            ctx->pc = 0x1F9CB8u;
            goto label_1f9cb8;
        }
    }
    ctx->pc = 0x1F9C94u;
label_1f9c94:
    // 0x1f9c94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f9c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9c98:
    // 0x1f9c98: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x1f9c98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1f9c9c:
    // 0x1f9c9c: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x1f9c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1f9ca0:
    // 0x1f9ca0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1f9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f9ca4:
    // 0x1f9ca4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1f9ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1f9ca8:
    // 0x1f9ca8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1f9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1f9cac:
    // 0x1f9cac: 0x60f809  jalr        $v1
label_1f9cb0:
    if (ctx->pc == 0x1F9CB0u) {
        ctx->pc = 0x1F9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CACu;
        // 0x1f9cb0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9CB4u;
        goto label_1f9cb4;
    }
    ctx->pc = 0x1F9CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9CB4u);
        ctx->pc = 0x1F9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CACu;
        // 0x1f9cb0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9CACu, 0x1F9CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9CB4u;
label_1f9cb4:
    // 0x1f9cb4: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x1f9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
label_1f9cb8:
    // 0x1f9cb8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1f9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1f9cbc:
    // 0x1f9cbc: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1f9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1f9cc0:
    // 0x1f9cc0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f9cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f9cc4:
    // 0x1f9cc4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f9cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f9cc8:
    // 0x1f9cc8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f9cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f9ccc:
    // 0x1f9ccc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f9cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f9cd0:
    // 0x1f9cd0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1f9cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f9cd4:
    // 0x1f9cd4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1f9cd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9cd8:
    // 0x1f9cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9cdc:
    // 0x1f9cdc: 0x3e00008  jr          $ra
label_1f9ce0:
    if (ctx->pc == 0x1F9CE0u) {
        ctx->pc = 0x1F9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CDCu;
        // 0x1f9ce0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9CE4u;
        goto label_1f9ce4;
    }
    ctx->pc = 0x1F9CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CDCu;
        // 0x1f9ce0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9CE4u;
label_1f9ce4:
    // 0x1f9ce4: 0x0  nop
    ctx->pc = 0x1f9ce4u;
    // NOP
    ctx->pc = 0x1f9ce8u;
}

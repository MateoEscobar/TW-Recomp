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

// Function: sub_00356AF8
// Address: 0x356af8 - 0x356c58
void sub_00356AF8_0x356af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356AF8_0x356af8");
#endif

    switch (ctx->pc) {
        case 0x356af8u: goto label_356af8;
        case 0x356afcu: goto label_356afc;
        case 0x356b00u: goto label_356b00;
        case 0x356b04u: goto label_356b04;
        case 0x356b08u: goto label_356b08;
        case 0x356b0cu: goto label_356b0c;
        case 0x356b10u: goto label_356b10;
        case 0x356b14u: goto label_356b14;
        case 0x356b18u: goto label_356b18;
        case 0x356b1cu: goto label_356b1c;
        case 0x356b20u: goto label_356b20;
        case 0x356b24u: goto label_356b24;
        case 0x356b28u: goto label_356b28;
        case 0x356b2cu: goto label_356b2c;
        case 0x356b30u: goto label_356b30;
        case 0x356b34u: goto label_356b34;
        case 0x356b38u: goto label_356b38;
        case 0x356b3cu: goto label_356b3c;
        case 0x356b40u: goto label_356b40;
        case 0x356b44u: goto label_356b44;
        case 0x356b48u: goto label_356b48;
        case 0x356b4cu: goto label_356b4c;
        case 0x356b50u: goto label_356b50;
        case 0x356b54u: goto label_356b54;
        case 0x356b58u: goto label_356b58;
        case 0x356b5cu: goto label_356b5c;
        case 0x356b60u: goto label_356b60;
        case 0x356b64u: goto label_356b64;
        case 0x356b68u: goto label_356b68;
        case 0x356b6cu: goto label_356b6c;
        case 0x356b70u: goto label_356b70;
        case 0x356b74u: goto label_356b74;
        case 0x356b78u: goto label_356b78;
        case 0x356b7cu: goto label_356b7c;
        case 0x356b80u: goto label_356b80;
        case 0x356b84u: goto label_356b84;
        case 0x356b88u: goto label_356b88;
        case 0x356b8cu: goto label_356b8c;
        case 0x356b90u: goto label_356b90;
        case 0x356b94u: goto label_356b94;
        case 0x356b98u: goto label_356b98;
        case 0x356b9cu: goto label_356b9c;
        case 0x356ba0u: goto label_356ba0;
        case 0x356ba4u: goto label_356ba4;
        case 0x356ba8u: goto label_356ba8;
        case 0x356bacu: goto label_356bac;
        case 0x356bb0u: goto label_356bb0;
        case 0x356bb4u: goto label_356bb4;
        case 0x356bb8u: goto label_356bb8;
        case 0x356bbcu: goto label_356bbc;
        case 0x356bc0u: goto label_356bc0;
        case 0x356bc4u: goto label_356bc4;
        case 0x356bc8u: goto label_356bc8;
        case 0x356bccu: goto label_356bcc;
        case 0x356bd0u: goto label_356bd0;
        case 0x356bd4u: goto label_356bd4;
        case 0x356bd8u: goto label_356bd8;
        case 0x356bdcu: goto label_356bdc;
        case 0x356be0u: goto label_356be0;
        case 0x356be4u: goto label_356be4;
        case 0x356be8u: goto label_356be8;
        case 0x356becu: goto label_356bec;
        case 0x356bf0u: goto label_356bf0;
        case 0x356bf4u: goto label_356bf4;
        case 0x356bf8u: goto label_356bf8;
        case 0x356bfcu: goto label_356bfc;
        case 0x356c00u: goto label_356c00;
        case 0x356c04u: goto label_356c04;
        case 0x356c08u: goto label_356c08;
        case 0x356c0cu: goto label_356c0c;
        case 0x356c10u: goto label_356c10;
        case 0x356c14u: goto label_356c14;
        case 0x356c18u: goto label_356c18;
        case 0x356c1cu: goto label_356c1c;
        case 0x356c20u: goto label_356c20;
        case 0x356c24u: goto label_356c24;
        case 0x356c28u: goto label_356c28;
        case 0x356c2cu: goto label_356c2c;
        case 0x356c30u: goto label_356c30;
        case 0x356c34u: goto label_356c34;
        case 0x356c38u: goto label_356c38;
        case 0x356c3cu: goto label_356c3c;
        case 0x356c40u: goto label_356c40;
        case 0x356c44u: goto label_356c44;
        case 0x356c48u: goto label_356c48;
        case 0x356c4cu: goto label_356c4c;
        case 0x356c50u: goto label_356c50;
        case 0x356c54u: goto label_356c54;
        default: break;
    }

    ctx->pc = 0x356af8u;

label_356af8:
    // 0x356af8: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x356af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_356afc:
    // 0x356afc: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x356afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
label_356b00:
    // 0x356b00: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x356b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
label_356b04:
    // 0x356b04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x356b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_356b08:
    // 0x356b08: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x356b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
label_356b0c:
    // 0x356b0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x356b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_356b10:
    // 0x356b10: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x356b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
label_356b14:
    // 0x356b14: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_356b18:
    if (ctx->pc == 0x356B18u) {
        ctx->pc = 0x356B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B14u;
        // 0x356b18: 0xffbf0200  sd          $ra, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356B1Cu;
        goto label_356b1c;
    }
    ctx->pc = 0x356B14u;
    {
        const bool branch_taken_0x356b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x356B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B14u;
        // 0x356b18: 0xffbf0200  sd          $ra, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356b14) {
            ctx->pc = 0x356B58u;
            goto label_356b58;
        }
    }
    ctx->pc = 0x356B1Cu;
label_356b1c:
    // 0x356b1c: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x356b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_356b20:
    // 0x356b20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x356b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356b24:
    // 0x356b24: 0x8e445340  lw          $a0, 0x5340($s2)
    ctx->pc = 0x356b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21312)));
label_356b28:
    // 0x356b28: 0xc0552b8  jal         func_154AE0
label_356b2c:
    if (ctx->pc == 0x356B2Cu) {
        ctx->pc = 0x356B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B28u;
        // 0x356b2c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356B30u;
        goto label_356b30;
    }
    ctx->pc = 0x356B28u;
    SET_GPR_U32(ctx, 31, 0x356B30u);
    ctx->pc = 0x356B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356B28u;
    // 0x356b2c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x356B28u, 0x356B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B30u;
label_356b30:
    // 0x356b30: 0x8e62b788  lw          $v0, -0x4878($s3)
    ctx->pc = 0x356b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948744)));
label_356b34:
    // 0x356b34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x356b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_356b38:
    // 0x356b38: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x356b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_356b3c:
    // 0x356b3c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x356b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_356b40:
    // 0x356b40: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x356b40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_356b44:
    // 0x356b44: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x356b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_356b48:
    // 0x356b48: 0x40f809  jalr        $v0
label_356b4c:
    if (ctx->pc == 0x356B4Cu) {
        ctx->pc = 0x356B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B48u;
        // 0x356b4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356B50u;
        goto label_356b50;
    }
    ctx->pc = 0x356B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356B50u);
        ctx->pc = 0x356B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B48u;
        // 0x356b4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356B48u, 0x356B50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356B50u;
label_356b50:
    // 0x356b50: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_356b54:
    if (ctx->pc == 0x356B54u) {
        ctx->pc = 0x356B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B50u;
        // 0x356b54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356B58u;
        goto label_356b58;
    }
    ctx->pc = 0x356B50u;
    {
        const bool branch_taken_0x356b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356b50) {
            ctx->pc = 0x356B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356B50u;
            // 0x356b54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356B60u;
            goto label_356b60;
        }
    }
    ctx->pc = 0x356B58u;
label_356b58:
    // 0x356b58: 0x10000037  b           . + 4 + (0x37 << 2)
label_356b5c:
    if (ctx->pc == 0x356B5Cu) {
        ctx->pc = 0x356B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B58u;
        // 0x356b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356B60u;
        goto label_356b60;
    }
    ctx->pc = 0x356B58u;
    {
        const bool branch_taken_0x356b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B58u;
        // 0x356b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356b58) {
            ctx->pc = 0x356C38u;
            goto label_356c38;
        }
    }
    ctx->pc = 0x356B60u;
label_356b60:
    // 0x356b60: 0xa3a001ff  sb          $zero, 0x1FF($sp)
    ctx->pc = 0x356b60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 511), (uint8_t)GPR_U32(ctx, 0));
label_356b64:
    // 0x356b64: 0x240601ff  addiu       $a2, $zero, 0x1FF
    ctx->pc = 0x356b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_356b68:
    // 0x356b68: 0xc10c4de  jal         func_431378
label_356b6c:
    if (ctx->pc == 0x356B6Cu) {
        ctx->pc = 0x356B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B68u;
        // 0x356b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356B70u;
        goto label_356b70;
    }
    ctx->pc = 0x356B68u;
    SET_GPR_U32(ctx, 31, 0x356B70u);
    ctx->pc = 0x356B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356B68u;
    // 0x356b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x356B68u, 0x356B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B70u;
label_356b70:
    // 0x356b70: 0x8e64b788  lw          $a0, -0x4878($s3)
    ctx->pc = 0x356b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948744)));
label_356b74:
    // 0x356b74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x356b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_356b78:
    // 0x356b78: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x356b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_356b7c:
    // 0x356b7c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x356b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_356b80:
    // 0x356b80: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x356b80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_356b84:
    // 0x356b84: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x356b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_356b88:
    // 0x356b88: 0x40f809  jalr        $v0
label_356b8c:
    if (ctx->pc == 0x356B8Cu) {
        ctx->pc = 0x356B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B88u;
        // 0x356b8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356B90u;
        goto label_356b90;
    }
    ctx->pc = 0x356B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356B90u);
        ctx->pc = 0x356B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B88u;
        // 0x356b8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356B88u, 0x356B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356B90u;
label_356b90:
    // 0x356b90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x356b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_356b94:
    // 0x356b94: 0x8e445340  lw          $a0, 0x5340($s2)
    ctx->pc = 0x356b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21312)));
label_356b98:
    // 0x356b98: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x356b98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
label_356b9c:
    // 0x356b9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x356b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_356ba0:
    // 0x356ba0: 0x24e76af0  addiu       $a3, $a3, 0x6AF0
    ctx->pc = 0x356ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27376));
label_356ba4:
    // 0x356ba4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x356ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_356ba8:
    // 0x356ba8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x356ba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356bac:
    // 0x356bac: 0xc055354  jal         func_154D50
label_356bb0:
    if (ctx->pc == 0x356BB0u) {
        ctx->pc = 0x356BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BACu;
        // 0x356bb0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356BB4u;
        goto label_356bb4;
    }
    ctx->pc = 0x356BACu;
    SET_GPR_U32(ctx, 31, 0x356BB4u);
    ctx->pc = 0x356BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356BACu;
    // 0x356bb0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D50u, 0x356BACu, 0x356BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356BB4u;
label_356bb4:
    // 0x356bb4: 0x8e445340  lw          $a0, 0x5340($s2)
    ctx->pc = 0x356bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21312)));
label_356bb8:
    // 0x356bb8: 0xc0552b8  jal         func_154AE0
label_356bbc:
    if (ctx->pc == 0x356BBCu) {
        ctx->pc = 0x356BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BB8u;
        // 0x356bbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356BC0u;
        goto label_356bc0;
    }
    ctx->pc = 0x356BB8u;
    SET_GPR_U32(ctx, 31, 0x356BC0u);
    ctx->pc = 0x356BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356BB8u;
    // 0x356bbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x356BB8u, 0x356BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356BC0u;
label_356bc0:
    // 0x356bc0: 0x8e435340  lw          $v1, 0x5340($s2)
    ctx->pc = 0x356bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21312)));
label_356bc4:
    // 0x356bc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x356bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_356bc8:
    // 0x356bc8: 0x8c72003c  lw          $s2, 0x3C($v1)
    ctx->pc = 0x356bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_356bcc:
    // 0x356bcc: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x356bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_356bd0:
    // 0x356bd0: 0xc10c3ac  jal         func_430EB0
label_356bd4:
    if (ctx->pc == 0x356BD4u) {
        ctx->pc = 0x356BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BD0u;
        // 0x356bd4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356BD8u;
        goto label_356bd8;
    }
    ctx->pc = 0x356BD0u;
    SET_GPR_U32(ctx, 31, 0x356BD8u);
    ctx->pc = 0x356BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356BD0u;
    // 0x356bd4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x356BD0u, 0x356BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356BD8u;
label_356bd8:
    // 0x356bd8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x356bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_356bdc:
    // 0x356bdc: 0x0  nop
    ctx->pc = 0x356bdcu;
    // NOP
label_356be0:
    // 0x356be0: 0x18e00007  blez        $a3, . + 4 + (0x7 << 2)
label_356be4:
    if (ctx->pc == 0x356BE4u) {
        ctx->pc = 0x356BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BE0u;
        // 0x356be4: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356BE8u;
        goto label_356be8;
    }
    ctx->pc = 0x356BE0u;
    {
        const bool branch_taken_0x356be0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x356BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BE0u;
        // 0x356be4: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356be0) {
            ctx->pc = 0x356C00u;
            goto label_356c00;
        }
    }
    ctx->pc = 0x356BE8u;
label_356be8:
    // 0x356be8: 0x3a72021  addu        $a0, $sp, $a3
    ctx->pc = 0x356be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
label_356bec:
    // 0x356bec: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x356becu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_356bf0:
    // 0x356bf0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
label_356bf4:
    if (ctx->pc == 0x356BF4u) {
        ctx->pc = 0x356BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BF0u;
        // 0x356bf4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356BF8u;
        goto label_356bf8;
    }
    ctx->pc = 0x356BF0u;
    {
        const bool branch_taken_0x356bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x356bf0) {
            ctx->pc = 0x356BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356BF0u;
            // 0x356bf4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356be0;
        }
    }
    ctx->pc = 0x356BF8u;
label_356bf8:
    // 0x356bf8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x356bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_356bfc:
    // 0x356bfc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x356bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_356c00:
    // 0x356c00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x356c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_356c04:
    // 0x356c04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x356c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_356c08:
    // 0x356c08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x356c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_356c0c:
    // 0x356c0c: 0x3a73821  addu        $a3, $sp, $a3
    ctx->pc = 0x356c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
label_356c10:
    // 0x356c10: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x356c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_356c14:
    // 0x356c14: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x356c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_356c18:
    // 0x356c18: 0x60f809  jalr        $v1
label_356c1c:
    if (ctx->pc == 0x356C1Cu) {
        ctx->pc = 0x356C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C18u;
        // 0x356c1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356C20u;
        goto label_356c20;
    }
    ctx->pc = 0x356C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x356C20u);
        ctx->pc = 0x356C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C18u;
        // 0x356c1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356C18u, 0x356C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356C20u;
label_356c20:
    // 0x356c20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x356c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_356c24:
    // 0x356c24: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x356c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_356c28:
    // 0x356c28: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x356c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_356c2c:
    // 0x356c2c: 0x60f809  jalr        $v1
label_356c30:
    if (ctx->pc == 0x356C30u) {
        ctx->pc = 0x356C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C2Cu;
        // 0x356c30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356C34u;
        goto label_356c34;
    }
    ctx->pc = 0x356C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x356C34u);
        ctx->pc = 0x356C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C2Cu;
        // 0x356c30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356C2Cu, 0x356C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356C34u;
label_356c34:
    // 0x356c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356c38:
    // 0x356c38: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x356c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_356c3c:
    // 0x356c3c: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x356c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_356c40:
    // 0x356c40: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x356c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_356c44:
    // 0x356c44: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x356c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_356c48:
    // 0x356c48: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x356c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_356c4c:
    // 0x356c4c: 0x3e00008  jr          $ra
label_356c50:
    if (ctx->pc == 0x356C50u) {
        ctx->pc = 0x356C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C4Cu;
        // 0x356c50: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356C54u;
        goto label_356c54;
    }
    ctx->pc = 0x356C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C4Cu;
        // 0x356c50: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356C54u;
label_356c54:
    // 0x356c54: 0x0  nop
    ctx->pc = 0x356c54u;
    // NOP
    ctx->pc = 0x356c58u;
}

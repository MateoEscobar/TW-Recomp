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

// Function: sub_00196B58
// Address: 0x196b58 - 0x196cd0
void sub_00196B58_0x196b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196B58_0x196b58");
#endif

    switch (ctx->pc) {
        case 0x196b58u: goto label_196b58;
        case 0x196b5cu: goto label_196b5c;
        case 0x196b60u: goto label_196b60;
        case 0x196b64u: goto label_196b64;
        case 0x196b68u: goto label_196b68;
        case 0x196b6cu: goto label_196b6c;
        case 0x196b70u: goto label_196b70;
        case 0x196b74u: goto label_196b74;
        case 0x196b78u: goto label_196b78;
        case 0x196b7cu: goto label_196b7c;
        case 0x196b80u: goto label_196b80;
        case 0x196b84u: goto label_196b84;
        case 0x196b88u: goto label_196b88;
        case 0x196b8cu: goto label_196b8c;
        case 0x196b90u: goto label_196b90;
        case 0x196b94u: goto label_196b94;
        case 0x196b98u: goto label_196b98;
        case 0x196b9cu: goto label_196b9c;
        case 0x196ba0u: goto label_196ba0;
        case 0x196ba4u: goto label_196ba4;
        case 0x196ba8u: goto label_196ba8;
        case 0x196bacu: goto label_196bac;
        case 0x196bb0u: goto label_196bb0;
        case 0x196bb4u: goto label_196bb4;
        case 0x196bb8u: goto label_196bb8;
        case 0x196bbcu: goto label_196bbc;
        case 0x196bc0u: goto label_196bc0;
        case 0x196bc4u: goto label_196bc4;
        case 0x196bc8u: goto label_196bc8;
        case 0x196bccu: goto label_196bcc;
        case 0x196bd0u: goto label_196bd0;
        case 0x196bd4u: goto label_196bd4;
        case 0x196bd8u: goto label_196bd8;
        case 0x196bdcu: goto label_196bdc;
        case 0x196be0u: goto label_196be0;
        case 0x196be4u: goto label_196be4;
        case 0x196be8u: goto label_196be8;
        case 0x196becu: goto label_196bec;
        case 0x196bf0u: goto label_196bf0;
        case 0x196bf4u: goto label_196bf4;
        case 0x196bf8u: goto label_196bf8;
        case 0x196bfcu: goto label_196bfc;
        case 0x196c00u: goto label_196c00;
        case 0x196c04u: goto label_196c04;
        case 0x196c08u: goto label_196c08;
        case 0x196c0cu: goto label_196c0c;
        case 0x196c10u: goto label_196c10;
        case 0x196c14u: goto label_196c14;
        case 0x196c18u: goto label_196c18;
        case 0x196c1cu: goto label_196c1c;
        case 0x196c20u: goto label_196c20;
        case 0x196c24u: goto label_196c24;
        case 0x196c28u: goto label_196c28;
        case 0x196c2cu: goto label_196c2c;
        case 0x196c30u: goto label_196c30;
        case 0x196c34u: goto label_196c34;
        case 0x196c38u: goto label_196c38;
        case 0x196c3cu: goto label_196c3c;
        case 0x196c40u: goto label_196c40;
        case 0x196c44u: goto label_196c44;
        case 0x196c48u: goto label_196c48;
        case 0x196c4cu: goto label_196c4c;
        case 0x196c50u: goto label_196c50;
        case 0x196c54u: goto label_196c54;
        case 0x196c58u: goto label_196c58;
        case 0x196c5cu: goto label_196c5c;
        case 0x196c60u: goto label_196c60;
        case 0x196c64u: goto label_196c64;
        case 0x196c68u: goto label_196c68;
        case 0x196c6cu: goto label_196c6c;
        case 0x196c70u: goto label_196c70;
        case 0x196c74u: goto label_196c74;
        case 0x196c78u: goto label_196c78;
        case 0x196c7cu: goto label_196c7c;
        case 0x196c80u: goto label_196c80;
        case 0x196c84u: goto label_196c84;
        case 0x196c88u: goto label_196c88;
        case 0x196c8cu: goto label_196c8c;
        case 0x196c90u: goto label_196c90;
        case 0x196c94u: goto label_196c94;
        case 0x196c98u: goto label_196c98;
        case 0x196c9cu: goto label_196c9c;
        case 0x196ca0u: goto label_196ca0;
        case 0x196ca4u: goto label_196ca4;
        case 0x196ca8u: goto label_196ca8;
        case 0x196cacu: goto label_196cac;
        case 0x196cb0u: goto label_196cb0;
        case 0x196cb4u: goto label_196cb4;
        case 0x196cb8u: goto label_196cb8;
        case 0x196cbcu: goto label_196cbc;
        case 0x196cc0u: goto label_196cc0;
        case 0x196cc4u: goto label_196cc4;
        case 0x196cc8u: goto label_196cc8;
        case 0x196cccu: goto label_196ccc;
        default: break;
    }

    ctx->pc = 0x196b58u;

label_196b58:
    // 0x196b58: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x196b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_196b5c:
    // 0x196b5c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x196b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_196b60:
    // 0x196b60: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x196b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_196b64:
    // 0x196b64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x196b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_196b68:
    // 0x196b68: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x196b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_196b6c:
    // 0x196b6c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x196b6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_196b70:
    // 0x196b70: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x196b70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196b74:
    // 0x196b74: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x196b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_196b78:
    // 0x196b78: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x196b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_196b7c:
    // 0x196b7c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x196b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_196b80:
    // 0x196b80: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x196b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_196b84:
    // 0x196b84: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x196b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_196b88:
    // 0x196b88: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x196b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_196b8c:
    // 0x196b8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_196b90:
    // 0x196b90: 0xc047ab8  jal         func_11EAE0
label_196b94:
    if (ctx->pc == 0x196B94u) {
        ctx->pc = 0x196B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B90u;
        // 0x196b94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B98u;
        goto label_196b98;
    }
    ctx->pc = 0x196B90u;
    SET_GPR_U32(ctx, 31, 0x196B98u);
    ctx->pc = 0x196B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B90u;
    // 0x196b94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x196B90u, 0x196B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B98u;
label_196b98:
    // 0x196b98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x196b98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196b9c:
    // 0x196b9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x196b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196ba0:
    // 0x196ba0: 0xc06616c  jal         func_1985B0
label_196ba4:
    if (ctx->pc == 0x196BA4u) {
        ctx->pc = 0x196BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BA0u;
        // 0x196ba4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BA8u;
        goto label_196ba8;
    }
    ctx->pc = 0x196BA0u;
    SET_GPR_U32(ctx, 31, 0x196BA8u);
    ctx->pc = 0x196BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196BA0u;
    // 0x196ba4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1985B0u, 0x196BA0u, 0x196BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BA8u;
label_196ba8:
    // 0x196ba8: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
label_196bac:
    if (ctx->pc == 0x196BACu) {
        ctx->pc = 0x196BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BA8u;
        // 0x196bac: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BB0u;
        goto label_196bb0;
    }
    ctx->pc = 0x196BA8u;
    {
        const bool branch_taken_0x196ba8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x196BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BA8u;
        // 0x196bac: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ba8) {
            ctx->pc = 0x196C9Cu;
            goto label_196c9c;
        }
    }
    ctx->pc = 0x196BB0u;
label_196bb0:
    // 0x196bb0: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x196bb0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_196bb4:
    // 0x196bb4: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x196bb4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_196bb8:
    // 0x196bb8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x196bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_196bbc:
    // 0x196bbc: 0x0  nop
    ctx->pc = 0x196bbcu;
    // NOP
label_196bc0:
    // 0x196bc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x196bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_196bc4:
    // 0x196bc4: 0x8c46cdb4  lw          $a2, -0x324C($v0)
    ctx->pc = 0x196bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_196bc8:
    // 0x196bc8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x196bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_196bcc:
    // 0x196bcc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x196bccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_196bd0:
    // 0x196bd0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x196bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_196bd4:
    // 0x196bd4: 0x40f809  jalr        $v0
label_196bd8:
    if (ctx->pc == 0x196BD8u) {
        ctx->pc = 0x196BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BD4u;
        // 0x196bd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BDCu;
        goto label_196bdc;
    }
    ctx->pc = 0x196BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196BDCu);
        ctx->pc = 0x196BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BD4u;
        // 0x196bd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196BD4u, 0x196BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196BDCu;
label_196bdc:
    // 0x196bdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196be0:
    // 0x196be0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_196be4:
    // 0x196be4: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x196be4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_196be8:
    // 0x196be8: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x196be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_196bec:
    // 0x196bec: 0x40f809  jalr        $v0
label_196bf0:
    if (ctx->pc == 0x196BF0u) {
        ctx->pc = 0x196BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BECu;
        // 0x196bf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BF4u;
        goto label_196bf4;
    }
    ctx->pc = 0x196BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196BF4u);
        ctx->pc = 0x196BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BECu;
        // 0x196bf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196BECu, 0x196BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196BF4u;
label_196bf4:
    // 0x196bf4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_196bf8:
    if (ctx->pc == 0x196BF8u) {
        ctx->pc = 0x196BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BF4u;
        // 0x196bf8: 0x27d1ad28  addiu       $s1, $fp, -0x52D8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BFCu;
        goto label_196bfc;
    }
    ctx->pc = 0x196BF4u;
    {
        const bool branch_taken_0x196bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BF4u;
        // 0x196bf8: 0x27d1ad28  addiu       $s1, $fp, -0x52D8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bf4) {
            ctx->pc = 0x196C8Cu;
            goto label_196c8c;
        }
    }
    ctx->pc = 0x196BFCu;
label_196bfc:
    // 0x196bfc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x196bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_196c00:
    // 0x196c00: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x196c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_196c04:
    // 0x196c04: 0x40f809  jalr        $v0
label_196c08:
    if (ctx->pc == 0x196C08u) {
        ctx->pc = 0x196C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C04u;
        // 0x196c08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C0Cu;
        goto label_196c0c;
    }
    ctx->pc = 0x196C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196C0Cu);
        ctx->pc = 0x196C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C04u;
        // 0x196c08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196C04u, 0x196C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196C0Cu;
label_196c0c:
    // 0x196c0c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x196c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_196c10:
    // 0x196c10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x196c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196c14:
    // 0x196c14: 0x40f809  jalr        $v0
label_196c18:
    if (ctx->pc == 0x196C18u) {
        ctx->pc = 0x196C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C14u;
        // 0x196c18: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C1Cu;
        goto label_196c1c;
    }
    ctx->pc = 0x196C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196C1Cu);
        ctx->pc = 0x196C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C14u;
        // 0x196c18: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196C14u, 0x196C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196C1Cu;
label_196c1c:
    // 0x196c1c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x196c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_196c20:
    // 0x196c20: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x196c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_196c24:
    // 0x196c24: 0x40f809  jalr        $v0
label_196c28:
    if (ctx->pc == 0x196C28u) {
        ctx->pc = 0x196C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C24u;
        // 0x196c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C2Cu;
        goto label_196c2c;
    }
    ctx->pc = 0x196C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196C2Cu);
        ctx->pc = 0x196C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C24u;
        // 0x196c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196C24u, 0x196C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196C2Cu;
label_196c2c:
    // 0x196c2c: 0x8ee4ce94  lw          $a0, -0x316C($s7)
    ctx->pc = 0x196c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954644)));
label_196c30:
    // 0x196c30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x196c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_196c34:
    // 0x196c34: 0x8ec5ce88  lw          $a1, -0x3178($s6)
    ctx->pc = 0x196c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954632)));
label_196c38:
    // 0x196c38: 0xc1293ca  jal         func_4A4F28
label_196c3c:
    if (ctx->pc == 0x196C3Cu) {
        ctx->pc = 0x196C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C38u;
        // 0x196c3c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C40u;
        goto label_196c40;
    }
    ctx->pc = 0x196C38u;
    SET_GPR_U32(ctx, 31, 0x196C40u);
    ctx->pc = 0x196C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C38u;
    // 0x196c3c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4F28u, 0x196C38u, 0x196C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C40u;
label_196c40:
    // 0x196c40: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_196c44:
    if (ctx->pc == 0x196C44u) {
        ctx->pc = 0x196C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C40u;
        // 0x196c44: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C48u;
        goto label_196c48;
    }
    ctx->pc = 0x196C40u;
    {
        const bool branch_taken_0x196c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196c40) {
            ctx->pc = 0x196C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196C40u;
            // 0x196c44: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196C5Cu;
            goto label_196c5c;
        }
    }
    ctx->pc = 0x196C48u;
label_196c48:
    // 0x196c48: 0xc12927a  jal         func_4A49E8
label_196c4c:
    if (ctx->pc == 0x196C4Cu) {
        ctx->pc = 0x196C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C48u;
        // 0x196c4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C50u;
        goto label_196c50;
    }
    ctx->pc = 0x196C48u;
    SET_GPR_U32(ctx, 31, 0x196C50u);
    ctx->pc = 0x196C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C48u;
    // 0x196c4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A49E8u, 0x196C48u, 0x196C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C50u;
label_196c50:
    // 0x196c50: 0xc1293f4  jal         func_4A4FD0
label_196c54:
    if (ctx->pc == 0x196C54u) {
        ctx->pc = 0x196C58u;
        goto label_196c58;
    }
    ctx->pc = 0x196C50u;
    SET_GPR_U32(ctx, 31, 0x196C58u);
    ctx->pc = 0x4A4FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4FD0u, 0x196C50u, 0x196C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C58u;
label_196c58:
    // 0x196c58: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x196c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_196c5c:
    // 0x196c5c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x196c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_196c60:
    // 0x196c60: 0x40f809  jalr        $v0
label_196c64:
    if (ctx->pc == 0x196C64u) {
        ctx->pc = 0x196C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C60u;
        // 0x196c64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C68u;
        goto label_196c68;
    }
    ctx->pc = 0x196C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196C68u);
        ctx->pc = 0x196C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C60u;
        // 0x196c64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196C60u, 0x196C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196C68u;
label_196c68:
    // 0x196c68: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x196c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_196c6c:
    // 0x196c6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x196c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196c70:
    // 0x196c70: 0x40f809  jalr        $v0
label_196c74:
    if (ctx->pc == 0x196C74u) {
        ctx->pc = 0x196C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C70u;
        // 0x196c74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C78u;
        goto label_196c78;
    }
    ctx->pc = 0x196C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196C78u);
        ctx->pc = 0x196C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C70u;
        // 0x196c74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196C70u, 0x196C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196C78u;
label_196c78:
    // 0x196c78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_196c7c:
    // 0x196c7c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x196c7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_196c80:
    // 0x196c80: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x196c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_196c84:
    // 0x196c84: 0x40f809  jalr        $v0
label_196c88:
    if (ctx->pc == 0x196C88u) {
        ctx->pc = 0x196C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C84u;
        // 0x196c88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C8Cu;
        goto label_196c8c;
    }
    ctx->pc = 0x196C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196C8Cu);
        ctx->pc = 0x196C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C84u;
        // 0x196c88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196C84u, 0x196C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196C8Cu;
label_196c8c:
    // 0x196c8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x196c8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_196c90:
    // 0x196c90: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x196c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_196c94:
    // 0x196c94: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_196c98:
    if (ctx->pc == 0x196C98u) {
        ctx->pc = 0x196C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C94u;
        // 0x196c98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C9Cu;
        goto label_196c9c;
    }
    ctx->pc = 0x196C94u;
    {
        const bool branch_taken_0x196c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C94u;
        // 0x196c98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c94) {
            ctx->pc = 0x196BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196bc0;
        }
    }
    ctx->pc = 0x196C9Cu;
label_196c9c:
    // 0x196c9c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x196c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_196ca0:
    // 0x196ca0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x196ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_196ca4:
    // 0x196ca4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x196ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_196ca8:
    // 0x196ca8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x196ca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_196cac:
    // 0x196cac: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x196cacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_196cb0:
    // 0x196cb0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x196cb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_196cb4:
    // 0x196cb4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x196cb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196cb8:
    // 0x196cb8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x196cb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_196cbc:
    // 0x196cbc: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x196cbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_196cc0:
    // 0x196cc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x196cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_196cc4:
    // 0x196cc4: 0x3e00008  jr          $ra
label_196cc8:
    if (ctx->pc == 0x196CC8u) {
        ctx->pc = 0x196CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CC4u;
        // 0x196cc8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196CCCu;
        goto label_196ccc;
    }
    ctx->pc = 0x196CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CC4u;
        // 0x196cc8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196CCCu;
label_196ccc:
    // 0x196ccc: 0x0  nop
    ctx->pc = 0x196cccu;
    // NOP
    ctx->pc = 0x196cd0u;
}

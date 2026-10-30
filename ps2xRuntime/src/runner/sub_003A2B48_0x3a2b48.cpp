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

// Function: sub_003A2B48
// Address: 0x3a2b48 - 0x3a2c80
void sub_003A2B48_0x3a2b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2B48_0x3a2b48");
#endif

    switch (ctx->pc) {
        case 0x3a2b48u: goto label_3a2b48;
        case 0x3a2b4cu: goto label_3a2b4c;
        case 0x3a2b50u: goto label_3a2b50;
        case 0x3a2b54u: goto label_3a2b54;
        case 0x3a2b58u: goto label_3a2b58;
        case 0x3a2b5cu: goto label_3a2b5c;
        case 0x3a2b60u: goto label_3a2b60;
        case 0x3a2b64u: goto label_3a2b64;
        case 0x3a2b68u: goto label_3a2b68;
        case 0x3a2b6cu: goto label_3a2b6c;
        case 0x3a2b70u: goto label_3a2b70;
        case 0x3a2b74u: goto label_3a2b74;
        case 0x3a2b78u: goto label_3a2b78;
        case 0x3a2b7cu: goto label_3a2b7c;
        case 0x3a2b80u: goto label_3a2b80;
        case 0x3a2b84u: goto label_3a2b84;
        case 0x3a2b88u: goto label_3a2b88;
        case 0x3a2b8cu: goto label_3a2b8c;
        case 0x3a2b90u: goto label_3a2b90;
        case 0x3a2b94u: goto label_3a2b94;
        case 0x3a2b98u: goto label_3a2b98;
        case 0x3a2b9cu: goto label_3a2b9c;
        case 0x3a2ba0u: goto label_3a2ba0;
        case 0x3a2ba4u: goto label_3a2ba4;
        case 0x3a2ba8u: goto label_3a2ba8;
        case 0x3a2bacu: goto label_3a2bac;
        case 0x3a2bb0u: goto label_3a2bb0;
        case 0x3a2bb4u: goto label_3a2bb4;
        case 0x3a2bb8u: goto label_3a2bb8;
        case 0x3a2bbcu: goto label_3a2bbc;
        case 0x3a2bc0u: goto label_3a2bc0;
        case 0x3a2bc4u: goto label_3a2bc4;
        case 0x3a2bc8u: goto label_3a2bc8;
        case 0x3a2bccu: goto label_3a2bcc;
        case 0x3a2bd0u: goto label_3a2bd0;
        case 0x3a2bd4u: goto label_3a2bd4;
        case 0x3a2bd8u: goto label_3a2bd8;
        case 0x3a2bdcu: goto label_3a2bdc;
        case 0x3a2be0u: goto label_3a2be0;
        case 0x3a2be4u: goto label_3a2be4;
        case 0x3a2be8u: goto label_3a2be8;
        case 0x3a2becu: goto label_3a2bec;
        case 0x3a2bf0u: goto label_3a2bf0;
        case 0x3a2bf4u: goto label_3a2bf4;
        case 0x3a2bf8u: goto label_3a2bf8;
        case 0x3a2bfcu: goto label_3a2bfc;
        case 0x3a2c00u: goto label_3a2c00;
        case 0x3a2c04u: goto label_3a2c04;
        case 0x3a2c08u: goto label_3a2c08;
        case 0x3a2c0cu: goto label_3a2c0c;
        case 0x3a2c10u: goto label_3a2c10;
        case 0x3a2c14u: goto label_3a2c14;
        case 0x3a2c18u: goto label_3a2c18;
        case 0x3a2c1cu: goto label_3a2c1c;
        case 0x3a2c20u: goto label_3a2c20;
        case 0x3a2c24u: goto label_3a2c24;
        case 0x3a2c28u: goto label_3a2c28;
        case 0x3a2c2cu: goto label_3a2c2c;
        case 0x3a2c30u: goto label_3a2c30;
        case 0x3a2c34u: goto label_3a2c34;
        case 0x3a2c38u: goto label_3a2c38;
        case 0x3a2c3cu: goto label_3a2c3c;
        case 0x3a2c40u: goto label_3a2c40;
        case 0x3a2c44u: goto label_3a2c44;
        case 0x3a2c48u: goto label_3a2c48;
        case 0x3a2c4cu: goto label_3a2c4c;
        case 0x3a2c50u: goto label_3a2c50;
        case 0x3a2c54u: goto label_3a2c54;
        case 0x3a2c58u: goto label_3a2c58;
        case 0x3a2c5cu: goto label_3a2c5c;
        case 0x3a2c60u: goto label_3a2c60;
        case 0x3a2c64u: goto label_3a2c64;
        case 0x3a2c68u: goto label_3a2c68;
        case 0x3a2c6cu: goto label_3a2c6c;
        case 0x3a2c70u: goto label_3a2c70;
        case 0x3a2c74u: goto label_3a2c74;
        case 0x3a2c78u: goto label_3a2c78;
        case 0x3a2c7cu: goto label_3a2c7c;
        default: break;
    }

    ctx->pc = 0x3a2b48u;

label_3a2b48:
    // 0x3a2b48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a2b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3a2b4c:
    // 0x3a2b4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2b50:
    // 0x3a2b50: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3a2b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3a2b54:
    // 0x3a2b54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a2b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3a2b58:
    // 0x3a2b58: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x3a2b58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_3a2b5c:
    // 0x3a2b5c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3a2b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3a2b60:
    // 0x3a2b60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a2b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a2b64:
    // 0x3a2b64: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3a2b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3a2b68:
    // 0x3a2b68: 0x26740854  addiu       $s4, $s3, 0x854
    ctx->pc = 0x3a2b68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 2132));
label_3a2b6c:
    // 0x3a2b6c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3a2b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_3a2b70:
    // 0x3a2b70: 0x26750008  addiu       $s5, $s3, 0x8
    ctx->pc = 0x3a2b70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3a2b74:
    // 0x3a2b74: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3a2b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3a2b78:
    // 0x3a2b78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a2b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2b7c:
    // 0x3a2b7c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3a2b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3a2b80:
    // 0x3a2b80: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x3a2b80u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_3a2b84:
    // 0x3a2b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a2b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a2b88:
    // 0x3a2b88: 0x3652ffef  ori         $s2, $s2, 0xFFEF
    ctx->pc = 0x3a2b88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65519);
label_3a2b8c:
    // 0x3a2b8c: 0xae630828  sw          $v1, 0x828($s3)
    ctx->pc = 0x3a2b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2088), GPR_U32(ctx, 3));
label_3a2b90:
    // 0x3a2b90: 0x8e620840  lw          $v0, 0x840($s3)
    ctx->pc = 0x3a2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2112)));
label_3a2b94:
    // 0x3a2b94: 0xa04367e9  sb          $v1, 0x67E9($v0)
    ctx->pc = 0x3a2b94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26601), (uint8_t)GPR_U32(ctx, 3));
label_3a2b98:
    // 0x3a2b98: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3a2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3a2b9c:
    // 0x3a2b9c: 0x0  nop
    ctx->pc = 0x3a2b9cu;
    // NOP
label_3a2ba0:
    // 0x3a2ba0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3a2ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3a2ba4:
    // 0x3a2ba4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3a2ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a2ba8:
    // 0x3a2ba8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3a2bac:
    if (ctx->pc == 0x3A2BACu) {
        ctx->pc = 0x3A2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BA8u;
        // 0x3a2bac: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2BB0u;
        goto label_3a2bb0;
    }
    ctx->pc = 0x3A2BA8u;
    {
        const bool branch_taken_0x3a2ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BA8u;
        // 0x3a2bac: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ba8) {
            ctx->pc = 0x3A2BE8u;
            goto label_3a2be8;
        }
    }
    ctx->pc = 0x3A2BB0u;
label_3a2bb0:
    // 0x3a2bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a2bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2bb4:
    // 0x3a2bb4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3a2bb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3a2bb8:
    // 0x3a2bb8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3a2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3a2bbc:
    // 0x3a2bbc: 0x40f809  jalr        $v0
label_3a2bc0:
    if (ctx->pc == 0x3A2BC0u) {
        ctx->pc = 0x3A2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BBCu;
        // 0x3a2bc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2BC4u;
        goto label_3a2bc4;
    }
    ctx->pc = 0x3A2BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2BC4u);
        ctx->pc = 0x3A2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BBCu;
        // 0x3a2bc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2BBCu, 0x3A2BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2BC4u;
label_3a2bc4:
    // 0x3a2bc4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x3a2bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_3a2bc8:
    // 0x3a2bc8: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x3a2bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_3a2bcc:
    // 0x3a2bcc: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x3a2bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_3a2bd0:
    // 0x3a2bd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3a2bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a2bd4:
    // 0x3a2bd4: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x3a2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_3a2bd8:
    // 0x3a2bd8: 0x84a40048  lh          $a0, 0x48($a1)
    ctx->pc = 0x3a2bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 72)));
label_3a2bdc:
    // 0x3a2bdc: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x3a2bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_3a2be0:
    // 0x3a2be0: 0x60f809  jalr        $v1
label_3a2be4:
    if (ctx->pc == 0x3A2BE4u) {
        ctx->pc = 0x3A2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BE0u;
        // 0x3a2be4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2BE8u;
        goto label_3a2be8;
    }
    ctx->pc = 0x3A2BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A2BE8u);
        ctx->pc = 0x3A2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BE0u;
        // 0x3a2be4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2BE0u, 0x3A2BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2BE8u;
label_3a2be8:
    // 0x3a2be8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a2be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a2bec:
    // 0x3a2bec: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x3a2becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_3a2bf0:
    // 0x3a2bf0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3a2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3a2bf4:
    // 0x3a2bf4: 0x40f809  jalr        $v0
label_3a2bf8:
    if (ctx->pc == 0x3A2BF8u) {
        ctx->pc = 0x3A2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BF4u;
        // 0x3a2bf8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2BFCu;
        goto label_3a2bfc;
    }
    ctx->pc = 0x3A2BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2BFCu);
        ctx->pc = 0x3A2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BF4u;
        // 0x3a2bf8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2BF4u, 0x3A2BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2BFCu;
label_3a2bfc:
    // 0x3a2bfc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_3a2c00:
    if (ctx->pc == 0x3A2C00u) {
        ctx->pc = 0x3A2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BFCu;
        // 0x3a2c00: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2C04u;
        goto label_3a2c04;
    }
    ctx->pc = 0x3A2BFCu;
    {
        const bool branch_taken_0x3a2bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2bfc) {
            ctx->pc = 0x3A2C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2BFCu;
            // 0x3a2c00: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2bb0;
        }
    }
    ctx->pc = 0x3A2C04u;
label_3a2c04:
    // 0x3a2c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a2c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a2c08:
    // 0x3a2c08: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x3a2c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3a2c0c:
    // 0x3a2c0c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_3a2c10:
    if (ctx->pc == 0x3A2C10u) {
        ctx->pc = 0x3A2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C0Cu;
        // 0x3a2c10: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2C14u;
        goto label_3a2c14;
    }
    ctx->pc = 0x3A2C0Cu;
    {
        const bool branch_taken_0x3a2c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C0Cu;
        // 0x3a2c10: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c0c) {
            ctx->pc = 0x3A2BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2ba0;
        }
    }
    ctx->pc = 0x3A2C14u;
label_3a2c14:
    // 0x3a2c14: 0x8e620840  lw          $v0, 0x840($s3)
    ctx->pc = 0x3a2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2112)));
label_3a2c18:
    // 0x3a2c18: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3a2c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a2c1c:
    // 0x3a2c1c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a2c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2c20:
    // 0x3a2c20: 0xa04067e9  sb          $zero, 0x67E9($v0)
    ctx->pc = 0x3a2c20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26601), (uint8_t)GPR_U32(ctx, 0));
label_3a2c24:
    // 0x3a2c24: 0x0  nop
    ctx->pc = 0x3a2c24u;
    // NOP
label_3a2c28:
    // 0x3a2c28: 0x8ec5b734  lw          $a1, -0x48CC($s6)
    ctx->pc = 0x3a2c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
label_3a2c2c:
    // 0x3a2c2c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a2c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a2c30:
    // 0x3a2c30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a2c34:
    // 0x3a2c34: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3a2c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3a2c38:
    // 0x3a2c38: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3a2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3a2c3c:
    // 0x3a2c3c: 0x40f809  jalr        $v0
label_3a2c40:
    if (ctx->pc == 0x3A2C40u) {
        ctx->pc = 0x3A2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C3Cu;
        // 0x3a2c40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2C44u;
        goto label_3a2c44;
    }
    ctx->pc = 0x3A2C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2C44u);
        ctx->pc = 0x3A2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C3Cu;
        // 0x3a2c40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2C3Cu, 0x3A2C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2C44u;
label_3a2c44:
    // 0x3a2c44: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3a2c44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_3a2c48:
    // 0x3a2c48: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
label_3a2c4c:
    if (ctx->pc == 0x3A2C4Cu) {
        ctx->pc = 0x3A2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C48u;
        // 0x3a2c4c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2C50u;
        goto label_3a2c50;
    }
    ctx->pc = 0x3A2C48u;
    {
        const bool branch_taken_0x3a2c48 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3A2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C48u;
        // 0x3a2c4c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c48) {
            ctx->pc = 0x3A2C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2c28;
        }
    }
    ctx->pc = 0x3A2C50u;
label_3a2c50:
    // 0x3a2c50: 0xae600828  sw          $zero, 0x828($s3)
    ctx->pc = 0x3a2c50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2088), GPR_U32(ctx, 0));
label_3a2c54:
    // 0x3a2c54: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3a2c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a2c58:
    // 0x3a2c58: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3a2c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a2c5c:
    // 0x3a2c5c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3a2c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a2c60:
    // 0x3a2c60: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a2c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a2c64:
    // 0x3a2c64: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3a2c64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a2c68:
    // 0x3a2c68: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3a2c68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a2c6c:
    // 0x3a2c6c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3a2c6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a2c70:
    // 0x3a2c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2c74:
    // 0x3a2c74: 0x3e00008  jr          $ra
label_3a2c78:
    if (ctx->pc == 0x3A2C78u) {
        ctx->pc = 0x3A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C74u;
        // 0x3a2c78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2C7Cu;
        goto label_3a2c7c;
    }
    ctx->pc = 0x3A2C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C74u;
        // 0x3a2c78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2C7Cu;
label_3a2c7c:
    // 0x3a2c7c: 0x0  nop
    ctx->pc = 0x3a2c7cu;
    // NOP
    ctx->pc = 0x3a2c80u;
}

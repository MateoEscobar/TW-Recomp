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

// Function: sub_00386B30
// Address: 0x386b30 - 0x386d08
void sub_00386B30_0x386b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386B30_0x386b30");
#endif

    switch (ctx->pc) {
        case 0x386b30u: goto label_386b30;
        case 0x386b34u: goto label_386b34;
        case 0x386b38u: goto label_386b38;
        case 0x386b3cu: goto label_386b3c;
        case 0x386b40u: goto label_386b40;
        case 0x386b44u: goto label_386b44;
        case 0x386b48u: goto label_386b48;
        case 0x386b4cu: goto label_386b4c;
        case 0x386b50u: goto label_386b50;
        case 0x386b54u: goto label_386b54;
        case 0x386b58u: goto label_386b58;
        case 0x386b5cu: goto label_386b5c;
        case 0x386b60u: goto label_386b60;
        case 0x386b64u: goto label_386b64;
        case 0x386b68u: goto label_386b68;
        case 0x386b6cu: goto label_386b6c;
        case 0x386b70u: goto label_386b70;
        case 0x386b74u: goto label_386b74;
        case 0x386b78u: goto label_386b78;
        case 0x386b7cu: goto label_386b7c;
        case 0x386b80u: goto label_386b80;
        case 0x386b84u: goto label_386b84;
        case 0x386b88u: goto label_386b88;
        case 0x386b8cu: goto label_386b8c;
        case 0x386b90u: goto label_386b90;
        case 0x386b94u: goto label_386b94;
        case 0x386b98u: goto label_386b98;
        case 0x386b9cu: goto label_386b9c;
        case 0x386ba0u: goto label_386ba0;
        case 0x386ba4u: goto label_386ba4;
        case 0x386ba8u: goto label_386ba8;
        case 0x386bacu: goto label_386bac;
        case 0x386bb0u: goto label_386bb0;
        case 0x386bb4u: goto label_386bb4;
        case 0x386bb8u: goto label_386bb8;
        case 0x386bbcu: goto label_386bbc;
        case 0x386bc0u: goto label_386bc0;
        case 0x386bc4u: goto label_386bc4;
        case 0x386bc8u: goto label_386bc8;
        case 0x386bccu: goto label_386bcc;
        case 0x386bd0u: goto label_386bd0;
        case 0x386bd4u: goto label_386bd4;
        case 0x386bd8u: goto label_386bd8;
        case 0x386bdcu: goto label_386bdc;
        case 0x386be0u: goto label_386be0;
        case 0x386be4u: goto label_386be4;
        case 0x386be8u: goto label_386be8;
        case 0x386becu: goto label_386bec;
        case 0x386bf0u: goto label_386bf0;
        case 0x386bf4u: goto label_386bf4;
        case 0x386bf8u: goto label_386bf8;
        case 0x386bfcu: goto label_386bfc;
        case 0x386c00u: goto label_386c00;
        case 0x386c04u: goto label_386c04;
        case 0x386c08u: goto label_386c08;
        case 0x386c0cu: goto label_386c0c;
        case 0x386c10u: goto label_386c10;
        case 0x386c14u: goto label_386c14;
        case 0x386c18u: goto label_386c18;
        case 0x386c1cu: goto label_386c1c;
        case 0x386c20u: goto label_386c20;
        case 0x386c24u: goto label_386c24;
        case 0x386c28u: goto label_386c28;
        case 0x386c2cu: goto label_386c2c;
        case 0x386c30u: goto label_386c30;
        case 0x386c34u: goto label_386c34;
        case 0x386c38u: goto label_386c38;
        case 0x386c3cu: goto label_386c3c;
        case 0x386c40u: goto label_386c40;
        case 0x386c44u: goto label_386c44;
        case 0x386c48u: goto label_386c48;
        case 0x386c4cu: goto label_386c4c;
        case 0x386c50u: goto label_386c50;
        case 0x386c54u: goto label_386c54;
        case 0x386c58u: goto label_386c58;
        case 0x386c5cu: goto label_386c5c;
        case 0x386c60u: goto label_386c60;
        case 0x386c64u: goto label_386c64;
        case 0x386c68u: goto label_386c68;
        case 0x386c6cu: goto label_386c6c;
        case 0x386c70u: goto label_386c70;
        case 0x386c74u: goto label_386c74;
        case 0x386c78u: goto label_386c78;
        case 0x386c7cu: goto label_386c7c;
        case 0x386c80u: goto label_386c80;
        case 0x386c84u: goto label_386c84;
        case 0x386c88u: goto label_386c88;
        case 0x386c8cu: goto label_386c8c;
        case 0x386c90u: goto label_386c90;
        case 0x386c94u: goto label_386c94;
        case 0x386c98u: goto label_386c98;
        case 0x386c9cu: goto label_386c9c;
        case 0x386ca0u: goto label_386ca0;
        case 0x386ca4u: goto label_386ca4;
        case 0x386ca8u: goto label_386ca8;
        case 0x386cacu: goto label_386cac;
        case 0x386cb0u: goto label_386cb0;
        case 0x386cb4u: goto label_386cb4;
        case 0x386cb8u: goto label_386cb8;
        case 0x386cbcu: goto label_386cbc;
        case 0x386cc0u: goto label_386cc0;
        case 0x386cc4u: goto label_386cc4;
        case 0x386cc8u: goto label_386cc8;
        case 0x386cccu: goto label_386ccc;
        case 0x386cd0u: goto label_386cd0;
        case 0x386cd4u: goto label_386cd4;
        case 0x386cd8u: goto label_386cd8;
        case 0x386cdcu: goto label_386cdc;
        case 0x386ce0u: goto label_386ce0;
        case 0x386ce4u: goto label_386ce4;
        case 0x386ce8u: goto label_386ce8;
        case 0x386cecu: goto label_386cec;
        case 0x386cf0u: goto label_386cf0;
        case 0x386cf4u: goto label_386cf4;
        case 0x386cf8u: goto label_386cf8;
        case 0x386cfcu: goto label_386cfc;
        case 0x386d00u: goto label_386d00;
        case 0x386d04u: goto label_386d04;
        default: break;
    }

    ctx->pc = 0x386b30u;

label_386b30:
    // 0x386b30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x386b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_386b34:
    // 0x386b34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x386b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_386b38:
    // 0x386b38: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x386b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_386b3c:
    // 0x386b3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386b40:
    // 0x386b40: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x386b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_386b44:
    // 0x386b44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x386b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_386b48:
    // 0x386b48: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x386b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_386b4c:
    // 0x386b4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x386b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386b50:
    // 0x386b50: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x386b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_386b54:
    // 0x386b54: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x386b54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386b58:
    // 0x386b58: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x386b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_386b5c:
    // 0x386b5c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x386b5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_386b60:
    // 0x386b60: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x386b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_386b64:
    // 0x386b64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x386b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_386b68:
    // 0x386b68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x386b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_386b6c:
    // 0x386b6c: 0x8c4727e4  lw          $a3, 0x27E4($v0)
    ctx->pc = 0x386b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_386b70:
    // 0x386b70: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x386b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_386b74:
    // 0x386b74: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x386b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_386b78:
    // 0x386b78: 0x84c400b8  lh          $a0, 0xB8($a2)
    ctx->pc = 0x386b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 184)));
label_386b7c:
    // 0x386b7c: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x386b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
label_386b80:
    // 0x386b80: 0x40f809  jalr        $v0
label_386b84:
    if (ctx->pc == 0x386B84u) {
        ctx->pc = 0x386B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B80u;
        // 0x386b84: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386B88u;
        goto label_386b88;
    }
    ctx->pc = 0x386B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x386B88u);
        ctx->pc = 0x386B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B80u;
        // 0x386b84: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386B80u, 0x386B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386B88u;
label_386b88:
    // 0x386b88: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x386b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_386b8c:
    // 0x386b8c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x386b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_386b90:
    // 0x386b90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x386b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_386b94:
    // 0x386b94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x386b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_386b98:
    // 0x386b98: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x386b98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_386b9c:
    // 0x386b9c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_386ba0:
    if (ctx->pc == 0x386BA0u) {
        ctx->pc = 0x386BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B9Cu;
        // 0x386ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386BA4u;
        goto label_386ba4;
    }
    ctx->pc = 0x386B9Cu;
    {
        const bool branch_taken_0x386b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B9Cu;
        // 0x386ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b9c) {
            ctx->pc = 0x386BE4u;
            goto label_386be4;
        }
    }
    ctx->pc = 0x386BA4u;
label_386ba4:
    // 0x386ba4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x386ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386ba8:
    // 0x386ba8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x386ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_386bac:
    // 0x386bac: 0x0  nop
    ctx->pc = 0x386bacu;
    // NOP
label_386bb0:
    // 0x386bb0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x386bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_386bb4:
    // 0x386bb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x386bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_386bb8:
    // 0x386bb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x386bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_386bbc:
    // 0x386bbc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_386bc0:
    if (ctx->pc == 0x386BC0u) {
        ctx->pc = 0x386BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BBCu;
        // 0x386bc0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386BC4u;
        goto label_386bc4;
    }
    ctx->pc = 0x386BBCu;
    {
        const bool branch_taken_0x386bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386bbc) {
            ctx->pc = 0x386BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386BBCu;
            // 0x386bc0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386BCCu;
            goto label_386bcc;
        }
    }
    ctx->pc = 0x386BC4u;
label_386bc4:
    // 0x386bc4: 0x10000009  b           . + 4 + (0x9 << 2)
label_386bc8:
    if (ctx->pc == 0x386BC8u) {
        ctx->pc = 0x386BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BC4u;
        // 0x386bc8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386BCCu;
        goto label_386bcc;
    }
    ctx->pc = 0x386BC4u;
    {
        const bool branch_taken_0x386bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BC4u;
        // 0x386bc8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386bc4) {
            ctx->pc = 0x386BECu;
            goto label_386bec;
        }
    }
    ctx->pc = 0x386BCCu;
label_386bcc:
    // 0x386bcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x386bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_386bd0:
    // 0x386bd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x386bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_386bd4:
    // 0x386bd4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x386bd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_386bd8:
    // 0x386bd8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x386bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_386bdc:
    // 0x386bdc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_386be0:
    if (ctx->pc == 0x386BE0u) {
        ctx->pc = 0x386BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BDCu;
        // 0x386be0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386BE4u;
        goto label_386be4;
    }
    ctx->pc = 0x386BDCu;
    {
        const bool branch_taken_0x386bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x386bdc) {
            ctx->pc = 0x386BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386BDCu;
            // 0x386be0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386bb0;
        }
    }
    ctx->pc = 0x386BE4u;
label_386be4:
    // 0x386be4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x386be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_386be8:
    // 0x386be8: 0x26320004  addiu       $s2, $s1, 0x4
    ctx->pc = 0x386be8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_386bec:
    // 0x386bec: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x386becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_386bf0:
    // 0x386bf0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x386bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_386bf4:
    // 0x386bf4: 0x32150001  andi        $s5, $s0, 0x1
    ctx->pc = 0x386bf4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_386bf8:
    // 0x386bf8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x386bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_386bfc:
    // 0x386bfc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_386c00:
    if (ctx->pc == 0x386C00u) {
        ctx->pc = 0x386C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BFCu;
        // 0x386c00: 0xafb10014  sw          $s1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386C04u;
        goto label_386c04;
    }
    ctx->pc = 0x386BFCu;
    {
        const bool branch_taken_0x386bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BFCu;
        // 0x386c00: 0xafb10014  sw          $s1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386bfc) {
            ctx->pc = 0x386C6Cu;
            goto label_386c6c;
        }
    }
    ctx->pc = 0x386C04u;
label_386c04:
    // 0x386c04: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x386c04u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
label_386c08:
    // 0x386c08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x386c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_386c0c:
    // 0x386c0c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x386c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_386c10:
    // 0x386c10: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x386c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_386c14:
    // 0x386c14: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x386c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_386c18:
    // 0x386c18: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x386c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_386c1c:
    // 0x386c1c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x386c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_386c20:
    // 0x386c20: 0xc13c8ba  jal         func_4F22E8
label_386c24:
    if (ctx->pc == 0x386C24u) {
        ctx->pc = 0x386C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C20u;
        // 0x386c24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386C28u;
        goto label_386c28;
    }
    ctx->pc = 0x386C20u;
    SET_GPR_U32(ctx, 31, 0x386C28u);
    ctx->pc = 0x386C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C20u;
    // 0x386c24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F22E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F22E8u, 0x386C20u, 0x386C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C28u;
label_386c28:
    // 0x386c28: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x386c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_386c2c:
    // 0x386c2c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x386c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_386c30:
    // 0x386c30: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x386c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_386c34:
    // 0x386c34: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x386c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_386c38:
    // 0x386c38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x386c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_386c3c:
    // 0x386c3c: 0x8e8827e4  lw          $t0, 0x27E4($s4)
    ctx->pc = 0x386c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_386c40:
    // 0x386c40: 0x2666df98  addiu       $a2, $s3, -0x2068
    ctx->pc = 0x386c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959000));
label_386c44:
    // 0x386c44: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x386c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_386c48:
    // 0x386c48: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x386c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_386c4c:
    // 0x386c4c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x386c4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_386c50:
    // 0x386c50: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x386c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_386c54:
    // 0x386c54: 0x60f809  jalr        $v1
label_386c58:
    if (ctx->pc == 0x386C58u) {
        ctx->pc = 0x386C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C54u;
        // 0x386c58: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386C5Cu;
        goto label_386c5c;
    }
    ctx->pc = 0x386C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386C5Cu);
        ctx->pc = 0x386C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C54u;
        // 0x386c58: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386C54u, 0x386C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386C5Cu;
label_386c5c:
    // 0x386c5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x386c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_386c60:
    // 0x386c60: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x386c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_386c64:
    // 0x386c64: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_386c68:
    if (ctx->pc == 0x386C68u) {
        ctx->pc = 0x386C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C64u;
        // 0x386c68: 0xafb10014  sw          $s1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386C6Cu;
        goto label_386c6c;
    }
    ctx->pc = 0x386C64u;
    {
        const bool branch_taken_0x386c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C64u;
        // 0x386c68: 0xafb10014  sw          $s1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c64) {
            ctx->pc = 0x386C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386c08;
        }
    }
    ctx->pc = 0x386C6Cu;
label_386c6c:
    // 0x386c6c: 0xc13c87a  jal         func_4F21E8
label_386c70:
    if (ctx->pc == 0x386C70u) {
        ctx->pc = 0x386C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C6Cu;
        // 0x386c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386C74u;
        goto label_386c74;
    }
    ctx->pc = 0x386C6Cu;
    SET_GPR_U32(ctx, 31, 0x386C74u);
    ctx->pc = 0x386C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C6Cu;
    // 0x386c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F21E8u, 0x386C6Cu, 0x386C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C74u;
label_386c74:
    // 0x386c74: 0x8e8627e4  lw          $a2, 0x27E4($s4)
    ctx->pc = 0x386c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_386c78:
    // 0x386c78: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x386c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_386c7c:
    // 0x386c7c: 0x8ec5b9b8  lw          $a1, -0x4648($s6)
    ctx->pc = 0x386c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949304)));
label_386c80:
    // 0x386c80: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x386c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_386c84:
    // 0x386c84: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x386c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_386c88:
    // 0x386c88: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x386c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_386c8c:
    // 0x386c8c: 0x60f809  jalr        $v1
label_386c90:
    if (ctx->pc == 0x386C90u) {
        ctx->pc = 0x386C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C8Cu;
        // 0x386c90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386C94u;
        goto label_386c94;
    }
    ctx->pc = 0x386C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386C94u);
        ctx->pc = 0x386C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C8Cu;
        // 0x386c90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386C8Cu, 0x386C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386C94u;
label_386c94:
    // 0x386c94: 0xc13c87a  jal         func_4F21E8
label_386c98:
    if (ctx->pc == 0x386C98u) {
        ctx->pc = 0x386C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C94u;
        // 0x386c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386C9Cu;
        goto label_386c9c;
    }
    ctx->pc = 0x386C94u;
    SET_GPR_U32(ctx, 31, 0x386C9Cu);
    ctx->pc = 0x386C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C94u;
    // 0x386c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F21E8u, 0x386C94u, 0x386C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C9Cu;
label_386c9c:
    // 0x386c9c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x386c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_386ca0:
    // 0x386ca0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_386ca4:
    if (ctx->pc == 0x386CA4u) {
        ctx->pc = 0x386CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CA0u;
        // 0x386ca4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386CA8u;
        goto label_386ca8;
    }
    ctx->pc = 0x386CA0u;
    {
        const bool branch_taken_0x386ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x386CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CA0u;
        // 0x386ca4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ca0) {
            ctx->pc = 0x386CCCu;
            goto label_386ccc;
        }
    }
    ctx->pc = 0x386CA8u;
label_386ca8:
    // 0x386ca8: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x386ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_386cac:
    // 0x386cac: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x386cacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_386cb0:
    // 0x386cb0: 0x24c6df58  addiu       $a2, $a2, -0x20A8
    ctx->pc = 0x386cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958936));
label_386cb4:
    // 0x386cb4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x386cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_386cb8:
    // 0x386cb8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x386cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_386cbc:
    // 0x386cbc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x386cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_386cc0:
    // 0x386cc0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x386cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_386cc4:
    // 0x386cc4: 0x60f809  jalr        $v1
label_386cc8:
    if (ctx->pc == 0x386CC8u) {
        ctx->pc = 0x386CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CC4u;
        // 0x386cc8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386CCCu;
        goto label_386ccc;
    }
    ctx->pc = 0x386CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386CCCu);
        ctx->pc = 0x386CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CC4u;
        // 0x386cc8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386CC4u, 0x386CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386CCCu;
label_386ccc:
    // 0x386ccc: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_386cd0:
    if (ctx->pc == 0x386CD0u) {
        ctx->pc = 0x386CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CCCu;
        // 0x386cd0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386CD4u;
        goto label_386cd4;
    }
    ctx->pc = 0x386CCCu;
    {
        const bool branch_taken_0x386ccc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x386CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CCCu;
        // 0x386cd0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ccc) {
            ctx->pc = 0x386CE0u;
            goto label_386ce0;
        }
    }
    ctx->pc = 0x386CD4u;
label_386cd4:
    // 0x386cd4: 0xc10b208  jal         func_42C820
label_386cd8:
    if (ctx->pc == 0x386CD8u) {
        ctx->pc = 0x386CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CD4u;
        // 0x386cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386CDCu;
        goto label_386cdc;
    }
    ctx->pc = 0x386CD4u;
    SET_GPR_U32(ctx, 31, 0x386CDCu);
    ctx->pc = 0x386CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386CD4u;
    // 0x386cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x386CD4u, 0x386CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386CDCu;
label_386cdc:
    // 0x386cdc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x386cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_386ce0:
    // 0x386ce0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x386ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_386ce4:
    // 0x386ce4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x386ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_386ce8:
    // 0x386ce8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x386ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_386cec:
    // 0x386cec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x386cecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_386cf0:
    // 0x386cf0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x386cf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_386cf4:
    // 0x386cf4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x386cf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_386cf8:
    // 0x386cf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x386cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_386cfc:
    // 0x386cfc: 0x3e00008  jr          $ra
label_386d00:
    if (ctx->pc == 0x386D00u) {
        ctx->pc = 0x386D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CFCu;
        // 0x386d00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386D04u;
        goto label_386d04;
    }
    ctx->pc = 0x386CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CFCu;
        // 0x386d00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386D04u;
label_386d04:
    // 0x386d04: 0x0  nop
    ctx->pc = 0x386d04u;
    // NOP
    ctx->pc = 0x386d08u;
}

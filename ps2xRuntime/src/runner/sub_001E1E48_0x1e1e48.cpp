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

// Function: sub_001E1E48
// Address: 0x1e1e48 - 0x1e1f28
void sub_001E1E48_0x1e1e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1E48_0x1e1e48");
#endif

    switch (ctx->pc) {
        case 0x1e1e48u: goto label_1e1e48;
        case 0x1e1e4cu: goto label_1e1e4c;
        case 0x1e1e50u: goto label_1e1e50;
        case 0x1e1e54u: goto label_1e1e54;
        case 0x1e1e58u: goto label_1e1e58;
        case 0x1e1e5cu: goto label_1e1e5c;
        case 0x1e1e60u: goto label_1e1e60;
        case 0x1e1e64u: goto label_1e1e64;
        case 0x1e1e68u: goto label_1e1e68;
        case 0x1e1e6cu: goto label_1e1e6c;
        case 0x1e1e70u: goto label_1e1e70;
        case 0x1e1e74u: goto label_1e1e74;
        case 0x1e1e78u: goto label_1e1e78;
        case 0x1e1e7cu: goto label_1e1e7c;
        case 0x1e1e80u: goto label_1e1e80;
        case 0x1e1e84u: goto label_1e1e84;
        case 0x1e1e88u: goto label_1e1e88;
        case 0x1e1e8cu: goto label_1e1e8c;
        case 0x1e1e90u: goto label_1e1e90;
        case 0x1e1e94u: goto label_1e1e94;
        case 0x1e1e98u: goto label_1e1e98;
        case 0x1e1e9cu: goto label_1e1e9c;
        case 0x1e1ea0u: goto label_1e1ea0;
        case 0x1e1ea4u: goto label_1e1ea4;
        case 0x1e1ea8u: goto label_1e1ea8;
        case 0x1e1eacu: goto label_1e1eac;
        case 0x1e1eb0u: goto label_1e1eb0;
        case 0x1e1eb4u: goto label_1e1eb4;
        case 0x1e1eb8u: goto label_1e1eb8;
        case 0x1e1ebcu: goto label_1e1ebc;
        case 0x1e1ec0u: goto label_1e1ec0;
        case 0x1e1ec4u: goto label_1e1ec4;
        case 0x1e1ec8u: goto label_1e1ec8;
        case 0x1e1eccu: goto label_1e1ecc;
        case 0x1e1ed0u: goto label_1e1ed0;
        case 0x1e1ed4u: goto label_1e1ed4;
        case 0x1e1ed8u: goto label_1e1ed8;
        case 0x1e1edcu: goto label_1e1edc;
        case 0x1e1ee0u: goto label_1e1ee0;
        case 0x1e1ee4u: goto label_1e1ee4;
        case 0x1e1ee8u: goto label_1e1ee8;
        case 0x1e1eecu: goto label_1e1eec;
        case 0x1e1ef0u: goto label_1e1ef0;
        case 0x1e1ef4u: goto label_1e1ef4;
        case 0x1e1ef8u: goto label_1e1ef8;
        case 0x1e1efcu: goto label_1e1efc;
        case 0x1e1f00u: goto label_1e1f00;
        case 0x1e1f04u: goto label_1e1f04;
        case 0x1e1f08u: goto label_1e1f08;
        case 0x1e1f0cu: goto label_1e1f0c;
        case 0x1e1f10u: goto label_1e1f10;
        case 0x1e1f14u: goto label_1e1f14;
        case 0x1e1f18u: goto label_1e1f18;
        case 0x1e1f1cu: goto label_1e1f1c;
        case 0x1e1f20u: goto label_1e1f20;
        case 0x1e1f24u: goto label_1e1f24;
        default: break;
    }

    ctx->pc = 0x1e1e48u;

label_1e1e48:
    // 0x1e1e48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e1e4c:
    // 0x1e1e4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e1e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e1e50:
    // 0x1e1e50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e1e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1e1e54:
    // 0x1e1e54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e58:
    // 0x1e1e58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e1e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e1e5c:
    // 0x1e1e5c: 0x26230094  addiu       $v1, $s1, 0x94
    ctx->pc = 0x1e1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_1e1e60:
    // 0x1e1e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1e64:
    // 0x1e1e64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e1e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e68:
    // 0x1e1e68: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x1e1e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_1e1e6c:
    // 0x1e1e6c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1e1e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e1e70:
    // 0x1e1e70: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e1e74:
    // 0x1e1e74: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e1e78:
    // 0x1e1e78: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e1e78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e1e7c:
    // 0x1e1e7c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1e1e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e1e80:
    // 0x1e1e80: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1e1e84:
    if (ctx->pc == 0x1E1E84u) {
        ctx->pc = 0x1E1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E80u;
        // 0x1e1e84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E88u;
        goto label_1e1e88;
    }
    ctx->pc = 0x1E1E80u;
    {
        const bool branch_taken_0x1e1e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E80u;
        // 0x1e1e84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e80) {
            ctx->pc = 0x1E1F14u;
            goto label_1e1f14;
        }
    }
    ctx->pc = 0x1E1E88u;
label_1e1e88:
    // 0x1e1e88: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x1e1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1e1e8c:
    // 0x1e1e8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e1e90:
    // 0x1e1e90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e1e94:
    // 0x1e1e94: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e1e94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1e98:
    // 0x1e1e98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e1e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e1e9c:
    // 0x1e1e9c: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1e1e9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1e1ea0:
    // 0x1e1ea0: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x1e1ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1e1ea4:
    // 0x1e1ea4: 0xa0f809  jalr        $a1
label_1e1ea8:
    if (ctx->pc == 0x1E1EA8u) {
        ctx->pc = 0x1E1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EA4u;
        // 0x1e1ea8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EACu;
        goto label_1e1eac;
    }
    ctx->pc = 0x1E1EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1E1EACu);
        ctx->pc = 0x1E1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EA4u;
        // 0x1e1ea8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1EA4u, 0x1E1EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1EACu;
label_1e1eac:
    // 0x1e1eac: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x1e1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_1e1eb0:
    // 0x1e1eb0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1e1eb4:
    if (ctx->pc == 0x1E1EB4u) {
        ctx->pc = 0x1E1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EB0u;
        // 0x1e1eb4: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EB8u;
        goto label_1e1eb8;
    }
    ctx->pc = 0x1E1EB0u;
    {
        const bool branch_taken_0x1e1eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1eb0) {
            ctx->pc = 0x1E1EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1EB0u;
            // 0x1e1eb4: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1EDCu;
            goto label_1e1edc;
        }
    }
    ctx->pc = 0x1E1EB8u;
label_1e1eb8:
    // 0x1e1eb8: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x1e1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1e1ebc:
    // 0x1e1ebc: 0x52420007  beql        $s2, $v0, . + 4 + (0x7 << 2)
label_1e1ec0:
    if (ctx->pc == 0x1E1EC0u) {
        ctx->pc = 0x1E1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EBCu;
        // 0x1e1ec0: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EC4u;
        goto label_1e1ec4;
    }
    ctx->pc = 0x1E1EBCu;
    {
        const bool branch_taken_0x1e1ebc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e1ebc) {
            ctx->pc = 0x1E1EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1EBCu;
            // 0x1e1ec0: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1EDCu;
            goto label_1e1edc;
        }
    }
    ctx->pc = 0x1E1EC4u;
label_1e1ec4:
    // 0x1e1ec4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e1ec8:
    // 0x1e1ec8: 0x84440108  lh          $a0, 0x108($v0)
    ctx->pc = 0x1e1ec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
label_1e1ecc:
    // 0x1e1ecc: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x1e1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1e1ed0:
    // 0x1e1ed0: 0x60f809  jalr        $v1
label_1e1ed4:
    if (ctx->pc == 0x1E1ED4u) {
        ctx->pc = 0x1E1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1ED0u;
        // 0x1e1ed4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1ED8u;
        goto label_1e1ed8;
    }
    ctx->pc = 0x1E1ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1ED8u);
        ctx->pc = 0x1E1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1ED0u;
        // 0x1e1ed4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1ED0u, 0x1E1ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1ED8u;
label_1e1ed8:
    // 0x1e1ed8: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x1e1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1e1edc:
    // 0x1e1edc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e1ee0:
    // 0x1e1ee0: 0xae3200a8  sw          $s2, 0xA8($s1)
    ctx->pc = 0x1e1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 18));
label_1e1ee4:
    // 0x1e1ee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1ee8:
    // 0x1e1ee8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e1ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1eec:
    // 0x1e1eec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e1eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e1ef0:
    // 0x1e1ef0: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1e1ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1e1ef4:
    // 0x1e1ef4: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1e1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1e1ef8:
    // 0x1e1ef8: 0x40f809  jalr        $v0
label_1e1efc:
    if (ctx->pc == 0x1E1EFCu) {
        ctx->pc = 0x1E1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EF8u;
        // 0x1e1efc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F00u;
        goto label_1e1f00;
    }
    ctx->pc = 0x1E1EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1F00u);
        ctx->pc = 0x1E1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EF8u;
        // 0x1e1efc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1EF8u, 0x1E1F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1F00u;
label_1e1f00:
    // 0x1e1f00: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e1f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e1f04:
    // 0x1e1f04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e1f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e1f08:
    // 0x1e1f08: 0xc043f0c  jal         func_10FC30
label_1e1f0c:
    if (ctx->pc == 0x1E1F0Cu) {
        ctx->pc = 0x1E1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F08u;
        // 0x1e1f0c: 0x8c64aa84  lw          $a0, -0x557C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F10u;
        goto label_1e1f10;
    }
    ctx->pc = 0x1E1F08u;
    SET_GPR_U32(ctx, 31, 0x1E1F10u);
    ctx->pc = 0x1E1F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1F08u;
    // 0x1e1f0c: 0x8c64aa84  lw          $a0, -0x557C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1E1F08u, 0x1E1F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F10u;
label_1e1f10:
    // 0x1e1f10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e1f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e1f14:
    // 0x1e1f14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e1f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1f18:
    // 0x1e1f18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e1f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1f1c:
    // 0x1e1f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1f20:
    // 0x1e1f20: 0x3e00008  jr          $ra
label_1e1f24:
    if (ctx->pc == 0x1E1F24u) {
        ctx->pc = 0x1E1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F20u;
        // 0x1e1f24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F28u;
        goto label_fallthrough_0x1e1f20;
    }
    ctx->pc = 0x1E1F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F20u;
        // 0x1e1f24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1f20:
    ctx->pc = 0x1E1F28u;
}

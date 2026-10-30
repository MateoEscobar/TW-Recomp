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

// Function: sub_004F5B60
// Address: 0x4f5b60 - 0x4f5c38
void sub_004F5B60_0x4f5b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5B60_0x4f5b60");
#endif

    switch (ctx->pc) {
        case 0x4f5b60u: goto label_4f5b60;
        case 0x4f5b64u: goto label_4f5b64;
        case 0x4f5b68u: goto label_4f5b68;
        case 0x4f5b6cu: goto label_4f5b6c;
        case 0x4f5b70u: goto label_4f5b70;
        case 0x4f5b74u: goto label_4f5b74;
        case 0x4f5b78u: goto label_4f5b78;
        case 0x4f5b7cu: goto label_4f5b7c;
        case 0x4f5b80u: goto label_4f5b80;
        case 0x4f5b84u: goto label_4f5b84;
        case 0x4f5b88u: goto label_4f5b88;
        case 0x4f5b8cu: goto label_4f5b8c;
        case 0x4f5b90u: goto label_4f5b90;
        case 0x4f5b94u: goto label_4f5b94;
        case 0x4f5b98u: goto label_4f5b98;
        case 0x4f5b9cu: goto label_4f5b9c;
        case 0x4f5ba0u: goto label_4f5ba0;
        case 0x4f5ba4u: goto label_4f5ba4;
        case 0x4f5ba8u: goto label_4f5ba8;
        case 0x4f5bacu: goto label_4f5bac;
        case 0x4f5bb0u: goto label_4f5bb0;
        case 0x4f5bb4u: goto label_4f5bb4;
        case 0x4f5bb8u: goto label_4f5bb8;
        case 0x4f5bbcu: goto label_4f5bbc;
        case 0x4f5bc0u: goto label_4f5bc0;
        case 0x4f5bc4u: goto label_4f5bc4;
        case 0x4f5bc8u: goto label_4f5bc8;
        case 0x4f5bccu: goto label_4f5bcc;
        case 0x4f5bd0u: goto label_4f5bd0;
        case 0x4f5bd4u: goto label_4f5bd4;
        case 0x4f5bd8u: goto label_4f5bd8;
        case 0x4f5bdcu: goto label_4f5bdc;
        case 0x4f5be0u: goto label_4f5be0;
        case 0x4f5be4u: goto label_4f5be4;
        case 0x4f5be8u: goto label_4f5be8;
        case 0x4f5becu: goto label_4f5bec;
        case 0x4f5bf0u: goto label_4f5bf0;
        case 0x4f5bf4u: goto label_4f5bf4;
        case 0x4f5bf8u: goto label_4f5bf8;
        case 0x4f5bfcu: goto label_4f5bfc;
        case 0x4f5c00u: goto label_4f5c00;
        case 0x4f5c04u: goto label_4f5c04;
        case 0x4f5c08u: goto label_4f5c08;
        case 0x4f5c0cu: goto label_4f5c0c;
        case 0x4f5c10u: goto label_4f5c10;
        case 0x4f5c14u: goto label_4f5c14;
        case 0x4f5c18u: goto label_4f5c18;
        case 0x4f5c1cu: goto label_4f5c1c;
        case 0x4f5c20u: goto label_4f5c20;
        case 0x4f5c24u: goto label_4f5c24;
        case 0x4f5c28u: goto label_4f5c28;
        case 0x4f5c2cu: goto label_4f5c2c;
        case 0x4f5c30u: goto label_4f5c30;
        case 0x4f5c34u: goto label_4f5c34;
        default: break;
    }

    ctx->pc = 0x4f5b60u;

label_4f5b60:
    // 0x4f5b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f5b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f5b64:
    // 0x4f5b64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f5b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4f5b68:
    // 0x4f5b68: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4f5b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4f5b6c:
    // 0x4f5b6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f5b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5b70:
    // 0x4f5b70: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4f5b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4f5b74:
    // 0x4f5b74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4f5b74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f5b78:
    // 0x4f5b78: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4f5b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4f5b7c:
    // 0x4f5b7c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4f5b7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f5b80:
    // 0x4f5b80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4f5b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4f5b84:
    // 0x4f5b84: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_4f5b88:
    if (ctx->pc == 0x4F5B88u) {
        ctx->pc = 0x4F5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5B84u;
        // 0x4f5b88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5B8Cu;
        goto label_4f5b8c;
    }
    ctx->pc = 0x4F5B84u;
    {
        const bool branch_taken_0x4f5b84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5B84u;
        // 0x4f5b88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5b84) {
            ctx->pc = 0x4F5C14u;
            goto label_4f5c14;
        }
    }
    ctx->pc = 0x4F5B8Cu;
label_4f5b8c:
    // 0x4f5b8c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x4f5b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_4f5b90:
    // 0x4f5b90: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x4f5b90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_4f5b94:
    // 0x4f5b94: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x4f5b94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_4f5b98:
    // 0x4f5b98: 0x26109028  addiu       $s0, $s0, -0x6FD8
    ctx->pc = 0x4f5b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938664));
label_4f5b9c:
    // 0x4f5b9c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4f5b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4f5ba0:
    // 0x4f5ba0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f5ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f5ba4:
    // 0x4f5ba4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f5ba8:
    // 0x4f5ba8: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x4f5ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_4f5bac:
    // 0x4f5bac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f5bacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f5bb0:
    // 0x4f5bb0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f5bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f5bb4:
    // 0x4f5bb4: 0x60f809  jalr        $v1
label_4f5bb8:
    if (ctx->pc == 0x4F5BB8u) {
        ctx->pc = 0x4F5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5BB4u;
        // 0x4f5bb8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5BBCu;
        goto label_4f5bbc;
    }
    ctx->pc = 0x4F5BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F5BBCu);
        ctx->pc = 0x4F5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5BB4u;
        // 0x4f5bb8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5BB4u, 0x4F5BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5BBCu;
label_4f5bbc:
    // 0x4f5bbc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4f5bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_4f5bc0:
    // 0x4f5bc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f5bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f5bc4:
    // 0x4f5bc4: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x4f5bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_4f5bc8:
    // 0x4f5bc8: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x4f5bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_4f5bcc:
    // 0x4f5bcc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4f5bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f5bd0:
    // 0x4f5bd0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f5bd4:
    // 0x4f5bd4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f5bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f5bd8:
    // 0x4f5bd8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f5bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f5bdc:
    // 0x4f5bdc: 0x60f809  jalr        $v1
label_4f5be0:
    if (ctx->pc == 0x4F5BE0u) {
        ctx->pc = 0x4F5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5BDCu;
        // 0x4f5be0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5BE4u;
        goto label_4f5be4;
    }
    ctx->pc = 0x4F5BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F5BE4u);
        ctx->pc = 0x4F5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5BDCu;
        // 0x4f5be0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5BDCu, 0x4F5BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5BE4u;
label_4f5be4:
    // 0x4f5be4: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x4f5be4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_4f5be8:
    // 0x4f5be8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4f5be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f5bec:
    // 0x4f5bec: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x4f5becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_4f5bf0:
    // 0x4f5bf0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4f5bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f5bf4:
    // 0x4f5bf4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x4f5bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_4f5bf8:
    // 0x4f5bf8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4f5bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f5bfc:
    // 0x4f5bfc: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x4f5bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_4f5c00:
    // 0x4f5c00: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f5c04:
    // 0x4f5c04: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f5c04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f5c08:
    // 0x4f5c08: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f5c0c:
    // 0x4f5c0c: 0x60f809  jalr        $v1
label_4f5c10:
    if (ctx->pc == 0x4F5C10u) {
        ctx->pc = 0x4F5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5C0Cu;
        // 0x4f5c10: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5C14u;
        goto label_4f5c14;
    }
    ctx->pc = 0x4F5C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F5C14u);
        ctx->pc = 0x4F5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5C0Cu;
        // 0x4f5c10: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5C0Cu, 0x4F5C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5C14u;
label_4f5c14:
    // 0x4f5c14: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4f5c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f5c18:
    // 0x4f5c18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4f5c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f5c1c:
    // 0x4f5c1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f5c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f5c20:
    // 0x4f5c20: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4f5c20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f5c24:
    // 0x4f5c24: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4f5c24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5c28:
    // 0x4f5c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f5c2c:
    // 0x4f5c2c: 0x3e00008  jr          $ra
label_4f5c30:
    if (ctx->pc == 0x4F5C30u) {
        ctx->pc = 0x4F5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5C2Cu;
        // 0x4f5c30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5C34u;
        goto label_4f5c34;
    }
    ctx->pc = 0x4F5C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5C2Cu;
        // 0x4f5c30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5C34u;
label_4f5c34:
    // 0x4f5c34: 0x0  nop
    ctx->pc = 0x4f5c34u;
    // NOP
    ctx->pc = 0x4f5c38u;
}

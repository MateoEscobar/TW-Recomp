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

// Function: sub_00338B38
// Address: 0x338b38 - 0x338bf0
void sub_00338B38_0x338b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338B38_0x338b38");
#endif

    switch (ctx->pc) {
        case 0x338b38u: goto label_338b38;
        case 0x338b3cu: goto label_338b3c;
        case 0x338b40u: goto label_338b40;
        case 0x338b44u: goto label_338b44;
        case 0x338b48u: goto label_338b48;
        case 0x338b4cu: goto label_338b4c;
        case 0x338b50u: goto label_338b50;
        case 0x338b54u: goto label_338b54;
        case 0x338b58u: goto label_338b58;
        case 0x338b5cu: goto label_338b5c;
        case 0x338b60u: goto label_338b60;
        case 0x338b64u: goto label_338b64;
        case 0x338b68u: goto label_338b68;
        case 0x338b6cu: goto label_338b6c;
        case 0x338b70u: goto label_338b70;
        case 0x338b74u: goto label_338b74;
        case 0x338b78u: goto label_338b78;
        case 0x338b7cu: goto label_338b7c;
        case 0x338b80u: goto label_338b80;
        case 0x338b84u: goto label_338b84;
        case 0x338b88u: goto label_338b88;
        case 0x338b8cu: goto label_338b8c;
        case 0x338b90u: goto label_338b90;
        case 0x338b94u: goto label_338b94;
        case 0x338b98u: goto label_338b98;
        case 0x338b9cu: goto label_338b9c;
        case 0x338ba0u: goto label_338ba0;
        case 0x338ba4u: goto label_338ba4;
        case 0x338ba8u: goto label_338ba8;
        case 0x338bacu: goto label_338bac;
        case 0x338bb0u: goto label_338bb0;
        case 0x338bb4u: goto label_338bb4;
        case 0x338bb8u: goto label_338bb8;
        case 0x338bbcu: goto label_338bbc;
        case 0x338bc0u: goto label_338bc0;
        case 0x338bc4u: goto label_338bc4;
        case 0x338bc8u: goto label_338bc8;
        case 0x338bccu: goto label_338bcc;
        case 0x338bd0u: goto label_338bd0;
        case 0x338bd4u: goto label_338bd4;
        case 0x338bd8u: goto label_338bd8;
        case 0x338bdcu: goto label_338bdc;
        case 0x338be0u: goto label_338be0;
        case 0x338be4u: goto label_338be4;
        case 0x338be8u: goto label_338be8;
        case 0x338becu: goto label_338bec;
        default: break;
    }

    ctx->pc = 0x338b38u;

label_338b38:
    // 0x338b38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x338b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_338b3c:
    // 0x338b3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x338b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_338b40:
    // 0x338b40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x338b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_338b44:
    // 0x338b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x338b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338b48:
    // 0x338b48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x338b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_338b4c:
    // 0x338b4c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x338b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_338b50:
    // 0x338b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_338b54:
    // 0x338b54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x338b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_338b58:
    // 0x338b58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x338b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_338b5c:
    // 0x338b5c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x338b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_338b60:
    // 0x338b60: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x338b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_338b64:
    // 0x338b64: 0x40f809  jalr        $v0
label_338b68:
    if (ctx->pc == 0x338B68u) {
        ctx->pc = 0x338B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B64u;
        // 0x338b68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338B6Cu;
        goto label_338b6c;
    }
    ctx->pc = 0x338B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338B6Cu);
        ctx->pc = 0x338B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B64u;
        // 0x338b68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338B64u, 0x338B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338B6Cu;
label_338b6c:
    // 0x338b6c: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x338b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_338b70:
    // 0x338b70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_338b74:
    // 0x338b74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x338b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_338b78:
    // 0x338b78: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x338b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_338b7c:
    // 0x338b7c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x338b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_338b80:
    // 0x338b80: 0x60f809  jalr        $v1
label_338b84:
    if (ctx->pc == 0x338B84u) {
        ctx->pc = 0x338B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B80u;
        // 0x338b84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338B88u;
        goto label_338b88;
    }
    ctx->pc = 0x338B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x338B88u);
        ctx->pc = 0x338B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B80u;
        // 0x338b84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338B80u, 0x338B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338B88u;
label_338b88:
    // 0x338b88: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x338b88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_338b8c:
    // 0x338b8c: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x338b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
label_338b90:
    // 0x338b90: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x338b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_338b94:
    // 0x338b94: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x338b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_338b98:
    // 0x338b98: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x338b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_338b9c:
    // 0x338b9c: 0x24c66c60  addiu       $a2, $a2, 0x6C60
    ctx->pc = 0x338b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27744));
label_338ba0:
    // 0x338ba0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x338ba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_338ba4:
    // 0x338ba4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x338ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_338ba8:
    // 0x338ba8: 0x60f809  jalr        $v1
label_338bac:
    if (ctx->pc == 0x338BACu) {
        ctx->pc = 0x338BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BA8u;
        // 0x338bac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338BB0u;
        goto label_338bb0;
    }
    ctx->pc = 0x338BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x338BB0u);
        ctx->pc = 0x338BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BA8u;
        // 0x338bac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338BA8u, 0x338BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338BB0u;
label_338bb0:
    // 0x338bb0: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x338bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_338bb4:
    // 0x338bb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_338bb8:
    // 0x338bb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x338bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_338bbc:
    // 0x338bbc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x338bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_338bc0:
    // 0x338bc0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x338bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_338bc4:
    // 0x338bc4: 0x60f809  jalr        $v1
label_338bc8:
    if (ctx->pc == 0x338BC8u) {
        ctx->pc = 0x338BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BC4u;
        // 0x338bc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338BCCu;
        goto label_338bcc;
    }
    ctx->pc = 0x338BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x338BCCu);
        ctx->pc = 0x338BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BC4u;
        // 0x338bc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338BC4u, 0x338BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338BCCu;
label_338bcc:
    // 0x338bcc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x338bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_338bd0:
    // 0x338bd0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x338bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_338bd4:
    // 0x338bd4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x338bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_338bd8:
    // 0x338bd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x338bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_338bdc:
    // 0x338bdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x338bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_338be0:
    // 0x338be0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x338be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_338be4:
    // 0x338be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338be8:
    // 0x338be8: 0x3e00008  jr          $ra
label_338bec:
    if (ctx->pc == 0x338BECu) {
        ctx->pc = 0x338BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BE8u;
        // 0x338bec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338BF0u;
        goto label_fallthrough_0x338be8;
    }
    ctx->pc = 0x338BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BE8u;
        // 0x338bec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x338be8:
    ctx->pc = 0x338BF0u;
}

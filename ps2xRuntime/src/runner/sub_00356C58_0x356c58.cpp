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

// Function: sub_00356C58
// Address: 0x356c58 - 0x356d00
void sub_00356C58_0x356c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356C58_0x356c58");
#endif

    switch (ctx->pc) {
        case 0x356c58u: goto label_356c58;
        case 0x356c5cu: goto label_356c5c;
        case 0x356c60u: goto label_356c60;
        case 0x356c64u: goto label_356c64;
        case 0x356c68u: goto label_356c68;
        case 0x356c6cu: goto label_356c6c;
        case 0x356c70u: goto label_356c70;
        case 0x356c74u: goto label_356c74;
        case 0x356c78u: goto label_356c78;
        case 0x356c7cu: goto label_356c7c;
        case 0x356c80u: goto label_356c80;
        case 0x356c84u: goto label_356c84;
        case 0x356c88u: goto label_356c88;
        case 0x356c8cu: goto label_356c8c;
        case 0x356c90u: goto label_356c90;
        case 0x356c94u: goto label_356c94;
        case 0x356c98u: goto label_356c98;
        case 0x356c9cu: goto label_356c9c;
        case 0x356ca0u: goto label_356ca0;
        case 0x356ca4u: goto label_356ca4;
        case 0x356ca8u: goto label_356ca8;
        case 0x356cacu: goto label_356cac;
        case 0x356cb0u: goto label_356cb0;
        case 0x356cb4u: goto label_356cb4;
        case 0x356cb8u: goto label_356cb8;
        case 0x356cbcu: goto label_356cbc;
        case 0x356cc0u: goto label_356cc0;
        case 0x356cc4u: goto label_356cc4;
        case 0x356cc8u: goto label_356cc8;
        case 0x356cccu: goto label_356ccc;
        case 0x356cd0u: goto label_356cd0;
        case 0x356cd4u: goto label_356cd4;
        case 0x356cd8u: goto label_356cd8;
        case 0x356cdcu: goto label_356cdc;
        case 0x356ce0u: goto label_356ce0;
        case 0x356ce4u: goto label_356ce4;
        case 0x356ce8u: goto label_356ce8;
        case 0x356cecu: goto label_356cec;
        case 0x356cf0u: goto label_356cf0;
        case 0x356cf4u: goto label_356cf4;
        case 0x356cf8u: goto label_356cf8;
        case 0x356cfcu: goto label_356cfc;
        default: break;
    }

    ctx->pc = 0x356c58u;

label_356c58:
    // 0x356c58: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x356c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_356c5c:
    // 0x356c5c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x356c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_356c60:
    // 0x356c60: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x356c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_356c64:
    // 0x356c64: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x356c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_356c68:
    // 0x356c68: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x356c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_356c6c:
    // 0x356c6c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x356c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_356c70:
    // 0x356c70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x356c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_356c74:
    // 0x356c74: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_356c78:
    if (ctx->pc == 0x356C78u) {
        ctx->pc = 0x356C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C74u;
        // 0x356c78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356C7Cu;
        goto label_356c7c;
    }
    ctx->pc = 0x356C74u;
    {
        const bool branch_taken_0x356c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C74u;
        // 0x356c78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356c74) {
            ctx->pc = 0x356CE4u;
            goto label_356ce4;
        }
    }
    ctx->pc = 0x356C7Cu;
label_356c7c:
    // 0x356c7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x356c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_356c80:
    // 0x356c80: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x356c80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_356c84:
    // 0x356c84: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x356c84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_356c88:
    // 0x356c88: 0xc051630  jal         func_1458C0
label_356c8c:
    if (ctx->pc == 0x356C8Cu) {
        ctx->pc = 0x356C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C88u;
        // 0x356c8c: 0x8e64b788  lw          $a0, -0x4878($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356C90u;
        goto label_356c90;
    }
    ctx->pc = 0x356C88u;
    SET_GPR_U32(ctx, 31, 0x356C90u);
    ctx->pc = 0x356C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356C88u;
    // 0x356c8c: 0x8e64b788  lw          $a0, -0x4878($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458C0u, 0x356C88u, 0x356C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C90u;
label_356c90:
    // 0x356c90: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_356c94:
    if (ctx->pc == 0x356C94u) {
        ctx->pc = 0x356C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C90u;
        // 0x356c94: 0xa3a000ff  sb          $zero, 0xFF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356C98u;
        goto label_356c98;
    }
    ctx->pc = 0x356C90u;
    {
        const bool branch_taken_0x356c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c90) {
            ctx->pc = 0x356C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356C90u;
            // 0x356c94: 0xa3a000ff  sb          $zero, 0xFF($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356CA0u;
            goto label_356ca0;
        }
    }
    ctx->pc = 0x356C98u;
label_356c98:
    // 0x356c98: 0x10000005  b           . + 4 + (0x5 << 2)
label_356c9c:
    if (ctx->pc == 0x356C9Cu) {
        ctx->pc = 0x356C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C98u;
        // 0x356c9c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356CA0u;
        goto label_356ca0;
    }
    ctx->pc = 0x356C98u;
    {
        const bool branch_taken_0x356c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C98u;
        // 0x356c9c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356c98) {
            ctx->pc = 0x356CB0u;
            goto label_356cb0;
        }
    }
    ctx->pc = 0x356CA0u;
label_356ca0:
    // 0x356ca0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x356ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_356ca4:
    // 0x356ca4: 0x26459090  addiu       $a1, $s2, -0x6F70
    ctx->pc = 0x356ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938768));
label_356ca8:
    // 0x356ca8: 0xc10c4de  jal         func_431378
label_356cac:
    if (ctx->pc == 0x356CACu) {
        ctx->pc = 0x356CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CA8u;
        // 0x356cac: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356CB0u;
        goto label_356cb0;
    }
    ctx->pc = 0x356CA8u;
    SET_GPR_U32(ctx, 31, 0x356CB0u);
    ctx->pc = 0x356CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356CA8u;
    // 0x356cac: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x356CA8u, 0x356CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356CB0u;
label_356cb0:
    // 0x356cb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x356cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356cb4:
    // 0x356cb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x356cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_356cb8:
    // 0x356cb8: 0xc10c25f  jal         func_43097C
label_356cbc:
    if (ctx->pc == 0x356CBCu) {
        ctx->pc = 0x356CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CB8u;
        // 0x356cbc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356CC0u;
        goto label_356cc0;
    }
    ctx->pc = 0x356CB8u;
    SET_GPR_U32(ctx, 31, 0x356CC0u);
    ctx->pc = 0x356CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356CB8u;
    // 0x356cbc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x356CB8u, 0x356CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356CC0u;
label_356cc0:
    // 0x356cc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x356cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_356cc4:
    // 0x356cc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x356cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_356cc8:
    // 0x356cc8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x356cc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_356ccc:
    // 0x356ccc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x356cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_356cd0:
    // 0x356cd0: 0x40f809  jalr        $v0
label_356cd4:
    if (ctx->pc == 0x356CD4u) {
        ctx->pc = 0x356CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CD0u;
        // 0x356cd4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356CD8u;
        goto label_356cd8;
    }
    ctx->pc = 0x356CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356CD8u);
        ctx->pc = 0x356CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CD0u;
        // 0x356cd4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356CD0u, 0x356CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356CD8u;
label_356cd8:
    // 0x356cd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x356cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356cdc:
    // 0x356cdc: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_356ce0:
    if (ctx->pc == 0x356CE0u) {
        ctx->pc = 0x356CE4u;
        goto label_356ce4;
    }
    ctx->pc = 0x356CDCu;
    {
        const bool branch_taken_0x356cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356cdc) {
            ctx->pc = 0x356C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356c88;
        }
    }
    ctx->pc = 0x356CE4u;
label_356ce4:
    // 0x356ce4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x356ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_356ce8:
    // 0x356ce8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x356ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_356cec:
    // 0x356cec: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x356cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_356cf0:
    // 0x356cf0: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x356cf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_356cf4:
    // 0x356cf4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x356cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_356cf8:
    // 0x356cf8: 0x3e00008  jr          $ra
label_356cfc:
    if (ctx->pc == 0x356CFCu) {
        ctx->pc = 0x356CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CF8u;
        // 0x356cfc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356D00u;
        goto label_fallthrough_0x356cf8;
    }
    ctx->pc = 0x356CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CF8u;
        // 0x356cfc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x356cf8:
    ctx->pc = 0x356D00u;
}

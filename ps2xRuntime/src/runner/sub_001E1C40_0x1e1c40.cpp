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

// Function: sub_001E1C40
// Address: 0x1e1c40 - 0x1e1cb8
void sub_001E1C40_0x1e1c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1C40_0x1e1c40");
#endif

    switch (ctx->pc) {
        case 0x1e1c40u: goto label_1e1c40;
        case 0x1e1c44u: goto label_1e1c44;
        case 0x1e1c48u: goto label_1e1c48;
        case 0x1e1c4cu: goto label_1e1c4c;
        case 0x1e1c50u: goto label_1e1c50;
        case 0x1e1c54u: goto label_1e1c54;
        case 0x1e1c58u: goto label_1e1c58;
        case 0x1e1c5cu: goto label_1e1c5c;
        case 0x1e1c60u: goto label_1e1c60;
        case 0x1e1c64u: goto label_1e1c64;
        case 0x1e1c68u: goto label_1e1c68;
        case 0x1e1c6cu: goto label_1e1c6c;
        case 0x1e1c70u: goto label_1e1c70;
        case 0x1e1c74u: goto label_1e1c74;
        case 0x1e1c78u: goto label_1e1c78;
        case 0x1e1c7cu: goto label_1e1c7c;
        case 0x1e1c80u: goto label_1e1c80;
        case 0x1e1c84u: goto label_1e1c84;
        case 0x1e1c88u: goto label_1e1c88;
        case 0x1e1c8cu: goto label_1e1c8c;
        case 0x1e1c90u: goto label_1e1c90;
        case 0x1e1c94u: goto label_1e1c94;
        case 0x1e1c98u: goto label_1e1c98;
        case 0x1e1c9cu: goto label_1e1c9c;
        case 0x1e1ca0u: goto label_1e1ca0;
        case 0x1e1ca4u: goto label_1e1ca4;
        case 0x1e1ca8u: goto label_1e1ca8;
        case 0x1e1cacu: goto label_1e1cac;
        case 0x1e1cb0u: goto label_1e1cb0;
        case 0x1e1cb4u: goto label_1e1cb4;
        default: break;
    }

    ctx->pc = 0x1e1c40u;

label_1e1c40:
    // 0x1e1c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e1c44:
    // 0x1e1c44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e1c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e1c48:
    // 0x1e1c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1c4c:
    // 0x1e1c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1c50:
    // 0x1e1c50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1e1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e1c54:
    // 0x1e1c54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e1c58:
    if (ctx->pc == 0x1E1C58u) {
        ctx->pc = 0x1E1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C54u;
        // 0x1e1c58: 0x24820094  addiu       $v0, $a0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C5Cu;
        goto label_1e1c5c;
    }
    ctx->pc = 0x1E1C54u;
    {
        const bool branch_taken_0x1e1c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C54u;
        // 0x1e1c58: 0x24820094  addiu       $v0, $a0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c54) {
            ctx->pc = 0x1E1C64u;
            goto label_1e1c64;
        }
    }
    ctx->pc = 0x1E1C5Cu;
label_1e1c5c:
    // 0x1e1c5c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1e1c60:
    if (ctx->pc == 0x1E1C60u) {
        ctx->pc = 0x1E1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C5Cu;
        // 0x1e1c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C64u;
        goto label_1e1c64;
    }
    ctx->pc = 0x1E1C5Cu;
    {
        const bool branch_taken_0x1e1c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C5Cu;
        // 0x1e1c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c5c) {
            ctx->pc = 0x1E1CA4u;
            goto label_1e1ca4;
        }
    }
    ctx->pc = 0x1E1C64u;
label_1e1c64:
    // 0x1e1c64: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1e1c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e1c68:
    // 0x1e1c68: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e1c6c:
    // 0x1e1c6c: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
label_1e1c70:
    if (ctx->pc == 0x1E1C70u) {
        ctx->pc = 0x1E1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C6Cu;
        // 0x1e1c70: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C74u;
        goto label_1e1c74;
    }
    ctx->pc = 0x1E1C6Cu;
    {
        const bool branch_taken_0x1e1c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C6Cu;
        // 0x1e1c70: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c6c) {
            ctx->pc = 0x1E1CA0u;
            goto label_1e1ca0;
        }
    }
    ctx->pc = 0x1E1C74u;
label_1e1c74:
    // 0x1e1c74: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1e1c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e1c78:
    // 0x1e1c78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e1c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e1c7c:
    // 0x1e1c7c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e1c7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e1c80:
    // 0x1e1c80: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e1c84:
    // 0x1e1c84: 0x40f809  jalr        $v0
label_1e1c88:
    if (ctx->pc == 0x1E1C88u) {
        ctx->pc = 0x1E1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C84u;
        // 0x1e1c88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C8Cu;
        goto label_1e1c8c;
    }
    ctx->pc = 0x1E1C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1C8Cu);
        ctx->pc = 0x1E1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C84u;
        // 0x1e1c88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1C84u, 0x1E1C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1C8Cu;
label_1e1c8c:
    // 0x1e1c8c: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_1e1c90:
    if (ctx->pc == 0x1E1C90u) {
        ctx->pc = 0x1E1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C8Cu;
        // 0x1e1c90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C94u;
        goto label_1e1c94;
    }
    ctx->pc = 0x1E1C8Cu;
    {
        const bool branch_taken_0x1e1c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C8Cu;
        // 0x1e1c90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c8c) {
            ctx->pc = 0x1E1C5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1c5c;
        }
    }
    ctx->pc = 0x1E1C94u;
label_1e1c94:
    // 0x1e1c94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e1c98:
    // 0x1e1c98: 0x5602fff7  bnel        $s0, $v0, . + 4 + (-0x9 << 2)
label_1e1c9c:
    if (ctx->pc == 0x1E1C9Cu) {
        ctx->pc = 0x1E1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C98u;
        // 0x1e1c9c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1CA0u;
        goto label_1e1ca0;
    }
    ctx->pc = 0x1E1C98u;
    {
        const bool branch_taken_0x1e1c98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1c98) {
            ctx->pc = 0x1E1C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1C98u;
            // 0x1e1c9c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1c78;
        }
    }
    ctx->pc = 0x1E1CA0u;
label_1e1ca0:
    // 0x1e1ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1ca4:
    // 0x1e1ca4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e1ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1ca8:
    // 0x1e1ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1cac:
    // 0x1e1cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1cb0:
    // 0x1e1cb0: 0x3e00008  jr          $ra
label_1e1cb4:
    if (ctx->pc == 0x1E1CB4u) {
        ctx->pc = 0x1E1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CB0u;
        // 0x1e1cb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1CB8u;
        goto label_fallthrough_0x1e1cb0;
    }
    ctx->pc = 0x1E1CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CB0u;
        // 0x1e1cb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1cb0:
    ctx->pc = 0x1E1CB8u;
}

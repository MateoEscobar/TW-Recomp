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

// Function: sub_004E7C50
// Address: 0x4e7c50 - 0x4e7ce8
void sub_004E7C50_0x4e7c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7C50_0x4e7c50");
#endif

    switch (ctx->pc) {
        case 0x4e7c50u: goto label_4e7c50;
        case 0x4e7c54u: goto label_4e7c54;
        case 0x4e7c58u: goto label_4e7c58;
        case 0x4e7c5cu: goto label_4e7c5c;
        case 0x4e7c60u: goto label_4e7c60;
        case 0x4e7c64u: goto label_4e7c64;
        case 0x4e7c68u: goto label_4e7c68;
        case 0x4e7c6cu: goto label_4e7c6c;
        case 0x4e7c70u: goto label_4e7c70;
        case 0x4e7c74u: goto label_4e7c74;
        case 0x4e7c78u: goto label_4e7c78;
        case 0x4e7c7cu: goto label_4e7c7c;
        case 0x4e7c80u: goto label_4e7c80;
        case 0x4e7c84u: goto label_4e7c84;
        case 0x4e7c88u: goto label_4e7c88;
        case 0x4e7c8cu: goto label_4e7c8c;
        case 0x4e7c90u: goto label_4e7c90;
        case 0x4e7c94u: goto label_4e7c94;
        case 0x4e7c98u: goto label_4e7c98;
        case 0x4e7c9cu: goto label_4e7c9c;
        case 0x4e7ca0u: goto label_4e7ca0;
        case 0x4e7ca4u: goto label_4e7ca4;
        case 0x4e7ca8u: goto label_4e7ca8;
        case 0x4e7cacu: goto label_4e7cac;
        case 0x4e7cb0u: goto label_4e7cb0;
        case 0x4e7cb4u: goto label_4e7cb4;
        case 0x4e7cb8u: goto label_4e7cb8;
        case 0x4e7cbcu: goto label_4e7cbc;
        case 0x4e7cc0u: goto label_4e7cc0;
        case 0x4e7cc4u: goto label_4e7cc4;
        case 0x4e7cc8u: goto label_4e7cc8;
        case 0x4e7cccu: goto label_4e7ccc;
        case 0x4e7cd0u: goto label_4e7cd0;
        case 0x4e7cd4u: goto label_4e7cd4;
        case 0x4e7cd8u: goto label_4e7cd8;
        case 0x4e7cdcu: goto label_4e7cdc;
        case 0x4e7ce0u: goto label_4e7ce0;
        case 0x4e7ce4u: goto label_4e7ce4;
        default: break;
    }

    ctx->pc = 0x4e7c50u;

label_4e7c50:
    // 0x4e7c50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e7c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e7c54:
    // 0x4e7c54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e7c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e7c58:
    // 0x4e7c58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e7c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e7c5c:
    // 0x4e7c5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e7c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e7c60:
    // 0x4e7c60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e7c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e7c64:
    // 0x4e7c64: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e7c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e7c68:
    // 0x4e7c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e7c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e7c6c:
    // 0x4e7c6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e7c70:
    // 0x4e7c70: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4e7c70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e7c74:
    // 0x4e7c74: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
label_4e7c78:
    if (ctx->pc == 0x4E7C78u) {
        ctx->pc = 0x4E7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7C74u;
        // 0x4e7c78: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7C7Cu;
        goto label_4e7c7c;
    }
    ctx->pc = 0x4E7C74u;
    {
        const bool branch_taken_0x4e7c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7C74u;
        // 0x4e7c78: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7c74) {
            ctx->pc = 0x4E7CC0u;
            goto label_4e7cc0;
        }
    }
    ctx->pc = 0x4E7C7Cu;
label_4e7c7c:
    // 0x4e7c7c: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x4e7c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_4e7c80:
    // 0x4e7c80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e7c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e7c84:
    // 0x4e7c84: 0x0  nop
    ctx->pc = 0x4e7c84u;
    // NOP
label_4e7c88:
    // 0x4e7c88: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_4e7c8c:
    if (ctx->pc == 0x4E7C8Cu) {
        ctx->pc = 0x4E7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7C88u;
        // 0x4e7c8c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7C90u;
        goto label_4e7c90;
    }
    ctx->pc = 0x4E7C88u;
    {
        const bool branch_taken_0x4e7c88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7C88u;
        // 0x4e7c8c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7c88) {
            ctx->pc = 0x4E7CB0u;
            goto label_4e7cb0;
        }
    }
    ctx->pc = 0x4E7C90u;
label_4e7c90:
    // 0x4e7c90: 0x8e68b9c0  lw          $t0, -0x4640($s3)
    ctx->pc = 0x4e7c90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
label_4e7c94:
    // 0x4e7c94: 0x264654f8  addiu       $a2, $s2, 0x54F8
    ctx->pc = 0x4e7c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 21752));
label_4e7c98:
    // 0x4e7c98: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e7c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e7c9c:
    // 0x4e7c9c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e7ca0:
    // 0x4e7ca0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e7ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e7ca4:
    // 0x4e7ca4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e7ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e7ca8:
    // 0x4e7ca8: 0x60f809  jalr        $v1
label_4e7cac:
    if (ctx->pc == 0x4E7CACu) {
        ctx->pc = 0x4E7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7CA8u;
        // 0x4e7cac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7CB0u;
        goto label_4e7cb0;
    }
    ctx->pc = 0x4E7CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7CB0u);
        ctx->pc = 0x4E7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7CA8u;
        // 0x4e7cac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7CA8u, 0x4E7CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7CB0u;
label_4e7cb0:
    // 0x4e7cb0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e7cb4:
    // 0x4e7cb4: 0x1602fff4  bne         $s0, $v0, . + 4 + (-0xC << 2)
label_4e7cb8:
    if (ctx->pc == 0x4E7CB8u) {
        ctx->pc = 0x4E7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7CB4u;
        // 0x4e7cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7CBCu;
        goto label_4e7cbc;
    }
    ctx->pc = 0x4E7CB4u;
    {
        const bool branch_taken_0x4e7cb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7CB4u;
        // 0x4e7cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7cb4) {
            ctx->pc = 0x4E7C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e7c88;
        }
    }
    ctx->pc = 0x4E7CBCu;
label_4e7cbc:
    // 0x4e7cbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e7cc0:
    // 0x4e7cc0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e7cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e7cc4:
    // 0x4e7cc4: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x4e7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_4e7cc8:
    // 0x4e7cc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e7cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e7ccc:
    // 0x4e7ccc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4e7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e7cd0:
    // 0x4e7cd0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e7cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e7cd4:
    // 0x4e7cd4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e7cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7cd8:
    // 0x4e7cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e7cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7cdc:
    // 0x4e7cdc: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x4e7cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
label_4e7ce0:
    // 0x4e7ce0: 0x3e00008  jr          $ra
label_4e7ce4:
    if (ctx->pc == 0x4E7CE4u) {
        ctx->pc = 0x4E7CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7CE0u;
        // 0x4e7ce4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7CE8u;
        goto label_fallthrough_0x4e7ce0;
    }
    ctx->pc = 0x4E7CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7CE0u;
        // 0x4e7ce4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e7ce0:
    ctx->pc = 0x4E7CE8u;
}

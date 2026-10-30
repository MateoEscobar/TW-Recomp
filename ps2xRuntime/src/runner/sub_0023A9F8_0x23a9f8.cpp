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

// Function: sub_0023A9F8
// Address: 0x23a9f8 - 0x23aab0
void sub_0023A9F8_0x23a9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A9F8_0x23a9f8");
#endif

    switch (ctx->pc) {
        case 0x23a9f8u: goto label_23a9f8;
        case 0x23a9fcu: goto label_23a9fc;
        case 0x23aa00u: goto label_23aa00;
        case 0x23aa04u: goto label_23aa04;
        case 0x23aa08u: goto label_23aa08;
        case 0x23aa0cu: goto label_23aa0c;
        case 0x23aa10u: goto label_23aa10;
        case 0x23aa14u: goto label_23aa14;
        case 0x23aa18u: goto label_23aa18;
        case 0x23aa1cu: goto label_23aa1c;
        case 0x23aa20u: goto label_23aa20;
        case 0x23aa24u: goto label_23aa24;
        case 0x23aa28u: goto label_23aa28;
        case 0x23aa2cu: goto label_23aa2c;
        case 0x23aa30u: goto label_23aa30;
        case 0x23aa34u: goto label_23aa34;
        case 0x23aa38u: goto label_23aa38;
        case 0x23aa3cu: goto label_23aa3c;
        case 0x23aa40u: goto label_23aa40;
        case 0x23aa44u: goto label_23aa44;
        case 0x23aa48u: goto label_23aa48;
        case 0x23aa4cu: goto label_23aa4c;
        case 0x23aa50u: goto label_23aa50;
        case 0x23aa54u: goto label_23aa54;
        case 0x23aa58u: goto label_23aa58;
        case 0x23aa5cu: goto label_23aa5c;
        case 0x23aa60u: goto label_23aa60;
        case 0x23aa64u: goto label_23aa64;
        case 0x23aa68u: goto label_23aa68;
        case 0x23aa6cu: goto label_23aa6c;
        case 0x23aa70u: goto label_23aa70;
        case 0x23aa74u: goto label_23aa74;
        case 0x23aa78u: goto label_23aa78;
        case 0x23aa7cu: goto label_23aa7c;
        case 0x23aa80u: goto label_23aa80;
        case 0x23aa84u: goto label_23aa84;
        case 0x23aa88u: goto label_23aa88;
        case 0x23aa8cu: goto label_23aa8c;
        case 0x23aa90u: goto label_23aa90;
        case 0x23aa94u: goto label_23aa94;
        case 0x23aa98u: goto label_23aa98;
        case 0x23aa9cu: goto label_23aa9c;
        case 0x23aaa0u: goto label_23aaa0;
        case 0x23aaa4u: goto label_23aaa4;
        case 0x23aaa8u: goto label_23aaa8;
        case 0x23aaacu: goto label_23aaac;
        default: break;
    }

    ctx->pc = 0x23a9f8u;

label_23a9f8:
    // 0x23a9f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23a9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23a9fc:
    // 0x23a9fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23aa00:
    // 0x23aa00: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x23aa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_23aa04:
    // 0x23aa04: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x23aa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_23aa08:
    // 0x23aa08: 0x24506710  addiu       $s0, $v0, 0x6710
    ctx->pc = 0x23aa08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26384));
label_23aa0c:
    // 0x23aa0c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x23aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_23aa10:
    // 0x23aa10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23aa10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23aa14:
    // 0x23aa14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23aa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23aa18:
    // 0x23aa18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23aa18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23aa1c:
    // 0x23aa1c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x23aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_23aa20:
    // 0x23aa20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23aa20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23aa24:
    // 0x23aa24: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x23aa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_23aa28:
    // 0x23aa28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23aa28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23aa2c:
    // 0x23aa2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23aa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23aa30:
    // 0x23aa30: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x23aa30u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_23aa34:
    // 0x23aa34: 0x0  nop
    ctx->pc = 0x23aa34u;
    // NOP
label_23aa38:
    // 0x23aa38: 0xc0e409a  jal         func_390268
label_23aa3c:
    if (ctx->pc == 0x23AA3Cu) {
        ctx->pc = 0x23AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA38u;
        // 0x23aa3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AA40u;
        goto label_23aa40;
    }
    ctx->pc = 0x23AA38u;
    SET_GPR_U32(ctx, 31, 0x23AA40u);
    ctx->pc = 0x23AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA38u;
    // 0x23aa3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23AA38u, 0x23AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA40u;
label_23aa40:
    // 0x23aa40: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_23aa44:
    if (ctx->pc == 0x23AA44u) {
        ctx->pc = 0x23AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA40u;
        // 0x23aa44: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AA48u;
        goto label_23aa48;
    }
    ctx->pc = 0x23AA40u;
    {
        const bool branch_taken_0x23aa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA40u;
        // 0x23aa44: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa40) {
            ctx->pc = 0x23AA7Cu;
            goto label_23aa7c;
        }
    }
    ctx->pc = 0x23AA48u;
label_23aa48:
    // 0x23aa48: 0x8ea62b04  lw          $a2, 0x2B04($s5)
    ctx->pc = 0x23aa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11012)));
label_23aa4c:
    // 0x23aa4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23aa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23aa50:
    // 0x23aa50: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x23aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_23aa54:
    // 0x23aa54: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x23aa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
label_23aa58:
    // 0x23aa58: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_23aa5c:
    // 0x23aa5c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23aa60:
    // 0x23aa60: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x23aa60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_23aa64:
    // 0x23aa64: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x23aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_23aa68:
    // 0x23aa68: 0x40f809  jalr        $v0
label_23aa6c:
    if (ctx->pc == 0x23AA6Cu) {
        ctx->pc = 0x23AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA68u;
        // 0x23aa6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AA70u;
        goto label_23aa70;
    }
    ctx->pc = 0x23AA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AA70u);
        ctx->pc = 0x23AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA68u;
        // 0x23aa6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AA68u, 0x23AA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23AA70u;
label_23aa70:
    // 0x23aa70: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_23aa74:
    // 0x23aa74: 0x10000005  b           . + 4 + (0x5 << 2)
label_23aa78:
    if (ctx->pc == 0x23AA78u) {
        ctx->pc = 0x23AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA74u;
        // 0x23aa78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AA7Cu;
        goto label_23aa7c;
    }
    ctx->pc = 0x23AA74u;
    {
        const bool branch_taken_0x23aa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA74u;
        // 0x23aa78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa74) {
            ctx->pc = 0x23AA8Cu;
            goto label_23aa8c;
        }
    }
    ctx->pc = 0x23AA7Cu;
label_23aa7c:
    // 0x23aa7c: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x23aa7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_23aa80:
    // 0x23aa80: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_23aa84:
    if (ctx->pc == 0x23AA84u) {
        ctx->pc = 0x23AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA80u;
        // 0x23aa84: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AA88u;
        goto label_23aa88;
    }
    ctx->pc = 0x23AA80u;
    {
        const bool branch_taken_0x23aa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA80u;
        // 0x23aa84: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa80) {
            ctx->pc = 0x23AA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23aa38;
        }
    }
    ctx->pc = 0x23AA88u;
label_23aa88:
    // 0x23aa88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23aa88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23aa8c:
    // 0x23aa8c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x23aa8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23aa90:
    // 0x23aa90: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x23aa90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23aa94:
    // 0x23aa94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x23aa94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23aa98:
    // 0x23aa98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23aa98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23aa9c:
    // 0x23aa9c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x23aa9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23aaa0:
    // 0x23aaa0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x23aaa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23aaa4:
    // 0x23aaa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23aaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23aaa8:
    // 0x23aaa8: 0x3e00008  jr          $ra
label_23aaac:
    if (ctx->pc == 0x23AAACu) {
        ctx->pc = 0x23AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAA8u;
        // 0x23aaac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AAB0u;
        goto label_fallthrough_0x23aaa8;
    }
    ctx->pc = 0x23AAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAA8u;
        // 0x23aaac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23aaa8:
    ctx->pc = 0x23AAB0u;
}

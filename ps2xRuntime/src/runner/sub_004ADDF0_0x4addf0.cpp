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

// Function: sub_004ADDF0
// Address: 0x4addf0 - 0x4ade88
void sub_004ADDF0_0x4addf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADDF0_0x4addf0");
#endif

    switch (ctx->pc) {
        case 0x4addf0u: goto label_4addf0;
        case 0x4addf4u: goto label_4addf4;
        case 0x4addf8u: goto label_4addf8;
        case 0x4addfcu: goto label_4addfc;
        case 0x4ade00u: goto label_4ade00;
        case 0x4ade04u: goto label_4ade04;
        case 0x4ade08u: goto label_4ade08;
        case 0x4ade0cu: goto label_4ade0c;
        case 0x4ade10u: goto label_4ade10;
        case 0x4ade14u: goto label_4ade14;
        case 0x4ade18u: goto label_4ade18;
        case 0x4ade1cu: goto label_4ade1c;
        case 0x4ade20u: goto label_4ade20;
        case 0x4ade24u: goto label_4ade24;
        case 0x4ade28u: goto label_4ade28;
        case 0x4ade2cu: goto label_4ade2c;
        case 0x4ade30u: goto label_4ade30;
        case 0x4ade34u: goto label_4ade34;
        case 0x4ade38u: goto label_4ade38;
        case 0x4ade3cu: goto label_4ade3c;
        case 0x4ade40u: goto label_4ade40;
        case 0x4ade44u: goto label_4ade44;
        case 0x4ade48u: goto label_4ade48;
        case 0x4ade4cu: goto label_4ade4c;
        case 0x4ade50u: goto label_4ade50;
        case 0x4ade54u: goto label_4ade54;
        case 0x4ade58u: goto label_4ade58;
        case 0x4ade5cu: goto label_4ade5c;
        case 0x4ade60u: goto label_4ade60;
        case 0x4ade64u: goto label_4ade64;
        case 0x4ade68u: goto label_4ade68;
        case 0x4ade6cu: goto label_4ade6c;
        case 0x4ade70u: goto label_4ade70;
        case 0x4ade74u: goto label_4ade74;
        case 0x4ade78u: goto label_4ade78;
        case 0x4ade7cu: goto label_4ade7c;
        case 0x4ade80u: goto label_4ade80;
        case 0x4ade84u: goto label_4ade84;
        default: break;
    }

    ctx->pc = 0x4addf0u;

label_4addf0:
    // 0x4addf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4addf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4addf4:
    // 0x4addf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4addf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4addf8:
    // 0x4addf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4addf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4addfc:
    // 0x4addfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4addfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ade00:
    // 0x4ade00: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4ade00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ade04:
    // 0x4ade04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ade04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ade08:
    // 0x4ade08: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4ade08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_4ade0c:
    // 0x4ade0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4ade10:
    if (ctx->pc == 0x4ADE10u) {
        ctx->pc = 0x4ADE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE0Cu;
        // 0x4ade10: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADE14u;
        goto label_4ade14;
    }
    ctx->pc = 0x4ADE0Cu;
    {
        const bool branch_taken_0x4ade0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ade0c) {
            ctx->pc = 0x4ADE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ADE0Cu;
            // 0x4ade10: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ADE24u;
            goto label_4ade24;
        }
    }
    ctx->pc = 0x4ADE14u;
label_4ade14:
    // 0x4ade14: 0xc12cdc0  jal         func_4B3700
label_4ade18:
    if (ctx->pc == 0x4ADE18u) {
        ctx->pc = 0x4ADE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE14u;
        // 0x4ade18: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADE1Cu;
        goto label_4ade1c;
    }
    ctx->pc = 0x4ADE14u;
    SET_GPR_U32(ctx, 31, 0x4ADE1Cu);
    ctx->pc = 0x4ADE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADE14u;
    // 0x4ade18: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3700u, 0x4ADE14u, 0x4ADE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADE1Cu;
label_4ade1c:
    // 0x4ade1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_4ade20:
    if (ctx->pc == 0x4ADE20u) {
        ctx->pc = 0x4ADE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE1Cu;
        // 0x4ade20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADE24u;
        goto label_4ade24;
    }
    ctx->pc = 0x4ADE1Cu;
    {
        const bool branch_taken_0x4ade1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE1Cu;
        // 0x4ade20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ade1c) {
            ctx->pc = 0x4ADE38u;
            goto label_4ade38;
        }
    }
    ctx->pc = 0x4ADE24u;
label_4ade24:
    // 0x4ade24: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4ade24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4ade28:
    // 0x4ade28: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4ade28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4ade2c:
    // 0x4ade2c: 0x40f809  jalr        $v0
label_4ade30:
    if (ctx->pc == 0x4ADE30u) {
        ctx->pc = 0x4ADE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE2Cu;
        // 0x4ade30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADE34u;
        goto label_4ade34;
    }
    ctx->pc = 0x4ADE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4ADE34u);
        ctx->pc = 0x4ADE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE2Cu;
        // 0x4ade30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADE2Cu, 0x4ADE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4ADE34u;
label_4ade34:
    // 0x4ade34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4ade34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ade38:
    // 0x4ade38: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4ade38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4ade3c:
    // 0x4ade3c: 0xa202001a  sb          $v0, 0x1A($s0)
    ctx->pc = 0x4ade3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ade40:
    // 0x4ade40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ade40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ade44:
    // 0x4ade44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ade44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ade48:
    // 0x4ade48: 0x3e00008  jr          $ra
label_4ade4c:
    if (ctx->pc == 0x4ADE4Cu) {
        ctx->pc = 0x4ADE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE48u;
        // 0x4ade4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADE50u;
        goto label_4ade50;
    }
    ctx->pc = 0x4ADE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE48u;
        // 0x4ade4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADE50u;
label_4ade50:
    // 0x4ade50: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4ade50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ade54:
    // 0x4ade54: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x4ade54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_4ade58:
    // 0x4ade58: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4ade58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4ade5c:
    // 0x4ade5c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x4ade5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_4ade60:
    // 0x4ade60: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4ade60u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4ade64:
    // 0x4ade64: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_4ade68:
    if (ctx->pc == 0x4ADE68u) {
        ctx->pc = 0x4ADE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE64u;
        // 0x4ade68: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADE6Cu;
        goto label_4ade6c;
    }
    ctx->pc = 0x4ADE64u;
    {
        const bool branch_taken_0x4ade64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ade64) {
            ctx->pc = 0x4ADE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ADE64u;
            // 0x4ade68: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ADE78u;
            goto label_4ade78;
        }
    }
    ctx->pc = 0x4ADE6Cu;
label_4ade6c:
    // 0x4ade6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ade6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ade70:
    // 0x4ade70: 0x10000002  b           . + 4 + (0x2 << 2)
label_4ade74:
    if (ctx->pc == 0x4ADE74u) {
        ctx->pc = 0x4ADE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE70u;
        // 0x4ade74: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADE78u;
        goto label_4ade78;
    }
    ctx->pc = 0x4ADE70u;
    {
        const bool branch_taken_0x4ade70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE70u;
        // 0x4ade74: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ade70) {
            ctx->pc = 0x4ADE7Cu;
            goto label_4ade7c;
        }
    }
    ctx->pc = 0x4ADE78u;
label_4ade78:
    // 0x4ade78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4ade78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ade7c:
    // 0x4ade7c: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x4ade7cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_4ade80:
    // 0x4ade80: 0x3e00008  jr          $ra
label_4ade84:
    if (ctx->pc == 0x4ADE84u) {
        ctx->pc = 0x4ADE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE80u;
        // 0x4ade84: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADE88u;
        goto label_fallthrough_0x4ade80;
    }
    ctx->pc = 0x4ADE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE80u;
        // 0x4ade84: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4ade80:
    ctx->pc = 0x4ADE88u;
}

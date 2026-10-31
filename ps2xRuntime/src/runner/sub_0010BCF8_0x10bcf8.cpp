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

// Function: sub_0010BCF8
// Address: 0x10bcf8 - 0x10bd70
void sub_0010BCF8_0x10bcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BCF8_0x10bcf8");
#endif

    switch (ctx->pc) {
        case 0x10bcf8u: goto label_10bcf8;
        case 0x10bcfcu: goto label_10bcfc;
        case 0x10bd00u: goto label_10bd00;
        case 0x10bd04u: goto label_10bd04;
        case 0x10bd08u: goto label_10bd08;
        case 0x10bd0cu: goto label_10bd0c;
        case 0x10bd10u: goto label_10bd10;
        case 0x10bd14u: goto label_10bd14;
        case 0x10bd18u: goto label_10bd18;
        case 0x10bd1cu: goto label_10bd1c;
        case 0x10bd20u: goto label_10bd20;
        case 0x10bd24u: goto label_10bd24;
        case 0x10bd28u: goto label_10bd28;
        case 0x10bd2cu: goto label_10bd2c;
        case 0x10bd30u: goto label_10bd30;
        case 0x10bd34u: goto label_10bd34;
        case 0x10bd38u: goto label_10bd38;
        case 0x10bd3cu: goto label_10bd3c;
        case 0x10bd40u: goto label_10bd40;
        case 0x10bd44u: goto label_10bd44;
        case 0x10bd48u: goto label_10bd48;
        case 0x10bd4cu: goto label_10bd4c;
        case 0x10bd50u: goto label_10bd50;
        case 0x10bd54u: goto label_10bd54;
        case 0x10bd58u: goto label_10bd58;
        case 0x10bd5cu: goto label_10bd5c;
        case 0x10bd60u: goto label_10bd60;
        case 0x10bd64u: goto label_10bd64;
        case 0x10bd68u: goto label_10bd68;
        case 0x10bd6cu: goto label_10bd6c;
        default: break;
    }

    ctx->pc = 0x10bcf8u;

label_10bcf8:
    // 0x10bcf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10bcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10bcfc:
    // 0x10bcfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10bcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10bd00:
    // 0x10bd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10bd04:
    // 0x10bd04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10bd04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10bd08:
    // 0x10bd08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10bd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_10bd0c:
    // 0x10bd0c: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x10bd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_10bd10:
    // 0x10bd10: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_10bd14:
    if (ctx->pc == 0x10BD14u) {
        ctx->pc = 0x10BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD10u;
        // 0x10bd14: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD18u;
        goto label_10bd18;
    }
    ctx->pc = 0x10BD10u;
    {
        const bool branch_taken_0x10bd10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD10u;
        // 0x10bd14: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd10) {
            ctx->pc = 0x10BD50u;
            goto label_10bd50;
        }
    }
    ctx->pc = 0x10BD18u;
label_10bd18:
    // 0x10bd18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10bd1c:
    // 0x10bd1c: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x10bd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_10bd20:
    // 0x10bd20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10bd24:
    // 0x10bd24: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x10bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_10bd28:
    // 0x10bd28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10bd2c:
    // 0x10bd2c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x10bd2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_10bd30:
    // 0x10bd30: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x10bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_10bd34:
    // 0x10bd34: 0x40f809  jalr        $v0
label_10bd38:
    if (ctx->pc == 0x10BD38u) {
        ctx->pc = 0x10BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD34u;
        // 0x10bd38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD3Cu;
        goto label_10bd3c;
    }
    ctx->pc = 0x10BD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10BD3Cu);
        ctx->pc = 0x10BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD34u;
        // 0x10bd38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BD34u, 0x10BD3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BD3Cu;
label_10bd3c:
    // 0x10bd3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_10bd40:
    // 0x10bd40: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x10bd40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_10bd44:
    // 0x10bd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10bd48:
    // 0x10bd48: 0x10000003  b           . + 4 + (0x3 << 2)
label_10bd4c:
    if (ctx->pc == 0x10BD4Cu) {
        ctx->pc = 0x10BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD48u;
        // 0x10bd4c: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD50u;
        goto label_10bd50;
    }
    ctx->pc = 0x10BD48u;
    {
        const bool branch_taken_0x10bd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD48u;
        // 0x10bd4c: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd48) {
            ctx->pc = 0x10BD58u;
            goto label_10bd58;
        }
    }
    ctx->pc = 0x10BD50u;
label_10bd50:
    // 0x10bd50: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x10bd50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_10bd54:
    // 0x10bd54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10bd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bd58:
    // 0x10bd58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10bd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10bd5c:
    // 0x10bd5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10bd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10bd60:
    // 0x10bd60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bd64:
    // 0x10bd64: 0x3e00008  jr          $ra
label_10bd68:
    if (ctx->pc == 0x10BD68u) {
        ctx->pc = 0x10BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD64u;
        // 0x10bd68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD6Cu;
        goto label_10bd6c;
    }
    ctx->pc = 0x10BD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD64u;
        // 0x10bd68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BD6Cu;
label_10bd6c:
    // 0x10bd6c: 0x0  nop
    ctx->pc = 0x10bd6cu;
    // NOP
    ctx->pc = 0x10bd70u;
}

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

// Function: sub_0033CF00
// Address: 0x33cf00 - 0x33cf68
void sub_0033CF00_0x33cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CF00_0x33cf00");
#endif

    switch (ctx->pc) {
        case 0x33cf00u: goto label_33cf00;
        case 0x33cf04u: goto label_33cf04;
        case 0x33cf08u: goto label_33cf08;
        case 0x33cf0cu: goto label_33cf0c;
        case 0x33cf10u: goto label_33cf10;
        case 0x33cf14u: goto label_33cf14;
        case 0x33cf18u: goto label_33cf18;
        case 0x33cf1cu: goto label_33cf1c;
        case 0x33cf20u: goto label_33cf20;
        case 0x33cf24u: goto label_33cf24;
        case 0x33cf28u: goto label_33cf28;
        case 0x33cf2cu: goto label_33cf2c;
        case 0x33cf30u: goto label_33cf30;
        case 0x33cf34u: goto label_33cf34;
        case 0x33cf38u: goto label_33cf38;
        case 0x33cf3cu: goto label_33cf3c;
        case 0x33cf40u: goto label_33cf40;
        case 0x33cf44u: goto label_33cf44;
        case 0x33cf48u: goto label_33cf48;
        case 0x33cf4cu: goto label_33cf4c;
        case 0x33cf50u: goto label_33cf50;
        case 0x33cf54u: goto label_33cf54;
        case 0x33cf58u: goto label_33cf58;
        case 0x33cf5cu: goto label_33cf5c;
        case 0x33cf60u: goto label_33cf60;
        case 0x33cf64u: goto label_33cf64;
        default: break;
    }

    ctx->pc = 0x33cf00u;

label_33cf00:
    // 0x33cf00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33cf04:
    // 0x33cf04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33cf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_33cf08:
    // 0x33cf08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33cf0c:
    // 0x33cf0c: 0xc0d01c0  jal         func_340700
label_33cf10:
    if (ctx->pc == 0x33CF10u) {
        ctx->pc = 0x33CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF0Cu;
        // 0x33cf10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CF14u;
        goto label_33cf14;
    }
    ctx->pc = 0x33CF0Cu;
    SET_GPR_U32(ctx, 31, 0x33CF14u);
    ctx->pc = 0x33CF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CF0Cu;
    // 0x33cf10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x33CF0Cu, 0x33CF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF14u;
label_33cf14:
    // 0x33cf14: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x33cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_33cf18:
    // 0x33cf18: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_33cf1c:
    if (ctx->pc == 0x33CF1Cu) {
        ctx->pc = 0x33CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF18u;
        // 0x33cf1c: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CF20u;
        goto label_33cf20;
    }
    ctx->pc = 0x33CF18u;
    {
        const bool branch_taken_0x33cf18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cf18) {
            ctx->pc = 0x33CF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CF18u;
            // 0x33cf1c: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CF30u;
            goto label_33cf30;
        }
    }
    ctx->pc = 0x33CF20u;
label_33cf20:
    // 0x33cf20: 0x94620032  lhu         $v0, 0x32($v1)
    ctx->pc = 0x33cf20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
label_33cf24:
    // 0x33cf24: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x33cf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_33cf28:
    // 0x33cf28: 0xa4620032  sh          $v0, 0x32($v1)
    ctx->pc = 0x33cf28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 50), (uint16_t)GPR_U32(ctx, 2));
label_33cf2c:
    // 0x33cf2c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x33cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_33cf30:
    // 0x33cf30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33cf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cf34:
    // 0x33cf34: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x33cf34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_33cf38:
    // 0x33cf38: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x33cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_33cf3c:
    // 0x33cf3c: 0x60f809  jalr        $v1
label_33cf40:
    if (ctx->pc == 0x33CF40u) {
        ctx->pc = 0x33CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF3Cu;
        // 0x33cf40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CF44u;
        goto label_33cf44;
    }
    ctx->pc = 0x33CF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33CF44u);
        ctx->pc = 0x33CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF3Cu;
        // 0x33cf40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CF3Cu, 0x33CF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33CF44u;
label_33cf44:
    // 0x33cf44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33cf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33cf48:
    // 0x33cf48: 0xc0d069a  jal         func_341A68
label_33cf4c:
    if (ctx->pc == 0x33CF4Cu) {
        ctx->pc = 0x33CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF48u;
        // 0x33cf4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CF50u;
        goto label_33cf50;
    }
    ctx->pc = 0x33CF48u;
    SET_GPR_U32(ctx, 31, 0x33CF50u);
    ctx->pc = 0x33CF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CF48u;
    // 0x33cf4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A68u, 0x33CF48u, 0x33CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF50u;
label_33cf50:
    // 0x33cf50: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x33cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_33cf54:
    // 0x33cf54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33cf54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33cf58:
    // 0x33cf58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33cf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33cf5c:
    // 0x33cf5c: 0x3e00008  jr          $ra
label_33cf60:
    if (ctx->pc == 0x33CF60u) {
        ctx->pc = 0x33CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF5Cu;
        // 0x33cf60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CF64u;
        goto label_33cf64;
    }
    ctx->pc = 0x33CF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF5Cu;
        // 0x33cf60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CF64u;
label_33cf64:
    // 0x33cf64: 0x0  nop
    ctx->pc = 0x33cf64u;
    // NOP
    ctx->pc = 0x33cf68u;
}

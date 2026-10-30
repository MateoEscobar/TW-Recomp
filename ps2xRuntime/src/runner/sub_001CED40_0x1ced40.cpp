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

// Function: sub_001CED40
// Address: 0x1ced40 - 0x1ced88
void sub_001CED40_0x1ced40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CED40_0x1ced40");
#endif

    switch (ctx->pc) {
        case 0x1ced40u: goto label_1ced40;
        case 0x1ced44u: goto label_1ced44;
        case 0x1ced48u: goto label_1ced48;
        case 0x1ced4cu: goto label_1ced4c;
        case 0x1ced50u: goto label_1ced50;
        case 0x1ced54u: goto label_1ced54;
        case 0x1ced58u: goto label_1ced58;
        case 0x1ced5cu: goto label_1ced5c;
        case 0x1ced60u: goto label_1ced60;
        case 0x1ced64u: goto label_1ced64;
        case 0x1ced68u: goto label_1ced68;
        case 0x1ced6cu: goto label_1ced6c;
        case 0x1ced70u: goto label_1ced70;
        case 0x1ced74u: goto label_1ced74;
        case 0x1ced78u: goto label_1ced78;
        case 0x1ced7cu: goto label_1ced7c;
        case 0x1ced80u: goto label_1ced80;
        case 0x1ced84u: goto label_1ced84;
        default: break;
    }

    ctx->pc = 0x1ced40u;

label_1ced40:
    // 0x1ced40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ced40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ced44:
    // 0x1ced44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ced44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ced48:
    // 0x1ced48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ced48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ced4c:
    // 0x1ced4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ced4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ced50:
    // 0x1ced50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ced50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ced54:
    // 0x1ced54: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ced54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ced58:
    // 0x1ced58: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ced58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ced5c:
    // 0x1ced5c: 0x40f809  jalr        $v0
label_1ced60:
    if (ctx->pc == 0x1CED60u) {
        ctx->pc = 0x1CED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED5Cu;
        // 0x1ced60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CED64u;
        goto label_1ced64;
    }
    ctx->pc = 0x1CED5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CED64u);
        ctx->pc = 0x1CED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED5Cu;
        // 0x1ced60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CED5Cu, 0x1CED64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CED64u;
label_1ced64:
    // 0x1ced64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ced68:
    if (ctx->pc == 0x1CED68u) {
        ctx->pc = 0x1CED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED64u;
        // 0x1ced68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CED6Cu;
        goto label_1ced6c;
    }
    ctx->pc = 0x1CED64u;
    {
        const bool branch_taken_0x1ced64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ced64) {
            ctx->pc = 0x1CED68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CED64u;
            // 0x1ced68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CED78u;
            goto label_1ced78;
        }
    }
    ctx->pc = 0x1CED6Cu;
label_1ced6c:
    // 0x1ced6c: 0xc06e552  jal         func_1B9548
label_1ced70:
    if (ctx->pc == 0x1CED70u) {
        ctx->pc = 0x1CED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED6Cu;
        // 0x1ced70: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CED74u;
        goto label_1ced74;
    }
    ctx->pc = 0x1CED6Cu;
    SET_GPR_U32(ctx, 31, 0x1CED74u);
    ctx->pc = 0x1CED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED6Cu;
    // 0x1ced70: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1CED6Cu, 0x1CED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED74u;
label_1ced74:
    // 0x1ced74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ced74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ced78:
    // 0x1ced78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ced78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ced7c:
    // 0x1ced7c: 0x3e00008  jr          $ra
label_1ced80:
    if (ctx->pc == 0x1CED80u) {
        ctx->pc = 0x1CED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED7Cu;
        // 0x1ced80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CED84u;
        goto label_1ced84;
    }
    ctx->pc = 0x1CED7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED7Cu;
        // 0x1ced80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CED7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CED84u;
label_1ced84:
    // 0x1ced84: 0x0  nop
    ctx->pc = 0x1ced84u;
    // NOP
    ctx->pc = 0x1ced88u;
}

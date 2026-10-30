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

// Function: sub_002FDB28
// Address: 0x2fdb28 - 0x2fdb90
void sub_002FDB28_0x2fdb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDB28_0x2fdb28");
#endif

    switch (ctx->pc) {
        case 0x2fdb54u: goto label_2fdb54;
        case 0x2fdb68u: goto label_2fdb68;
        default: break;
    }

    ctx->pc = 0x2fdb28u;

    // 0x2fdb28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdb2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fdb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdb30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fdb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fdb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdb38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fdb38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdb3c: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x2fdb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fdb40: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2FDB40u;
    {
        const bool branch_taken_0x2fdb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fdb40) {
            ctx->pc = 0x2FDB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDB40u;
            // 0x2fdb44: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDB78u;
            goto label_2fdb78;
        }
    }
    ctx->pc = 0x2FDB48u;
    // 0x2fdb48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fdb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fdb4c: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2FDB4Cu;
    SET_GPR_U32(ctx, 31, 0x2FDB54u);
    ctx->pc = 0x2FDB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDB4Cu;
    // 0x2fdb50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2FDB4Cu, 0x2FDB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDB54u;
label_2fdb54:
    // 0x2fdb54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fdb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fdb58: 0x3c0505c0  lui         $a1, 0x5C0
    ctx->pc = 0x2fdb58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1472 << 16));
    // 0x2fdb5c: 0x34a5221f  ori         $a1, $a1, 0x221F
    ctx->pc = 0x2fdb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8735);
    // 0x2fdb60: 0xc089998  jal         func_226660
    ctx->pc = 0x2FDB60u;
    SET_GPR_U32(ctx, 31, 0x2FDB68u);
    ctx->pc = 0x2FDB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDB60u;
    // 0x2fdb64: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FDB60u, 0x2FDB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDB68u;
label_2fdb68:
    // 0x2fdb68: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2fdb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fdb6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fdb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fdb70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDB70u;
    {
        const bool branch_taken_0x2fdb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB70u;
        // 0x2fdb74: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdb70) {
            ctx->pc = 0x2FDB7Cu;
            goto label_2fdb7c;
        }
    }
    ctx->pc = 0x2FDB78u;
label_2fdb78:
    // 0x2fdb78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fdb78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fdb7c:
    // 0x2fdb7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fdb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdb84: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB84u;
        // 0x2fdb88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB8Cu;
    // 0x2fdb8c: 0x0  nop
    ctx->pc = 0x2fdb8cu;
    // NOP
    ctx->pc = 0x2fdb90u;
}

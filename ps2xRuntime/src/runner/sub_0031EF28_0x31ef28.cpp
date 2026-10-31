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

// Function: sub_0031EF28
// Address: 0x31ef28 - 0x31ef78
void sub_0031EF28_0x31ef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EF28_0x31ef28");
#endif

    switch (ctx->pc) {
        case 0x31ef3cu: goto label_31ef3c;
        case 0x31ef58u: goto label_31ef58;
        case 0x31ef64u: goto label_31ef64;
        default: break;
    }

    ctx->pc = 0x31ef28u;

    // 0x31ef28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ef28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ef2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31ef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31ef30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ef30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ef34: 0xc0c7b50  jal         func_31ED40
    ctx->pc = 0x31EF34u;
    SET_GPR_U32(ctx, 31, 0x31EF3Cu);
    ctx->pc = 0x31EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF34u;
    // 0x31ef38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED40u, 0x31EF34u, 0x31EF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF3Cu;
label_31ef3c:
    // 0x31ef3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31ef40: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x31ef40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x31ef44: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x31ef44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31ef48: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x31ef48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x31ef4c: 0x24c61620  addiu       $a2, $a2, 0x1620
    ctx->pc = 0x31ef4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5664));
    // 0x31ef50: 0xc05905e  jal         func_164178
    ctx->pc = 0x31EF50u;
    SET_GPR_U32(ctx, 31, 0x31EF58u);
    ctx->pc = 0x31EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF50u;
    // 0x31ef54: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x31EF50u, 0x31EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF58u;
label_31ef58:
    // 0x31ef58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31ef5c: 0xc059750  jal         func_165D40
    ctx->pc = 0x31EF5Cu;
    SET_GPR_U32(ctx, 31, 0x31EF64u);
    ctx->pc = 0x31EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF5Cu;
    // 0x31ef60: 0x24050088  addiu       $a1, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D40u, 0x31EF5Cu, 0x31EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF64u;
label_31ef64:
    // 0x31ef64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31ef64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ef68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ef68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ef6c: 0x3e00008  jr          $ra
    ctx->pc = 0x31EF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF6Cu;
        // 0x31ef70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EF74u;
    // 0x31ef74: 0x0  nop
    ctx->pc = 0x31ef74u;
    // NOP
    ctx->pc = 0x31ef78u;
}

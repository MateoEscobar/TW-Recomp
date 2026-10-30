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

// Function: sub_00323060
// Address: 0x323060 - 0x3230a0
void sub_00323060_0x323060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323060_0x323060");
#endif

    switch (ctx->pc) {
        case 0x323088u: goto label_323088;
        default: break;
    }

    ctx->pc = 0x323060u;

    // 0x323060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323064: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32306c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32306cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323070: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x323070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x323074: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x323074u;
    {
        const bool branch_taken_0x323074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323074) {
            ctx->pc = 0x323078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323074u;
            // 0x323078: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323090u;
            goto label_323090;
        }
    }
    ctx->pc = 0x32307Cu;
    // 0x32307c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32307cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323080: 0xc059856  jal         func_166158
    ctx->pc = 0x323080u;
    SET_GPR_U32(ctx, 31, 0x323088u);
    ctx->pc = 0x323084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323080u;
    // 0x323084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x323080u, 0x323088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323088u;
label_323088:
    // 0x323088: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x323088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x32308c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32308cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_323090:
    // 0x323090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323094: 0x3e00008  jr          $ra
    ctx->pc = 0x323094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323094u;
        // 0x323098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32309Cu;
    // 0x32309c: 0x0  nop
    ctx->pc = 0x32309cu;
    // NOP
    ctx->pc = 0x3230a0u;
}

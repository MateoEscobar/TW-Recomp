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

// Function: sub_00413728
// Address: 0x413728 - 0x413770
void sub_00413728_0x413728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413728_0x413728");
#endif

    switch (ctx->pc) {
        case 0x413748u: goto label_413748;
        case 0x413750u: goto label_413750;
        default: break;
    }

    ctx->pc = 0x413728u;

    // 0x413728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x413728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41372c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41372cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x413730: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x413730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x413734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x413734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x413738: 0x24503a10  addiu       $s0, $v0, 0x3A10
    ctx->pc = 0x413738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14864));
    // 0x41373c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41373cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x413740: 0x26110540  addiu       $s1, $s0, 0x540
    ctx->pc = 0x413740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
    // 0x413744: 0x0  nop
    ctx->pc = 0x413744u;
    // NOP
label_413748:
    // 0x413748: 0xc104f64  jal         func_413D90
    ctx->pc = 0x413748u;
    SET_GPR_U32(ctx, 31, 0x413750u);
    ctx->pc = 0x41374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413748u;
    // 0x41374c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413D90u, 0x413748u, 0x413750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413750u;
label_413750:
    // 0x413750: 0x26100150  addiu       $s0, $s0, 0x150
    ctx->pc = 0x413750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x413754: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x413754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x413758: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x413758u;
    {
        const bool branch_taken_0x413758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413758u;
        // 0x41375c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413758) {
            ctx->pc = 0x413748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413748;
        }
    }
    ctx->pc = 0x413760u;
    // 0x413760: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x413760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x413764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x413764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x413768: 0x3e00008  jr          $ra
    ctx->pc = 0x413768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413768u;
        // 0x41376c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413770u;
}

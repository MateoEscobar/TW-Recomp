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

// Function: sub_0023A210
// Address: 0x23a210 - 0x23a258
void sub_0023A210_0x23a210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A210_0x23a210");
#endif

    switch (ctx->pc) {
        case 0x23a22cu: goto label_23a22c;
        case 0x23a234u: goto label_23a234;
        case 0x23a244u: goto label_23a244;
        default: break;
    }

    ctx->pc = 0x23a210u;

    // 0x23a210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a214: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23a214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23a218: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23a218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23a21c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23a21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a220: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a224: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23A224u;
    SET_GPR_U32(ctx, 31, 0x23A22Cu);
    ctx->pc = 0x23A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A224u;
    // 0x23a228: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23A224u, 0x23A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A22Cu;
label_23a22c:
    // 0x23a22c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23A22Cu;
    SET_GPR_U32(ctx, 31, 0x23A234u);
    ctx->pc = 0x23A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A22Cu;
    // 0x23a230: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23A22Cu, 0x23A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A234u;
label_23a234:
    // 0x23a234: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A234u;
    {
        const bool branch_taken_0x23a234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A234u;
        // 0x23a238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a234) {
            ctx->pc = 0x23A244u;
            goto label_23a244;
        }
    }
    ctx->pc = 0x23A23Cu;
    // 0x23a23c: 0xc08c978  jal         func_2325E0
    ctx->pc = 0x23A23Cu;
    SET_GPR_U32(ctx, 31, 0x23A244u);
    ctx->pc = 0x23A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A23Cu;
    // 0x23a240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2325E0u, 0x23A23Cu, 0x23A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A244u;
label_23a244:
    // 0x23a244: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23a244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a24c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A24Cu;
        // 0x23a250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A254u;
    // 0x23a254: 0x0  nop
    ctx->pc = 0x23a254u;
    // NOP
    ctx->pc = 0x23a258u;
}

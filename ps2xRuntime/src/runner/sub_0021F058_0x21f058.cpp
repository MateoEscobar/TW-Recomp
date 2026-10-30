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

// Function: sub_0021F058
// Address: 0x21f058 - 0x21f0a0
void sub_0021F058_0x21f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F058_0x21f058");
#endif

    switch (ctx->pc) {
        case 0x21f078u: goto label_21f078;
        case 0x21f090u: goto label_21f090;
        default: break;
    }

    ctx->pc = 0x21f058u;

    // 0x21f058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f05c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21f05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21f060: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f068: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21f068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f06c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x21f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21f070: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x21F070u;
    SET_GPR_U32(ctx, 31, 0x21F078u);
    ctx->pc = 0x21F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F070u;
    // 0x21f074: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21F070u, 0x21F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F078u;
label_21f078:
    // 0x21f078: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F078u;
    {
        const bool branch_taken_0x21f078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F078u;
        // 0x21f07c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f078) {
            ctx->pc = 0x21F090u;
            goto label_21f090;
        }
    }
    ctx->pc = 0x21F080u;
    // 0x21f080: 0x8e050168  lw          $a1, 0x168($s0)
    ctx->pc = 0x21f080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21f084: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21f084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x21f088: 0xc0440c6  jal         func_110318
    ctx->pc = 0x21F088u;
    SET_GPR_U32(ctx, 31, 0x21F090u);
    ctx->pc = 0x21F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F088u;
    // 0x21f08c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x21F088u, 0x21F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F090u;
label_21f090:
    // 0x21f090: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21f090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f098: 0x3e00008  jr          $ra
    ctx->pc = 0x21F098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F098u;
        // 0x21f09c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F0A0u;
}

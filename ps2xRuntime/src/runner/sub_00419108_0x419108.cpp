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

// Function: sub_00419108
// Address: 0x419108 - 0x419150
void sub_00419108_0x419108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419108_0x419108");
#endif

    switch (ctx->pc) {
        case 0x419120u: goto label_419120;
        case 0x419138u: goto label_419138;
        default: break;
    }

    ctx->pc = 0x419108u;

    // 0x419108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41910c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x419110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x419110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419118: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x419118u;
    SET_GPR_U32(ctx, 31, 0x419120u);
    ctx->pc = 0x41911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419118u;
    // 0x41911c: 0x26040234  addiu       $a0, $s0, 0x234 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x419118u, 0x419120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419120u;
label_419120:
    // 0x419120: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x419120u;
    {
        const bool branch_taken_0x419120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419120u;
        // 0x419124: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419120) {
            ctx->pc = 0x419140u;
            goto label_419140;
        }
    }
    ctx->pc = 0x419128u;
    // 0x419128: 0x8e050234  lw          $a1, 0x234($s0)
    ctx->pc = 0x419128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x41912c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x41912cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x419130: 0xc0440c6  jal         func_110318
    ctx->pc = 0x419130u;
    SET_GPR_U32(ctx, 31, 0x419138u);
    ctx->pc = 0x419134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419130u;
    // 0x419134: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x419130u, 0x419138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419138u;
label_419138:
    // 0x419138: 0xa2000248  sb          $zero, 0x248($s0)
    ctx->pc = 0x419138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 584), (uint8_t)GPR_U32(ctx, 0));
    // 0x41913c: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x41913cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
label_419140:
    // 0x419140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x419140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419148: 0x3e00008  jr          $ra
    ctx->pc = 0x419148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419148u;
        // 0x41914c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419150u;
}

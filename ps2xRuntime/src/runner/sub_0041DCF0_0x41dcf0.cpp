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

// Function: sub_0041DCF0
// Address: 0x41dcf0 - 0x41dd40
void sub_0041DCF0_0x41dcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DCF0_0x41dcf0");
#endif

    switch (ctx->pc) {
        case 0x41dd0cu: goto label_41dd0c;
        case 0x41dd14u: goto label_41dd14;
        default: break;
    }

    ctx->pc = 0x41dcf0u;

    // 0x41dcf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41dcf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41dcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41dcf8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x41dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x41dcfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41dcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dd00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41dd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41dd04: 0xc0e4060  jal         func_390180
    ctx->pc = 0x41DD04u;
    SET_GPR_U32(ctx, 31, 0x41DD0Cu);
    ctx->pc = 0x41DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DD04u;
    // 0x41dd08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41DD04u, 0x41DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DD0Cu;
label_41dd0c:
    // 0x41dd0c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x41DD0Cu;
    SET_GPR_U32(ctx, 31, 0x41DD14u);
    ctx->pc = 0x41DD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DD0Cu;
    // 0x41dd10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x41DD0Cu, 0x41DD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DD14u;
label_41dd14:
    // 0x41dd14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x41dd14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dd18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x41DD18u;
    {
        const bool branch_taken_0x41dd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DD18u;
        // 0x41dd1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dd18) {
            ctx->pc = 0x41DD30u;
            goto label_41dd30;
        }
    }
    ctx->pc = 0x41DD20u;
    // 0x41dd20: 0x806401b0  lb          $a0, 0x1B0($v1)
    ctx->pc = 0x41dd20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x41dd24: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x41dd28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x41dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x41dd2c: 0xa0700418  sb          $s0, 0x418($v1)
    ctx->pc = 0x41dd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1048), (uint8_t)GPR_U32(ctx, 16));
label_41dd30:
    // 0x41dd30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41dd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41dd34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41dd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41dd38: 0x3e00008  jr          $ra
    ctx->pc = 0x41DD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DD38u;
        // 0x41dd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DD40u;
}

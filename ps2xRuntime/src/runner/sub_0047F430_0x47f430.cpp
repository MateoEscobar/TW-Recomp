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

// Function: sub_0047F430
// Address: 0x47f430 - 0x47f488
void sub_0047F430_0x47f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F430_0x47f430");
#endif

    switch (ctx->pc) {
        case 0x47f464u: goto label_47f464;
        default: break;
    }

    ctx->pc = 0x47f430u;

    // 0x47f430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47f430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47f434: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x47f434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x47f438: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47f438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x47f43c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47f43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47f440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47f440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47f444: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x47f444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x47f448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47f448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f44c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47f450: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47f450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47f454: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47F454u;
    {
        const bool branch_taken_0x47f454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f454) {
            ctx->pc = 0x47F464u;
            goto label_47f464;
        }
    }
    ctx->pc = 0x47F45Cu;
    // 0x47f45c: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x47F45Cu;
    SET_GPR_U32(ctx, 31, 0x47F464u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x47F45Cu, 0x47F464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F464u;
label_47f464:
    // 0x47f464: 0x8f838944  lw          $v1, -0x76BC($gp)
    ctx->pc = 0x47f464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936900)));
    // 0x47f468: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47f468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f46c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47f46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47f470: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x47f470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x47f474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47f474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47f478: 0xaf838944  sw          $v1, -0x76BC($gp)
    ctx->pc = 0x47f478u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936900), GPR_U32(ctx, 3));
    // 0x47f47c: 0x3e00008  jr          $ra
    ctx->pc = 0x47F47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F47Cu;
        // 0x47f480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F484u;
    // 0x47f484: 0x0  nop
    ctx->pc = 0x47f484u;
    // NOP
    ctx->pc = 0x47f488u;
}

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

// Function: sub_001B2610
// Address: 0x1b2610 - 0x1b2658
void sub_001B2610_0x1b2610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2610_0x1b2610");
#endif

    switch (ctx->pc) {
        case 0x1b2648u: goto label_1b2648;
        default: break;
    }

    ctx->pc = 0x1b2610u;

    // 0x1b2610: 0x24032940  addiu       $v1, $zero, 0x2940
    ctx->pc = 0x1b2610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10560));
    // 0x1b2614: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2618: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1b2618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b261c: 0xa33018  mult        $a2, $a1, $v1
    ctx->pc = 0x1b261cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1b2620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2624: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2628: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1b2628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b262c: 0x24c615d0  addiu       $a2, $a2, 0x15D0
    ctx->pc = 0x1b262cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5584));
    // 0x1b2630: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b2630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b2634: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b2634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b2638: 0xac4377b0  sw          $v1, 0x77B0($v0)
    ctx->pc = 0x1b2638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30640), GPR_U32(ctx, 3));
    // 0x1b263c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1b263cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1b2640: 0xc0710e2  jal         func_1C4388
    ctx->pc = 0x1B2640u;
    SET_GPR_U32(ctx, 31, 0x1B2648u);
    ctx->pc = 0x1B2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2640u;
    // 0x1b2644: 0xaca315d4  sw          $v1, 0x15D4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 5588), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4388u, 0x1B2640u, 0x1B2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2648u;
label_1b2648:
    // 0x1b2648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b264c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B264Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B264Cu;
        // 0x1b2650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B264Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2654u;
    // 0x1b2654: 0x0  nop
    ctx->pc = 0x1b2654u;
    // NOP
    ctx->pc = 0x1b2658u;
}

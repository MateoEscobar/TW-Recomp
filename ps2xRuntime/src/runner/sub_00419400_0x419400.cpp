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

// Function: sub_00419400
// Address: 0x419400 - 0x419460
void sub_00419400_0x419400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419400_0x419400");
#endif

    switch (ctx->pc) {
        case 0x419428u: goto label_419428;
        case 0x419434u: goto label_419434;
        case 0x419444u: goto label_419444;
        case 0x419450u: goto label_419450;
        default: break;
    }

    ctx->pc = 0x419400u;

    // 0x419400: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x419400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x419404: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x419408: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x419408u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x41940c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41940cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x419410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x419410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x419414: 0x24a5add8  addiu       $a1, $a1, -0x5228
    ctx->pc = 0x419414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946264));
    // 0x419418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x419418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41941c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41941cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419420: 0xc043f1c  jal         func_10FC70
    ctx->pc = 0x419420u;
    SET_GPR_U32(ctx, 31, 0x419428u);
    ctx->pc = 0x419424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419420u;
    // 0x419424: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x419420u, 0x419428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419428u;
label_419428:
    // 0x419428: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x419428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x41942c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x41942Cu;
    SET_GPR_U32(ctx, 31, 0x419434u);
    ctx->pc = 0x419430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41942Cu;
    // 0x419430: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x41942Cu, 0x419434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419434u;
label_419434:
    // 0x419434: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x419434u;
    {
        const bool branch_taken_0x419434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419434u;
        // 0x419438: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419434) {
            ctx->pc = 0x419454u;
            goto label_419454;
        }
    }
    ctx->pc = 0x41943Cu;
    // 0x41943c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x41943Cu;
    SET_GPR_U32(ctx, 31, 0x419444u);
    ctx->pc = 0x419440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41943Cu;
    // 0x419440: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x41943Cu, 0x419444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419444u;
label_419444:
    // 0x419444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x419444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419448: 0xc046cfe  jal         func_11B3F8
    ctx->pc = 0x419448u;
    SET_GPR_U32(ctx, 31, 0x419450u);
    ctx->pc = 0x41944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419448u;
    // 0x41944c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B3F8u, 0x419448u, 0x419450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419450u;
label_419450:
    // 0x419450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x419450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_419454:
    // 0x419454: 0x3e00008  jr          $ra
    ctx->pc = 0x419454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419454u;
        // 0x419458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41945Cu;
    // 0x41945c: 0x0  nop
    ctx->pc = 0x41945cu;
    // NOP
    ctx->pc = 0x419460u;
}

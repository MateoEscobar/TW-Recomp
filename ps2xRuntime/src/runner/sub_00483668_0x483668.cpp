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

// Function: sub_00483668
// Address: 0x483668 - 0x4836a8
void sub_00483668_0x483668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483668_0x483668");
#endif

    switch (ctx->pc) {
        case 0x483698u: goto label_483698;
        default: break;
    }

    ctx->pc = 0x483668u;

    // 0x483668: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x483668u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48366c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x48366cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483670: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x483670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483674: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x483674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x483678: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x483678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48367c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x48367cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483680: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x483680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x483684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x483688: 0x2444eaa8  addiu       $a0, $v0, -0x1558
    ctx->pc = 0x483688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961832));
    // 0x48368c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x48368cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483690: 0xc11feb2  jal         func_47FAC8
    ctx->pc = 0x483690u;
    SET_GPR_U32(ctx, 31, 0x483698u);
    ctx->pc = 0x483694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483690u;
    // 0x483694: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FAC8u, 0x483690u, 0x483698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483698u;
label_483698:
    // 0x483698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48369c: 0x3e00008  jr          $ra
    ctx->pc = 0x48369Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4836A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48369Cu;
        // 0x4836a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48369Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4836A4u;
    // 0x4836a4: 0x0  nop
    ctx->pc = 0x4836a4u;
    // NOP
    ctx->pc = 0x4836a8u;
}

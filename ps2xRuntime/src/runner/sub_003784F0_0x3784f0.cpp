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

// Function: sub_003784F0
// Address: 0x3784f0 - 0x378528
void sub_003784F0_0x3784f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003784F0_0x3784f0");
#endif

    switch (ctx->pc) {
        case 0x378504u: goto label_378504;
        case 0x37850cu: goto label_37850c;
        case 0x378514u: goto label_378514;
        default: break;
    }

    ctx->pc = 0x3784f0u;

    // 0x3784f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3784f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3784f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3784f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3784f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3784f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3784fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3784FCu;
    SET_GPR_U32(ctx, 31, 0x378504u);
    ctx->pc = 0x378500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3784FCu;
    // 0x378500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3784FCu, 0x378504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378504u;
label_378504:
    // 0x378504: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378504u;
    SET_GPR_U32(ctx, 31, 0x37850Cu);
    ctx->pc = 0x378508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378504u;
    // 0x378508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378504u, 0x37850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37850Cu;
label_37850c:
    // 0x37850c: 0xc0e37aa  jal         func_38DEA8
    ctx->pc = 0x37850Cu;
    SET_GPR_U32(ctx, 31, 0x378514u);
    ctx->pc = 0x378510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37850Cu;
    // 0x378510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DEA8u, 0x37850Cu, 0x378514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378514u;
label_378514:
    // 0x378514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37851c: 0x3e00008  jr          $ra
    ctx->pc = 0x37851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37851Cu;
        // 0x378520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378524u;
    // 0x378524: 0x0  nop
    ctx->pc = 0x378524u;
    // NOP
    ctx->pc = 0x378528u;
}

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

// Function: sub_003782F0
// Address: 0x3782f0 - 0x378320
void sub_003782F0_0x3782f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003782F0_0x3782f0");
#endif

    switch (ctx->pc) {
        case 0x378304u: goto label_378304;
        case 0x37830cu: goto label_37830c;
        default: break;
    }

    ctx->pc = 0x3782f0u;

    // 0x3782f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3782f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3782f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3782f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3782f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3782f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3782fc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3782FCu;
    SET_GPR_U32(ctx, 31, 0x378304u);
    ctx->pc = 0x378300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3782FCu;
    // 0x378300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3782FCu, 0x378304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378304u;
label_378304:
    // 0x378304: 0xc0e5dfe  jal         func_3977F8
    ctx->pc = 0x378304u;
    SET_GPR_U32(ctx, 31, 0x37830Cu);
    ctx->pc = 0x378308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378304u;
    // 0x378308: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3977F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3977F8u, 0x378304u, 0x37830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37830Cu;
label_37830c:
    // 0x37830c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37830cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378314: 0x3e00008  jr          $ra
    ctx->pc = 0x378314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378314u;
        // 0x378318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37831Cu;
    // 0x37831c: 0x0  nop
    ctx->pc = 0x37831cu;
    // NOP
    ctx->pc = 0x378320u;
}

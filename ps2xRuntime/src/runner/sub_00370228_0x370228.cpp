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

// Function: sub_00370228
// Address: 0x370228 - 0x370258
void sub_00370228_0x370228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370228_0x370228");
#endif

    switch (ctx->pc) {
        case 0x37023cu: goto label_37023c;
        case 0x370244u: goto label_370244;
        default: break;
    }

    ctx->pc = 0x370228u;

    // 0x370228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37022c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370234: 0xc1024c6  jal         func_409318
    ctx->pc = 0x370234u;
    SET_GPR_U32(ctx, 31, 0x37023Cu);
    ctx->pc = 0x370238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370234u;
    // 0x370238: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x370234u, 0x37023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37023Cu;
label_37023c:
    // 0x37023c: 0xc06d136  jal         func_1B44D8
    ctx->pc = 0x37023Cu;
    SET_GPR_U32(ctx, 31, 0x370244u);
    ctx->pc = 0x370240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37023Cu;
    // 0x370240: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44D8u, 0x37023Cu, 0x370244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370244u;
label_370244:
    // 0x370244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37024c: 0x3e00008  jr          $ra
    ctx->pc = 0x37024Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37024Cu;
        // 0x370250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37024Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370254u;
    // 0x370254: 0x0  nop
    ctx->pc = 0x370254u;
    // NOP
    ctx->pc = 0x370258u;
}

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

// Function: sub_00443740
// Address: 0x443740 - 0x443770
void sub_00443740_0x443740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443740_0x443740");
#endif

    switch (ctx->pc) {
        case 0x443754u: goto label_443754;
        default: break;
    }

    ctx->pc = 0x443740u;

    // 0x443740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x443740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x443744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x443744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x443748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x443748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44374c: 0xc110dce  jal         func_443738
    ctx->pc = 0x44374Cu;
    SET_GPR_U32(ctx, 31, 0x443754u);
    ctx->pc = 0x443750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44374Cu;
    // 0x443750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443738u, 0x44374Cu, 0x443754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443754u;
label_443754:
    // 0x443754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x443754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x443758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44375c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44375cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443760: 0x810f330  j           func_43CCC0
    ctx->pc = 0x443760u;
    ctx->pc = 0x443764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443760u;
    // 0x443764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CCC0u, 0x443760u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x443768u;
    // 0x443768: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x443768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x44376c: 0x0  nop
    ctx->pc = 0x44376cu;
    // NOP
    ctx->pc = 0x443770u;
}

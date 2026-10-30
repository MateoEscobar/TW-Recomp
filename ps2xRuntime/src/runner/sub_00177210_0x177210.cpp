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

// Function: sub_00177210
// Address: 0x177210 - 0x177240
void sub_00177210_0x177210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177210_0x177210");
#endif

    switch (ctx->pc) {
        case 0x177224u: goto label_177224;
        default: break;
    }

    ctx->pc = 0x177210u;

    // 0x177210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x177214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x177218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17721c: 0xc119ae6  jal         func_466B98
    ctx->pc = 0x17721Cu;
    SET_GPR_U32(ctx, 31, 0x177224u);
    ctx->pc = 0x177220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17721Cu;
    // 0x177220: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466B98u, 0x17721Cu, 0x177224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177224u;
label_177224:
    // 0x177224: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x177224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x177228: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x177228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17722c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17722cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177234: 0x3e00008  jr          $ra
    ctx->pc = 0x177234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177234u;
        // 0x177238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17723Cu;
    // 0x17723c: 0x0  nop
    ctx->pc = 0x17723cu;
    // NOP
    ctx->pc = 0x177240u;
}

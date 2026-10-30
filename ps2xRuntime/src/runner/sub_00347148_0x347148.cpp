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

// Function: sub_00347148
// Address: 0x347148 - 0x347170
void sub_00347148_0x347148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347148_0x347148");
#endif

    switch (ctx->pc) {
        case 0x347160u: goto label_347160;
        default: break;
    }

    ctx->pc = 0x347148u;

    // 0x347148: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x347148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34714c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34714cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347150: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x347150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x347158: 0xc0d1bee  jal         func_346FB8
    ctx->pc = 0x347158u;
    SET_GPR_U32(ctx, 31, 0x347160u);
    ctx->pc = 0x34715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347158u;
    // 0x34715c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346FB8u, 0x347158u, 0x347160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347160u;
label_347160:
    // 0x347160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347164: 0x3e00008  jr          $ra
    ctx->pc = 0x347164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347164u;
        // 0x347168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34716Cu;
    // 0x34716c: 0x0  nop
    ctx->pc = 0x34716cu;
    // NOP
    ctx->pc = 0x347170u;
}

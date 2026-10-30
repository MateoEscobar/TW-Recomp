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

// Function: sub_0035E258
// Address: 0x35e258 - 0x35e290
void sub_0035E258_0x35e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E258_0x35e258");
#endif

    switch (ctx->pc) {
        case 0x35e26cu: goto label_35e26c;
        case 0x35e274u: goto label_35e274;
        case 0x35e27cu: goto label_35e27c;
        default: break;
    }

    ctx->pc = 0x35e258u;

    // 0x35e258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e25c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e264: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E264u;
    SET_GPR_U32(ctx, 31, 0x35E26Cu);
    ctx->pc = 0x35E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E264u;
    // 0x35e268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E264u, 0x35E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E26Cu;
label_35e26c:
    // 0x35e26c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35E26Cu;
    SET_GPR_U32(ctx, 31, 0x35E274u);
    ctx->pc = 0x35E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E26Cu;
    // 0x35e270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35E26Cu, 0x35E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E274u;
label_35e274:
    // 0x35e274: 0xc0a51fc  jal         func_2947F0
    ctx->pc = 0x35E274u;
    SET_GPR_U32(ctx, 31, 0x35E27Cu);
    ctx->pc = 0x35E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E274u;
    // 0x35e278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2947F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2947F0u, 0x35E274u, 0x35E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E27Cu;
label_35e27c:
    // 0x35e27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e284: 0x3e00008  jr          $ra
    ctx->pc = 0x35E284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E284u;
        // 0x35e288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E28Cu;
    // 0x35e28c: 0x0  nop
    ctx->pc = 0x35e28cu;
    // NOP
    ctx->pc = 0x35e290u;
}

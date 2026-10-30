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

// Function: sub_003597E0
// Address: 0x3597e0 - 0x359840
void sub_003597E0_0x3597e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003597E0_0x3597e0");
#endif

    switch (ctx->pc) {
        case 0x359800u: goto label_359800;
        case 0x359808u: goto label_359808;
        case 0x35981cu: goto label_35981c;
        case 0x359828u: goto label_359828;
        default: break;
    }

    ctx->pc = 0x3597e0u;

    // 0x3597e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3597e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3597e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3597e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3597e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3597e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3597ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3597ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3597f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3597f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3597f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3597f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3597f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3597F8u;
    SET_GPR_U32(ctx, 31, 0x359800u);
    ctx->pc = 0x3597FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3597F8u;
    // 0x3597fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3597F8u, 0x359800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359800u;
label_359800:
    // 0x359800: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359800u;
    SET_GPR_U32(ctx, 31, 0x359808u);
    ctx->pc = 0x359804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359800u;
    // 0x359804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359800u, 0x359808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359808u;
label_359808:
    // 0x359808: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35980c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35980cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359814: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359814u;
    SET_GPR_U32(ctx, 31, 0x35981Cu);
    ctx->pc = 0x359818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359814u;
    // 0x359818: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359814u, 0x35981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35981Cu;
label_35981c:
    // 0x35981c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35981cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359820: 0xc08dcca  jal         func_237328
    ctx->pc = 0x359820u;
    SET_GPR_U32(ctx, 31, 0x359828u);
    ctx->pc = 0x359824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359820u;
    // 0x359824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237328u, 0x359820u, 0x359828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359828u;
label_359828:
    // 0x359828: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35982c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35982cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359838: 0x3e00008  jr          $ra
    ctx->pc = 0x359838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359838u;
        // 0x35983c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359840u;
}

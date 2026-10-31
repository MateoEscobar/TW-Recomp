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

// Function: sub_003590E0
// Address: 0x3590e0 - 0x359140
void sub_003590E0_0x3590e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003590E0_0x3590e0");
#endif

    switch (ctx->pc) {
        case 0x359100u: goto label_359100;
        case 0x359108u: goto label_359108;
        case 0x35911cu: goto label_35911c;
        case 0x359128u: goto label_359128;
        default: break;
    }

    ctx->pc = 0x3590e0u;

    // 0x3590e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3590e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3590e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3590e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3590e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3590e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3590ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3590ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3590f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3590f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3590f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3590f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3590f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3590F8u;
    SET_GPR_U32(ctx, 31, 0x359100u);
    ctx->pc = 0x3590FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590F8u;
    // 0x3590fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3590F8u, 0x359100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359100u;
label_359100:
    // 0x359100: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359100u;
    SET_GPR_U32(ctx, 31, 0x359108u);
    ctx->pc = 0x359104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359100u;
    // 0x359104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359100u, 0x359108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359108u;
label_359108:
    // 0x359108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35910c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35910cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359110: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359114: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359114u;
    SET_GPR_U32(ctx, 31, 0x35911Cu);
    ctx->pc = 0x359118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359114u;
    // 0x359118: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359114u, 0x35911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35911Cu;
label_35911c:
    // 0x35911c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35911cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359120: 0xc08de8a  jal         func_237A28
    ctx->pc = 0x359120u;
    SET_GPR_U32(ctx, 31, 0x359128u);
    ctx->pc = 0x359124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359120u;
    // 0x359124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237A28u, 0x359120u, 0x359128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359128u;
label_359128:
    // 0x359128: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35912c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35912cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359138: 0x3e00008  jr          $ra
    ctx->pc = 0x359138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359138u;
        // 0x35913c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359140u;
}

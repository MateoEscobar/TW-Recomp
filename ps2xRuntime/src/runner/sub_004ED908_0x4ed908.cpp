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

// Function: sub_004ED908
// Address: 0x4ed908 - 0x4ed948
void sub_004ED908_0x4ed908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED908_0x4ed908");
#endif

    switch (ctx->pc) {
        case 0x4ed924u: goto label_4ed924;
        case 0x4ed934u: goto label_4ed934;
        default: break;
    }

    ctx->pc = 0x4ed908u;

    // 0x4ed908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed90c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ed90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ed910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed914: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4ed914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed91c: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x4ED91Cu;
    SET_GPR_U32(ctx, 31, 0x4ED924u);
    ctx->pc = 0x4ED920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED91Cu;
    // 0x4ed920: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x4ED91Cu, 0x4ED924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED924u;
label_4ed924:
    // 0x4ed924: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ed924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed928: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ed928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed92c: 0xc10832e  jal         func_420CB8
    ctx->pc = 0x4ED92Cu;
    SET_GPR_U32(ctx, 31, 0x4ED934u);
    ctx->pc = 0x4ED930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED92Cu;
    // 0x4ed930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420CB8u, 0x4ED92Cu, 0x4ED934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED934u;
label_4ed934:
    // 0x4ed934: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ed934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed940: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED940u;
        // 0x4ed944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED948u;
}

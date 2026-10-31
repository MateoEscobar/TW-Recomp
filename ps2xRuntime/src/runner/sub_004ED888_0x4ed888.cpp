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

// Function: sub_004ED888
// Address: 0x4ed888 - 0x4ed8c8
void sub_004ED888_0x4ed888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED888_0x4ed888");
#endif

    switch (ctx->pc) {
        case 0x4ed8a4u: goto label_4ed8a4;
        case 0x4ed8b4u: goto label_4ed8b4;
        default: break;
    }

    ctx->pc = 0x4ed888u;

    // 0x4ed888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed88c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ed88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ed890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed894: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4ed894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed89c: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x4ED89Cu;
    SET_GPR_U32(ctx, 31, 0x4ED8A4u);
    ctx->pc = 0x4ED8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED89Cu;
    // 0x4ed8a0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x4ED89Cu, 0x4ED8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED8A4u;
label_4ed8a4:
    // 0x4ed8a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ed8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed8a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ed8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed8ac: 0xc1083ac  jal         func_420EB0
    ctx->pc = 0x4ED8ACu;
    SET_GPR_U32(ctx, 31, 0x4ED8B4u);
    ctx->pc = 0x4ED8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED8ACu;
    // 0x4ed8b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EB0u, 0x4ED8ACu, 0x4ED8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED8B4u;
label_4ed8b4:
    // 0x4ed8b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ed8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed8b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED8C0u;
        // 0x4ed8c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED8C8u;
}

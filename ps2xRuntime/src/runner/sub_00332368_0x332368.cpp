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

// Function: sub_00332368
// Address: 0x332368 - 0x3323a8
void sub_00332368_0x332368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332368_0x332368");
#endif

    switch (ctx->pc) {
        case 0x33238cu: goto label_33238c;
        default: break;
    }

    ctx->pc = 0x332368u;

    // 0x332368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33236c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x332370: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x332370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x332374: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x332374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x332378: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x332378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33237c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33237cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x332380: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x332380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332384: 0xc0cc862  jal         func_332188
    ctx->pc = 0x332384u;
    SET_GPR_U32(ctx, 31, 0x33238Cu);
    ctx->pc = 0x332388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332384u;
    // 0x332388: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332188u, 0x332384u, 0x33238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33238Cu;
label_33238c:
    // 0x33238c: 0xfc500008  sd          $s0, 0x8($v0)
    ctx->pc = 0x33238cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 16));
    // 0x332390: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x332390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332394: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x332394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x332398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33239c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33239cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3323a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3323A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3323A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323A0u;
        // 0x3323a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3323A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3323A8u;
}

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

// Function: sub_00420928
// Address: 0x420928 - 0x420970
void sub_00420928_0x420928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420928_0x420928");
#endif

    switch (ctx->pc) {
        case 0x420954u: goto label_420954;
        default: break;
    }

    ctx->pc = 0x420928u;

    // 0x420928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x420928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42092c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x42092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x420930: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x420930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x420934: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x420934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x420938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42093c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x42093cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420940: 0x8c435340  lw          $v1, 0x5340($v0)
    ctx->pc = 0x420940u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E5340u));
    // 0x420944: 0x34c63518  ori         $a2, $a2, 0x3518
    ctx->pc = 0x420944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13592);
    // 0x420948: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x420948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x42094c: 0xc10c190  jal         func_430640
    ctx->pc = 0x42094Cu;
    SET_GPR_U32(ctx, 31, 0x420954u);
    ctx->pc = 0x420950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42094Cu;
    // 0x420950: 0x8c65003c  lw          $a1, 0x3C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x42094Cu, 0x420954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420954u;
label_420954:
    // 0x420954: 0x8e030188  lw          $v1, 0x188($s0)
    ctx->pc = 0x420954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x420958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42095c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x42095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x420960: 0xae030188  sw          $v1, 0x188($s0)
    ctx->pc = 0x420960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 3));
    // 0x420964: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x420964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x420968: 0x3e00008  jr          $ra
    ctx->pc = 0x420968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420968u;
        // 0x42096c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420970u;
}

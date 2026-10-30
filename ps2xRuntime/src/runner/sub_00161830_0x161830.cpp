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

// Function: sub_00161830
// Address: 0x161830 - 0x161868
void sub_00161830_0x161830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161830_0x161830");
#endif

    switch (ctx->pc) {
        case 0x161850u: goto label_161850;
        default: break;
    }

    ctx->pc = 0x161830u;

    // 0x161830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161834: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x161834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x161838: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16183c: 0x24428938  addiu       $v0, $v0, -0x76C8
    ctx->pc = 0x16183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936888));
    // 0x161840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161848: 0xc05862e  jal         func_1618B8
    ctx->pc = 0x161848u;
    SET_GPR_U32(ctx, 31, 0x161850u);
    ctx->pc = 0x16184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161848u;
    // 0x16184c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1618B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1618B8u, 0x161848u, 0x161850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161850u;
label_161850:
    // 0x161850: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161858: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16185c: 0x3e00008  jr          $ra
    ctx->pc = 0x16185Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16185Cu;
        // 0x161860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16185Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161864u;
    // 0x161864: 0x0  nop
    ctx->pc = 0x161864u;
    // NOP
    ctx->pc = 0x161868u;
}

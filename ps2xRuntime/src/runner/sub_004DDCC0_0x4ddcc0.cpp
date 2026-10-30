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

// Function: sub_004DDCC0
// Address: 0x4ddcc0 - 0x4ddd28
void sub_004DDCC0_0x4ddcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDCC0_0x4ddcc0");
#endif

    switch (ctx->pc) {
        case 0x4ddd08u: goto label_4ddd08;
        case 0x4ddd14u: goto label_4ddd14;
        default: break;
    }

    ctx->pc = 0x4ddcc0u;

    // 0x4ddcc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ddcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ddcc4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ddcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ddcc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ddcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ddccc: 0x244284c8  addiu       $v0, $v0, -0x7B38
    ctx->pc = 0x4ddcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935752));
    // 0x4ddcd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ddcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ddcd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ddcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ddcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ddcdc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ddcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4ddce0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x4ddce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x4ddce4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4ddce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x4ddce8: 0x2463ee98  addiu       $v1, $v1, -0x1168
    ctx->pc = 0x4ddce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962840));
    // 0x4ddcec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ddcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ddcf0: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x4ddcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
    // 0x4ddcf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ddcf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddcf8: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x4ddcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x4ddcfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ddcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ddd00: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4DDD00u;
    SET_GPR_U32(ctx, 31, 0x4DDD08u);
    ctx->pc = 0x4DDD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDD00u;
    // 0x4ddd04: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4DDD00u, 0x4DDD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDD08u;
label_4ddd08:
    // 0x4ddd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ddd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddd0c: 0xc0557d2  jal         func_155F48
    ctx->pc = 0x4DDD0Cu;
    SET_GPR_U32(ctx, 31, 0x4DDD14u);
    ctx->pc = 0x4DDD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDD0Cu;
    // 0x4ddd10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F48u, 0x4DDD0Cu, 0x4DDD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDD14u;
label_4ddd14:
    // 0x4ddd14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ddd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ddd18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ddd18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ddd1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddd20: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDD20u;
        // 0x4ddd24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDD28u;
}

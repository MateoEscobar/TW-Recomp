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

// Function: sub_001D20C8
// Address: 0x1d20c8 - 0x1d2128
void sub_001D20C8_0x1d20c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D20C8_0x1d20c8");
#endif

    switch (ctx->pc) {
        case 0x1d2104u: goto label_1d2104;
        case 0x1d2110u: goto label_1d2110;
        default: break;
    }

    ctx->pc = 0x1d20c8u;

    // 0x1d20c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d20c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d20cc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d20d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d20d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d20d4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d20d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d20d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d20dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d20dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d20e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d20e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d20e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20e8: 0x2442b570  addiu       $v0, $v0, -0x4A90
    ctx->pc = 0x1d20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948208));
    // 0x1d20ec: 0x2463b598  addiu       $v1, $v1, -0x4A68
    ctx->pc = 0x1d20ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948248));
    // 0x1d20f0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1d20f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1d20f4: 0x260407e0  addiu       $a0, $s0, 0x7E0
    ctx->pc = 0x1d20f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
    // 0x1d20f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d20f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d20fc: 0xc0759b4  jal         func_1D66D0
    ctx->pc = 0x1D20FCu;
    SET_GPR_U32(ctx, 31, 0x1D2104u);
    ctx->pc = 0x1D2100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20FCu;
    // 0x1d2100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66D0u, 0x1D20FCu, 0x1D2104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2104u;
label_1d2104:
    // 0x1d2104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2108: 0xc074636  jal         func_1D18D8
    ctx->pc = 0x1D2108u;
    SET_GPR_U32(ctx, 31, 0x1D2110u);
    ctx->pc = 0x1D210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2108u;
    // 0x1d210c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18D8u, 0x1D2108u, 0x1D2110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2110u;
label_1d2110:
    // 0x1d2110: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d2110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d211c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D211Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D211Cu;
        // 0x1d2120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D211Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2124u;
    // 0x1d2124: 0x0  nop
    ctx->pc = 0x1d2124u;
    // NOP
    ctx->pc = 0x1d2128u;
}

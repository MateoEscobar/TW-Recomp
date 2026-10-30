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

// Function: sub_0032A280
// Address: 0x32a280 - 0x32a2f0
void sub_0032A280_0x32a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A280_0x32a280");
#endif

    switch (ctx->pc) {
        case 0x32a2b4u: goto label_32a2b4;
        case 0x32a2d4u: goto label_32a2d4;
        default: break;
    }

    ctx->pc = 0x32a280u;

    // 0x32a280: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32a280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x32a284: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x32a284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x32a288: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x32a288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x32a28c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a290: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x32a290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x32a294: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x32a294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a298: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32a298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32a29c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32a29cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a2a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32a2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a2a4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x32a2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x32a2a8: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x32a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x32a2ac: 0xc0cb2a2  jal         func_32CA88
    ctx->pc = 0x32A2ACu;
    SET_GPR_U32(ctx, 31, 0x32A2B4u);
    ctx->pc = 0x32A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A2ACu;
    // 0x32a2b0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA88u, 0x32A2ACu, 0x32A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A2B4u;
label_32a2b4:
    // 0x32a2b4: 0x8e080034  lw          $t0, 0x34($s0)
    ctx->pc = 0x32a2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x32a2b8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32a2bc: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x32a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x32a2c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32a2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a2c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32a2c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a2c8: 0x24a55430  addiu       $a1, $a1, 0x5430
    ctx->pc = 0x32a2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21552));
    // 0x32a2cc: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x32A2CCu;
    SET_GPR_U32(ctx, 31, 0x32A2D4u);
    ctx->pc = 0x32A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A2CCu;
    // 0x32a2d0: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x32A2CCu, 0x32A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A2D4u;
label_32a2d4:
    // 0x32a2d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x32a2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32a2d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x32a2d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32a2dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x32a2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32a2e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32a2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32a2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x32A2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2E4u;
        // 0x32a2e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A2ECu;
    // 0x32a2ec: 0x0  nop
    ctx->pc = 0x32a2ecu;
    // NOP
    ctx->pc = 0x32a2f0u;
}

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

// Function: sub_0017F278
// Address: 0x17f278 - 0x17f2c0
void sub_0017F278_0x17f278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F278_0x17f278");
#endif

    switch (ctx->pc) {
        case 0x17f2a8u: goto label_17f2a8;
        default: break;
    }

    ctx->pc = 0x17f278u;

    // 0x17f278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f27c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f280: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f28c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17f290: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17f290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17f294: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x17f294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17f298: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x17f298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x17f29c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x17f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x17f2a0: 0xc11b404  jal         func_46D010
    ctx->pc = 0x17F2A0u;
    SET_GPR_U32(ctx, 31, 0x17F2A8u);
    ctx->pc = 0x17F2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2A0u;
    // 0x17f2a4: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x17F2A0u, 0x17F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2A8u;
label_17f2a8:
    // 0x17f2a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17f2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f2b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2B4u;
        // 0x17f2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F2BCu;
    // 0x17f2bc: 0x0  nop
    ctx->pc = 0x17f2bcu;
    // NOP
    ctx->pc = 0x17f2c0u;
}

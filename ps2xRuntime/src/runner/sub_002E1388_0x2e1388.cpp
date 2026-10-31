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

// Function: sub_002E1388
// Address: 0x2e1388 - 0x2e13c0
void sub_002E1388_0x2e1388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1388_0x2e1388");
#endif

    switch (ctx->pc) {
        case 0x2e13a0u: goto label_2e13a0;
        case 0x2e13a8u: goto label_2e13a8;
        default: break;
    }

    ctx->pc = 0x2e1388u;

    // 0x2e1388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e138c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e138cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e1390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1398: 0xc0a7b76  jal         func_29EDD8
    ctx->pc = 0x2E1398u;
    SET_GPR_U32(ctx, 31, 0x2E13A0u);
    ctx->pc = 0x2E139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1398u;
    // 0x2e139c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EDD8u, 0x2E1398u, 0x2E13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13A0u;
label_2e13a0:
    // 0x2e13a0: 0xc0a4e6c  jal         func_2939B0
    ctx->pc = 0x2E13A0u;
    SET_GPR_U32(ctx, 31, 0x2E13A8u);
    ctx->pc = 0x2E13A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E13A0u;
    // 0x2e13a4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2939B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2939B0u, 0x2E13A0u, 0x2E13A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13A8u;
label_2e13a8:
    // 0x2e13a8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e13a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e13ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e13acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e13b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e13b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e13b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E13B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13B4u;
        // 0x2e13b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E13B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E13BCu;
    // 0x2e13bc: 0x0  nop
    ctx->pc = 0x2e13bcu;
    // NOP
    ctx->pc = 0x2e13c0u;
}

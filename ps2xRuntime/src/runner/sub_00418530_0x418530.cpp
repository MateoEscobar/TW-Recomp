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

// Function: sub_00418530
// Address: 0x418530 - 0x418588
void sub_00418530_0x418530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418530_0x418530");
#endif

    switch (ctx->pc) {
        case 0x418548u: goto label_418548;
        default: break;
    }

    ctx->pc = 0x418530u;

    // 0x418530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x418530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x418534: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x418534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x418538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x418538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41853c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x418540: 0xc106102  jal         func_418408
    ctx->pc = 0x418540u;
    SET_GPR_U32(ctx, 31, 0x418548u);
    ctx->pc = 0x418544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418540u;
    // 0x418544: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418408u, 0x418540u, 0x418548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418548u;
label_418548:
    // 0x418548: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x418548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x41854c: 0xa200004d  sb          $zero, 0x4D($s0)
    ctx->pc = 0x41854cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x418550: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x418550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x418554: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x418554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x418558: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x418558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x41855c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x41855cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x418560: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x418560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x418564: 0xa6000040  sh          $zero, 0x40($s0)
    ctx->pc = 0x418564u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x418568: 0xa6000042  sh          $zero, 0x42($s0)
    ctx->pc = 0x418568u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x41856c: 0xa6000044  sh          $zero, 0x44($s0)
    ctx->pc = 0x41856cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x418570: 0xa6000046  sh          $zero, 0x46($s0)
    ctx->pc = 0x418570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x418574: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x418574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x418578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41857c: 0x3e00008  jr          $ra
    ctx->pc = 0x41857Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41857Cu;
        // 0x418580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41857Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418584u;
    // 0x418584: 0x0  nop
    ctx->pc = 0x418584u;
    // NOP
    ctx->pc = 0x418588u;
}

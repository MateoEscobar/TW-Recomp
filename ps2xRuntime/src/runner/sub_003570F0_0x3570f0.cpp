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

// Function: sub_003570F0
// Address: 0x3570f0 - 0x357138
void sub_003570F0_0x3570f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003570F0_0x3570f0");
#endif

    switch (ctx->pc) {
        case 0x357110u: goto label_357110;
        case 0x357120u: goto label_357120;
        default: break;
    }

    ctx->pc = 0x3570f0u;

    // 0x3570f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3570f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3570f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3570f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3570f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3570f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3570fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3570fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357100: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x357100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357108: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x357108u;
    SET_GPR_U32(ctx, 31, 0x357110u);
    ctx->pc = 0x35710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357108u;
    // 0x35710c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x357108u, 0x357110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357110u;
label_357110:
    // 0x357110: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x357110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x357114: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x357114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357118: 0xc0c8e50  jal         func_323940
    ctx->pc = 0x357118u;
    SET_GPR_U32(ctx, 31, 0x357120u);
    ctx->pc = 0x35711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357118u;
    // 0x35711c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323940u, 0x357118u, 0x357120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357120u;
label_357120:
    // 0x357120: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35712c: 0x3e00008  jr          $ra
    ctx->pc = 0x35712Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35712Cu;
        // 0x357130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35712Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357134u;
    // 0x357134: 0x0  nop
    ctx->pc = 0x357134u;
    // NOP
    ctx->pc = 0x357138u;
}

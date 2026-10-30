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

// Function: sub_004737D8
// Address: 0x4737d8 - 0x473808
void sub_004737D8_0x4737d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004737D8_0x4737d8");
#endif

    switch (ctx->pc) {
        case 0x4737f4u: goto label_4737f4;
        default: break;
    }

    ctx->pc = 0x4737d8u;

    // 0x4737d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4737d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4737dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4737dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4737e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4737e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4737e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4737e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4737e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4737e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4737ec: 0xc11cb60  jal         func_472D80
    ctx->pc = 0x4737ECu;
    SET_GPR_U32(ctx, 31, 0x4737F4u);
    ctx->pc = 0x4737F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4737ECu;
    // 0x4737f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472D80u, 0x4737ECu, 0x4737F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4737F4u;
label_4737f4:
    // 0x4737f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4737f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4737f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4737f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4737fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4737fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473800: 0x3e00008  jr          $ra
    ctx->pc = 0x473800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473800u;
        // 0x473804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473808u;
}

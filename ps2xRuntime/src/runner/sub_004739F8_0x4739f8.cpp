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

// Function: sub_004739F8
// Address: 0x4739f8 - 0x473a28
void sub_004739F8_0x4739f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004739F8_0x4739f8");
#endif

    switch (ctx->pc) {
        case 0x473a10u: goto label_473a10;
        default: break;
    }

    ctx->pc = 0x4739f8u;

    // 0x4739f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4739f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4739fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4739fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473a00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x473a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x473a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473a08: 0xc11d6c8  jal         func_475B20
    ctx->pc = 0x473A08u;
    SET_GPR_U32(ctx, 31, 0x473A10u);
    ctx->pc = 0x473A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473A08u;
    // 0x473a0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x475B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x475B20u, 0x473A08u, 0x473A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473A10u;
label_473a10:
    // 0x473a10: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x473a10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x473a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473a18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x473a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473a1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x473a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473a20: 0x3e00008  jr          $ra
    ctx->pc = 0x473A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473A20u;
        // 0x473a24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473A28u;
}

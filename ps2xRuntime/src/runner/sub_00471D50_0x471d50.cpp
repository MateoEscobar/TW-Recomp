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

// Function: sub_00471D50
// Address: 0x471d50 - 0x471d98
void sub_00471D50_0x471d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471D50_0x471d50");
#endif

    switch (ctx->pc) {
        case 0x471d78u: goto label_471d78;
        default: break;
    }

    ctx->pc = 0x471d50u;

    // 0x471d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x471d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x471d54: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x471d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x471d58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x471d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x471d5c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x471d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x471d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x471d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x471d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x471d68: 0x8c44ad18  lw          $a0, -0x52E8($v0)
    ctx->pc = 0x471d68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70AD18u));
    // 0x471d6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x471d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471d70: 0xc11cc4c  jal         func_473130
    ctx->pc = 0x471D70u;
    SET_GPR_U32(ctx, 31, 0x471D78u);
    ctx->pc = 0x471D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471D70u;
    // 0x471d74: 0x24a51f38  addiu       $a1, $a1, 0x1F38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473130u, 0x471D70u, 0x471D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471D78u;
label_471d78:
    // 0x471d78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x471d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x471d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x471d80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x471d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x471d84: 0x3e00008  jr          $ra
    ctx->pc = 0x471D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471D84u;
        // 0x471d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471D8Cu;
    // 0x471d8c: 0x0  nop
    ctx->pc = 0x471d8cu;
    // NOP
    // 0x471d90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x471d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x471d94: 0x0  nop
    ctx->pc = 0x471d94u;
    // NOP
    ctx->pc = 0x471d98u;
}

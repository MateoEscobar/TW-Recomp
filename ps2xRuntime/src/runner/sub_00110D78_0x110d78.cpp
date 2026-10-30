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

// Function: sub_00110D78
// Address: 0x110d78 - 0x110db0
void sub_00110D78_0x110d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110D78_0x110d78");
#endif

    switch (ctx->pc) {
        case 0x110d94u: goto label_110d94;
        case 0x110da0u: goto label_110da0;
        default: break;
    }

    ctx->pc = 0x110d78u;

    // 0x110d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110d7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x110d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x110d80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110d88: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x110d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x110d8c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x110D8Cu;
    SET_GPR_U32(ctx, 31, 0x110D94u);
    ctx->pc = 0x110D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D8Cu;
    // 0x110d90: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x110D8Cu, 0x110D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D94u;
label_110d94:
    // 0x110d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d98: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x110D98u;
    SET_GPR_U32(ctx, 31, 0x110DA0u);
    ctx->pc = 0x110D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D98u;
    // 0x110d9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x110D98u, 0x110DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DA0u;
label_110da0:
    // 0x110da0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x110da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110da8: 0x3e00008  jr          $ra
    ctx->pc = 0x110DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DA8u;
        // 0x110dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110DB0u;
}

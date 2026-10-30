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

// Function: sub_00303EF0
// Address: 0x303ef0 - 0x303f10
void sub_00303EF0_0x303ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303EF0_0x303ef0");
#endif

    switch (ctx->pc) {
        case 0x303ef4u: goto label_303ef4;
        case 0x303efcu: goto label_303efc;
        default: break;
    }

    ctx->pc = 0x303ef0u;

    // 0x303ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_303ef4:
    // 0x303ef4: 0xc0a4b60  jal         func_292D80
    ctx->pc = 0x303EF4u;
    SET_GPR_U32(ctx, 31, 0x303EFCu);
    ctx->pc = 0x303EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303EF4u;
    // 0x303ef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D80u, 0x303EF4u, 0x303EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303EFCu;
label_303efc:
    // 0x303efc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x303efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303f08: 0x3e00008  jr          $ra
    ctx->pc = 0x303F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F08u;
        // 0x303f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303F10u;
}

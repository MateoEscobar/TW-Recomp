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

// Function: sub_0041D6A8
// Address: 0x41d6a8 - 0x41d6f0
void sub_0041D6A8_0x41d6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D6A8_0x41d6a8");
#endif

    switch (ctx->pc) {
        case 0x41d6ccu: goto label_41d6cc;
        default: break;
    }

    ctx->pc = 0x41d6a8u;

    // 0x41d6a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41d6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41d6ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d6b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41d6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41d6b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41d6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d6b8: 0x8c50489c  lw          $s0, 0x489C($v0)
    ctx->pc = 0x41d6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d6bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d6c0: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x41d6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x41d6c4: 0xc107d34  jal         func_41F4D0
    ctx->pc = 0x41D6C4u;
    SET_GPR_U32(ctx, 31, 0x41D6CCu);
    ctx->pc = 0x41D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D6C4u;
    // 0x41d6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F4D0u, 0x41D6C4u, 0x41D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D6CCu;
label_41d6cc:
    // 0x41d6cc: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x41d6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41d6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d6d4: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x41d6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x41d6d8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x41d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x41d6dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41d6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41d6e0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x41d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x41d6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x41D6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D6E4u;
        // 0x41d6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D6ECu;
    // 0x41d6ec: 0x0  nop
    ctx->pc = 0x41d6ecu;
    // NOP
    ctx->pc = 0x41d6f0u;
}

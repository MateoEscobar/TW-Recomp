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

// Function: sub_0046A0C0
// Address: 0x46a0c0 - 0x46a100
void sub_0046A0C0_0x46a0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A0C0_0x46a0c0");
#endif

    switch (ctx->pc) {
        case 0x46a0d4u: goto label_46a0d4;
        default: break;
    }

    ctx->pc = 0x46a0c0u;

    // 0x46a0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46a0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46a0c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46a0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46a0c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a0cc: 0xc12247e  jal         func_4891F8
    ctx->pc = 0x46A0CCu;
    SET_GPR_U32(ctx, 31, 0x46A0D4u);
    ctx->pc = 0x46A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A0CCu;
    // 0x46a0d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4891F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891F8u, 0x46A0CCu, 0x46A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A0D4u;
label_46a0d4:
    // 0x46a0d4: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x46a0d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x46a0d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46a0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a0e0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x46a0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x46a0e4: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x46a0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x46a0e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46a0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x46A0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A0ECu;
        // 0x46a0f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A0F4u;
    // 0x46a0f4: 0x0  nop
    ctx->pc = 0x46a0f4u;
    // NOP
    // 0x46a0f8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x46a0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46a0fc: 0x0  nop
    ctx->pc = 0x46a0fcu;
    // NOP
    ctx->pc = 0x46a100u;
}

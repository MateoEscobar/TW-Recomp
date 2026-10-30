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

// Function: sub_003A4160
// Address: 0x3a4160 - 0x3a41a8
void sub_003A4160_0x3a4160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4160_0x3a4160");
#endif

    switch (ctx->pc) {
        case 0x3a4198u: goto label_3a4198;
        default: break;
    }

    ctx->pc = 0x3a4160u;

    // 0x3a4160: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a4160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a4164: 0x24060410  addiu       $a2, $zero, 0x410
    ctx->pc = 0x3a4164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x3a4168: 0x8c672c8c  lw          $a3, 0x2C8C($v1)
    ctx->pc = 0x3a4168u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x512C8Cu));
    // 0x3a416c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a416cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4170: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a4170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a4174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4178: 0xe63818  mult        $a3, $a3, $a2
    ctx->pc = 0x3a4178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3a417c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3a417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x3a4180: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a4180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4184: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x3a4184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x3a4188: 0x24c61550  addiu       $a2, $a2, 0x1550
    ctx->pc = 0x3a4188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5456));
    // 0x3a418c: 0x8c640834  lw          $a0, 0x834($v1)
    ctx->pc = 0x3a418cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2100)));
    // 0x3a4190: 0xc0e71a6  jal         func_39C698
    ctx->pc = 0x3A4190u;
    SET_GPR_U32(ctx, 31, 0x3A4198u);
    ctx->pc = 0x3A4194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4190u;
    // 0x3a4194: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C698u, 0x3A4190u, 0x3A4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4198u;
label_3a4198:
    // 0x3a4198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a419c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A419Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A419Cu;
        // 0x3a41a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A419Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A41A4u;
    // 0x3a41a4: 0x0  nop
    ctx->pc = 0x3a41a4u;
    // NOP
    ctx->pc = 0x3a41a8u;
}

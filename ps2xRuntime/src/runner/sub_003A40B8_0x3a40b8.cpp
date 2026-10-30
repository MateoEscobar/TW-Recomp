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

// Function: sub_003A40B8
// Address: 0x3a40b8 - 0x3a40f0
void sub_003A40B8_0x3a40b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A40B8_0x3a40b8");
#endif

    switch (ctx->pc) {
        case 0x3a40e0u: goto label_3a40e0;
        default: break;
    }

    ctx->pc = 0x3a40b8u;

    // 0x3a40b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a40bc: 0x24050410  addiu       $a1, $zero, 0x410
    ctx->pc = 0x3a40bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x3a40c0: 0x8c622c8c  lw          $v0, 0x2C8C($v1)
    ctx->pc = 0x3a40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C8Cu));
    // 0x3a40c4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3a40c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x3a40c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a40c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a40cc: 0x24841550  addiu       $a0, $a0, 0x1550
    ctx->pc = 0x3a40ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5456));
    // 0x3a40d0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3a40d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a40d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a40d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a40d8: 0xc0ea164  jal         func_3A8590
    ctx->pc = 0x3A40D8u;
    SET_GPR_U32(ctx, 31, 0x3A40E0u);
    ctx->pc = 0x3A40DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A40D8u;
    // 0x3a40dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x3A40D8u, 0x3A40E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A40E0u;
label_3a40e0:
    // 0x3a40e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a40e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a40e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A40E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40E4u;
        // 0x3a40e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A40E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A40ECu;
    // 0x3a40ec: 0x0  nop
    ctx->pc = 0x3a40ecu;
    // NOP
    ctx->pc = 0x3a40f0u;
}

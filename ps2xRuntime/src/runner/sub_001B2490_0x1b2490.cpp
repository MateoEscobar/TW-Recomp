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

// Function: sub_001B2490
// Address: 0x1b2490 - 0x1b24d0
void sub_001B2490_0x1b2490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2490_0x1b2490");
#endif

    switch (ctx->pc) {
        case 0x1b24b8u: goto label_1b24b8;
        default: break;
    }

    ctx->pc = 0x1b2490u;

    // 0x1b2490: 0x24030590  addiu       $v1, $zero, 0x590
    ctx->pc = 0x1b2490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
    // 0x1b2494: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2498: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1b2498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b249c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b249cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b24a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b24a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b24a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b24a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24ac: 0x24426b40  addiu       $v0, $v0, 0x6B40
    ctx->pc = 0x1b24acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27456));
    // 0x1b24b0: 0xc067c4a  jal         func_19F128
    ctx->pc = 0x1B24B0u;
    SET_GPR_U32(ctx, 31, 0x1B24B8u);
    ctx->pc = 0x1B24B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24B0u;
    // 0x1b24b4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F128u, 0x1B24B0u, 0x1B24B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24B8u;
label_1b24b8:
    // 0x1b24b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b24b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b24bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B24BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24BCu;
        // 0x1b24c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B24BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B24C4u;
    // 0x1b24c4: 0x0  nop
    ctx->pc = 0x1b24c4u;
    // NOP
    // 0x1b24c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b24c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b24cc: 0x0  nop
    ctx->pc = 0x1b24ccu;
    // NOP
    ctx->pc = 0x1b24d0u;
}

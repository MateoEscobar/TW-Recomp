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

// Function: sub_001582A8
// Address: 0x1582a8 - 0x1582e0
void sub_001582A8_0x1582a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001582A8_0x1582a8");
#endif

    switch (ctx->pc) {
        case 0x1582bcu: goto label_1582bc;
        default: break;
    }

    ctx->pc = 0x1582a8u;

    // 0x1582a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1582a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1582ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1582acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1582b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1582b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1582b4: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x1582B4u;
    SET_GPR_U32(ctx, 31, 0x1582BCu);
    ctx->pc = 0x1582B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582B4u;
    // 0x1582b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x1582B4u, 0x1582BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582BCu;
label_1582bc:
    // 0x1582bc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1582bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1582c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1582c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1582c4: 0x24638480  addiu       $v1, $v1, -0x7B80
    ctx->pc = 0x1582c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935680));
    // 0x1582c8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1582c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1582cc: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1582ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1582d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1582d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1582d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1582d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1582d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1582D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1582DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582D8u;
        // 0x1582dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1582D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1582E0u;
}

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

// Function: sub_001485C8
// Address: 0x1485c8 - 0x148608
void sub_001485C8_0x1485c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001485C8_0x1485c8");
#endif

    switch (ctx->pc) {
        case 0x1485f4u: goto label_1485f4;
        default: break;
    }

    ctx->pc = 0x1485c8u;

    // 0x1485c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1485c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1485cc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1485ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x1485d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1485d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1485d4: 0x24427d38  addiu       $v0, $v0, 0x7D38
    ctx->pc = 0x1485d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32056));
    // 0x1485d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1485d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1485dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1485dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485e0: 0xa2000103  sb          $zero, 0x103($s0)
    ctx->pc = 0x1485e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x1485e4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1485e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1485e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1485e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1485ec: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1485ECu;
    SET_GPR_U32(ctx, 31, 0x1485F4u);
    ctx->pc = 0x1485F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1485ECu;
    // 0x1485f0: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1485ECu, 0x1485F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485F4u;
label_1485f4:
    // 0x1485f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1485f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1485f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1485fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1485fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148600: 0x3e00008  jr          $ra
    ctx->pc = 0x148600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148600u;
        // 0x148604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148608u;
}

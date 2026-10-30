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

// Function: sub_003A5A10
// Address: 0x3a5a10 - 0x3a5a50
void sub_003A5A10_0x3a5a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5A10_0x3a5a10");
#endif

    switch (ctx->pc) {
        case 0x3a5a3cu: goto label_3a5a3c;
        default: break;
    }

    ctx->pc = 0x3a5a10u;

    // 0x3a5a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a5a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a5a14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a5a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a5a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a5a1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a5a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a20: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5A20u;
    {
        const bool branch_taken_0x3a5a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A20u;
        // 0x3a5a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5a20) {
            ctx->pc = 0x3A5A40u;
            goto label_3a5a40;
        }
    }
    ctx->pc = 0x3A5A28u;
    // 0x3a5a28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a5a2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a5a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a30: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3a5a30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x3a5a34: 0xc106cf6  jal         func_41B3D8
    ctx->pc = 0x3A5A34u;
    SET_GPR_U32(ctx, 31, 0x3A5A3Cu);
    ctx->pc = 0x3A5A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5A34u;
    // 0x3a5a38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B3D8u, 0x3A5A34u, 0x3A5A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5A3Cu;
label_3a5a3c:
    // 0x3a5a3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a5a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a5a40:
    // 0x3a5a40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a5a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5a48: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A48u;
        // 0x3a5a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5A50u;
}

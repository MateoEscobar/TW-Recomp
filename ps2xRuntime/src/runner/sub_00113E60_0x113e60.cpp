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

// Function: sub_00113E60
// Address: 0x113e60 - 0x113ea8
void sub_00113E60_0x113e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113E60_0x113e60");
#endif

    switch (ctx->pc) {
        case 0x113e9cu: goto label_113e9c;
        default: break;
    }

    ctx->pc = 0x113e60u;

    // 0x113e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113e64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x113e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x113e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x113e6c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113E6Cu;
    {
        const bool branch_taken_0x113e6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x113E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E6Cu;
        // 0x113e70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e6c) {
            ctx->pc = 0x113E84u;
            goto label_113e84;
        }
    }
    ctx->pc = 0x113E74u;
    // 0x113e74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113e78: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x113e78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x113e7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x113E7Cu;
    {
        const bool branch_taken_0x113e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E7Cu;
        // 0x113e80: 0xac6003f4  sw          $zero, 0x3F4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1012), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e7c) {
            ctx->pc = 0x113E94u;
            goto label_113e94;
        }
    }
    ctx->pc = 0x113E84u;
label_113e84:
    // 0x113e84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113e88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x113e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113e8c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x113e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x113e90: 0xac6403f4  sw          $a0, 0x3F4($v1)
    ctx->pc = 0x113e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1012), GPR_U32(ctx, 4));
label_113e94:
    // 0x113e94: 0xc1067f2  jal         func_419FC8
    ctx->pc = 0x113E94u;
    SET_GPR_U32(ctx, 31, 0x113E9Cu);
    ctx->pc = 0x113E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E94u;
    // 0x113e98: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419FC8u, 0x113E94u, 0x113E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E9Cu;
label_113e9c:
    // 0x113e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x113EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EA0u;
        // 0x113ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113EA8u;
}

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

// Function: sub_004C4C58
// Address: 0x4c4c58 - 0x4c4c98
void sub_004C4C58_0x4c4c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4C58_0x4c4c58");
#endif

    switch (ctx->pc) {
        case 0x4c4c80u: goto label_4c4c80;
        default: break;
    }

    ctx->pc = 0x4c4c58u;

    // 0x4c4c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c4c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c4c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c4c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c4c60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c4c64: 0x2490fca8  addiu       $s0, $a0, -0x358
    ctx->pc = 0x4c4c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966440));
    // 0x4c4c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c4c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c4c6c: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x4c4c70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C4C70u;
    {
        const bool branch_taken_0x4c4c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4C70u;
        // 0x4c4c74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4c70) {
            ctx->pc = 0x4C4C80u;
            goto label_4c4c80;
        }
    }
    ctx->pc = 0x4C4C78u;
    // 0x4c4c78: 0xc130664  jal         func_4C1990
    ctx->pc = 0x4C4C78u;
    SET_GPR_U32(ctx, 31, 0x4C4C80u);
    ctx->pc = 0x4C4C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4C78u;
    // 0x4c4c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1990u, 0x4C4C78u, 0x4C4C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C80u;
label_4c4c80:
    // 0x4c4c80: 0xae110354  sw          $s1, 0x354($s0)
    ctx->pc = 0x4c4c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 17));
    // 0x4c4c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4c88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c4c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4c90: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4C90u;
        // 0x4c4c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4C98u;
}

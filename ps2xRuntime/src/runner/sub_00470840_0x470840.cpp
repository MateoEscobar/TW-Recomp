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

// Function: sub_00470840
// Address: 0x470840 - 0x470858
void sub_00470840_0x470840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470840_0x470840");
#endif

    ctx->pc = 0x470840u;

    // 0x470840: 0x8f8388f4  lw          $v1, -0x770C($gp)
    ctx->pc = 0x470840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936820)));
    // 0x470844: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x470844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x470848: 0xaf8388f4  sw          $v1, -0x770C($gp)
    ctx->pc = 0x470848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936820), GPR_U32(ctx, 3));
    // 0x47084c: 0x3e00008  jr          $ra
    ctx->pc = 0x47084Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x470850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47084Cu;
        // 0x470850: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47084Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470854u;
    // 0x470854: 0x0  nop
    ctx->pc = 0x470854u;
    // NOP
    ctx->pc = 0x470858u;
}

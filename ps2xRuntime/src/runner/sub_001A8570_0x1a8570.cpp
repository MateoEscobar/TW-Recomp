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

// Function: sub_001A8570
// Address: 0x1a8570 - 0x1a8578
void sub_001A8570_0x1a8570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8570_0x1a8570");
#endif

    ctx->pc = 0x1a8570u;

    // 0x1a8570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8570u;
    {
        const bool branch_taken_0x1a8570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8570u;
        // 0x1a8574: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8570) {
            ctx->pc = 0x1A8584u;
            return;
        }
    }
    ctx->pc = 0x1A8578u;
}

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

// Function: sub_003A3EE4
// Address: 0x3a3ee4 - 0x3a3ef0
void sub_003A3EE4_0x3a3ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3EE4_0x3a3ee4");
#endif

    ctx->pc = 0x3a3ee4u;

    // 0x3a3ee4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3a3ee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A3EE8u;
    {
        const bool branch_taken_0x3a3ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EE8u;
        // 0x3a3eec: 0x8c622de4  lw          $v0, 0x2DE4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ee8) {
            ctx->pc = 0x3A3EF4u;
            return;
        }
    }
    ctx->pc = 0x3A3EF0u;
}

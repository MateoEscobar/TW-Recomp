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

// Function: sub_00423964
// Address: 0x423964 - 0x42396c
void sub_00423964_0x423964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423964_0x423964");
#endif

    ctx->pc = 0x423964u;

    // 0x423964: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x423964u;
    {
        const bool branch_taken_0x423964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423964u;
        // 0x423968: 0x94c20004  lhu         $v0, 0x4($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423964) {
            ctx->pc = 0x423978u;
            return;
        }
    }
    ctx->pc = 0x42396Cu;
}

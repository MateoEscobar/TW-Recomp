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

// Function: sub_0042DE34
// Address: 0x42de34 - 0x42de40
void sub_0042DE34_0x42de34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DE34_0x42de34");
#endif

    ctx->pc = 0x42de34u;

    // 0x42de34: 0x2642c168  addiu       $v0, $s2, -0x3E98
    ctx->pc = 0x42de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951272));
    // 0x42de38: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x42DE38u;
    {
        const bool branch_taken_0x42de38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DE38u;
        // 0x42de3c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42de38) {
            ctx->pc = 0x42DDF8u;
            return;
        }
    }
    ctx->pc = 0x42DE40u;
}

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

// Function: sub_0042DDB4
// Address: 0x42ddb4 - 0x42ddc0
void sub_0042DDB4_0x42ddb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DDB4_0x42ddb4");
#endif

    ctx->pc = 0x42ddb4u;

    // 0x42ddb4: 0x2642c168  addiu       $v0, $s2, -0x3E98
    ctx->pc = 0x42ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951272));
    // 0x42ddb8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x42DDB8u;
    {
        const bool branch_taken_0x42ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DDB8u;
        // 0x42ddbc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ddb8) {
            ctx->pc = 0x42DD78u;
            return;
        }
    }
    ctx->pc = 0x42DDC0u;
}

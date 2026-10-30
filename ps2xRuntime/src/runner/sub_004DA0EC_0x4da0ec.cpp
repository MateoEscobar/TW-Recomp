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

// Function: sub_004DA0EC
// Address: 0x4da0ec - 0x4da0f4
void sub_004DA0EC_0x4da0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA0EC_0x4da0ec");
#endif

    ctx->pc = 0x4da0ecu;

    // 0x4da0ec: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x4DA0ECu;
    {
        const bool branch_taken_0x4da0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da0ec) {
            ctx->pc = 0x4DA0A0u;
            return;
        }
    }
    ctx->pc = 0x4DA0F4u;
}

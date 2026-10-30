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

// Function: sub_003A3958
// Address: 0x3a3958 - 0x3a3960
void sub_003A3958_0x3a3958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3958_0x3a3958");
#endif

    ctx->pc = 0x3a3958u;

    // 0x3a3958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A3958u;
    {
        const bool branch_taken_0x3a3958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3958u;
        // 0x3a395c: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3958) {
            ctx->pc = 0x3A3964u;
            return;
        }
    }
    ctx->pc = 0x3A3960u;
}

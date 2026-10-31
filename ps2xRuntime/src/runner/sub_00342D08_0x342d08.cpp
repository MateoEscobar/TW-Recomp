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

// Function: sub_00342D08
// Address: 0x342d08 - 0x342d0c
void sub_00342D08_0x342d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342D08_0x342d08");
#endif

    ctx->pc = 0x342d08u;

    // 0x342d08: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x342d08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    ctx->pc = 0x342d0cu;
}

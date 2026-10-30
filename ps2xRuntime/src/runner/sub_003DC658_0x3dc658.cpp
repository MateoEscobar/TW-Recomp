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

// Function: sub_003DC658
// Address: 0x3dc658 - 0x3dc678
void sub_003DC658_0x3dc658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC658_0x3dc658");
#endif

    ctx->pc = 0x3dc658u;

    // 0x3dc658: 0x27bdfa20  addiu       $sp, $sp, -0x5E0
    ctx->pc = 0x3dc658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965792));
    // 0x3dc65c: 0x7fb005a0  sq          $s0, 0x5A0($sp)
    ctx->pc = 0x3dc65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 16));
    // 0x3dc660: 0x7fb10590  sq          $s1, 0x590($sp)
    ctx->pc = 0x3dc660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 17));
    // 0x3dc664: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dc664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc668: 0x7fb50550  sq          $s5, 0x550($sp)
    ctx->pc = 0x3dc668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 21));
    // 0x3dc66c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dc66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc670: 0x7fb20580  sq          $s2, 0x580($sp)
    ctx->pc = 0x3dc670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 18));
    // 0x3dc674: 0x7fb30570  sq          $s3, 0x570($sp)
    ctx->pc = 0x3dc674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 19));
    ctx->pc = 0x3dc678u;
}

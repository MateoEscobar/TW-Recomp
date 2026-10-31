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

// Function: sub_00179958
// Address: 0x179958 - 0x17998c
void sub_00179958_0x179958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179958_0x179958");
#endif

    ctx->pc = 0x179958u;

    // 0x179958: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x179958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x17995c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17995cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x179960: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x179960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x179964: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x179964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x179968: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x179968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17996c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x17996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x179970: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x179970u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179974: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x179974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x179978: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x179978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17997c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x17997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x179980: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x179980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179984: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x179984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x179988: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x179988u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17998cu;
}

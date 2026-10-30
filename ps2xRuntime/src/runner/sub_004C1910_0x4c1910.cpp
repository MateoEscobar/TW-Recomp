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

// Function: sub_004C1910
// Address: 0x4c1910 - 0x4c1960
void sub_004C1910_0x4c1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C1910_0x4c1910");
#endif

    ctx->pc = 0x4c1910u;

    // 0x4c1910: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x4c1910u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4c1914: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4c1914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4c1918: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4c1918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4c191c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C191Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C191Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C1924u;
    // 0x4c1924: 0x0  nop
    ctx->pc = 0x4c1924u;
    // NOP
    // 0x4c1928: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4c1928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4c192c: 0x0  nop
    ctx->pc = 0x4c192cu;
    // NOP
    // 0x4c1930: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x4c1930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x4c1934: 0x0  nop
    ctx->pc = 0x4c1934u;
    // NOP
    // 0x4c1938: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4c1938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4c193c: 0x0  nop
    ctx->pc = 0x4c193cu;
    // NOP
    // 0x4c1940: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4c1940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4c1944: 0x0  nop
    ctx->pc = 0x4c1944u;
    // NOP
    // 0x4c1948: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4c1948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4c194c: 0x0  nop
    ctx->pc = 0x4c194cu;
    // NOP
    // 0x4c1950: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4c1950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4c1954: 0x0  nop
    ctx->pc = 0x4c1954u;
    // NOP
    // 0x4c1958: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x4c1958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4c195c: 0x0  nop
    ctx->pc = 0x4c195cu;
    // NOP
    ctx->pc = 0x4c1960u;
}

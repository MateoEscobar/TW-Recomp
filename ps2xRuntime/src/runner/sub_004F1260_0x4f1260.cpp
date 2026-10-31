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

// Function: sub_004F1260
// Address: 0x4f1260 - 0x4f12a0
void sub_004F1260_0x4f1260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1260_0x4f1260");
#endif

    ctx->pc = 0x4f1260u;

    // 0x4f1260: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1260u;
        // 0x4f1264: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1268u;
    // 0x4f1268: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4f1268u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x4f126c: 0x0  nop
    ctx->pc = 0x4f126cu;
    // NOP
    // 0x4f1270: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4f1270u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x4f1274: 0x0  nop
    ctx->pc = 0x4f1274u;
    // NOP
    // 0x4f1278: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x4f1278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x4f127c: 0x0  nop
    ctx->pc = 0x4f127cu;
    // NOP
    // 0x4f1280: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4f1280u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x4f1284: 0x0  nop
    ctx->pc = 0x4f1284u;
    // NOP
    // 0x4f1288: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f1288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f128c: 0x0  nop
    ctx->pc = 0x4f128cu;
    // NOP
    // 0x4f1290: 0x7c830050  sq          $v1, 0x50($a0)
    ctx->pc = 0x4f1290u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 3));
    // 0x4f1294: 0x0  nop
    ctx->pc = 0x4f1294u;
    // NOP
    // 0x4f1298: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4f1298u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x4f129c: 0x0  nop
    ctx->pc = 0x4f129cu;
    // NOP
    ctx->pc = 0x4f12a0u;
}

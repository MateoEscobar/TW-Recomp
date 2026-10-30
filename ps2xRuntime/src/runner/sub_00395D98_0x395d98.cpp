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

// Function: sub_00395D98
// Address: 0x395d98 - 0x395dc8
void sub_00395D98_0x395d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395D98_0x395d98");
#endif

    switch (ctx->pc) {
        case 0x395db8u: goto label_395db8;
        default: break;
    }

    ctx->pc = 0x395d98u;

    // 0x395d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395d9c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x395d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x395da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x395da4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x395da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395da8: 0xa0800109  sb          $zero, 0x109($a0)
    ctx->pc = 0x395da8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 265), (uint8_t)GPR_U32(ctx, 0));
    // 0x395dac: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x395dacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x395db0: 0xc0e63b2  jal         func_398EC8
    ctx->pc = 0x395DB0u;
    SET_GPR_U32(ctx, 31, 0x395DB8u);
    ctx->pc = 0x395DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395DB0u;
    // 0x395db4: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398EC8u, 0x395DB0u, 0x395DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395DB8u;
label_395db8:
    // 0x395db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x395DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DBCu;
        // 0x395dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395DC4u;
    // 0x395dc4: 0x0  nop
    ctx->pc = 0x395dc4u;
    // NOP
    ctx->pc = 0x395dc8u;
}

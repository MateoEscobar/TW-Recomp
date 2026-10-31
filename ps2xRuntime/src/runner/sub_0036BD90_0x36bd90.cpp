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

// Function: sub_0036BD90
// Address: 0x36bd90 - 0x36bdc0
void sub_0036BD90_0x36bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BD90_0x36bd90");
#endif

    switch (ctx->pc) {
        case 0x36bda4u: goto label_36bda4;
        case 0x36bdacu: goto label_36bdac;
        default: break;
    }

    ctx->pc = 0x36bd90u;

    // 0x36bd90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36bd94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bd98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36bd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36bd9c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36BD9Cu;
    SET_GPR_U32(ctx, 31, 0x36BDA4u);
    ctx->pc = 0x36BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD9Cu;
    // 0x36bda0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36BD9Cu, 0x36BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BDA4u;
label_36bda4:
    // 0x36bda4: 0xc1075ce  jal         func_41D738
    ctx->pc = 0x36BDA4u;
    SET_GPR_U32(ctx, 31, 0x36BDACu);
    ctx->pc = 0x36BDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BDA4u;
    // 0x36bda8: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D738u, 0x36BDA4u, 0x36BDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BDACu;
label_36bdac:
    // 0x36bdac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36bdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bdb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36bdb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x36BDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BDB4u;
        // 0x36bdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BDBCu;
    // 0x36bdbc: 0x0  nop
    ctx->pc = 0x36bdbcu;
    // NOP
    ctx->pc = 0x36bdc0u;
}

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

// Function: sub_00191728
// Address: 0x191728 - 0x191750
void sub_00191728_0x191728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191728_0x191728");
#endif

    switch (ctx->pc) {
        case 0x191740u: goto label_191740;
        default: break;
    }

    ctx->pc = 0x191728u;

    // 0x191728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19172c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19172cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191734: 0xe44c0040  swc1        $f12, 0x40($v0)
    ctx->pc = 0x191734u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x191738: 0xc064568  jal         func_1915A0
    ctx->pc = 0x191738u;
    SET_GPR_U32(ctx, 31, 0x191740u);
    ctx->pc = 0x19173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191738u;
    // 0x19173c: 0x24850010  addiu       $a1, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1915A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1915A0u, 0x191738u, 0x191740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191740u;
label_191740:
    // 0x191740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191744: 0x3e00008  jr          $ra
    ctx->pc = 0x191744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191744u;
        // 0x191748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19174Cu;
    // 0x19174c: 0x0  nop
    ctx->pc = 0x19174cu;
    // NOP
    ctx->pc = 0x191750u;
}

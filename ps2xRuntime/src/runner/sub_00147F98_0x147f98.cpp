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

// Function: sub_00147F98
// Address: 0x147f98 - 0x147fd0
void sub_00147F98_0x147f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147F98_0x147f98");
#endif

    switch (ctx->pc) {
        case 0x147fc4u: goto label_147fc4;
        default: break;
    }

    ctx->pc = 0x147f98u;

    // 0x147f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147fa0: 0x80830019  lb          $v1, 0x19($a0)
    ctx->pc = 0x147fa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x147fa4: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x147FA4u;
    {
        const bool branch_taken_0x147fa4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x147FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FA4u;
        // 0x147fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fa4) {
            ctx->pc = 0x147FC4u;
            goto label_147fc4;
        }
    }
    ctx->pc = 0x147FACu;
    // 0x147fac: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x147facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x147fb0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x147fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x147fb4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x147fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x147fb8: 0x2484d810  addiu       $a0, $a0, -0x27F0
    ctx->pc = 0x147fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
    // 0x147fbc: 0xc0512e2  jal         func_144B88
    ctx->pc = 0x147FBCu;
    SET_GPR_U32(ctx, 31, 0x147FC4u);
    ctx->pc = 0x147FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147FBCu;
    // 0x147fc0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x147FBCu, 0x147FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147FC4u;
label_147fc4:
    // 0x147fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x147FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FC8u;
        // 0x147fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147FD0u;
}

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

// Function: sub_00147FD0
// Address: 0x147fd0 - 0x148008
void sub_00147FD0_0x147fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147FD0_0x147fd0");
#endif

    switch (ctx->pc) {
        case 0x147ffcu: goto label_147ffc;
        default: break;
    }

    ctx->pc = 0x147fd0u;

    // 0x147fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147fd8: 0x80830019  lb          $v1, 0x19($a0)
    ctx->pc = 0x147fd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x147fdc: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x147FDCu;
    {
        const bool branch_taken_0x147fdc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x147FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FDCu;
        // 0x147fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fdc) {
            ctx->pc = 0x147FFCu;
            goto label_147ffc;
        }
    }
    ctx->pc = 0x147FE4u;
    // 0x147fe4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x147fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x147fe8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x147fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x147fec: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x147fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x147ff0: 0x2484d810  addiu       $a0, $a0, -0x27F0
    ctx->pc = 0x147ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
    // 0x147ff4: 0xc0512fc  jal         func_144BF0
    ctx->pc = 0x147FF4u;
    SET_GPR_U32(ctx, 31, 0x147FFCu);
    ctx->pc = 0x147FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147FF4u;
    // 0x147ff8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x147FF4u, 0x147FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147FFCu;
label_147ffc:
    // 0x147ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148000: 0x3e00008  jr          $ra
    ctx->pc = 0x148000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148000u;
        // 0x148004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148008u;
}

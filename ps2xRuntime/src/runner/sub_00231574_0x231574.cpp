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

// Function: sub_00231574
// Address: 0x231574 - 0x231590
void sub_00231574_0x231574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231574_0x231574");
#endif

    switch (ctx->pc) {
        case 0x231578u: goto label_231578;
        case 0x23157cu: goto label_23157c;
        default: break;
    }

    ctx->pc = 0x231574u;

    // 0x231574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231578:
    // 0x231578: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x231578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23157c:
    // 0x23157c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23157cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231584: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x231584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x231588: 0x3e00008  jr          $ra
    ctx->pc = 0x231588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231588u;
        // 0x23158c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231590u;
}

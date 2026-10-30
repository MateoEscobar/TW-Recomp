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

// Function: sub_0048E1C8
// Address: 0x48e1c8 - 0x48e210
void sub_0048E1C8_0x48e1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E1C8_0x48e1c8");
#endif

    switch (ctx->pc) {
        case 0x48e1c8u: goto label_48e1c8;
        case 0x48e1ccu: goto label_48e1cc;
        case 0x48e1d0u: goto label_48e1d0;
        case 0x48e1d4u: goto label_48e1d4;
        case 0x48e1d8u: goto label_48e1d8;
        case 0x48e1dcu: goto label_48e1dc;
        case 0x48e1e0u: goto label_48e1e0;
        case 0x48e1e4u: goto label_48e1e4;
        case 0x48e1e8u: goto label_48e1e8;
        case 0x48e1ecu: goto label_48e1ec;
        case 0x48e1f0u: goto label_48e1f0;
        case 0x48e1f4u: goto label_48e1f4;
        case 0x48e1f8u: goto label_48e1f8;
        case 0x48e1fcu: goto label_48e1fc;
        case 0x48e200u: goto label_48e200;
        case 0x48e204u: goto label_48e204;
        case 0x48e208u: goto label_48e208;
        case 0x48e20cu: goto label_48e20c;
        default: break;
    }

    ctx->pc = 0x48e1c8u;

label_48e1c8:
    // 0x48e1c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48e1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_48e1cc:
    // 0x48e1cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48e1d0:
    // 0x48e1d0: 0xc1236c8  jal         func_48DB20
label_48e1d4:
    if (ctx->pc == 0x48E1D4u) {
        ctx->pc = 0x48E1D8u;
        goto label_48e1d8;
    }
    ctx->pc = 0x48E1D0u;
    SET_GPR_U32(ctx, 31, 0x48E1D8u);
    ctx->pc = 0x48DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DB20u, 0x48E1D0u, 0x48E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E1D8u;
label_48e1d8:
    // 0x48e1d8: 0x8f828688  lw          $v0, -0x7978($gp)
    ctx->pc = 0x48e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
label_48e1dc:
    // 0x48e1dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_48e1e0:
    if (ctx->pc == 0x48E1E0u) {
        ctx->pc = 0x48E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E1DCu;
        // 0x48e1e0: 0xaf808678  sw          $zero, -0x7988($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E1E4u;
        goto label_48e1e4;
    }
    ctx->pc = 0x48E1DCu;
    {
        const bool branch_taken_0x48e1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E1DCu;
        // 0x48e1e0: 0xaf808678  sw          $zero, -0x7988($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e1dc) {
            ctx->pc = 0x48E1F4u;
            goto label_48e1f4;
        }
    }
    ctx->pc = 0x48E1E4u;
label_48e1e4:
    // 0x48e1e4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x48e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_48e1e8:
    // 0x48e1e8: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x48e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_48e1ec:
    // 0x48e1ec: 0x40f809  jalr        $v0
label_48e1f0:
    if (ctx->pc == 0x48E1F0u) {
        ctx->pc = 0x48E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E1ECu;
        // 0x48e1f0: 0x8f848684  lw          $a0, -0x797C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E1F4u;
        goto label_48e1f4;
    }
    ctx->pc = 0x48E1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48E1F4u);
        ctx->pc = 0x48E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E1ECu;
        // 0x48e1f0: 0x8f848684  lw          $a0, -0x797C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E1ECu, 0x48E1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48E1F4u;
label_48e1f4:
    // 0x48e1f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48e1f8:
    // 0x48e1f8: 0xaf808684  sw          $zero, -0x797C($gp)
    ctx->pc = 0x48e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936196), GPR_U32(ctx, 0));
label_48e1fc:
    // 0x48e1fc: 0xaf808688  sw          $zero, -0x7978($gp)
    ctx->pc = 0x48e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 0));
label_48e200:
    // 0x48e200: 0xaf80867c  sw          $zero, -0x7984($gp)
    ctx->pc = 0x48e200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 0));
label_48e204:
    // 0x48e204: 0xa3808680  sb          $zero, -0x7980($gp)
    ctx->pc = 0x48e204u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936192), (uint8_t)GPR_U32(ctx, 0));
label_48e208:
    // 0x48e208: 0x3e00008  jr          $ra
label_48e20c:
    if (ctx->pc == 0x48E20Cu) {
        ctx->pc = 0x48E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E208u;
        // 0x48e20c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E210u;
        goto label_fallthrough_0x48e208;
    }
    ctx->pc = 0x48E208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E208u;
        // 0x48e20c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48e208:
    ctx->pc = 0x48E210u;
}

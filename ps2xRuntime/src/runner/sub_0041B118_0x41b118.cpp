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

// Function: sub_0041B118
// Address: 0x41b118 - 0x41b148
void sub_0041B118_0x41b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B118_0x41b118");
#endif

    switch (ctx->pc) {
        case 0x41b130u: goto label_41b130;
        default: break;
    }

    ctx->pc = 0x41b118u;

    // 0x41b118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41b118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41b11c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41B11Cu;
    {
        const bool branch_taken_0x41b11c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B11Cu;
        // 0x41b120: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b11c) {
            ctx->pc = 0x41B138u;
            goto label_41b138;
        }
    }
    ctx->pc = 0x41B124u;
    // 0x41b124: 0x248403a4  addiu       $a0, $a0, 0x3A4
    ctx->pc = 0x41b124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 932));
    // 0x41b128: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41B128u;
    SET_GPR_U32(ctx, 31, 0x41B130u);
    ctx->pc = 0x41B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B128u;
    // 0x41b12c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41B128u, 0x41B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B130u;
label_41b130:
    // 0x41b130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x41B130u;
    {
        const bool branch_taken_0x41b130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B130u;
        // 0x41b134: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b130) {
            ctx->pc = 0x41B140u;
            goto label_41b140;
        }
    }
    ctx->pc = 0x41B138u;
label_41b138:
    // 0x41b138: 0xa08003a4  sb          $zero, 0x3A4($a0)
    ctx->pc = 0x41b138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 932), (uint8_t)GPR_U32(ctx, 0));
    // 0x41b13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41b13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41b140:
    // 0x41b140: 0x3e00008  jr          $ra
    ctx->pc = 0x41B140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B140u;
        // 0x41b144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B148u;
}

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

// Function: sub_004AFF90
// Address: 0x4aff90 - 0x4affe0
void sub_004AFF90_0x4aff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFF90_0x4aff90");
#endif

    switch (ctx->pc) {
        case 0x4affb4u: goto label_4affb4;
        case 0x4affccu: goto label_4affcc;
        default: break;
    }

    ctx->pc = 0x4aff90u;

    // 0x4aff90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aff94: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4aff94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4aff98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aff9c: 0x8c625b00  lw          $v0, 0x5B00($v1)
    ctx->pc = 0x4aff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715B00u));
    // 0x4affa0: 0x24705b00  addiu       $s0, $v1, 0x5B00
    ctx->pc = 0x4affa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23296));
    // 0x4affa4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AFFA4u;
    {
        const bool branch_taken_0x4affa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AFFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFFA4u;
        // 0x4affa8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4affa4) {
            ctx->pc = 0x4AFFCCu;
            goto label_4affcc;
        }
    }
    ctx->pc = 0x4AFFACu;
    // 0x4affac: 0xc12c15e  jal         func_4B0578
    ctx->pc = 0x4AFFACu;
    SET_GPR_U32(ctx, 31, 0x4AFFB4u);
    ctx->pc = 0x4B0578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0578u, 0x4AFFACu, 0x4AFFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFFB4u;
label_4affb4:
    // 0x4affb4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4affb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4affb8: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x4affb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x4affbc: 0x24a50678  addiu       $a1, $a1, 0x678
    ctx->pc = 0x4affbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1656));
    // 0x4affc0: 0x24c65b10  addiu       $a2, $a2, 0x5B10
    ctx->pc = 0x4affc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23312));
    // 0x4affc4: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x4AFFC4u;
    SET_GPR_U32(ctx, 31, 0x4AFFCCu);
    ctx->pc = 0x4AFFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFFC4u;
    // 0x4affc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x4AFFC4u, 0x4AFFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFFCCu;
label_4affcc:
    // 0x4affcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4affccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4affd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4affd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4affd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4affd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4affd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFFD8u;
        // 0x4affdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFFE0u;
}

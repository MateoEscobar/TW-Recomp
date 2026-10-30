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

// Function: sub_00231A80
// Address: 0x231a80 - 0x231ac8
void sub_00231A80_0x231a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A80_0x231a80");
#endif

    switch (ctx->pc) {
        case 0x231a90u: goto label_231a90;
        case 0x231a98u: goto label_231a98;
        case 0x231ab4u: goto label_231ab4;
        default: break;
    }

    ctx->pc = 0x231a80u;

    // 0x231a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231a88: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x231A88u;
    SET_GPR_U32(ctx, 31, 0x231A90u);
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x231A88u, 0x231A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A90u;
label_231a90:
    // 0x231a90: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x231A90u;
    SET_GPR_U32(ctx, 31, 0x231A98u);
    ctx->pc = 0x231A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A90u;
    // 0x231a94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x231A90u, 0x231A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A98u;
label_231a98:
    // 0x231a98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x231a98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x231A9Cu;
    {
        const bool branch_taken_0x231a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A9Cu;
        // 0x231aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a9c) {
            ctx->pc = 0x231AB8u;
            goto label_231ab8;
        }
    }
    ctx->pc = 0x231AA4u;
    // 0x231aa4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x231aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x231aa8: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x231aa8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x231aac: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x231AACu;
    SET_GPR_U32(ctx, 31, 0x231AB4u);
    ctx->pc = 0x231AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AACu;
    // 0x231ab0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x231AACu, 0x231AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AB4u;
label_231ab4:
    // 0x231ab4: 0x80420087  lb          $v0, 0x87($v0)
    ctx->pc = 0x231ab4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_231ab8:
    // 0x231ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231abc: 0x3e00008  jr          $ra
    ctx->pc = 0x231ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231ABCu;
        // 0x231ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231AC4u;
    // 0x231ac4: 0x0  nop
    ctx->pc = 0x231ac4u;
    // NOP
    ctx->pc = 0x231ac8u;
}

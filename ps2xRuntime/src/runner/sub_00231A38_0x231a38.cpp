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

// Function: sub_00231A38
// Address: 0x231a38 - 0x231a80
void sub_00231A38_0x231a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A38_0x231a38");
#endif

    switch (ctx->pc) {
        case 0x231a48u: goto label_231a48;
        case 0x231a50u: goto label_231a50;
        case 0x231a6cu: goto label_231a6c;
        default: break;
    }

    ctx->pc = 0x231a38u;

    // 0x231a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231a40: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x231A40u;
    SET_GPR_U32(ctx, 31, 0x231A48u);
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x231A40u, 0x231A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A48u;
label_231a48:
    // 0x231a48: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x231A48u;
    SET_GPR_U32(ctx, 31, 0x231A50u);
    ctx->pc = 0x231A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A48u;
    // 0x231a4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x231A48u, 0x231A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A50u;
label_231a50:
    // 0x231a50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x231a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x231A54u;
    {
        const bool branch_taken_0x231a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A54u;
        // 0x231a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a54) {
            ctx->pc = 0x231A70u;
            goto label_231a70;
        }
    }
    ctx->pc = 0x231A5Cu;
    // 0x231a5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x231a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x231a60: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x231a60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x231a64: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x231A64u;
    SET_GPR_U32(ctx, 31, 0x231A6Cu);
    ctx->pc = 0x231A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A64u;
    // 0x231a68: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x231A64u, 0x231A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A6Cu;
label_231a6c:
    // 0x231a6c: 0x80420086  lb          $v0, 0x86($v0)
    ctx->pc = 0x231a6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_231a70:
    // 0x231a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231a74: 0x3e00008  jr          $ra
    ctx->pc = 0x231A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A74u;
        // 0x231a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A7Cu;
    // 0x231a7c: 0x0  nop
    ctx->pc = 0x231a7cu;
    // NOP
    ctx->pc = 0x231a80u;
}

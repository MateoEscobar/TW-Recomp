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

// Function: sub_001BEBE8
// Address: 0x1bebe8 - 0x1bec38
void sub_001BEBE8_0x1bebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEBE8_0x1bebe8");
#endif

    switch (ctx->pc) {
        case 0x1bec08u: goto label_1bec08;
        default: break;
    }

    ctx->pc = 0x1bebe8u;

    // 0x1bebe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bebe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bebec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bebecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1bebf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bebf4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bebf8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1bebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1bebfc: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x1bebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1bec00: 0xc107908  jal         func_41E420
    ctx->pc = 0x1BEC00u;
    SET_GPR_U32(ctx, 31, 0x1BEC08u);
    ctx->pc = 0x1BEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC00u;
    // 0x1bec04: 0x24640480  addiu       $a0, $v1, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x1BEC00u, 0x1BEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC08u;
label_1bec08:
    // 0x1bec08: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x1bec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1bec0c: 0x2404ff9d  addiu       $a0, $zero, -0x63
    ctx->pc = 0x1bec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
    // 0x1bec10: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1bec10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bec14: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1bec14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1bec18: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1bec18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1bec1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bec1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bec20: 0x28852710  slti        $a1, $a0, 0x2710
    ctx->pc = 0x1bec20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x1bec24: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1bec24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec28: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x1bec28u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1bec2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC2Cu;
        // 0x1bec30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEC34u;
    // 0x1bec34: 0x0  nop
    ctx->pc = 0x1bec34u;
    // NOP
    ctx->pc = 0x1bec38u;
}

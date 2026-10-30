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

// Function: sub_0041FE20
// Address: 0x41fe20 - 0x41fe78
void sub_0041FE20_0x41fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FE20_0x41fe20");
#endif

    switch (ctx->pc) {
        case 0x41fe40u: goto label_41fe40;
        case 0x41fe50u: goto label_41fe50;
        case 0x41fe60u: goto label_41fe60;
        default: break;
    }

    ctx->pc = 0x41fe20u;

    // 0x41fe20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41fe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41fe24: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41fe28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41fe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41fe2c: 0x24a5b548  addiu       $a1, $a1, -0x4AB8
    ctx->pc = 0x41fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948168));
    // 0x41fe30: 0x24900148  addiu       $s0, $a0, 0x148
    ctx->pc = 0x41fe30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
    // 0x41fe34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41fe38: 0xc0529d6  jal         func_14A758
    ctx->pc = 0x41FE38u;
    SET_GPR_U32(ctx, 31, 0x41FE40u);
    ctx->pc = 0x41FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FE38u;
    // 0x41fe3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A758u, 0x41FE38u, 0x41FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FE40u;
label_41fe40:
    // 0x41fe40: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41fe44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41fe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fe48: 0xc0529d6  jal         func_14A758
    ctx->pc = 0x41FE48u;
    SET_GPR_U32(ctx, 31, 0x41FE50u);
    ctx->pc = 0x41FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FE48u;
    // 0x41fe4c: 0x24a5b560  addiu       $a1, $a1, -0x4AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A758u, 0x41FE48u, 0x41FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FE50u;
label_41fe50:
    // 0x41fe50: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41fe50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41fe54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fe58: 0xc0529d6  jal         func_14A758
    ctx->pc = 0x41FE58u;
    SET_GPR_U32(ctx, 31, 0x41FE60u);
    ctx->pc = 0x41FE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FE58u;
    // 0x41fe5c: 0x24a5b510  addiu       $a1, $a1, -0x4AF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A758u, 0x41FE58u, 0x41FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FE60u;
label_41fe60:
    // 0x41fe60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41fe60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41fe64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41fe68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41fe68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41fe6c: 0x3e00008  jr          $ra
    ctx->pc = 0x41FE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FE6Cu;
        // 0x41fe70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FE74u;
    // 0x41fe74: 0x0  nop
    ctx->pc = 0x41fe74u;
    // NOP
    ctx->pc = 0x41fe78u;
}

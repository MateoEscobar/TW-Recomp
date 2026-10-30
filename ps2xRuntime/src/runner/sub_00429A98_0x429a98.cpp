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

// Function: sub_00429A98
// Address: 0x429a98 - 0x429ac8
void sub_00429A98_0x429a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429A98_0x429a98");
#endif

    switch (ctx->pc) {
        case 0x429aacu: goto label_429aac;
        case 0x429ab4u: goto label_429ab4;
        default: break;
    }

    ctx->pc = 0x429a98u;

    // 0x429a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x429a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x429a9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x429a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x429aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x429aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x429aa4: 0xc109b10  jal         func_426C40
    ctx->pc = 0x429AA4u;
    SET_GPR_U32(ctx, 31, 0x429AACu);
    ctx->pc = 0x426C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426C40u, 0x429AA4u, 0x429AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429AACu;
label_429aac:
    // 0x429aac: 0xc1093be  jal         func_424EF8
    ctx->pc = 0x429AACu;
    SET_GPR_U32(ctx, 31, 0x429AB4u);
    ctx->pc = 0x429AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429AACu;
    // 0x429ab0: 0x30500001  andi        $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x424EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424EF8u, 0x429AACu, 0x429AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429AB4u;
label_429ab4:
    // 0x429ab4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x429ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x429ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x429abc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x429abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x429ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x429AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429AC0u;
        // 0x429ac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429AC8u;
}

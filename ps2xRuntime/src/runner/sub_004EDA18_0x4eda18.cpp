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

// Function: sub_004EDA18
// Address: 0x4eda18 - 0x4eda68
void sub_004EDA18_0x4eda18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDA18_0x4eda18");
#endif

    switch (ctx->pc) {
        case 0x4eda34u: goto label_4eda34;
        default: break;
    }

    ctx->pc = 0x4eda18u;

    // 0x4eda18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4eda18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4eda1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4eda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4eda20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eda20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4eda24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4eda24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eda28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eda28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4eda2c: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x4EDA2Cu;
    SET_GPR_U32(ctx, 31, 0x4EDA34u);
    ctx->pc = 0x4EDA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDA2Cu;
    // 0x4eda30: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x4EDA2Cu, 0x4EDA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDA34u;
label_4eda34:
    // 0x4eda34: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4eda34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4eda38: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x4eda38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4eda3c: 0x24635510  addiu       $v1, $v1, 0x5510
    ctx->pc = 0x4eda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21776));
    // 0x4eda40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eda40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eda44: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x4eda44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4eda48: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4eda48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eda4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4eda4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eda50: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x4eda50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x4eda54: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x4eda54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x4eda58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eda58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eda5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EDA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDA5Cu;
        // 0x4eda60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EDA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EDA64u;
    // 0x4eda64: 0x0  nop
    ctx->pc = 0x4eda64u;
    // NOP
    ctx->pc = 0x4eda68u;
}

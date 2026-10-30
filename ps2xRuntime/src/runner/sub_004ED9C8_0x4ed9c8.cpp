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

// Function: sub_004ED9C8
// Address: 0x4ed9c8 - 0x4eda18
void sub_004ED9C8_0x4ed9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED9C8_0x4ed9c8");
#endif

    switch (ctx->pc) {
        case 0x4ed9e4u: goto label_4ed9e4;
        default: break;
    }

    ctx->pc = 0x4ed9c8u;

    // 0x4ed9c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed9cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ed9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ed9d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed9d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4ed9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed9dc: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x4ED9DCu;
    SET_GPR_U32(ctx, 31, 0x4ED9E4u);
    ctx->pc = 0x4ED9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED9DCu;
    // 0x4ed9e0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x4ED9DCu, 0x4ED9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED9E4u;
label_4ed9e4:
    // 0x4ed9e4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4ed9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4ed9e8: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x4ed9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4ed9ec: 0x24635500  addiu       $v1, $v1, 0x5500
    ctx->pc = 0x4ed9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21760));
    // 0x4ed9f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed9f4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x4ed9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4ed9f8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ed9f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed9fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ed9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eda00: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x4eda00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x4eda04: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x4eda04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x4eda08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eda08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eda0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EDA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDA0Cu;
        // 0x4eda10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EDA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EDA14u;
    // 0x4eda14: 0x0  nop
    ctx->pc = 0x4eda14u;
    // NOP
    ctx->pc = 0x4eda18u;
}

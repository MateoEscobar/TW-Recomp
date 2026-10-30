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

// Function: sub_002E28F8
// Address: 0x2e28f8 - 0x2e2958
void sub_002E28F8_0x2e28f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E28F8_0x2e28f8");
#endif

    ctx->pc = 0x2e28f8u;

    // 0x2e28f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2e28f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2e28fc: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x2e28fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
    // 0x2e2900: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e2900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e2904: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2e2904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2e2908: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2e2908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2e290c: 0x25081a70  addiu       $t0, $t0, 0x1A70
    ctx->pc = 0x2e290cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6768));
    // 0x2e2910: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x2e2910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2e2914: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e2914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e2918: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2e2918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2e291c: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x2e291cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x2e2920: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2e2920u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2924: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2e2924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x2e2928: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2e2928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e292c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e292cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2930: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e2930u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2e2934: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2e2934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2e2938: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2e2938u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2e293c: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x2e293cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x2e2940: 0xe48c0038  swc1        $f12, 0x38($a0)
    ctx->pc = 0x2e2940u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2e2944: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2e2944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2e2948: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2e2948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2e294c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2e294cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2e2950: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2950u;
        // 0x2e2954: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2958u;
}

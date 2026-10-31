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

// Function: sub_00179310
// Address: 0x179310 - 0x179378
void sub_00179310_0x179310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179310_0x179310");
#endif

    ctx->pc = 0x179310u;

    // 0x179310: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x179310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x179314: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x179314u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179318: 0xc8001b  divu        $zero, $a2, $t0
    ctx->pc = 0x179318u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x17931c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x179320: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x179320u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x179324: 0x24421720  addiu       $v0, $v0, 0x1720
    ctx->pc = 0x179324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5920));
    // 0x179328: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x179328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x17932c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x17932cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x179330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x179330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179334: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x179334u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x511720u));
    // 0x179338: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x179338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
    // 0x17933c: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x17933cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x179340: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x179340u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x179344: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x179344u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511730u));
    // 0x179348: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x179348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x17934c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x17934cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x179350: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x179350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x179354: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x179354u;
    {
        const bool branch_taken_0x179354 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x179354) {
            ctx->pc = 0x179358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179354u;
            // 0x179358: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17935Cu;
            goto label_17935c;
        }
    }
    ctx->pc = 0x17935Cu;
label_17935c:
    // 0x17935c: 0x3012  mflo        $a2
    ctx->pc = 0x17935cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x179360: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x179360u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x179364: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x179364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x179368: 0x3812  mflo        $a3
    ctx->pc = 0x179368u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x17936c: 0x3e00008  jr          $ra
    ctx->pc = 0x17936Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17936Cu;
        // 0x179370: 0xac87003c  sw          $a3, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17936Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179374u;
    // 0x179374: 0x0  nop
    ctx->pc = 0x179374u;
    // NOP
    ctx->pc = 0x179378u;
}

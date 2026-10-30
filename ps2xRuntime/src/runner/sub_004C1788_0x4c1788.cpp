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

// Function: sub_004C1788
// Address: 0x4c1788 - 0x4c17d8
void sub_004C1788_0x4c1788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C1788_0x4c1788");
#endif

    switch (ctx->pc) {
        case 0x4c1788u: goto label_4c1788;
        case 0x4c178cu: goto label_4c178c;
        case 0x4c1790u: goto label_4c1790;
        case 0x4c1794u: goto label_4c1794;
        case 0x4c1798u: goto label_4c1798;
        case 0x4c179cu: goto label_4c179c;
        case 0x4c17a0u: goto label_4c17a0;
        case 0x4c17a4u: goto label_4c17a4;
        case 0x4c17a8u: goto label_4c17a8;
        case 0x4c17acu: goto label_4c17ac;
        case 0x4c17b0u: goto label_4c17b0;
        case 0x4c17b4u: goto label_4c17b4;
        case 0x4c17b8u: goto label_4c17b8;
        case 0x4c17bcu: goto label_4c17bc;
        case 0x4c17c0u: goto label_4c17c0;
        case 0x4c17c4u: goto label_4c17c4;
        case 0x4c17c8u: goto label_4c17c8;
        case 0x4c17ccu: goto label_4c17cc;
        case 0x4c17d0u: goto label_4c17d0;
        case 0x4c17d4u: goto label_4c17d4;
        default: break;
    }

    ctx->pc = 0x4c1788u;

label_4c1788:
    // 0x4c1788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c1788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c178c:
    // 0x4c178c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c1790:
    // 0x4c1790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c1790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4c1794:
    // 0x4c1794: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c1794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c1798:
    // 0x4c1798: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x4c1798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4c179c:
    // 0x4c179c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c179cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c17a0:
    // 0x4c17a0: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x4c17a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_4c17a4:
    // 0x4c17a4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4c17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4c17a8:
    // 0x4c17a8: 0x3012  mflo        $a2
    ctx->pc = 0x4c17a8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_4c17ac:
    // 0x4c17ac: 0x40f809  jalr        $v0
label_4c17b0:
    if (ctx->pc == 0x4C17B0u) {
        ctx->pc = 0x4C17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C17ACu;
        // 0x4c17b0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C17B4u;
        goto label_4c17b4;
    }
    ctx->pc = 0x4C17ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C17B4u);
        ctx->pc = 0x4C17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C17ACu;
        // 0x4c17b0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C17ACu, 0x4C17B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C17B4u;
label_4c17b4:
    // 0x4c17b4: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x4c17b4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_4c17b8:
    // 0x4c17b8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_4c17bc:
    if (ctx->pc == 0x4C17BCu) {
        ctx->pc = 0x4C17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C17B8u;
        // 0x4c17bc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C17C0u;
        goto label_4c17c0;
    }
    ctx->pc = 0x4C17B8u;
    {
        const bool branch_taken_0x4c17b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c17b8) {
            ctx->pc = 0x4C17BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C17B8u;
            // 0x4c17bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C17C0u;
            goto label_4c17c0;
        }
    }
    ctx->pc = 0x4C17C0u;
label_4c17c0:
    // 0x4c17c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c17c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c17c4:
    // 0x4c17c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c17c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c17c8:
    // 0x4c17c8: 0x1012  mflo        $v0
    ctx->pc = 0x4c17c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_4c17cc:
    // 0x4c17cc: 0x3e00008  jr          $ra
label_4c17d0:
    if (ctx->pc == 0x4C17D0u) {
        ctx->pc = 0x4C17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C17CCu;
        // 0x4c17d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C17D4u;
        goto label_4c17d4;
    }
    ctx->pc = 0x4C17CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C17CCu;
        // 0x4c17d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C17CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C17D4u;
label_4c17d4:
    // 0x4c17d4: 0x0  nop
    ctx->pc = 0x4c17d4u;
    // NOP
    ctx->pc = 0x4c17d8u;
}

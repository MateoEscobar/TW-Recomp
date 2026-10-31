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

// Function: sub_0033B778
// Address: 0x33b778 - 0x33b810
void sub_0033B778_0x33b778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B778_0x33b778");
#endif

    switch (ctx->pc) {
        case 0x33b7a4u: goto label_33b7a4;
        case 0x33b7c4u: goto label_33b7c4;
        default: break;
    }

    ctx->pc = 0x33b778u;

    // 0x33b778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33b778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33b77c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33b77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33b780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33b784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33b784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b78c: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x33b78cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x33b790: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x33b790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x33b794: 0xb10018  mult        $zero, $a1, $s1
    ctx->pc = 0x33b794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33b798: 0x2812  mflo        $a1
    ctx->pc = 0x33b798u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x33b79c: 0xc0cedbe  jal         func_33B6F8
    ctx->pc = 0x33B79Cu;
    SET_GPR_U32(ctx, 31, 0x33B7A4u);
    ctx->pc = 0x33B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6F8u, 0x33B79Cu, 0x33B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B7A4u;
label_33b7a4:
    // 0x33b7a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x33B7A4u;
    {
        const bool branch_taken_0x33b7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7A4u;
        // 0x33b7a8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b7a4) {
            ctx->pc = 0x33B7F8u;
            goto label_33b7f8;
        }
    }
    ctx->pc = 0x33B7ACu;
    // 0x33b7ac: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x33b7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x33b7b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33b7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b7b4: 0xd10018  mult        $zero, $a2, $s1
    ctx->pc = 0x33b7b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33b7b8: 0x3012  mflo        $a2
    ctx->pc = 0x33b7b8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33b7bc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x33B7BCu;
    SET_GPR_U32(ctx, 31, 0x33B7C4u);
    ctx->pc = 0x33B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B7BCu;
    // 0x33b7c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x33B7BCu, 0x33B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B7C4u;
label_33b7c4:
    // 0x33b7c4: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x33b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x33b7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b7cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x33b7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x33b7d0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x33b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x33b7d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x33b7d8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x33b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x33b7dc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x33b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x33b7e0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x33b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33b7e4: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x33b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x33b7e8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33b7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33b7ec: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x33b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x33b7f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33B7F0u;
    {
        const bool branch_taken_0x33b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7F0u;
        // 0x33b7f4: 0xae040030  sw          $a0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b7f0) {
            ctx->pc = 0x33B7FCu;
            goto label_33b7fc;
        }
    }
    ctx->pc = 0x33B7F8u;
label_33b7f8:
    // 0x33b7f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33b7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b7fc:
    // 0x33b7fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33b7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b808: 0x3e00008  jr          $ra
    ctx->pc = 0x33B808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B808u;
        // 0x33b80c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B810u;
}

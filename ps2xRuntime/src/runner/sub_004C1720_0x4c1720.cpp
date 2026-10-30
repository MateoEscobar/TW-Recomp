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

// Function: sub_004C1720
// Address: 0x4c1720 - 0x4c1788
void sub_004C1720_0x4c1720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C1720_0x4c1720");
#endif

    switch (ctx->pc) {
        case 0x4c1720u: goto label_4c1720;
        case 0x4c1724u: goto label_4c1724;
        case 0x4c1728u: goto label_4c1728;
        case 0x4c172cu: goto label_4c172c;
        case 0x4c1730u: goto label_4c1730;
        case 0x4c1734u: goto label_4c1734;
        case 0x4c1738u: goto label_4c1738;
        case 0x4c173cu: goto label_4c173c;
        case 0x4c1740u: goto label_4c1740;
        case 0x4c1744u: goto label_4c1744;
        case 0x4c1748u: goto label_4c1748;
        case 0x4c174cu: goto label_4c174c;
        case 0x4c1750u: goto label_4c1750;
        case 0x4c1754u: goto label_4c1754;
        case 0x4c1758u: goto label_4c1758;
        case 0x4c175cu: goto label_4c175c;
        case 0x4c1760u: goto label_4c1760;
        case 0x4c1764u: goto label_4c1764;
        case 0x4c1768u: goto label_4c1768;
        case 0x4c176cu: goto label_4c176c;
        case 0x4c1770u: goto label_4c1770;
        case 0x4c1774u: goto label_4c1774;
        case 0x4c1778u: goto label_4c1778;
        case 0x4c177cu: goto label_4c177c;
        case 0x4c1780u: goto label_4c1780;
        case 0x4c1784u: goto label_4c1784;
        default: break;
    }

    ctx->pc = 0x4c1720u;

label_4c1720:
    // 0x4c1720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c1720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c1724:
    // 0x4c1724: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4c1724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c1728:
    // 0x4c1728: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c1728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c172c:
    // 0x4c172c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c172cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4c1730:
    // 0x4c1730: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c1730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c1734:
    // 0x4c1734: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x4c1734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_4c1738:
    // 0x4c1738: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x4c1738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_4c173c:
    // 0x4c173c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4c1740:
    if (ctx->pc == 0x4C1740u) {
        ctx->pc = 0x4C1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C173Cu;
        // 0x4c1740: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1744u;
        goto label_4c1744;
    }
    ctx->pc = 0x4C173Cu;
    {
        const bool branch_taken_0x4c173c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C173Cu;
        // 0x4c1740: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c173c) {
            ctx->pc = 0x4C174Cu;
            goto label_4c174c;
        }
    }
    ctx->pc = 0x4C1744u;
label_4c1744:
    // 0x4c1744: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4c1744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4c1748:
    // 0x4c1748: 0xace20040  sw          $v0, 0x40($a3)
    ctx->pc = 0x4c1748u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 2));
label_4c174c:
    // 0x4c174c: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x4c174cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4c1750:
    // 0x4c1750: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4c1750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4c1754:
    // 0x4c1754: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4c1754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c1758:
    // 0x4c1758: 0x3012  mflo        $a2
    ctx->pc = 0x4c1758u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_4c175c:
    // 0x4c175c: 0x40f809  jalr        $v0
label_4c1760:
    if (ctx->pc == 0x4C1760u) {
        ctx->pc = 0x4C1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C175Cu;
        // 0x4c1760: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1764u;
        goto label_4c1764;
    }
    ctx->pc = 0x4C175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C1764u);
        ctx->pc = 0x4C1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C175Cu;
        // 0x4c1760: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C175Cu, 0x4C1764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1764u;
label_4c1764:
    // 0x4c1764: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x4c1764u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_4c1768:
    // 0x4c1768: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_4c176c:
    if (ctx->pc == 0x4C176Cu) {
        ctx->pc = 0x4C176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1768u;
        // 0x4c176c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1770u;
        goto label_4c1770;
    }
    ctx->pc = 0x4C1768u;
    {
        const bool branch_taken_0x4c1768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1768) {
            ctx->pc = 0x4C176Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1768u;
            // 0x4c176c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1770u;
            goto label_4c1770;
        }
    }
    ctx->pc = 0x4C1770u;
label_4c1770:
    // 0x4c1770: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c1770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c1774:
    // 0x4c1774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c1774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c1778:
    // 0x4c1778: 0x1012  mflo        $v0
    ctx->pc = 0x4c1778u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_4c177c:
    // 0x4c177c: 0x3e00008  jr          $ra
label_4c1780:
    if (ctx->pc == 0x4C1780u) {
        ctx->pc = 0x4C1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C177Cu;
        // 0x4c1780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1784u;
        goto label_4c1784;
    }
    ctx->pc = 0x4C177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C177Cu;
        // 0x4c1780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C177Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C1784u;
label_4c1784:
    // 0x4c1784: 0x0  nop
    ctx->pc = 0x4c1784u;
    // NOP
    ctx->pc = 0x4c1788u;
}

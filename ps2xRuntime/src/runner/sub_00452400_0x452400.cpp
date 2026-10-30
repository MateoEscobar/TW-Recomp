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

// Function: sub_00452400
// Address: 0x452400 - 0x452470
void sub_00452400_0x452400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452400_0x452400");
#endif

    switch (ctx->pc) {
        case 0x45242cu: goto label_45242c;
        case 0x452440u: goto label_452440;
        default: break;
    }

    ctx->pc = 0x452400u;

    // 0x452400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x452400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x452404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452408: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x452408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45240c: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x45240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x452410: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x452410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x452414: 0x14670007  bne         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x452414u;
    {
        const bool branch_taken_0x452414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x452418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452414u;
        // 0x452418: 0x8cc20024  lw          $v0, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452414) {
            ctx->pc = 0x452434u;
            goto label_452434;
        }
    }
    ctx->pc = 0x45241Cu;
    // 0x45241c: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x45241cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x452420: 0x3012  mflo        $a2
    ctx->pc = 0x452420u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x452424: 0xc1142b0  jal         func_450AC0
    ctx->pc = 0x452424u;
    SET_GPR_U32(ctx, 31, 0x45242Cu);
    ctx->pc = 0x452428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452424u;
    // 0x452428: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x450AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450AC0u, 0x452424u, 0x45242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45242Cu;
label_45242c:
    // 0x45242c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x45242Cu;
    {
        const bool branch_taken_0x45242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x452430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45242Cu;
        // 0x452430: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45242c) {
            ctx->pc = 0x452464u;
            goto label_452464;
        }
    }
    ctx->pc = 0x452434u;
label_452434:
    // 0x452434: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x452434u;
    {
        const bool branch_taken_0x452434 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x452438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452434u;
        // 0x452438: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452434) {
            ctx->pc = 0x452464u;
            goto label_452464;
        }
    }
    ctx->pc = 0x45243Cu;
    // 0x45243c: 0x0  nop
    ctx->pc = 0x45243cu;
    // NOP
label_452440:
    // 0x452440: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x452440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x452444: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x452444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x452448: 0xa8860003  swl         $a2, 0x3($a0)
    ctx->pc = 0x452448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45244c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45244cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x452450: 0xb8860000  swr         $a2, 0x0($a0)
    ctx->pc = 0x452450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x452454: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x452454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x452458: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x452458u;
    {
        const bool branch_taken_0x452458 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452458u;
        // 0x45245c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452458) {
            ctx->pc = 0x452440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452440;
        }
    }
    ctx->pc = 0x452460u;
    // 0x452460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_452464:
    // 0x452464: 0x3e00008  jr          $ra
    ctx->pc = 0x452464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452464u;
        // 0x452468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45246Cu;
    // 0x45246c: 0x0  nop
    ctx->pc = 0x45246cu;
    // NOP
    ctx->pc = 0x452470u;
}

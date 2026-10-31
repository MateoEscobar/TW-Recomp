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

// Function: sub_00452600
// Address: 0x452600 - 0x452670
void sub_00452600_0x452600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452600_0x452600");
#endif

    switch (ctx->pc) {
        case 0x45262cu: goto label_45262c;
        case 0x452640u: goto label_452640;
        default: break;
    }

    ctx->pc = 0x452600u;

    // 0x452600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x452600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x452604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452608: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x452608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45260c: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x45260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x452610: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x452610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x452614: 0x14670007  bne         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x452614u;
    {
        const bool branch_taken_0x452614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x452618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452614u;
        // 0x452618: 0x8cc2001c  lw          $v0, 0x1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452614) {
            ctx->pc = 0x452634u;
            goto label_452634;
        }
    }
    ctx->pc = 0x45261Cu;
    // 0x45261c: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x45261cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x452620: 0x3012  mflo        $a2
    ctx->pc = 0x452620u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x452624: 0xc1142b0  jal         func_450AC0
    ctx->pc = 0x452624u;
    SET_GPR_U32(ctx, 31, 0x45262Cu);
    ctx->pc = 0x452628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452624u;
    // 0x452628: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x450AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450AC0u, 0x452624u, 0x45262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45262Cu;
label_45262c:
    // 0x45262c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x45262Cu;
    {
        const bool branch_taken_0x45262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x452630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45262Cu;
        // 0x452630: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45262c) {
            ctx->pc = 0x452664u;
            goto label_452664;
        }
    }
    ctx->pc = 0x452634u;
label_452634:
    // 0x452634: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x452634u;
    {
        const bool branch_taken_0x452634 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x452638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452634u;
        // 0x452638: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452634) {
            ctx->pc = 0x452664u;
            goto label_452664;
        }
    }
    ctx->pc = 0x45263Cu;
    // 0x45263c: 0x0  nop
    ctx->pc = 0x45263cu;
    // NOP
label_452640:
    // 0x452640: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x452640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x452644: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x452644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x452648: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x452648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45264c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45264cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x452650: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x452650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x452654: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x452654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x452658: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x452658u;
    {
        const bool branch_taken_0x452658 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452658u;
        // 0x45265c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452658) {
            ctx->pc = 0x452640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452640;
        }
    }
    ctx->pc = 0x452660u;
    // 0x452660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_452664:
    // 0x452664: 0x3e00008  jr          $ra
    ctx->pc = 0x452664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452664u;
        // 0x452668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45266Cu;
    // 0x45266c: 0x0  nop
    ctx->pc = 0x45266cu;
    // NOP
    ctx->pc = 0x452670u;
}

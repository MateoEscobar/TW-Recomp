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

// Function: sub_002CA310
// Address: 0x2ca310 - 0x2ca380
void sub_002CA310_0x2ca310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA310_0x2ca310");
#endif

    switch (ctx->pc) {
        case 0x2ca330u: goto label_2ca330;
        case 0x2ca33cu: goto label_2ca33c;
        case 0x2ca358u: goto label_2ca358;
        default: break;
    }

    ctx->pc = 0x2ca310u;

    // 0x2ca310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca31c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca320: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ca320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ca324: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ca324u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ca328: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2CA328u;
    SET_GPR_U32(ctx, 31, 0x2CA330u);
    ctx->pc = 0x2CA32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA328u;
    // 0x2ca32c: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CA328u, 0x2CA330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA330u;
label_2ca330:
    // 0x2ca330: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ca330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca334: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2CA334u;
    SET_GPR_U32(ctx, 31, 0x2CA33Cu);
    ctx->pc = 0x2CA338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA334u;
    // 0x2ca338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2CA334u, 0x2CA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA33Cu;
label_2ca33c:
    // 0x2ca33c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ca33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca340: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2CA340u;
    {
        const bool branch_taken_0x2ca340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA340u;
        // 0x2ca344: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca340) {
            ctx->pc = 0x2CA36Cu;
            goto label_2ca36c;
        }
    }
    ctx->pc = 0x2CA348u;
    // 0x2ca348: 0x68465b17  ldl         $a2, 0x5B17($v0)
    ctx->pc = 0x2ca348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ca34c: 0x6c465b10  ldr         $a2, 0x5B10($v0)
    ctx->pc = 0x2ca34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ca350: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2CA350u;
    SET_GPR_U32(ctx, 31, 0x2CA358u);
    ctx->pc = 0x2CA354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA350u;
    // 0x2ca354: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2CA350u, 0x2CA358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA358u;
label_2ca358:
    // 0x2ca358: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2ca358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2ca35c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2ca35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2ca360: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2ca360u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2ca364: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2ca364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ca368: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2ca368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_2ca36c:
    // 0x2ca36c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ca36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca378: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA378u;
        // 0x2ca37c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA380u;
}

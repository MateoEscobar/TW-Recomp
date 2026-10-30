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

// Function: sub_0047D6F0
// Address: 0x47d6f0 - 0x47d7a8
void sub_0047D6F0_0x47d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D6F0_0x47d6f0");
#endif

    switch (ctx->pc) {
        case 0x47d728u: goto label_47d728;
        case 0x47d784u: goto label_47d784;
        default: break;
    }

    ctx->pc = 0x47d6f0u;

    // 0x47d6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47d6f4: 0xaf858928  sw          $a1, -0x76D8($gp)
    ctx->pc = 0x47d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 5));
    // 0x47d6f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x47d6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x47d6fc: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x47d6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x47d700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47d700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d704: 0x8f8585cc  lw          $a1, -0x7A34($gp)
    ctx->pc = 0x47d704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936012)));
    // 0x47d708: 0x8f8785d0  lw          $a3, -0x7A30($gp)
    ctx->pc = 0x47d708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x47d70c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x47d70cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x47d710: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x47d710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x47d714: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x47d714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x47d718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47d718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47d71c: 0x2508ac50  addiu       $t0, $t0, -0x53B0
    ctx->pc = 0x47d71cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945872));
    // 0x47d720: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x47D720u;
    SET_GPR_U32(ctx, 31, 0x47D728u);
    ctx->pc = 0x47D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47D720u;
    // 0x47d724: 0x3529000d  ori         $t1, $t1, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x47D720u, 0x47D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D728u;
label_47d728:
    // 0x47d728: 0x8f848928  lw          $a0, -0x76D8($gp)
    ctx->pc = 0x47d728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x47d72c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x47d730: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x47d730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x47d734: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x47d734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x47d738: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47D738u;
    {
        const bool branch_taken_0x47d738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D738u;
        // 0x47d73c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d738) {
            ctx->pc = 0x47D748u;
            goto label_47d748;
        }
    }
    ctx->pc = 0x47D740u;
    // 0x47d740: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x47D740u;
    {
        const bool branch_taken_0x47d740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D740u;
        // 0x47d744: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d740) {
            ctx->pc = 0x47D790u;
            goto label_47d790;
        }
    }
    ctx->pc = 0x47D748u;
label_47d748:
    // 0x47d748: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x47d748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x47d74c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x47d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x47d750: 0x2442c0f8  addiu       $v0, $v0, -0x3F08
    ctx->pc = 0x47d750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951160));
    // 0x47d754: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x47d754u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x47d758: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47d758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x47d75c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x47d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x47d760: 0x24a7ef88  addiu       $a3, $a1, -0x1078
    ctx->pc = 0x47d760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963080));
    // 0x47d764: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x47d764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x47d768: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x47d768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x47d76c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x47d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58EF90u));
    // 0x47d770: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x47d770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47d774: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x47d774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47d778: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x47d778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x47d77c: 0xc11f490  jal         func_47D240
    ctx->pc = 0x47D77Cu;
    SET_GPR_U32(ctx, 31, 0x47D784u);
    ctx->pc = 0x47D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47D77Cu;
    // 0x47d780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D240u, 0x47D77Cu, 0x47D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D784u;
label_47d784:
    // 0x47d784: 0x8f83892c  lw          $v1, -0x76D4($gp)
    ctx->pc = 0x47d784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
    // 0x47d788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x47d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x47d78c: 0xaf83892c  sw          $v1, -0x76D4($gp)
    ctx->pc = 0x47d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 3));
label_47d790:
    // 0x47d790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47d790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47d794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47d798: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x47d798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47d79c: 0x3e00008  jr          $ra
    ctx->pc = 0x47D79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D79Cu;
        // 0x47d7a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D7A4u;
    // 0x47d7a4: 0x0  nop
    ctx->pc = 0x47d7a4u;
    // NOP
    ctx->pc = 0x47d7a8u;
}

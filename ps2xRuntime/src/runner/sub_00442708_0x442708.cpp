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

// Function: sub_00442708
// Address: 0x442708 - 0x442808
void sub_00442708_0x442708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442708_0x442708");
#endif

    switch (ctx->pc) {
        case 0x442730u: goto label_442730;
        case 0x442744u: goto label_442744;
        case 0x442788u: goto label_442788;
        case 0x4427c8u: goto label_4427c8;
        default: break;
    }

    ctx->pc = 0x442708u;

    // 0x442708: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x442708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x44270c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x44270cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x442710: 0x3c120052  lui         $s2, 0x52
    ctx->pc = 0x442710u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)82 << 16));
    // 0x442714: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x442714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x442718: 0x8e428f08  lw          $v0, -0x70F8($s2)
    ctx->pc = 0x442718u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x518F08u));
    // 0x44271c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x44271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x442720: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x442720u;
    {
        const bool branch_taken_0x442720 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x442724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442720u;
        // 0x442724: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442720) {
            ctx->pc = 0x4427ECu;
            goto label_4427ec;
        }
    }
    ctx->pc = 0x442728u;
    // 0x442728: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x442728u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x44272c: 0x26303ac0  addiu       $s0, $s1, 0x3AC0
    ctx->pc = 0x44272cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 15040));
label_442730:
    // 0x442730: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x442730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x442734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x442734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442738: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x442738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x44273c: 0xc1101d6  jal         func_440758
    ctx->pc = 0x44273Cu;
    SET_GPR_U32(ctx, 31, 0x442744u);
    ctx->pc = 0x442740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44273Cu;
    // 0x442740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440758u, 0x44273Cu, 0x442744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442744u;
label_442744:
    // 0x442744: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x442744u;
    {
        const bool branch_taken_0x442744 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x442744) {
            ctx->pc = 0x442748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442744u;
            // 0x442748: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442754u;
            goto label_442754;
        }
    }
    ctx->pc = 0x44274Cu;
    // 0x44274c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x44274Cu;
    {
        const bool branch_taken_0x44274c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44274Cu;
        // 0x442750: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44274c) {
            ctx->pc = 0x4427F0u;
            goto label_4427f0;
        }
    }
    ctx->pc = 0x442754u;
label_442754:
    // 0x442754: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x442754u;
    {
        const bool branch_taken_0x442754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442754u;
        // 0x442758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442754) {
            ctx->pc = 0x4427BCu;
            goto label_4427bc;
        }
    }
    ctx->pc = 0x44275Cu;
    // 0x44275c: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x44275cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x442760: 0xae408f08  sw          $zero, -0x70F8($s2)
    ctx->pc = 0x442760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294938376), GPR_U32(ctx, 0));
    // 0x442764: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x442764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x442768: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x442768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x44276c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44276cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442770: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x442770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442774: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x442774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442778: 0x262938c0  addiu       $t1, $s1, 0x38C0
    ctx->pc = 0x442778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 14528));
    // 0x44277c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x44277cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x442780: 0xc11024e  jal         func_440938
    ctx->pc = 0x442780u;
    SET_GPR_U32(ctx, 31, 0x442788u);
    ctx->pc = 0x442784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442780u;
    // 0x442784: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440938u, 0x442780u, 0x442788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442788u;
label_442788:
    // 0x442788: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x442788u;
    {
        const bool branch_taken_0x442788 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x44278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442788u;
        // 0x44278c: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442788) {
            ctx->pc = 0x44279Cu;
            goto label_44279c;
        }
    }
    ctx->pc = 0x442790u;
    // 0x442790: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x442790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x442794: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x442794u;
    {
        const bool branch_taken_0x442794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442794u;
        // 0x442798: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x442794) {
            ctx->pc = 0x4427F0u;
            goto label_4427f0;
        }
    }
    ctx->pc = 0x44279Cu;
label_44279c:
    // 0x44279c: 0x262738c0  addiu       $a3, $s1, 0x38C0
    ctx->pc = 0x44279cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 14528));
    // 0x4427a0: 0x24663ae8  addiu       $a2, $v1, 0x3AE8
    ctx->pc = 0x4427a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15080));
    // 0x4427a4: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x4427a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x4427a8: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x4427a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x4427ac: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x4427acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4427b0: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x4427b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4427b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4427B4u;
    {
        const bool branch_taken_0x4427b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4427B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4427B4u;
        // 0x4427b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4427b4) {
            ctx->pc = 0x4427F0u;
            goto label_4427f0;
        }
    }
    ctx->pc = 0x4427BCu;
label_4427bc:
    // 0x4427bc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x4427bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x4427c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4427c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4427c4: 0x0  nop
    ctx->pc = 0x4427c4u;
    // NOP
label_4427c8:
    // 0x4427c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4427c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4427cc: 0x0  nop
    ctx->pc = 0x4427ccu;
    // NOP
    // 0x4427d0: 0x0  nop
    ctx->pc = 0x4427d0u;
    // NOP
    // 0x4427d4: 0x0  nop
    ctx->pc = 0x4427d4u;
    // NOP
    // 0x4427d8: 0x0  nop
    ctx->pc = 0x4427d8u;
    // NOP
    // 0x4427dc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4427DCu;
    {
        const bool branch_taken_0x4427dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4427dc) {
            ctx->pc = 0x4427C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4427c8;
        }
    }
    ctx->pc = 0x4427E4u;
    // 0x4427e4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x4427E4u;
    {
        const bool branch_taken_0x4427e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4427E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4427E4u;
        // 0x4427e8: 0x26303ac0  addiu       $s0, $s1, 0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 15040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4427e4) {
            ctx->pc = 0x442730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_442730;
        }
    }
    ctx->pc = 0x4427ECu;
label_4427ec:
    // 0x4427ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4427ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4427f0:
    // 0x4427f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4427f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4427f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4427f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4427f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4427f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4427fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4427fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x442800: 0x3e00008  jr          $ra
    ctx->pc = 0x442800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442800u;
        // 0x442804: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x442800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x442808u;
}

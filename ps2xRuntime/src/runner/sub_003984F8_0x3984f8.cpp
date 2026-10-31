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

// Function: sub_003984F8
// Address: 0x3984f8 - 0x398598
void sub_003984F8_0x3984f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003984F8_0x3984f8");
#endif

    switch (ctx->pc) {
        case 0x398530u: goto label_398530;
        case 0x398558u: goto label_398558;
        default: break;
    }

    ctx->pc = 0x3984f8u;

    // 0x3984f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3984f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3984fc: 0x94a30018  lhu         $v1, 0x18($a1)
    ctx->pc = 0x3984fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x398500: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x398500u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x398504: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x398504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x398508: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x398508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39850c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x39850Cu;
    {
        const bool branch_taken_0x39850c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39850c) {
            ctx->pc = 0x398510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39850Cu;
            // 0x398510: 0x94a30018  lhu         $v1, 0x18($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398538u;
            goto label_398538;
        }
    }
    ctx->pc = 0x398514u;
    // 0x398514: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x398514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x398518: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x398518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x39851c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x39851cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x398520: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x398520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x398524: 0xa4a30018  sh          $v1, 0x18($a1)
    ctx->pc = 0x398524u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x398528: 0x3e00008  jr          $ra
    ctx->pc = 0x398528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398528u;
        // 0x39852c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398530u;
label_398530:
    // 0x398530: 0x3e00008  jr          $ra
    ctx->pc = 0x398530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398530u;
        // 0x398534: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398538u;
label_398538:
    // 0x398538: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x398538u;
    {
        const bool branch_taken_0x398538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398538u;
        // 0x39853c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398538) {
            ctx->pc = 0x39858Cu;
            goto label_39858c;
        }
    }
    ctx->pc = 0x398540u;
    // 0x398540: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x398540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x398544: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x398544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398548: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x398548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39854c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39854cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398550: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x398550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x398554: 0x0  nop
    ctx->pc = 0x398554u;
    // NOP
label_398558:
    // 0x398558: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x398558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39855c: 0x31482  srl         $v0, $v1, 18
    ctx->pc = 0x39855cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 18));
    // 0x398560: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x398560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x398564: 0x14a90005  bne         $a1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x398564u;
    {
        const bool branch_taken_0x398564 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x398568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398564u;
        // 0x398568: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398564) {
            ctx->pc = 0x39857Cu;
            goto label_39857c;
        }
    }
    ctx->pc = 0x39856Cu;
    // 0x39856c: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x39856cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x398570: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x398570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x398574: 0x1045ffee  beq         $v0, $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x398574u;
    {
        const bool branch_taken_0x398574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x398574) {
            ctx->pc = 0x398530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398530;
        }
    }
    ctx->pc = 0x39857Cu;
label_39857c:
    // 0x39857c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x39857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x398580: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x398580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x398584: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x398584u;
    {
        const bool branch_taken_0x398584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398584u;
        // 0x398588: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398584) {
            ctx->pc = 0x398558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398558;
        }
    }
    ctx->pc = 0x39858Cu;
label_39858c:
    // 0x39858c: 0x3e00008  jr          $ra
    ctx->pc = 0x39858Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39858Cu;
        // 0x398590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39858Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398594u;
    // 0x398594: 0x0  nop
    ctx->pc = 0x398594u;
    // NOP
    ctx->pc = 0x398598u;
}

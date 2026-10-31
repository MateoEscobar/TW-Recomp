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

// Function: sub_0019C740
// Address: 0x19c740 - 0x19c7f0
void sub_0019C740_0x19c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C740_0x19c740");
#endif

    switch (ctx->pc) {
        case 0x19c768u: goto label_19c768;
        case 0x19c788u: goto label_19c788;
        default: break;
    }

    ctx->pc = 0x19c740u;

    // 0x19c740: 0x8c8f0074  lw          $t7, 0x74($a0)
    ctx->pc = 0x19c740u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x19c744: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19c744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c748: 0x8c8d0078  lw          $t5, 0x78($a0)
    ctx->pc = 0x19c748u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x19c74c: 0x11e00026  beqz        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x19C74Cu;
    {
        const bool branch_taken_0x19c74c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C74Cu;
        // 0x19c750: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c74c) {
            ctx->pc = 0x19C7E8u;
            goto label_19c7e8;
        }
    }
    ctx->pc = 0x19C754u;
    // 0x19c754: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19c754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19c758: 0x25ae0001  addiu       $t6, $t5, 0x1
    ctx->pc = 0x19c758u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x19c75c: 0x2458f7a0  addiu       $t8, $v0, -0x860
    ctx->pc = 0x19c75cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
    // 0x19c760: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c764: 0x0  nop
    ctx->pc = 0x19c764u;
    // NOP
label_19c768:
    // 0x19c768: 0x11a0001b  beqz        $t5, . + 4 + (0x1B << 2)
    ctx->pc = 0x19C768u;
    {
        const bool branch_taken_0x19c768 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C768u;
        // 0x19c76c: 0x246c0001  addiu       $t4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c768) {
            ctx->pc = 0x19C7D8u;
            goto label_19c7d8;
        }
    }
    ctx->pc = 0x19C770u;
    // 0x19c770: 0x1c35818  mult        $t3, $t6, $v1
    ctx->pc = 0x19c770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x19c774: 0x1cc5018  mult        $t2, $t6, $t4
    ctx->pc = 0x19c774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x19c778: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x19c778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x19c77c: 0x582821  addu        $a1, $v0, $t8
    ctx->pc = 0x19c77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x19c780: 0x25680001  addiu       $t0, $t3, 0x1
    ctx->pc = 0x19c780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x19c784: 0x25460001  addiu       $a2, $t2, 0x1
    ctx->pc = 0x19c784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_19c788:
    // 0x19c788: 0xeb1021  addu        $v0, $a3, $t3
    ctx->pc = 0x19c788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x19c78c: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x19c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x19c790: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x19c790u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c794: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19c794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19c798: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19c798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x19c79c: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x19c79cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x19c7a0: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x19c7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19c7a4: 0xed202b  sltu        $a0, $a3, $t5
    ctx->pc = 0x19c7a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x19c7a8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19c7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x19c7ac: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x19c7acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x19c7b0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19c7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x19c7b4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x19c7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c7b8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x19c7bc: 0xa4a80000  sh          $t0, 0x0($a1)
    ctx->pc = 0x19c7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x19c7c0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x19c7c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19c7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19c7c8: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x19c7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19c7cc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19c7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x19c7d0: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x19C7D0u;
    {
        const bool branch_taken_0x19c7d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7D0u;
        // 0x19c7d4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7d0) {
            ctx->pc = 0x19C788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c788;
        }
    }
    ctx->pc = 0x19C7D8u;
label_19c7d8:
    // 0x19c7d8: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x19c7d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7dc: 0x6f102b  sltu        $v0, $v1, $t7
    ctx->pc = 0x19c7dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x19c7e0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x19C7E0u;
    {
        const bool branch_taken_0x19c7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7E0u;
        // 0x19c7e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7e0) {
            ctx->pc = 0x19C768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c768;
        }
    }
    ctx->pc = 0x19C7E8u;
label_19c7e8:
    // 0x19c7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7E8u;
        // 0x19c7ec: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C7F0u;
}

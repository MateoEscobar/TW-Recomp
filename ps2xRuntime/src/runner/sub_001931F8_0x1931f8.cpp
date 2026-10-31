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

// Function: sub_001931F8
// Address: 0x1931f8 - 0x193298
void sub_001931F8_0x1931f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001931F8_0x1931f8");
#endif

    switch (ctx->pc) {
        case 0x193210u: goto label_193210;
        case 0x193230u: goto label_193230;
        default: break;
    }

    ctx->pc = 0x1931f8u;

    // 0x1931f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1931f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1931fc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1931fcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193200: 0x244ef470  addiu       $t6, $v0, -0xB90
    ctx->pc = 0x193200u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964336));
    // 0x193204: 0x240d0009  addiu       $t5, $zero, 0x9
    ctx->pc = 0x193204u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x193208: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x193208u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19320c: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x19320cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_193210:
    // 0x193210: 0x6d5018  mult        $t2, $v1, $t5
    ctx->pc = 0x193210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x193214: 0x16d4818  mult        $t1, $t3, $t5
    ctx->pc = 0x193214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x193218: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x193218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x19321c: 0x4e2821  addu        $a1, $v0, $t6
    ctx->pc = 0x19321cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x193220: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193224: 0x25470001  addiu       $a3, $t2, 0x1
    ctx->pc = 0x193224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x193228: 0x25260001  addiu       $a2, $t1, 0x1
    ctx->pc = 0x193228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19322c: 0x0  nop
    ctx->pc = 0x19322cu;
    // NOP
label_193230:
    // 0x193230: 0x10a1021  addu        $v0, $t0, $t2
    ctx->pc = 0x193230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x193234: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x193234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x193238: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x193238u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19323c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19323cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193240: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x193240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x193244: 0x258c0006  addiu       $t4, $t4, 0x6
    ctx->pc = 0x193244u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 6));
    // 0x193248: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x193248u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x19324c: 0x2d030008  sltiu       $v1, $t0, 0x8
    ctx->pc = 0x19324cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x193250: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x193250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x193254: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x193254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x193258: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x193258u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19325c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19325cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x193260: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x193260u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x193264: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x193264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x193268: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x193268u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19326c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19326cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x193270: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x193270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x193274: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x193274u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x193278: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x193278u;
    {
        const bool branch_taken_0x193278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193278u;
        // 0x19327c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193278) {
            ctx->pc = 0x193230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193230;
        }
    }
    ctx->pc = 0x193280u;
    // 0x193280: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x193280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193284: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x193284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x193288: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x193288u;
    {
        const bool branch_taken_0x193288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193288u;
        // 0x19328c: 0x246b0001  addiu       $t3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193288) {
            ctx->pc = 0x193210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193210;
        }
    }
    ctx->pc = 0x193290u;
    // 0x193290: 0x3e00008  jr          $ra
    ctx->pc = 0x193290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193298u;
}

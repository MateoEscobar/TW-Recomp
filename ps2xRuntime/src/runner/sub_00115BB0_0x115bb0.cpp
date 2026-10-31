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

// Function: sub_00115BB0
// Address: 0x115bb0 - 0x115c30
void sub_00115BB0_0x115bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115BB0_0x115bb0");
#endif

    switch (ctx->pc) {
        case 0x115bd8u: goto label_115bd8;
        default: break;
    }

    ctx->pc = 0x115bb0u;

    // 0x115bb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115bb4: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x115BB4u;
    {
        const bool branch_taken_0x115bb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BB4u;
        // 0x115bb8: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bb4) {
            ctx->pc = 0x115C04u;
            goto label_115c04;
        }
    }
    ctx->pc = 0x115BBCu;
    // 0x115bbc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x115bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x115bc0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x115BC0u;
    {
        const bool branch_taken_0x115bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BC0u;
        // 0x115bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bc0) {
            ctx->pc = 0x115BFCu;
            goto label_115bfc;
        }
    }
    ctx->pc = 0x115BC8u;
    // 0x115bc8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x115bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x115bcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x115bccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115bd0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x115bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x115bd4: 0x0  nop
    ctx->pc = 0x115bd4u;
    // NOP
label_115bd8:
    // 0x115bd8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x115bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x115bdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x115bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115be0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x115be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x115be4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x115be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x115be8: 0xa0670002  sb          $a3, 0x2($v1)
    ctx->pc = 0x115be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x115bec: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x115becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x115bf0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x115bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x115bf4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x115BF4u;
    {
        const bool branch_taken_0x115bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BF4u;
        // 0x115bf8: 0x2508026d  addiu       $t0, $t0, 0x26D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 621));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bf4) {
            ctx->pc = 0x115BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115bd8;
        }
    }
    ctx->pc = 0x115BFCu;
label_115bfc:
    // 0x115bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x115BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C04u;
label_115c04:
    // 0x115c04: 0x2402026d  addiu       $v0, $zero, 0x26D
    ctx->pc = 0x115c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    // 0x115c08: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x115c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x115c0c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x115c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115c10: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x115c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x115c14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x115c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x115c18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x115c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x115c1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x115c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115c20: 0xa0470002  sb          $a3, 0x2($v0)
    ctx->pc = 0x115c20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x115c24: 0x3e00008  jr          $ra
    ctx->pc = 0x115C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C2Cu;
    // 0x115c2c: 0x0  nop
    ctx->pc = 0x115c2cu;
    // NOP
    ctx->pc = 0x115c30u;
}

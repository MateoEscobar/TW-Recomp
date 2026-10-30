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

// Function: sub_0032D078
// Address: 0x32d078 - 0x32d0d8
void sub_0032D078_0x32d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D078_0x32d078");
#endif

    switch (ctx->pc) {
        case 0x32d090u: goto label_32d090;
        default: break;
    }

    ctx->pc = 0x32d078u;

    // 0x32d078: 0x8c870028  lw          $a3, 0x28($a0)
    ctx->pc = 0x32d078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x32d07c: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x32D07Cu;
    {
        const bool branch_taken_0x32d07c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D07Cu;
        // 0x32d080: 0x24a8ffff  addiu       $t0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d07c) {
            ctx->pc = 0x32D0CCu;
            goto label_32d0cc;
        }
    }
    ctx->pc = 0x32D084u;
    // 0x32d084: 0x24e901ac  addiu       $t1, $a3, 0x1AC
    ctx->pc = 0x32d084u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 428));
    // 0x32d088: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x32d088u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32d08c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x32d08cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32d090:
    // 0x32d090: 0x94e2001e  lhu         $v0, 0x1E($a3)
    ctx->pc = 0x32d090u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x32d094: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x32d094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x32d098: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x32d098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32d09c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32d0a0: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x32d0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x32d0a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32d0a8: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x32d0a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x32d0ac: 0xa4e2001e  sh          $v0, 0x1E($a3)
    ctx->pc = 0x32d0acu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x32d0b0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x32d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x32d0b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32d0b8: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x32d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x32d0bc: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x32d0bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x32d0c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32d0c4: 0x150afff2  bne         $t0, $t2, . + 4 + (-0xE << 2)
    ctx->pc = 0x32D0C4u;
    {
        const bool branch_taken_0x32d0c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x32D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0C4u;
        // 0x32d0c8: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d0c4) {
            ctx->pc = 0x32D090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d090;
        }
    }
    ctx->pc = 0x32D0CCu;
label_32d0cc:
    // 0x32d0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x32D0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D0D4u;
    // 0x32d0d4: 0x0  nop
    ctx->pc = 0x32d0d4u;
    // NOP
    ctx->pc = 0x32d0d8u;
}

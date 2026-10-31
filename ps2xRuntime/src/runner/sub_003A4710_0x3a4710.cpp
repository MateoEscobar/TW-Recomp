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

// Function: sub_003A4710
// Address: 0x3a4710 - 0x3a4768
void sub_003A4710_0x3a4710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4710_0x3a4710");
#endif

    ctx->pc = 0x3a4710u;

    // 0x3a4710: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a4710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a4714: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a4714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4718: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x3a4718u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5147C4u));
    // 0x3a471c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x3a471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x3a4720: 0x4a0000e  bltz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3A4720u;
    {
        const bool branch_taken_0x3a4720 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3A4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4720u;
        // 0x3a4724: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4720) {
            ctx->pc = 0x3A475Cu;
            goto label_3a475c;
        }
    }
    ctx->pc = 0x3A4728u;
    // 0x3a4728: 0x94620084  lhu         $v0, 0x84($v1)
    ctx->pc = 0x3a4728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x3a472c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3a472cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a4730: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A4730u;
    {
        const bool branch_taken_0x3a4730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4730u;
        // 0x3a4734: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4730) {
            ctx->pc = 0x3A475Cu;
            goto label_3a475c;
        }
    }
    ctx->pc = 0x3A4738u;
    // 0x3a4738: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x3a4738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x3a473c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x3a473cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3a4740: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3a4740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a4744: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3a4744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3a4748: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x3a4748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3a474c: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x3a474cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x3a4750: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3a4750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3a4754: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a4754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a4758: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3a4758u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_3a475c:
    // 0x3a475c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A475Cu;
        // 0x3a4760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A475Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4764u;
    // 0x3a4764: 0x0  nop
    ctx->pc = 0x3a4764u;
    // NOP
    ctx->pc = 0x3a4768u;
}

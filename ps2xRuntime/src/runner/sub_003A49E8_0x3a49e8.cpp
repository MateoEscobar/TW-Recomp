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

// Function: sub_003A49E8
// Address: 0x3a49e8 - 0x3a4a40
void sub_003A49E8_0x3a49e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A49E8_0x3a49e8");
#endif

    ctx->pc = 0x3a49e8u;

    // 0x3a49e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a49ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a49ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a49f0: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x3a49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5147C4u));
    // 0x3a49f4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x3a49f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x3a49f8: 0x4a0000e  bltz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3A49F8u;
    {
        const bool branch_taken_0x3a49f8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3A49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A49F8u;
        // 0x3a49fc: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a49f8) {
            ctx->pc = 0x3A4A34u;
            goto label_3a4a34;
        }
    }
    ctx->pc = 0x3A4A00u;
    // 0x3a4a00: 0x94620084  lhu         $v0, 0x84($v1)
    ctx->pc = 0x3a4a00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x3a4a04: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3a4a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a4a08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A4A08u;
    {
        const bool branch_taken_0x3a4a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A08u;
        // 0x3a4a0c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a08) {
            ctx->pc = 0x3A4A34u;
            goto label_3a4a34;
        }
    }
    ctx->pc = 0x3A4A10u;
    // 0x3a4a10: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x3a4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x3a4a14: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x3a4a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3a4a18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3a4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a4a1c: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3a4a1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3a4a20: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x3a4a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3a4a24: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x3a4a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x3a4a28: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3a4a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3a4a2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a4a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a4a30: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3a4a30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_3a4a34:
    // 0x3a4a34: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A34u;
        // 0x3a4a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4A3Cu;
    // 0x3a4a3c: 0x0  nop
    ctx->pc = 0x3a4a3cu;
    // NOP
    ctx->pc = 0x3a4a40u;
}

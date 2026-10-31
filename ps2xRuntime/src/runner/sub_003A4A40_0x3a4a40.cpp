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

// Function: sub_003A4A40
// Address: 0x3a4a40 - 0x3a4a98
void sub_003A4A40_0x3a4a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4A40_0x3a4a40");
#endif

    ctx->pc = 0x3a4a40u;

    // 0x3a4a40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a4a44: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a4a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4a48: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x3a4a48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5147C4u));
    // 0x3a4a4c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3a4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x3a4a50: 0x4c0000e  bltz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x3A4A50u;
    {
        const bool branch_taken_0x3a4a50 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3A4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A50u;
        // 0x3a4a54: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a50) {
            ctx->pc = 0x3A4A8Cu;
            goto label_3a4a8c;
        }
    }
    ctx->pc = 0x3A4A58u;
    // 0x3a4a58: 0x94620084  lhu         $v0, 0x84($v1)
    ctx->pc = 0x3a4a58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x3a4a5c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3a4a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a4a60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A4A60u;
    {
        const bool branch_taken_0x3a4a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A60u;
        // 0x3a4a64: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a60) {
            ctx->pc = 0x3A4A8Cu;
            goto label_3a4a8c;
        }
    }
    ctx->pc = 0x3A4A68u;
    // 0x3a4a68: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x3a4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x3a4a6c: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x3a4a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3a4a70: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3a4a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a4a74: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3a4a74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3a4a78: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x3a4a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3a4a7c: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x3a4a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x3a4a80: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3a4a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3a4a84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a4a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a4a88: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3a4a88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_3a4a8c:
    // 0x3a4a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4A94u;
    // 0x3a4a94: 0x0  nop
    ctx->pc = 0x3a4a94u;
    // NOP
    ctx->pc = 0x3a4a98u;
}

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

// Function: sub_003A46C8
// Address: 0x3a46c8 - 0x3a4710
void sub_003A46C8_0x3a46c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A46C8_0x3a46c8");
#endif

    ctx->pc = 0x3a46c8u;

    // 0x3a46c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a46cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a46ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a46d0: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x3a46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5147C4u));
    // 0x3a46d4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x3a46d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x3a46d8: 0x4a0000b  bltz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3A46D8u;
    {
        const bool branch_taken_0x3a46d8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3A46DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46D8u;
        // 0x3a46dc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a46d8) {
            ctx->pc = 0x3A4708u;
            goto label_3a4708;
        }
    }
    ctx->pc = 0x3A46E0u;
    // 0x3a46e0: 0x94820084  lhu         $v0, 0x84($a0)
    ctx->pc = 0x3a46e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x3a46e4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3a46e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a46e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A46E8u;
    {
        const bool branch_taken_0x3a46e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A46ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46E8u;
        // 0x3a46ec: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a46e8) {
            ctx->pc = 0x3A4708u;
            goto label_3a4708;
        }
    }
    ctx->pc = 0x3A46F0u;
    // 0x3a46f0: 0x8c840088  lw          $a0, 0x88($a0)
    ctx->pc = 0x3a46f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3a46f4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x3a46f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a46f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a46fc: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x3a46fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x3a4700: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x3a4700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x3a4704: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x3a4704u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_3a4708:
    // 0x3a4708: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4708u;
        // 0x3a470c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4710u;
}

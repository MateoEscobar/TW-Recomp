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

// Function: sub_0041E3D8
// Address: 0x41e3d8 - 0x41e420
void sub_0041E3D8_0x41e3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E3D8_0x41e3d8");
#endif

    ctx->pc = 0x41e3d8u;

    // 0x41e3d8: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x41e3d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x41e3dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x41E3DCu;
    {
        const bool branch_taken_0x41e3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e3dc) {
            ctx->pc = 0x41E414u;
            goto label_41e414;
        }
    }
    ctx->pc = 0x41E3E4u;
    // 0x41e3e4: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x41E3E4u;
    {
        const bool branch_taken_0x41e3e4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x41E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E3E4u;
        // 0x41e3e8: 0x28c20017  slti        $v0, $a2, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e3e4) {
            ctx->pc = 0x41E414u;
            goto label_41e414;
        }
    }
    ctx->pc = 0x41E3ECu;
    // 0x41e3ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x41E3ECu;
    {
        const bool branch_taken_0x41e3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E3ECu;
        // 0x41e3f0: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e3ec) {
            ctx->pc = 0x41E414u;
            goto label_41e414;
        }
    }
    ctx->pc = 0x41E3F4u;
    // 0x41e3f4: 0x240203f4  addiu       $v0, $zero, 0x3F4
    ctx->pc = 0x41e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x41e3f8: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x41e3f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x41e3fc: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x41e3fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x41e400: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x41e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x41e404: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41e404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41e408: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x41e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x41e40c: 0x3e00008  jr          $ra
    ctx->pc = 0x41E40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E40Cu;
        // 0x41e410: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E414u;
label_41e414:
    // 0x41e414: 0x3e00008  jr          $ra
    ctx->pc = 0x41E414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E414u;
        // 0x41e418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E41Cu;
    // 0x41e41c: 0x0  nop
    ctx->pc = 0x41e41cu;
    // NOP
    ctx->pc = 0x41e420u;
}

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

// Function: sub_00101250
// Address: 0x101250 - 0x101288
void sub_00101250_0x101250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101250_0x101250");
#endif

    ctx->pc = 0x101250u;

    // 0x101250: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x101250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101254: 0x9462001a  lhu         $v0, 0x1A($v1)
    ctx->pc = 0x101254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x101258: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x101258u;
    {
        const bool branch_taken_0x101258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101258) {
            ctx->pc = 0x10125Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101258u;
            // 0x10125c: 0x94640010  lhu         $a0, 0x10($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101268u;
            goto label_101268;
        }
    }
    ctx->pc = 0x101260u;
    // 0x101260: 0x3e00008  jr          $ra
    ctx->pc = 0x101260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101260u;
        // 0x101264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101268u;
label_101268:
    // 0x101268: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x101268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10126c: 0x94650012  lhu         $a1, 0x12($v1)
    ctx->pc = 0x10126cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x101270: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x101270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x101274: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x101274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x101278: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x101278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10127c: 0x3e00008  jr          $ra
    ctx->pc = 0x10127Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10127Cu;
        // 0x101280: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10127Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101284u;
    // 0x101284: 0x0  nop
    ctx->pc = 0x101284u;
    // NOP
    ctx->pc = 0x101288u;
}

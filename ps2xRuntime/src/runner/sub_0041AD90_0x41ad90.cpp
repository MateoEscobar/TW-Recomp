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

// Function: sub_0041AD90
// Address: 0x41ad90 - 0x41add0
void sub_0041AD90_0x41ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AD90_0x41ad90");
#endif

    ctx->pc = 0x41ad90u;

    // 0x41ad90: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x41ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x41ad94: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x41ad94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ad98: 0x43403  sra         $a2, $a0, 16
    ctx->pc = 0x41ad98u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
    // 0x41ad9c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x41AD9Cu;
    {
        const bool branch_taken_0x41ad9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD9Cu;
        // 0x41ada0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ad9c) {
            ctx->pc = 0x41ADBCu;
            goto label_41adbc;
        }
    }
    ctx->pc = 0x41ADA4u;
    // 0x41ada4: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x41ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x41ada8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x41ada8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x41adac: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x41adacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41adb0: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x41adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x41adb4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x41adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x41adb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x41adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_41adbc:
    // 0x41adbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41adc0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41adc4: 0xa0660291  sb          $a2, 0x291($v1)
    ctx->pc = 0x41adc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 657), (uint8_t)GPR_U32(ctx, 6));
    // 0x41adc8: 0x3e00008  jr          $ra
    ctx->pc = 0x41ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ADC8u;
        // 0x41adcc: 0xac6402a8  sw          $a0, 0x2A8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 680), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41ADC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41ADD0u;
}

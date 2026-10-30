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

// Function: sub_00444040
// Address: 0x444040 - 0x444098
void sub_00444040_0x444040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444040_0x444040");
#endif

    ctx->pc = 0x444040u;

    // 0x444040: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x444040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x444044: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x444044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x444048: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x444048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x44404c: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x44404cu;
    SET_GPR_ZE32(ctx, 2, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x444050: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x444050u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10000010
    // 0x444054: 0xdc8a9ea0  ld          $t2, -0x6160($a0)
    ctx->pc = 0x444054u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x519EA0u));
    // 0x444058: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x444058u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x44405c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x44405Cu;
    {
        const bool branch_taken_0x44405c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x444060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44405Cu;
        // 0x444060: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44405c) {
            ctx->pc = 0x44406Cu;
            goto label_44406c;
        }
    }
    ctx->pc = 0x444064u;
    // 0x444064: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x444064u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x444068: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x444068u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_44406c:
    // 0x44406c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x44406cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x444070: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x444070u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x444074: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x444074u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x444078: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x444078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x44407c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x44407cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x444080: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x444080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x444084: 0x3e00008  jr          $ra
    ctx->pc = 0x444084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44408Cu;
    // 0x44408c: 0x0  nop
    ctx->pc = 0x44408cu;
    // NOP
    // 0x444090: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x444090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x444094: 0x0  nop
    ctx->pc = 0x444094u;
    // NOP
    ctx->pc = 0x444098u;
}

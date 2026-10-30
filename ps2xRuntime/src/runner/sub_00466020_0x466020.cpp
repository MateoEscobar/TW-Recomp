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

// Function: sub_00466020
// Address: 0x466020 - 0x466078
void sub_00466020_0x466020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466020_0x466020");
#endif

    ctx->pc = 0x466020u;

    // 0x466020: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x466020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x466024: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x466024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x466028: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x466028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x46602c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x46602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x466030: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x466030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x466034: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x466034u;
    {
        const bool branch_taken_0x466034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x466034) {
            ctx->pc = 0x466038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466034u;
            // 0x466038: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46605Cu;
            goto label_46605c;
        }
    }
    ctx->pc = 0x46603Cu;
    // 0x46603c: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x46603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x466040: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x466040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x466044: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x466044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x466048: 0x34630068  ori         $v1, $v1, 0x68
    ctx->pc = 0x466048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)104);
    // 0x46604c: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x46604cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x466050: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x466050u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x466054: 0x3e00008  jr          $ra
    ctx->pc = 0x466054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466054u;
        // 0x466058: 0xfca30068  sd          $v1, 0x68($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46605Cu;
label_46605c:
    // 0x46605c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x46605cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x466060: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x466060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x466064: 0x34630068  ori         $v1, $v1, 0x68
    ctx->pc = 0x466064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)104);
    // 0x466068: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x466068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x46606c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x46606cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x466070: 0x3e00008  jr          $ra
    ctx->pc = 0x466070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466070u;
        // 0x466074: 0xfca30028  sd          $v1, 0x28($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466078u;
}

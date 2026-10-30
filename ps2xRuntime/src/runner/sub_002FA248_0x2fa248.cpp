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

// Function: sub_002FA248
// Address: 0x2fa248 - 0x2fa270
void sub_002FA248_0x2fa248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA248_0x2fa248");
#endif

    ctx->pc = 0x2fa248u;

    // 0x2fa248: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2fa248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa24c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2fa24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2fa250: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA250u;
    {
        const bool branch_taken_0x2fa250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA250u;
        // 0x2fa254: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa250) {
            ctx->pc = 0x2FA268u;
            goto label_2fa268;
        }
    }
    ctx->pc = 0x2FA258u;
    // 0x2fa258: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2fa258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2fa25c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2fa25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2fa260: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2fa260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2fa264: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2fa264u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_2fa268:
    // 0x2fa268: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA268u;
        // 0x2fa26c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA270u;
}

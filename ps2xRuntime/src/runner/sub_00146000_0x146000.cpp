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

// Function: sub_00146000
// Address: 0x146000 - 0x146058
void sub_00146000_0x146000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146000_0x146000");
#endif

    ctx->pc = 0x146000u;

    // 0x146000: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x146000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x146004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146008: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x146008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14600c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14600cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x146010: 0x90830018  lbu         $v1, 0x18($a0)
    ctx->pc = 0x146010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x146014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146018: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x146018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14601c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x14601cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x146020: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x146020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x146024: 0x80850019  lb          $a1, 0x19($a0)
    ctx->pc = 0x146024u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x146028: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x146028u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x14602c: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14602Cu;
    {
        const bool branch_taken_0x14602c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x146030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14602Cu;
        // 0x146030: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14602c) {
            ctx->pc = 0x146050u;
            goto label_146050;
        }
    }
    ctx->pc = 0x146034u;
    // 0x146034: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x146034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x146038: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14603c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x14603cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x146040: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x146040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x146044: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x146044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146048: 0xa0600040  sb          $zero, 0x40($v1)
    ctx->pc = 0x146048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x14604c: 0xa0600041  sb          $zero, 0x41($v1)
    ctx->pc = 0x14604cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 0));
label_146050:
    // 0x146050: 0x3e00008  jr          $ra
    ctx->pc = 0x146050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146058u;
}

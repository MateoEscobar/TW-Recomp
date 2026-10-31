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

// Function: sub_00116438
// Address: 0x116438 - 0x116480
void sub_00116438_0x116438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116438_0x116438");
#endif

    ctx->pc = 0x116438u;

    // 0x116438: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x116438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11643c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x11643cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116440: 0x1048000c  beq         $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x116440u;
    {
        const bool branch_taken_0x116440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x116444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116440u;
        // 0x116444: 0x240302fc  addiu       $v1, $zero, 0x2FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 764));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116440) {
            ctx->pc = 0x116474u;
            goto label_116474;
        }
    }
    ctx->pc = 0x116448u;
    // 0x116448: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x116448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11644c: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x11644cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x116450: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x116450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x116454: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x116454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x116458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x116458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11645c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x11645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x116460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116464: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x116464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x116468: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x116468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11646c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11646cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116470: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x116470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_116474:
    // 0x116474: 0x3e00008  jr          $ra
    ctx->pc = 0x116474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11647Cu;
    // 0x11647c: 0x0  nop
    ctx->pc = 0x11647cu;
    // NOP
    ctx->pc = 0x116480u;
}

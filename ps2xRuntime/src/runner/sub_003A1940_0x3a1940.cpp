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

// Function: sub_003A1940
// Address: 0x3a1940 - 0x3a1968
void sub_003A1940_0x3a1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1940_0x3a1940");
#endif

    ctx->pc = 0x3a1940u;

    // 0x3a1940: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x3a1940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3a1944: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3a1944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3a1948: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a1948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a194c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A194Cu;
    {
        const bool branch_taken_0x3a194c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a194c) {
            ctx->pc = 0x3A195Cu;
            goto label_3a195c;
        }
    }
    ctx->pc = 0x3A1954u;
    // 0x3a1954: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1954u;
        // 0x3a1958: 0x9082006d  lbu         $v0, 0x6D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 109)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A195Cu;
label_3a195c:
    // 0x3a195c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A195Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A195Cu;
        // 0x3a1960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A195Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1964u;
    // 0x3a1964: 0x0  nop
    ctx->pc = 0x3a1964u;
    // NOP
    ctx->pc = 0x3a1968u;
}

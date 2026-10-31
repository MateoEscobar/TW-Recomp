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

// Function: sub_003954C8
// Address: 0x3954c8 - 0x395510
void sub_003954C8_0x3954c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003954C8_0x3954c8");
#endif

    switch (ctx->pc) {
        case 0x3954f8u: goto label_3954f8;
        default: break;
    }

    ctx->pc = 0x3954c8u;

    // 0x3954c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3954c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3954cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3954ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3954d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3954d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3954d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3954d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3954d8: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x3954d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x3954dc: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3954DCu;
    {
        const bool branch_taken_0x3954dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3954dc) {
            ctx->pc = 0x3954E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3954DCu;
            // 0x3954e0: 0xa2000108  sb          $zero, 0x108($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3954ECu;
            goto label_3954ec;
        }
    }
    ctx->pc = 0x3954E4u;
    // 0x3954e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3954E4u;
    {
        const bool branch_taken_0x3954e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3954E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954E4u;
        // 0x3954e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954e4) {
            ctx->pc = 0x395500u;
            goto label_395500;
        }
    }
    ctx->pc = 0x3954ECu;
label_3954ec:
    // 0x3954ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3954ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3954f0: 0xc060430  jal         func_1810C0
    ctx->pc = 0x3954F0u;
    SET_GPR_U32(ctx, 31, 0x3954F8u);
    ctx->pc = 0x3954F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3954F0u;
    // 0x3954f4: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1810C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1810C0u, 0x3954F0u, 0x3954F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3954F8u;
label_3954f8:
    // 0x3954f8: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x3954f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x3954fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3954fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395500:
    // 0x395500: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x395500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395508: 0x3e00008  jr          $ra
    ctx->pc = 0x395508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395508u;
        // 0x39550c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395510u;
}

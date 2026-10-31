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

// Function: sub_003951D8
// Address: 0x3951d8 - 0x395220
void sub_003951D8_0x3951d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003951D8_0x3951d8");
#endif

    switch (ctx->pc) {
        case 0x3951f8u: goto label_3951f8;
        case 0x395208u: goto label_395208;
        default: break;
    }

    ctx->pc = 0x3951d8u;

    // 0x3951d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3951d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3951dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3951dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3951e0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x3951e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3951e4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3951e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3951e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3951E8u;
    {
        const bool branch_taken_0x3951e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3951ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3951E8u;
        // 0x3951ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3951e8) {
            ctx->pc = 0x395210u;
            goto label_395210;
        }
    }
    ctx->pc = 0x3951F0u;
    // 0x3951f0: 0xc0e8630  jal         func_3A18C0
    ctx->pc = 0x3951F0u;
    SET_GPR_U32(ctx, 31, 0x3951F8u);
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3951F0u, 0x3951F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3951F8u;
label_3951f8:
    // 0x3951f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3951F8u;
    {
        const bool branch_taken_0x3951f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3951f8) {
            ctx->pc = 0x3951FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3951F8u;
            // 0x3951fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395210u;
            goto label_395210;
        }
    }
    ctx->pc = 0x395200u;
    // 0x395200: 0xc08a61a  jal         func_229868
    ctx->pc = 0x395200u;
    SET_GPR_U32(ctx, 31, 0x395208u);
    ctx->pc = 0x395204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395200u;
    // 0x395204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x395200u, 0x395208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395208u;
label_395208:
    // 0x395208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x395208u;
    {
        const bool branch_taken_0x395208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395208u;
        // 0x39520c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395208) {
            ctx->pc = 0x395214u;
            goto label_395214;
        }
    }
    ctx->pc = 0x395210u;
label_395210:
    // 0x395210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395214:
    // 0x395214: 0x3e00008  jr          $ra
    ctx->pc = 0x395214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395214u;
        // 0x395218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39521Cu;
    // 0x39521c: 0x0  nop
    ctx->pc = 0x39521cu;
    // NOP
    ctx->pc = 0x395220u;
}

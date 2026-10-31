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

// Function: sub_002387A8
// Address: 0x2387a8 - 0x2387e8
void sub_002387A8_0x2387a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002387A8_0x2387a8");
#endif

    switch (ctx->pc) {
        case 0x2387bcu: goto label_2387bc;
        case 0x2387c4u: goto label_2387c4;
        case 0x2387d4u: goto label_2387d4;
        default: break;
    }

    ctx->pc = 0x2387a8u;

    // 0x2387a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2387a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2387ac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2387acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2387b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2387b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2387b4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2387B4u;
    SET_GPR_U32(ctx, 31, 0x2387BCu);
    ctx->pc = 0x2387B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387B4u;
    // 0x2387b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2387B4u, 0x2387BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387BCu;
label_2387bc:
    // 0x2387bc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2387BCu;
    SET_GPR_U32(ctx, 31, 0x2387C4u);
    ctx->pc = 0x2387C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387BCu;
    // 0x2387c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2387BCu, 0x2387C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387C4u;
label_2387c4:
    // 0x2387c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2387C4u;
    {
        const bool branch_taken_0x2387c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2387c4) {
            ctx->pc = 0x2387C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2387C4u;
            // 0x2387c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2387DCu;
            goto label_2387dc;
        }
    }
    ctx->pc = 0x2387CCu;
    // 0x2387cc: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2387CCu;
    SET_GPR_U32(ctx, 31, 0x2387D4u);
    ctx->pc = 0x2387D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387CCu;
    // 0x2387d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2387CCu, 0x2387D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387D4u;
label_2387d4:
    // 0x2387d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2387D4u;
    {
        const bool branch_taken_0x2387d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387D4u;
        // 0x2387d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387d4) {
            ctx->pc = 0x2387E0u;
            goto label_2387e0;
        }
    }
    ctx->pc = 0x2387DCu;
label_2387dc:
    // 0x2387dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2387dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2387e0:
    // 0x2387e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2387E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2387E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387E0u;
        // 0x2387e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2387E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2387E8u;
}

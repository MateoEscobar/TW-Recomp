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

// Function: sub_002352B0
// Address: 0x2352b0 - 0x2352f8
void sub_002352B0_0x2352b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002352B0_0x2352b0");
#endif

    switch (ctx->pc) {
        case 0x2352c4u: goto label_2352c4;
        case 0x2352ccu: goto label_2352cc;
        case 0x2352dcu: goto label_2352dc;
        default: break;
    }

    ctx->pc = 0x2352b0u;

    // 0x2352b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2352b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2352b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2352b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2352b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2352b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2352bc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2352BCu;
    SET_GPR_U32(ctx, 31, 0x2352C4u);
    ctx->pc = 0x2352C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2352BCu;
    // 0x2352c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2352BCu, 0x2352C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2352C4u;
label_2352c4:
    // 0x2352c4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2352C4u;
    SET_GPR_U32(ctx, 31, 0x2352CCu);
    ctx->pc = 0x2352C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2352C4u;
    // 0x2352c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2352C4u, 0x2352CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2352CCu;
label_2352cc:
    // 0x2352cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2352CCu;
    {
        const bool branch_taken_0x2352cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2352cc) {
            ctx->pc = 0x2352D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2352CCu;
            // 0x2352d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2352E4u;
            goto label_2352e4;
        }
    }
    ctx->pc = 0x2352D4u;
    // 0x2352d4: 0xc087420  jal         func_21D080
    ctx->pc = 0x2352D4u;
    SET_GPR_U32(ctx, 31, 0x2352DCu);
    ctx->pc = 0x2352D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2352D4u;
    // 0x2352d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2352D4u, 0x2352DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2352DCu;
label_2352dc:
    // 0x2352dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2352DCu;
    {
        const bool branch_taken_0x2352dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2352E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352DCu;
        // 0x2352e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352dc) {
            ctx->pc = 0x2352ECu;
            goto label_2352ec;
        }
    }
    ctx->pc = 0x2352E4u;
label_2352e4:
    // 0x2352e4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x2352e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x2352e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2352e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2352ec:
    // 0x2352ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2352ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2352F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352ECu;
        // 0x2352f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2352ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2352F4u;
    // 0x2352f4: 0x0  nop
    ctx->pc = 0x2352f4u;
    // NOP
    ctx->pc = 0x2352f8u;
}

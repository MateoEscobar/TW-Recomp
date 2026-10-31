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

// Function: sub_002380C0
// Address: 0x2380c0 - 0x238100
void sub_002380C0_0x2380c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002380C0_0x2380c0");
#endif

    switch (ctx->pc) {
        case 0x2380d4u: goto label_2380d4;
        case 0x2380dcu: goto label_2380dc;
        case 0x2380ecu: goto label_2380ec;
        default: break;
    }

    ctx->pc = 0x2380c0u;

    // 0x2380c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2380c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2380c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2380c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2380c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2380c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2380cc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2380CCu;
    SET_GPR_U32(ctx, 31, 0x2380D4u);
    ctx->pc = 0x2380D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380CCu;
    // 0x2380d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2380CCu, 0x2380D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380D4u;
label_2380d4:
    // 0x2380d4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2380D4u;
    SET_GPR_U32(ctx, 31, 0x2380DCu);
    ctx->pc = 0x2380D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380D4u;
    // 0x2380d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2380D4u, 0x2380DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380DCu;
label_2380dc:
    // 0x2380dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2380DCu;
    {
        const bool branch_taken_0x2380dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2380dc) {
            ctx->pc = 0x2380E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2380DCu;
            // 0x2380e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2380F4u;
            goto label_2380f4;
        }
    }
    ctx->pc = 0x2380E4u;
    // 0x2380e4: 0xc08fec0  jal         func_23FB00
    ctx->pc = 0x2380E4u;
    SET_GPR_U32(ctx, 31, 0x2380ECu);
    ctx->pc = 0x2380E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380E4u;
    // 0x2380e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB00u, 0x2380E4u, 0x2380ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380ECu;
label_2380ec:
    // 0x2380ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2380ECu;
    {
        const bool branch_taken_0x2380ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2380F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380ECu;
        // 0x2380f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380ec) {
            ctx->pc = 0x2380F8u;
            goto label_2380f8;
        }
    }
    ctx->pc = 0x2380F4u;
label_2380f4:
    // 0x2380f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2380f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2380f8:
    // 0x2380f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2380F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2380FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380F8u;
        // 0x2380fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2380F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238100u;
}

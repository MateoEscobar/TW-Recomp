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

// Function: sub_002357D8
// Address: 0x2357d8 - 0x235818
void sub_002357D8_0x2357d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002357D8_0x2357d8");
#endif

    switch (ctx->pc) {
        case 0x2357ecu: goto label_2357ec;
        case 0x2357f4u: goto label_2357f4;
        case 0x235804u: goto label_235804;
        default: break;
    }

    ctx->pc = 0x2357d8u;

    // 0x2357d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2357d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2357dc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2357dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2357e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2357e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2357e4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2357E4u;
    SET_GPR_U32(ctx, 31, 0x2357ECu);
    ctx->pc = 0x2357E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357E4u;
    // 0x2357e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2357E4u, 0x2357ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2357ECu;
label_2357ec:
    // 0x2357ec: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2357ECu;
    SET_GPR_U32(ctx, 31, 0x2357F4u);
    ctx->pc = 0x2357F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357ECu;
    // 0x2357f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2357ECu, 0x2357F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2357F4u;
label_2357f4:
    // 0x2357f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2357F4u;
    {
        const bool branch_taken_0x2357f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2357f4) {
            ctx->pc = 0x2357F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2357F4u;
            // 0x2357f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23580Cu;
            goto label_23580c;
        }
    }
    ctx->pc = 0x2357FCu;
    // 0x2357fc: 0xc08a024  jal         func_228090
    ctx->pc = 0x2357FCu;
    SET_GPR_U32(ctx, 31, 0x235804u);
    ctx->pc = 0x235800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357FCu;
    // 0x235800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x2357FCu, 0x235804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235804u;
label_235804:
    // 0x235804: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x235804u;
    {
        const bool branch_taken_0x235804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235804u;
        // 0x235808: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235804) {
            ctx->pc = 0x235810u;
            goto label_235810;
        }
    }
    ctx->pc = 0x23580Cu;
label_23580c:
    // 0x23580c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23580cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235810:
    // 0x235810: 0x3e00008  jr          $ra
    ctx->pc = 0x235810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235810u;
        // 0x235814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235818u;
}

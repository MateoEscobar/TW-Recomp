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

// Function: sub_002356C8
// Address: 0x2356c8 - 0x235718
void sub_002356C8_0x2356c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002356C8_0x2356c8");
#endif

    switch (ctx->pc) {
        case 0x2356dcu: goto label_2356dc;
        case 0x2356e4u: goto label_2356e4;
        case 0x2356f4u: goto label_2356f4;
        default: break;
    }

    ctx->pc = 0x2356c8u;

    // 0x2356c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2356c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2356cc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2356ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2356d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2356d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2356d4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2356D4u;
    SET_GPR_U32(ctx, 31, 0x2356DCu);
    ctx->pc = 0x2356D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356D4u;
    // 0x2356d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2356D4u, 0x2356DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356DCu;
label_2356dc:
    // 0x2356dc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2356DCu;
    SET_GPR_U32(ctx, 31, 0x2356E4u);
    ctx->pc = 0x2356E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356DCu;
    // 0x2356e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2356DCu, 0x2356E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356E4u;
label_2356e4:
    // 0x2356e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2356E4u;
    {
        const bool branch_taken_0x2356e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2356e4) {
            ctx->pc = 0x2356E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2356E4u;
            // 0x2356e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2356FCu;
            goto label_2356fc;
        }
    }
    ctx->pc = 0x2356ECu;
    // 0x2356ec: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x2356ECu;
    SET_GPR_U32(ctx, 31, 0x2356F4u);
    ctx->pc = 0x2356F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356ECu;
    // 0x2356f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x2356ECu, 0x2356F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356F4u;
label_2356f4:
    // 0x2356f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2356F4u;
    {
        const bool branch_taken_0x2356f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356F4u;
        // 0x2356f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356f4) {
            ctx->pc = 0x235700u;
            goto label_235700;
        }
    }
    ctx->pc = 0x2356FCu;
label_2356fc:
    // 0x2356fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2356fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235700:
    // 0x235700: 0x3e00008  jr          $ra
    ctx->pc = 0x235700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235700u;
        // 0x235704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235708u;
    // 0x235708: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x235708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23570c: 0x0  nop
    ctx->pc = 0x23570cu;
    // NOP
    // 0x235710: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x235710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x235714: 0x0  nop
    ctx->pc = 0x235714u;
    // NOP
    ctx->pc = 0x235718u;
}

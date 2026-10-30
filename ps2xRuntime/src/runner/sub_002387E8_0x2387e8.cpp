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

// Function: sub_002387E8
// Address: 0x2387e8 - 0x238828
void sub_002387E8_0x2387e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002387E8_0x2387e8");
#endif

    switch (ctx->pc) {
        case 0x2387fcu: goto label_2387fc;
        case 0x238804u: goto label_238804;
        case 0x238814u: goto label_238814;
        default: break;
    }

    ctx->pc = 0x2387e8u;

    // 0x2387e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2387e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2387ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2387ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2387f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2387f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2387f4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2387F4u;
    SET_GPR_U32(ctx, 31, 0x2387FCu);
    ctx->pc = 0x2387F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387F4u;
    // 0x2387f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2387F4u, 0x2387FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387FCu;
label_2387fc:
    // 0x2387fc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2387FCu;
    SET_GPR_U32(ctx, 31, 0x238804u);
    ctx->pc = 0x238800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387FCu;
    // 0x238800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2387FCu, 0x238804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238804u;
label_238804:
    // 0x238804: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x238804u;
    {
        const bool branch_taken_0x238804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238804) {
            ctx->pc = 0x238808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238804u;
            // 0x238808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23881Cu;
            goto label_23881c;
        }
    }
    ctx->pc = 0x23880Cu;
    // 0x23880c: 0xc088e30  jal         func_2238C0
    ctx->pc = 0x23880Cu;
    SET_GPR_U32(ctx, 31, 0x238814u);
    ctx->pc = 0x238810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23880Cu;
    // 0x238810: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x23880Cu, 0x238814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238814u;
label_238814:
    // 0x238814: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x238814u;
    {
        const bool branch_taken_0x238814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238814u;
        // 0x238818: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238814) {
            ctx->pc = 0x238820u;
            goto label_238820;
        }
    }
    ctx->pc = 0x23881Cu;
label_23881c:
    // 0x23881c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23881cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238820:
    // 0x238820: 0x3e00008  jr          $ra
    ctx->pc = 0x238820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238820u;
        // 0x238824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238828u;
}

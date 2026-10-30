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

// Function: sub_00237DB8
// Address: 0x237db8 - 0x237e00
void sub_00237DB8_0x237db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237DB8_0x237db8");
#endif

    switch (ctx->pc) {
        case 0x237dccu: goto label_237dcc;
        case 0x237dd4u: goto label_237dd4;
        case 0x237de4u: goto label_237de4;
        case 0x237decu: goto label_237dec;
        default: break;
    }

    ctx->pc = 0x237db8u;

    // 0x237db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237dbc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237dc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237dc4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237DC4u;
    SET_GPR_U32(ctx, 31, 0x237DCCu);
    ctx->pc = 0x237DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DC4u;
    // 0x237dc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237DC4u, 0x237DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DCCu;
label_237dcc:
    // 0x237dcc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237DCCu;
    SET_GPR_U32(ctx, 31, 0x237DD4u);
    ctx->pc = 0x237DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DCCu;
    // 0x237dd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237DCCu, 0x237DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DD4u;
label_237dd4:
    // 0x237dd4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x237DD4u;
    {
        const bool branch_taken_0x237dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237dd4) {
            ctx->pc = 0x237DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237DD4u;
            // 0x237dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237DF4u;
            goto label_237df4;
        }
    }
    ctx->pc = 0x237DDCu;
    // 0x237ddc: 0xc087502  jal         func_21D408
    ctx->pc = 0x237DDCu;
    SET_GPR_U32(ctx, 31, 0x237DE4u);
    ctx->pc = 0x237DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DDCu;
    // 0x237de0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x237DDCu, 0x237DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DE4u;
label_237de4:
    // 0x237de4: 0xc0a4128  jal         func_2904A0
    ctx->pc = 0x237DE4u;
    SET_GPR_U32(ctx, 31, 0x237DECu);
    ctx->pc = 0x237DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DE4u;
    // 0x237de8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2904A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2904A0u, 0x237DE4u, 0x237DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DECu;
label_237dec:
    // 0x237dec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x237DECu;
    {
        const bool branch_taken_0x237dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DECu;
        // 0x237df0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237dec) {
            ctx->pc = 0x237DF8u;
            goto label_237df8;
        }
    }
    ctx->pc = 0x237DF4u;
label_237df4:
    // 0x237df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237df8:
    // 0x237df8: 0x3e00008  jr          $ra
    ctx->pc = 0x237DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DF8u;
        // 0x237dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237E00u;
}

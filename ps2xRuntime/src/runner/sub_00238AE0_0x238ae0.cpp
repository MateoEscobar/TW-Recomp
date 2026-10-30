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

// Function: sub_00238AE0
// Address: 0x238ae0 - 0x238b18
void sub_00238AE0_0x238ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238AE0_0x238ae0");
#endif

    switch (ctx->pc) {
        case 0x238af4u: goto label_238af4;
        case 0x238afcu: goto label_238afc;
        case 0x238b0cu: goto label_238b0c;
        default: break;
    }

    ctx->pc = 0x238ae0u;

    // 0x238ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238ae4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238aec: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238AECu;
    SET_GPR_U32(ctx, 31, 0x238AF4u);
    ctx->pc = 0x238AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AECu;
    // 0x238af0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238AECu, 0x238AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AF4u;
label_238af4:
    // 0x238af4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238AF4u;
    SET_GPR_U32(ctx, 31, 0x238AFCu);
    ctx->pc = 0x238AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AF4u;
    // 0x238af8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238AF4u, 0x238AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AFCu;
label_238afc:
    // 0x238afc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238AFCu;
    {
        const bool branch_taken_0x238afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AFCu;
        // 0x238b00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238afc) {
            ctx->pc = 0x238B10u;
            goto label_238b10;
        }
    }
    ctx->pc = 0x238B04u;
    // 0x238b04: 0xc089ce2  jal         func_227388
    ctx->pc = 0x238B04u;
    SET_GPR_U32(ctx, 31, 0x238B0Cu);
    ctx->pc = 0x238B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B04u;
    // 0x238b08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x238B04u, 0x238B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B0Cu;
label_238b0c:
    // 0x238b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238b10:
    // 0x238b10: 0x3e00008  jr          $ra
    ctx->pc = 0x238B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B10u;
        // 0x238b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238B18u;
}

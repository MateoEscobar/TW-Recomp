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

// Function: sub_00379AC8
// Address: 0x379ac8 - 0x379b00
void sub_00379AC8_0x379ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379AC8_0x379ac8");
#endif

    switch (ctx->pc) {
        case 0x379adcu: goto label_379adc;
        case 0x379ae4u: goto label_379ae4;
        case 0x379aecu: goto label_379aec;
        default: break;
    }

    ctx->pc = 0x379ac8u;

    // 0x379ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x379ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x379acc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379ad4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379AD4u;
    SET_GPR_U32(ctx, 31, 0x379ADCu);
    ctx->pc = 0x379AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379AD4u;
    // 0x379ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379AD4u, 0x379ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379ADCu;
label_379adc:
    // 0x379adc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379ADCu;
    SET_GPR_U32(ctx, 31, 0x379AE4u);
    ctx->pc = 0x379AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379ADCu;
    // 0x379ae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379ADCu, 0x379AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379AE4u;
label_379ae4:
    // 0x379ae4: 0xc0e5ba8  jal         func_396EA0
    ctx->pc = 0x379AE4u;
    SET_GPR_U32(ctx, 31, 0x379AECu);
    ctx->pc = 0x379AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379AE4u;
    // 0x379ae8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396EA0u, 0x379AE4u, 0x379AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379AECu;
label_379aec:
    // 0x379aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379af0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379af4: 0x3e00008  jr          $ra
    ctx->pc = 0x379AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AF4u;
        // 0x379af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379AFCu;
    // 0x379afc: 0x0  nop
    ctx->pc = 0x379afcu;
    // NOP
    ctx->pc = 0x379b00u;
}

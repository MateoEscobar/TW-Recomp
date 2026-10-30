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

// Function: sub_00370BC8
// Address: 0x370bc8 - 0x370c00
void sub_00370BC8_0x370bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370BC8_0x370bc8");
#endif

    switch (ctx->pc) {
        case 0x370bdcu: goto label_370bdc;
        case 0x370be4u: goto label_370be4;
        case 0x370becu: goto label_370bec;
        default: break;
    }

    ctx->pc = 0x370bc8u;

    // 0x370bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370bd4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370BD4u;
    SET_GPR_U32(ctx, 31, 0x370BDCu);
    ctx->pc = 0x370BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370BD4u;
    // 0x370bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370BD4u, 0x370BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BDCu;
label_370bdc:
    // 0x370bdc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370BDCu;
    SET_GPR_U32(ctx, 31, 0x370BE4u);
    ctx->pc = 0x370BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370BDCu;
    // 0x370be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370BDCu, 0x370BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BE4u;
label_370be4:
    // 0x370be4: 0xc06d0b6  jal         func_1B42D8
    ctx->pc = 0x370BE4u;
    SET_GPR_U32(ctx, 31, 0x370BECu);
    ctx->pc = 0x370BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370BE4u;
    // 0x370be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B42D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B42D8u, 0x370BE4u, 0x370BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BECu;
label_370bec:
    // 0x370bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x370BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370BF4u;
        // 0x370bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370BFCu;
    // 0x370bfc: 0x0  nop
    ctx->pc = 0x370bfcu;
    // NOP
    ctx->pc = 0x370c00u;
}

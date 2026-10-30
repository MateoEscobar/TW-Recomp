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

// Function: sub_0036FE90
// Address: 0x36fe90 - 0x36fec8
void sub_0036FE90_0x36fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FE90_0x36fe90");
#endif

    switch (ctx->pc) {
        case 0x36fea4u: goto label_36fea4;
        case 0x36feacu: goto label_36feac;
        case 0x36feb4u: goto label_36feb4;
        default: break;
    }

    ctx->pc = 0x36fe90u;

    // 0x36fe90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36fe94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36fe94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fe98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36fe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36fe9c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FE9Cu;
    SET_GPR_U32(ctx, 31, 0x36FEA4u);
    ctx->pc = 0x36FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FE9Cu;
    // 0x36fea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FE9Cu, 0x36FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FEA4u;
label_36fea4:
    // 0x36fea4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FEA4u;
    SET_GPR_U32(ctx, 31, 0x36FEACu);
    ctx->pc = 0x36FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FEA4u;
    // 0x36fea8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FEA4u, 0x36FEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FEACu;
label_36feac:
    // 0x36feac: 0xc06d732  jal         func_1B5CC8
    ctx->pc = 0x36FEACu;
    SET_GPR_U32(ctx, 31, 0x36FEB4u);
    ctx->pc = 0x36FEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FEACu;
    // 0x36feb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5CC8u, 0x36FEACu, 0x36FEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FEB4u;
label_36feb4:
    // 0x36feb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36feb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36feb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36feb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36febc: 0x3e00008  jr          $ra
    ctx->pc = 0x36FEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEBCu;
        // 0x36fec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FEC4u;
    // 0x36fec4: 0x0  nop
    ctx->pc = 0x36fec4u;
    // NOP
    ctx->pc = 0x36fec8u;
}

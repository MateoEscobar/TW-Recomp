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

// Function: sub_0037BDE0
// Address: 0x37bde0 - 0x37be18
void sub_0037BDE0_0x37bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BDE0_0x37bde0");
#endif

    switch (ctx->pc) {
        case 0x37bdf4u: goto label_37bdf4;
        case 0x37bdfcu: goto label_37bdfc;
        case 0x37be04u: goto label_37be04;
        default: break;
    }

    ctx->pc = 0x37bde0u;

    // 0x37bde0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37bde4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bde8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37bdec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37BDECu;
    SET_GPR_U32(ctx, 31, 0x37BDF4u);
    ctx->pc = 0x37BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BDECu;
    // 0x37bdf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37BDECu, 0x37BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BDF4u;
label_37bdf4:
    // 0x37bdf4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37BDF4u;
    SET_GPR_U32(ctx, 31, 0x37BDFCu);
    ctx->pc = 0x37BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BDF4u;
    // 0x37bdf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37BDF4u, 0x37BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BDFCu;
label_37bdfc:
    // 0x37bdfc: 0xc10331c  jal         func_40CC70
    ctx->pc = 0x37BDFCu;
    SET_GPR_U32(ctx, 31, 0x37BE04u);
    ctx->pc = 0x37BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BDFCu;
    // 0x37be00: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC70u, 0x37BDFCu, 0x37BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE04u;
label_37be04:
    // 0x37be04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37be04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37be08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37be08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37be0c: 0x3e00008  jr          $ra
    ctx->pc = 0x37BE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE0Cu;
        // 0x37be10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BE14u;
    // 0x37be14: 0x0  nop
    ctx->pc = 0x37be14u;
    // NOP
    ctx->pc = 0x37be18u;
}

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

// Function: sub_0036BAC0
// Address: 0x36bac0 - 0x36bb10
void sub_0036BAC0_0x36bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BAC0_0x36bac0");
#endif

    switch (ctx->pc) {
        case 0x36badcu: goto label_36badc;
        case 0x36bae4u: goto label_36bae4;
        case 0x36baecu: goto label_36baec;
        case 0x36baf8u: goto label_36baf8;
        default: break;
    }

    ctx->pc = 0x36bac0u;

    // 0x36bac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36bac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36bac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bac8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36bacc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36baccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36bad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36bad4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36BAD4u;
    SET_GPR_U32(ctx, 31, 0x36BADCu);
    ctx->pc = 0x36BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BAD4u;
    // 0x36bad8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36BAD4u, 0x36BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BADCu;
label_36badc:
    // 0x36badc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36BADCu;
    SET_GPR_U32(ctx, 31, 0x36BAE4u);
    ctx->pc = 0x36BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BADCu;
    // 0x36bae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36BADCu, 0x36BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAE4u;
label_36bae4:
    // 0x36bae4: 0xc07c9aa  jal         func_1F26A8
    ctx->pc = 0x36BAE4u;
    SET_GPR_U32(ctx, 31, 0x36BAECu);
    ctx->pc = 0x36BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BAE4u;
    // 0x36bae8: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F26A8u, 0x36BAE4u, 0x36BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAECu;
label_36baec:
    // 0x36baec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36baecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36baf0: 0xc102542  jal         func_409508
    ctx->pc = 0x36BAF0u;
    SET_GPR_U32(ctx, 31, 0x36BAF8u);
    ctx->pc = 0x36BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BAF0u;
    // 0x36baf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409508u, 0x36BAF0u, 0x36BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAF8u;
label_36baf8:
    // 0x36baf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36baf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bb00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36bb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bb04: 0x3e00008  jr          $ra
    ctx->pc = 0x36BB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB04u;
        // 0x36bb08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BB0Cu;
    // 0x36bb0c: 0x0  nop
    ctx->pc = 0x36bb0cu;
    // NOP
    ctx->pc = 0x36bb10u;
}

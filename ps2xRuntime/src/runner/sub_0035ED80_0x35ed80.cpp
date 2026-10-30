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

// Function: sub_0035ED80
// Address: 0x35ed80 - 0x35ede0
void sub_0035ED80_0x35ed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035ED80_0x35ed80");
#endif

    switch (ctx->pc) {
        case 0x35eda0u: goto label_35eda0;
        case 0x35eda8u: goto label_35eda8;
        case 0x35edbcu: goto label_35edbc;
        case 0x35edc8u: goto label_35edc8;
        default: break;
    }

    ctx->pc = 0x35ed80u;

    // 0x35ed80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ed80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35ed84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ed84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ed88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35ed88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35ed8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ed8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ed90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ed90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ed94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ed94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ed98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35ED98u;
    SET_GPR_U32(ctx, 31, 0x35EDA0u);
    ctx->pc = 0x35ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED98u;
    // 0x35ed9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35ED98u, 0x35EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EDA0u;
label_35eda0:
    // 0x35eda0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EDA0u;
    SET_GPR_U32(ctx, 31, 0x35EDA8u);
    ctx->pc = 0x35EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EDA0u;
    // 0x35eda4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EDA0u, 0x35EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EDA8u;
label_35eda8:
    // 0x35eda8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35eda8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35edac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35edacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35edb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35edb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35edb4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35EDB4u;
    SET_GPR_U32(ctx, 31, 0x35EDBCu);
    ctx->pc = 0x35EDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EDB4u;
    // 0x35edb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35EDB4u, 0x35EDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EDBCu;
label_35edbc:
    // 0x35edbc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35edbcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35edc0: 0xc0a493a  jal         func_2924E8
    ctx->pc = 0x35EDC0u;
    SET_GPR_U32(ctx, 31, 0x35EDC8u);
    ctx->pc = 0x35EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EDC0u;
    // 0x35edc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2924E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2924E8u, 0x35EDC0u, 0x35EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EDC8u;
label_35edc8:
    // 0x35edc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35edc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35edcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35edccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35edd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35edd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35edd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35edd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35edd8: 0x3e00008  jr          $ra
    ctx->pc = 0x35EDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EDD8u;
        // 0x35eddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EDE0u;
}

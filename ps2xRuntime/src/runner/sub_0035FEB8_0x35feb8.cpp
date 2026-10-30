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

// Function: sub_0035FEB8
// Address: 0x35feb8 - 0x35ff18
void sub_0035FEB8_0x35feb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FEB8_0x35feb8");
#endif

    switch (ctx->pc) {
        case 0x35fed8u: goto label_35fed8;
        case 0x35fee0u: goto label_35fee0;
        case 0x35fef4u: goto label_35fef4;
        case 0x35ff00u: goto label_35ff00;
        default: break;
    }

    ctx->pc = 0x35feb8u;

    // 0x35feb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35feb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35febc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35febcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fec0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35fec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35fec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35fec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35fec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35fecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35feccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fed0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FED0u;
    SET_GPR_U32(ctx, 31, 0x35FED8u);
    ctx->pc = 0x35FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FED0u;
    // 0x35fed4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FED0u, 0x35FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FED8u;
label_35fed8:
    // 0x35fed8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FED8u;
    SET_GPR_U32(ctx, 31, 0x35FEE0u);
    ctx->pc = 0x35FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FED8u;
    // 0x35fedc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FED8u, 0x35FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FEE0u;
label_35fee0:
    // 0x35fee0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35fee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35fee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fee8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35fee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35feec: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35FEECu;
    SET_GPR_U32(ctx, 31, 0x35FEF4u);
    ctx->pc = 0x35FEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FEECu;
    // 0x35fef0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35FEECu, 0x35FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FEF4u;
label_35fef4:
    // 0x35fef4: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35fef4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35fef8: 0xc0a4af2  jal         func_292BC8
    ctx->pc = 0x35FEF8u;
    SET_GPR_U32(ctx, 31, 0x35FF00u);
    ctx->pc = 0x35FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FEF8u;
    // 0x35fefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292BC8u, 0x35FEF8u, 0x35FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF00u;
label_35ff00:
    // 0x35ff00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35ff00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ff04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ff04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ff08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ff0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ff0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ff10: 0x3e00008  jr          $ra
    ctx->pc = 0x35FF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF10u;
        // 0x35ff14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FF18u;
}

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

// Function: sub_0036EBE0
// Address: 0x36ebe0 - 0x36ec40
void sub_0036EBE0_0x36ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EBE0_0x36ebe0");
#endif

    switch (ctx->pc) {
        case 0x36ec00u: goto label_36ec00;
        case 0x36ec08u: goto label_36ec08;
        case 0x36ec1cu: goto label_36ec1c;
        case 0x36ec28u: goto label_36ec28;
        default: break;
    }

    ctx->pc = 0x36ebe0u;

    // 0x36ebe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36ebe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ebe8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36ebec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ebecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ebf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36ebf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36ebf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ebf8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36EBF8u;
    SET_GPR_U32(ctx, 31, 0x36EC00u);
    ctx->pc = 0x36EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EBF8u;
    // 0x36ebfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36EBF8u, 0x36EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC00u;
label_36ec00:
    // 0x36ec00: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36EC00u;
    SET_GPR_U32(ctx, 31, 0x36EC08u);
    ctx->pc = 0x36EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC00u;
    // 0x36ec04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36EC00u, 0x36EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC08u;
label_36ec08:
    // 0x36ec08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36ec08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ec0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ec10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec14: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36EC14u;
    SET_GPR_U32(ctx, 31, 0x36EC1Cu);
    ctx->pc = 0x36EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC14u;
    // 0x36ec18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36EC14u, 0x36EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC1Cu;
label_36ec1c:
    // 0x36ec1c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x36ec1cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36ec20: 0xc06cfcc  jal         func_1B3F30
    ctx->pc = 0x36EC20u;
    SET_GPR_U32(ctx, 31, 0x36EC28u);
    ctx->pc = 0x36EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC20u;
    // 0x36ec24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3F30u, 0x36EC20u, 0x36EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC28u;
label_36ec28:
    // 0x36ec28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36ec28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ec2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ec2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36ec30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ec34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ec38: 0x3e00008  jr          $ra
    ctx->pc = 0x36EC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC38u;
        // 0x36ec3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EC40u;
}

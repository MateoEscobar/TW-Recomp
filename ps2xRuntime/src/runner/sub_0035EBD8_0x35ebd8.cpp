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

// Function: sub_0035EBD8
// Address: 0x35ebd8 - 0x35ec38
void sub_0035EBD8_0x35ebd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EBD8_0x35ebd8");
#endif

    switch (ctx->pc) {
        case 0x35ebf8u: goto label_35ebf8;
        case 0x35ec00u: goto label_35ec00;
        case 0x35ec14u: goto label_35ec14;
        case 0x35ec20u: goto label_35ec20;
        default: break;
    }

    ctx->pc = 0x35ebd8u;

    // 0x35ebd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ebd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35ebdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ebdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ebe0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35ebe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35ebe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ebe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ebe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ebec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ebf0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EBF0u;
    SET_GPR_U32(ctx, 31, 0x35EBF8u);
    ctx->pc = 0x35EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EBF0u;
    // 0x35ebf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EBF0u, 0x35EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EBF8u;
label_35ebf8:
    // 0x35ebf8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EBF8u;
    SET_GPR_U32(ctx, 31, 0x35EC00u);
    ctx->pc = 0x35EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EBF8u;
    // 0x35ebfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EBF8u, 0x35EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC00u;
label_35ec00:
    // 0x35ec00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35ec00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35ec08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ec0c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35EC0Cu;
    SET_GPR_U32(ctx, 31, 0x35EC14u);
    ctx->pc = 0x35EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC0Cu;
    // 0x35ec10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35EC0Cu, 0x35EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC14u;
label_35ec14:
    // 0x35ec14: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35ec14u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35ec18: 0xc0a48e8  jal         func_2923A0
    ctx->pc = 0x35EC18u;
    SET_GPR_U32(ctx, 31, 0x35EC20u);
    ctx->pc = 0x35EC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC18u;
    // 0x35ec1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923A0u, 0x35EC18u, 0x35EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC20u;
label_35ec20:
    // 0x35ec20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35ec20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ec24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ec24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ec28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ec2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ec2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ec30: 0x3e00008  jr          $ra
    ctx->pc = 0x35EC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC30u;
        // 0x35ec34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EC38u;
}

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

// Function: sub_002DDCA0
// Address: 0x2ddca0 - 0x2ddd08
void sub_002DDCA0_0x2ddca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDCA0_0x2ddca0");
#endif

    switch (ctx->pc) {
        case 0x2ddcc4u: goto label_2ddcc4;
        case 0x2ddcccu: goto label_2ddccc;
        case 0x2ddcecu: goto label_2ddcec;
        case 0x2ddcf4u: goto label_2ddcf4;
        default: break;
    }

    ctx->pc = 0x2ddca0u;

    // 0x2ddca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ddca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ddca4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ddca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ddca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ddca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ddcac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ddcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddcb4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2ddcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2ddcb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ddcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ddcbc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DDCBCu;
    SET_GPR_U32(ctx, 31, 0x2DDCC4u);
    ctx->pc = 0x2DDCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDCBCu;
    // 0x2ddcc0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DDCBCu, 0x2DDCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCC4u;
label_2ddcc4:
    // 0x2ddcc4: 0xc0e2612  jal         func_389848
    ctx->pc = 0x2DDCC4u;
    SET_GPR_U32(ctx, 31, 0x2DDCCCu);
    ctx->pc = 0x2DDCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDCC4u;
    // 0x2ddcc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x2DDCC4u, 0x2DDCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCCCu;
label_2ddccc:
    // 0x2ddccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ddcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcd0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDCD0u;
    {
        const bool branch_taken_0x2ddcd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCD0u;
        // 0x2ddcd4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddcd0) {
            ctx->pc = 0x2DDCECu;
            goto label_2ddcec;
        }
    }
    ctx->pc = 0x2DDCD8u;
    // 0x2ddcd8: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x2ddcd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2ddcdc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDCDCu;
    {
        const bool branch_taken_0x2ddcdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ddcdc) {
            ctx->pc = 0x2DDCECu;
            goto label_2ddcec;
        }
    }
    ctx->pc = 0x2DDCE4u;
    // 0x2ddce4: 0xc0e3666  jal         func_38D998
    ctx->pc = 0x2DDCE4u;
    SET_GPR_U32(ctx, 31, 0x2DDCECu);
    ctx->pc = 0x2DDCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDCE4u;
    // 0x2ddce8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D998u, 0x2DDCE4u, 0x2DDCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCECu;
label_2ddcec:
    // 0x2ddcec: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2DDCECu;
    SET_GPR_U32(ctx, 31, 0x2DDCF4u);
    ctx->pc = 0x2DDCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDCECu;
    // 0x2ddcf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2DDCECu, 0x2DDCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCF4u;
label_2ddcf4:
    // 0x2ddcf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ddcf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddcf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ddcf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddcfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddd00: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD00u;
        // 0x2ddd04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDD08u;
}

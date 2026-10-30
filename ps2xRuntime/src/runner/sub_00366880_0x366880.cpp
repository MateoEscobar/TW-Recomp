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

// Function: sub_00366880
// Address: 0x366880 - 0x3668e8
void sub_00366880_0x366880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366880_0x366880");
#endif

    switch (ctx->pc) {
        case 0x3668a0u: goto label_3668a0;
        case 0x3668b8u: goto label_3668b8;
        case 0x3668c0u: goto label_3668c0;
        case 0x3668ccu: goto label_3668cc;
        default: break;
    }

    ctx->pc = 0x366880u;

    // 0x366880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x366880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x366884: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366888: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x366888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36688c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36688cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x366890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x366894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x366898: 0xc1024c6  jal         func_409318
    ctx->pc = 0x366898u;
    SET_GPR_U32(ctx, 31, 0x3668A0u);
    ctx->pc = 0x36689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366898u;
    // 0x36689c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x366898u, 0x3668A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668A0u;
label_3668a0:
    // 0x3668a0: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x3668a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x3668a4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3668a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3668a8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x3668a8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3668ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3668acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3668B0u;
    SET_GPR_U32(ctx, 31, 0x3668B8u);
    ctx->pc = 0x3668B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3668B0u;
    // 0x3668b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3668B0u, 0x3668B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668B8u;
label_3668b8:
    // 0x3668b8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3668B8u;
    SET_GPR_U32(ctx, 31, 0x3668C0u);
    ctx->pc = 0x3668BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3668B8u;
    // 0x3668bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3668B8u, 0x3668C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668C0u;
label_3668c0:
    // 0x3668c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3668c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668c4: 0xc047460  jal         func_11D180
    ctx->pc = 0x3668C4u;
    SET_GPR_U32(ctx, 31, 0x3668CCu);
    ctx->pc = 0x3668C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3668C4u;
    // 0x3668c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D180u, 0x3668C4u, 0x3668CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668CCu;
label_3668cc:
    // 0x3668cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3668ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3668d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3668d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3668d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3668d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3668d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3668dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3668DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3668E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3668DCu;
        // 0x3668e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3668DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3668E4u;
    // 0x3668e4: 0x0  nop
    ctx->pc = 0x3668e4u;
    // NOP
    ctx->pc = 0x3668e8u;
}

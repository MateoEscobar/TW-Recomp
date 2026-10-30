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

// Function: sub_0036F748
// Address: 0x36f748 - 0x36f7f8
void sub_0036F748_0x36f748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F748_0x36f748");
#endif

    switch (ctx->pc) {
        case 0x36f770u: goto label_36f770;
        case 0x36f784u: goto label_36f784;
        case 0x36f798u: goto label_36f798;
        case 0x36f7a0u: goto label_36f7a0;
        case 0x36f7b8u: goto label_36f7b8;
        case 0x36f7c0u: goto label_36f7c0;
        case 0x36f7d4u: goto label_36f7d4;
        default: break;
    }

    ctx->pc = 0x36f748u;

    // 0x36f748: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36f748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36f74c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f750: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x36f750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36f754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f758: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36f75c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36f760: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x36f760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x36f764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f768: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36F768u;
    SET_GPR_U32(ctx, 31, 0x36F770u);
    ctx->pc = 0x36F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F768u;
    // 0x36f76c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36F768u, 0x36F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F770u;
label_36f770:
    // 0x36f770: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x36f770u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36f774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f778: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36f778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f77c: 0xc102488  jal         func_409220
    ctx->pc = 0x36F77Cu;
    SET_GPR_U32(ctx, 31, 0x36F784u);
    ctx->pc = 0x36F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F77Cu;
    // 0x36f780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36F77Cu, 0x36F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F784u;
label_36f784:
    // 0x36f784: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36f784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f788: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36f788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36f78c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f790: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F790u;
    SET_GPR_U32(ctx, 31, 0x36F798u);
    ctx->pc = 0x36F794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F790u;
    // 0x36f794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F790u, 0x36F798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F798u;
label_36f798:
    // 0x36f798: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F798u;
    SET_GPR_U32(ctx, 31, 0x36F7A0u);
    ctx->pc = 0x36F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F798u;
    // 0x36f79c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F798u, 0x36F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F7A0u;
label_36f7a0:
    // 0x36f7a0: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x36f7a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x36f7a4: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x36f7a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x36f7a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36f7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F7B0u;
    SET_GPR_U32(ctx, 31, 0x36F7B8u);
    ctx->pc = 0x36F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F7B0u;
    // 0x36f7b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F7B0u, 0x36F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F7B8u;
label_36f7b8:
    // 0x36f7b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F7B8u;
    SET_GPR_U32(ctx, 31, 0x36F7C0u);
    ctx->pc = 0x36F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F7B8u;
    // 0x36f7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F7B8u, 0x36F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F7C0u;
label_36f7c0:
    // 0x36f7c0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x36f7c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f7c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36f7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36f7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7cc: 0xc06d326  jal         func_1B4C98
    ctx->pc = 0x36F7CCu;
    SET_GPR_U32(ctx, 31, 0x36F7D4u);
    ctx->pc = 0x36F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F7CCu;
    // 0x36f7d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C98u, 0x36F7CCu, 0x36F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F7D4u;
label_36f7d4:
    // 0x36f7d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36f7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36f7d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36f7dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36f7e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36f7e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f7e4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x36f7e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x36F7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F7ECu;
        // 0x36f7f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F7F4u;
    // 0x36f7f4: 0x0  nop
    ctx->pc = 0x36f7f4u;
    // NOP
    ctx->pc = 0x36f7f8u;
}

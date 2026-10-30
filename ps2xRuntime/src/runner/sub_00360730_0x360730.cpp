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

// Function: sub_00360730
// Address: 0x360730 - 0x3607f8
void sub_00360730_0x360730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360730_0x360730");
#endif

    switch (ctx->pc) {
        case 0x360760u: goto label_360760;
        case 0x360768u: goto label_360768;
        case 0x36077cu: goto label_36077c;
        case 0x360784u: goto label_360784;
        case 0x360798u: goto label_360798;
        case 0x3607a0u: goto label_3607a0;
        case 0x3607b4u: goto label_3607b4;
        case 0x3607bcu: goto label_3607bc;
        case 0x3607d0u: goto label_3607d0;
        default: break;
    }

    ctx->pc = 0x360730u;

    // 0x360730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x360730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x360734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x360734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360738: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x360738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36073c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x360740: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x360740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x360744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360748: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x360748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36074c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x36074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x360750: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360758: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360758u;
    SET_GPR_U32(ctx, 31, 0x360760u);
    ctx->pc = 0x36075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360758u;
    // 0x36075c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360758u, 0x360760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360760u;
label_360760:
    // 0x360760: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360760u;
    SET_GPR_U32(ctx, 31, 0x360768u);
    ctx->pc = 0x360764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360760u;
    // 0x360764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360760u, 0x360768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360768u;
label_360768:
    // 0x360768: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36076c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36076cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360770: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x360770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x360774: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360774u;
    SET_GPR_U32(ctx, 31, 0x36077Cu);
    ctx->pc = 0x360778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360774u;
    // 0x360778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360774u, 0x36077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36077Cu;
label_36077c:
    // 0x36077c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36077Cu;
    SET_GPR_U32(ctx, 31, 0x360784u);
    ctx->pc = 0x360780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36077Cu;
    // 0x360780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36077Cu, 0x360784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360784u;
label_360784:
    // 0x360784: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360788: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x360788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36078c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36078cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360790: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360790u;
    SET_GPR_U32(ctx, 31, 0x360798u);
    ctx->pc = 0x360794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360790u;
    // 0x360794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360790u, 0x360798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360798u;
label_360798:
    // 0x360798: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360798u;
    SET_GPR_U32(ctx, 31, 0x3607A0u);
    ctx->pc = 0x36079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360798u;
    // 0x36079c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360798u, 0x3607A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607A0u;
label_3607a0:
    // 0x3607a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3607a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3607a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3607a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3607a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3607a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3607ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3607ACu;
    SET_GPR_U32(ctx, 31, 0x3607B4u);
    ctx->pc = 0x3607B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3607ACu;
    // 0x3607b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3607ACu, 0x3607B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607B4u;
label_3607b4:
    // 0x3607b4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3607B4u;
    SET_GPR_U32(ctx, 31, 0x3607BCu);
    ctx->pc = 0x3607B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3607B4u;
    // 0x3607b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3607B4u, 0x3607BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607BCu;
label_3607bc:
    // 0x3607bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3607bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3607c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3607c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3607c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3607c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3607c8: 0xc0b7db0  jal         func_2DF6C0
    ctx->pc = 0x3607C8u;
    SET_GPR_U32(ctx, 31, 0x3607D0u);
    ctx->pc = 0x3607CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3607C8u;
    // 0x3607cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF6C0u, 0x3607C8u, 0x3607D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607D0u;
label_3607d0:
    // 0x3607d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3607d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3607d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3607d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3607d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3607d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3607dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3607dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3607e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3607e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3607e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3607e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3607e8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3607e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3607ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3607ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3607F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607ECu;
        // 0x3607f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3607ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3607F4u;
    // 0x3607f4: 0x0  nop
    ctx->pc = 0x3607f4u;
    // NOP
    ctx->pc = 0x3607f8u;
}

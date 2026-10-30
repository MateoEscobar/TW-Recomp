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

// Function: sub_00364708
// Address: 0x364708 - 0x3647d8
void sub_00364708_0x364708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364708_0x364708");
#endif

    switch (ctx->pc) {
        case 0x364738u: goto label_364738;
        case 0x364740u: goto label_364740;
        case 0x364754u: goto label_364754;
        case 0x36475cu: goto label_36475c;
        case 0x364774u: goto label_364774;
        case 0x36477cu: goto label_36477c;
        case 0x364794u: goto label_364794;
        case 0x36479cu: goto label_36479c;
        case 0x3647b0u: goto label_3647b0;
        default: break;
    }

    ctx->pc = 0x364708u;

    // 0x364708: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x364708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36470c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36470cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364710: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x364710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x364714: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x364714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x364718: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36471c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36471cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364720: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x364720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x364724: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x364724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x364728: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36472c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364730: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364730u;
    SET_GPR_U32(ctx, 31, 0x364738u);
    ctx->pc = 0x364734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364730u;
    // 0x364734: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364730u, 0x364738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364738u;
label_364738:
    // 0x364738: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364738u;
    SET_GPR_U32(ctx, 31, 0x364740u);
    ctx->pc = 0x36473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364738u;
    // 0x36473c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364738u, 0x364740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364740u;
label_364740:
    // 0x364740: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364744: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x364744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364748: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x364748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36474c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36474Cu;
    SET_GPR_U32(ctx, 31, 0x364754u);
    ctx->pc = 0x364750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36474Cu;
    // 0x364750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36474Cu, 0x364754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364754u;
label_364754:
    // 0x364754: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x364754u;
    SET_GPR_U32(ctx, 31, 0x36475Cu);
    ctx->pc = 0x364758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364754u;
    // 0x364758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x364754u, 0x36475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36475Cu;
label_36475c:
    // 0x36475c: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x36475cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x364760: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364764: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x364764u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x364768: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x364768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36476c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36476Cu;
    SET_GPR_U32(ctx, 31, 0x364774u);
    ctx->pc = 0x364770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36476Cu;
    // 0x364770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36476Cu, 0x364774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364774u;
label_364774:
    // 0x364774: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x364774u;
    SET_GPR_U32(ctx, 31, 0x36477Cu);
    ctx->pc = 0x364778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364774u;
    // 0x364778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x364774u, 0x36477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36477Cu;
label_36477c:
    // 0x36477c: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x36477cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x364780: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x364780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x364784: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x364784u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x364788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x364788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36478c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36478Cu;
    SET_GPR_U32(ctx, 31, 0x364794u);
    ctx->pc = 0x364790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36478Cu;
    // 0x364790: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36478Cu, 0x364794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364794u;
label_364794:
    // 0x364794: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x364794u;
    SET_GPR_U32(ctx, 31, 0x36479Cu);
    ctx->pc = 0x364798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364794u;
    // 0x364798: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x364794u, 0x36479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36479Cu;
label_36479c:
    // 0x36479c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36479cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3647a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3647a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3647a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3647a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3647a8: 0xc0bf6e4  jal         func_2FDB90
    ctx->pc = 0x3647A8u;
    SET_GPR_U32(ctx, 31, 0x3647B0u);
    ctx->pc = 0x3647ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3647A8u;
    // 0x3647ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x3647A8u, 0x3647B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3647B0u;
label_3647b0:
    // 0x3647b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3647b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3647b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3647b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3647b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3647b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3647bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3647bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3647c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3647c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3647c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3647c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3647c8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3647c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3647cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3647CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3647D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3647CCu;
        // 0x3647d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3647CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3647D4u;
    // 0x3647d4: 0x0  nop
    ctx->pc = 0x3647d4u;
    // NOP
    ctx->pc = 0x3647d8u;
}

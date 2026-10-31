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

// Function: sub_003656A0
// Address: 0x3656a0 - 0x3657a0
void sub_003656A0_0x3656a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003656A0_0x3656a0");
#endif

    switch (ctx->pc) {
        case 0x3656d4u: goto label_3656d4;
        case 0x3656f4u: goto label_3656f4;
        case 0x365708u: goto label_365708;
        case 0x365710u: goto label_365710;
        case 0x365724u: goto label_365724;
        case 0x365738u: goto label_365738;
        case 0x365740u: goto label_365740;
        case 0x365754u: goto label_365754;
        case 0x36575cu: goto label_36575c;
        case 0x365774u: goto label_365774;
        default: break;
    }

    ctx->pc = 0x3656a0u;

    // 0x3656a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3656a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3656a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3656a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3656a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3656a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3656ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3656acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3656b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3656b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3656b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3656b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3656b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3656b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3656bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3656bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3656c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3656c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3656c4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3656c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3656c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3656c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3656cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3656CCu;
    SET_GPR_U32(ctx, 31, 0x3656D4u);
    ctx->pc = 0x3656D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3656CCu;
    // 0x3656d0: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3656CCu, 0x3656D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3656D4u;
label_3656d4:
    // 0x3656d4: 0x341283df  ori         $s2, $zero, 0x83DF
    ctx->pc = 0x3656d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33759);
    // 0x3656d8: 0x129438  dsll        $s2, $s2, 16
    ctx->pc = 0x3656d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 16);
    // 0x3656dc: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x3656dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x3656e0: 0x129438  dsll        $s2, $s2, 16
    ctx->pc = 0x3656e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 16);
    // 0x3656e4: 0x3652ffc0  ori         $s2, $s2, 0xFFC0
    ctx->pc = 0x3656e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65472);
    // 0x3656e8: 0x1293f8  dsll        $s2, $s2, 15
    ctx->pc = 0x3656e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 15);
    // 0x3656ec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3656ECu;
    SET_GPR_U32(ctx, 31, 0x3656F4u);
    ctx->pc = 0x3656F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3656ECu;
    // 0x3656f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3656ECu, 0x3656F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3656F4u;
label_3656f4:
    // 0x3656f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3656f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3656f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3656f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3656fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3656fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365700: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365700u;
    SET_GPR_U32(ctx, 31, 0x365708u);
    ctx->pc = 0x365704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365700u;
    // 0x365704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365700u, 0x365708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365708u;
label_365708:
    // 0x365708: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365708u;
    SET_GPR_U32(ctx, 31, 0x365710u);
    ctx->pc = 0x36570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365708u;
    // 0x36570c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365708u, 0x365710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365710u;
label_365710:
    // 0x365710: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x365710u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x365714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365718: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36571c: 0xc102488  jal         func_409220
    ctx->pc = 0x36571Cu;
    SET_GPR_U32(ctx, 31, 0x365724u);
    ctx->pc = 0x365720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36571Cu;
    // 0x365720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36571Cu, 0x365724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365724u;
label_365724:
    // 0x365724: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x365724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365728: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x365728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36572c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36572cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x365730: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365730u;
    SET_GPR_U32(ctx, 31, 0x365738u);
    ctx->pc = 0x365734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365730u;
    // 0x365734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365730u, 0x365738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365738u;
label_365738:
    // 0x365738: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365738u;
    SET_GPR_U32(ctx, 31, 0x365740u);
    ctx->pc = 0x36573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365738u;
    // 0x36573c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365738u, 0x365740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365740u;
label_365740:
    // 0x365740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x365740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365744: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x365744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36574c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36574Cu;
    SET_GPR_U32(ctx, 31, 0x365754u);
    ctx->pc = 0x365750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36574Cu;
    // 0x365750: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36574Cu, 0x365754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365754u;
label_365754:
    // 0x365754: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365754u;
    SET_GPR_U32(ctx, 31, 0x36575Cu);
    ctx->pc = 0x365758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365754u;
    // 0x365758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365754u, 0x36575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36575Cu;
label_36575c:
    // 0x36575c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36575cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365760: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x365760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365764: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x365764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x365768: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x365768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36576c: 0xc046ddc  jal         func_11B770
    ctx->pc = 0x36576Cu;
    SET_GPR_U32(ctx, 31, 0x365774u);
    ctx->pc = 0x365770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36576Cu;
    // 0x365770: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B770u, 0x36576Cu, 0x365774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365774u;
label_365774:
    // 0x365774: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x365774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x365778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36577c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36577cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x365780: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x365780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365784: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x365784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365788: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x365788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36578c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36578cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365790: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x365790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x365794: 0x3e00008  jr          $ra
    ctx->pc = 0x365794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365794u;
        // 0x365798: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36579Cu;
    // 0x36579c: 0x0  nop
    ctx->pc = 0x36579cu;
    // NOP
    ctx->pc = 0x3657a0u;
}

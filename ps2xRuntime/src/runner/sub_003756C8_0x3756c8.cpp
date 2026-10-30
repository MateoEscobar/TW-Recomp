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

// Function: sub_003756C8
// Address: 0x3756c8 - 0x3757b8
void sub_003756C8_0x3756c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003756C8_0x3756c8");
#endif

    switch (ctx->pc) {
        case 0x3756f8u: goto label_3756f8;
        case 0x375700u: goto label_375700;
        case 0x375714u: goto label_375714;
        case 0x37571cu: goto label_37571c;
        case 0x37573cu: goto label_37573c;
        case 0x375744u: goto label_375744;
        case 0x375758u: goto label_375758;
        case 0x375770u: goto label_375770;
        case 0x375778u: goto label_375778;
        case 0x375790u: goto label_375790;
        default: break;
    }

    ctx->pc = 0x3756c8u;

    // 0x3756c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3756c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3756cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3756ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3756d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3756d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3756d4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3756d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3756d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3756d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3756dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3756dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3756e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3756e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3756e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3756e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3756e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3756e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3756ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3756ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3756f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3756F0u;
    SET_GPR_U32(ctx, 31, 0x3756F8u);
    ctx->pc = 0x3756F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3756F0u;
    // 0x3756f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3756F0u, 0x3756F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3756F8u;
label_3756f8:
    // 0x3756f8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3756F8u;
    SET_GPR_U32(ctx, 31, 0x375700u);
    ctx->pc = 0x3756FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3756F8u;
    // 0x3756fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3756F8u, 0x375700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375700u;
label_375700:
    // 0x375700: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x375700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375704: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x375704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375708: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37570c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37570Cu;
    SET_GPR_U32(ctx, 31, 0x375714u);
    ctx->pc = 0x375710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37570Cu;
    // 0x375710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37570Cu, 0x375714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375714u;
label_375714:
    // 0x375714: 0xc10b108  jal         func_42C420
    ctx->pc = 0x375714u;
    SET_GPR_U32(ctx, 31, 0x37571Cu);
    ctx->pc = 0x375718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375714u;
    // 0x375718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x375714u, 0x37571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37571Cu;
label_37571c:
    // 0x37571c: 0x3406814e  ori         $a2, $zero, 0x814E
    ctx->pc = 0x37571cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33102);
    // 0x375720: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x375720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x375724: 0x34c6e000  ori         $a2, $a2, 0xE000
    ctx->pc = 0x375724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x375728: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x375728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x37572c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37572cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375730: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375734: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375734u;
    SET_GPR_U32(ctx, 31, 0x37573Cu);
    ctx->pc = 0x375738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375734u;
    // 0x375738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375734u, 0x37573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37573Cu;
label_37573c:
    // 0x37573c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37573Cu;
    SET_GPR_U32(ctx, 31, 0x375744u);
    ctx->pc = 0x375740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37573Cu;
    // 0x375740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37573Cu, 0x375744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375744u;
label_375744:
    // 0x375744: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x375744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x375748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37574c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37574cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375750: 0xc102488  jal         func_409220
    ctx->pc = 0x375750u;
    SET_GPR_U32(ctx, 31, 0x375758u);
    ctx->pc = 0x375754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375750u;
    // 0x375754: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375750u, 0x375758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375758u;
label_375758:
    // 0x375758: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x375758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x37575c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x37575cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x375760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x375760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x375764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375768: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375768u;
    SET_GPR_U32(ctx, 31, 0x375770u);
    ctx->pc = 0x37576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375768u;
    // 0x37576c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375768u, 0x375770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375770u;
label_375770:
    // 0x375770: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x375770u;
    SET_GPR_U32(ctx, 31, 0x375778u);
    ctx->pc = 0x375774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375770u;
    // 0x375774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x375770u, 0x375778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375778u;
label_375778:
    // 0x375778: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x375778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37577c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x37577cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375780: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x375780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375784: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x375784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375788: 0xc0c5938  jal         func_3164E0
    ctx->pc = 0x375788u;
    SET_GPR_U32(ctx, 31, 0x375790u);
    ctx->pc = 0x37578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375788u;
    // 0x37578c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3164E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3164E0u, 0x375788u, 0x375790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375790u;
label_375790:
    // 0x375790: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x375790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375798: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x375798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37579c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37579cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3757a0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3757a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3757a4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3757a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3757a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3757a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3757ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3757ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3757B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757ACu;
        // 0x3757b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3757ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3757B4u;
    // 0x3757b4: 0x0  nop
    ctx->pc = 0x3757b4u;
    // NOP
    ctx->pc = 0x3757b8u;
}

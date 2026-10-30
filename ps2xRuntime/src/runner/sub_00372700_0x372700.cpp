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

// Function: sub_00372700
// Address: 0x372700 - 0x3728c8
void sub_00372700_0x372700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372700_0x372700");
#endif

    switch (ctx->pc) {
        case 0x37274cu: goto label_37274c;
        case 0x37275cu: goto label_37275c;
        case 0x372770u: goto label_372770;
        case 0x372778u: goto label_372778;
        case 0x37278cu: goto label_37278c;
        case 0x372794u: goto label_372794;
        case 0x3727a8u: goto label_3727a8;
        case 0x3727b0u: goto label_3727b0;
        case 0x3727c4u: goto label_3727c4;
        case 0x3727ccu: goto label_3727cc;
        case 0x3727e0u: goto label_3727e0;
        case 0x3727e8u: goto label_3727e8;
        case 0x3727fcu: goto label_3727fc;
        case 0x372804u: goto label_372804;
        case 0x372818u: goto label_372818;
        case 0x372820u: goto label_372820;
        case 0x372834u: goto label_372834;
        case 0x37283cu: goto label_37283c;
        case 0x372850u: goto label_372850;
        case 0x372858u: goto label_372858;
        case 0x372884u: goto label_372884;
        default: break;
    }

    ctx->pc = 0x372700u;

    // 0x372700: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x372700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x372704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372708: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x372708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x37270c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x37270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x372710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372714: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x372714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372718: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x372718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x37271c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37271cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x372720: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x372720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372724: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x372724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x372728: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x372728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x37272c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x37272cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x372730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372734: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x372734u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x372738: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x372738u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x37273c: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x37273cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x372740: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x372740u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x372744: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372744u;
    SET_GPR_U32(ctx, 31, 0x37274Cu);
    ctx->pc = 0x372748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372744u;
    // 0x372748: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372744u, 0x37274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37274Cu;
label_37274c:
    // 0x37274c: 0x3411ffc0  ori         $s1, $zero, 0xFFC0
    ctx->pc = 0x37274cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x372750: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x372750u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x372754: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372754u;
    SET_GPR_U32(ctx, 31, 0x37275Cu);
    ctx->pc = 0x372758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372754u;
    // 0x372758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372754u, 0x37275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37275Cu;
label_37275c:
    // 0x37275c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37275cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372760: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x372760u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372764: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372768: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372768u;
    SET_GPR_U32(ctx, 31, 0x372770u);
    ctx->pc = 0x37276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372768u;
    // 0x37276c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372768u, 0x372770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372770u;
label_372770:
    // 0x372770: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372770u;
    SET_GPR_U32(ctx, 31, 0x372778u);
    ctx->pc = 0x372774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372770u;
    // 0x372774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372770u, 0x372778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372778u;
label_372778:
    // 0x372778: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x372778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37277c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x37277cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372780: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x372780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372784: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372784u;
    SET_GPR_U32(ctx, 31, 0x37278Cu);
    ctx->pc = 0x372788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372784u;
    // 0x372788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372784u, 0x37278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37278Cu;
label_37278c:
    // 0x37278c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37278Cu;
    SET_GPR_U32(ctx, 31, 0x372794u);
    ctx->pc = 0x372790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37278Cu;
    // 0x372790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37278Cu, 0x372794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372794u;
label_372794:
    // 0x372794: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x372794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372798: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x372798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37279c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3727a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3727A0u;
    SET_GPR_U32(ctx, 31, 0x3727A8u);
    ctx->pc = 0x3727A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3727A0u;
    // 0x3727a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3727A0u, 0x3727A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727A8u;
label_3727a8:
    // 0x3727a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3727A8u;
    SET_GPR_U32(ctx, 31, 0x3727B0u);
    ctx->pc = 0x3727ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3727A8u;
    // 0x3727ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3727A8u, 0x3727B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727B0u;
label_3727b0:
    // 0x3727b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3727b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3727b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3727b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3727b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3727b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3727bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3727BCu;
    SET_GPR_U32(ctx, 31, 0x3727C4u);
    ctx->pc = 0x3727C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3727BCu;
    // 0x3727c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3727BCu, 0x3727C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727C4u;
label_3727c4:
    // 0x3727c4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3727C4u;
    SET_GPR_U32(ctx, 31, 0x3727CCu);
    ctx->pc = 0x3727C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3727C4u;
    // 0x3727c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3727C4u, 0x3727CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727CCu;
label_3727cc:
    // 0x3727cc: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x3727ccu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x3727d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3727d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3727d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3727d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3727d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3727D8u;
    SET_GPR_U32(ctx, 31, 0x3727E0u);
    ctx->pc = 0x3727DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3727D8u;
    // 0x3727dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3727D8u, 0x3727E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727E0u;
label_3727e0:
    // 0x3727e0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3727E0u;
    SET_GPR_U32(ctx, 31, 0x3727E8u);
    ctx->pc = 0x3727E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3727E0u;
    // 0x3727e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3727E0u, 0x3727E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727E8u;
label_3727e8:
    // 0x3727e8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3727e8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x3727ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3727ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3727f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3727f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3727f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3727F4u;
    SET_GPR_U32(ctx, 31, 0x3727FCu);
    ctx->pc = 0x3727F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3727F4u;
    // 0x3727f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3727F4u, 0x3727FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727FCu;
label_3727fc:
    // 0x3727fc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3727FCu;
    SET_GPR_U32(ctx, 31, 0x372804u);
    ctx->pc = 0x372800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3727FCu;
    // 0x372800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3727FCu, 0x372804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372804u;
label_372804:
    // 0x372804: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x372804u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x372808: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x372808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37280c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x37280cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x372810: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372810u;
    SET_GPR_U32(ctx, 31, 0x372818u);
    ctx->pc = 0x372814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372810u;
    // 0x372814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372810u, 0x372818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372818u;
label_372818:
    // 0x372818: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372818u;
    SET_GPR_U32(ctx, 31, 0x372820u);
    ctx->pc = 0x37281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372818u;
    // 0x37281c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372818u, 0x372820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372820u;
label_372820:
    // 0x372820: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x372820u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x372824: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x372824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372828: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x372828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x37282c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37282Cu;
    SET_GPR_U32(ctx, 31, 0x372834u);
    ctx->pc = 0x372830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37282Cu;
    // 0x372830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37282Cu, 0x372834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372834u;
label_372834:
    // 0x372834: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372834u;
    SET_GPR_U32(ctx, 31, 0x37283Cu);
    ctx->pc = 0x372838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372834u;
    // 0x372838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372834u, 0x37283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37283Cu;
label_37283c:
    // 0x37283c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37283cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x372840: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x372840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372848: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372848u;
    SET_GPR_U32(ctx, 31, 0x372850u);
    ctx->pc = 0x37284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372848u;
    // 0x37284c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372848u, 0x372850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372850u;
label_372850:
    // 0x372850: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372850u;
    SET_GPR_U32(ctx, 31, 0x372858u);
    ctx->pc = 0x372854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372850u;
    // 0x372854: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372850u, 0x372858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372858u;
label_372858:
    // 0x372858: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x372858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37285c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x37285cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372860: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x372860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372864: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x372864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372868: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x372868u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x37286c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x37286cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x372870: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x372870u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x372874: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x372874u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x372878: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x372878u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x37287c: 0xc044f16  jal         func_113C58
    ctx->pc = 0x37287Cu;
    SET_GPR_U32(ctx, 31, 0x372884u);
    ctx->pc = 0x372880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37287Cu;
    // 0x372880: 0x46000446  mov.s       $f17, $f0 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113C58u, 0x37287Cu, 0x372884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372884u;
label_372884:
    // 0x372884: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x372884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x372888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37288c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37288cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x372890: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x372890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x372894: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x372894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x372898: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x372898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37289c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x37289cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3728a0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3728a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3728a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3728a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3728a8: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x3728a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3728ac: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x3728acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3728b0: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x3728b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3728b4: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x3728b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3728b8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3728b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3728bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3728BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3728C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728BCu;
        // 0x3728c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3728BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3728C4u;
    // 0x3728c4: 0x0  nop
    ctx->pc = 0x3728c4u;
    // NOP
    ctx->pc = 0x3728c8u;
}

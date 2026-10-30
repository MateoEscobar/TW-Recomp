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

// Function: sub_003792C0
// Address: 0x3792c0 - 0x379540
void sub_003792C0_0x3792c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003792C0_0x3792c0");
#endif

    switch (ctx->pc) {
        case 0x379314u: goto label_379314;
        case 0x37931cu: goto label_37931c;
        case 0x379330u: goto label_379330;
        case 0x379338u: goto label_379338;
        case 0x37934cu: goto label_37934c;
        case 0x379354u: goto label_379354;
        case 0x379368u: goto label_379368;
        case 0x379370u: goto label_379370;
        case 0x379384u: goto label_379384;
        case 0x37938cu: goto label_37938c;
        case 0x3793a0u: goto label_3793a0;
        case 0x3793a8u: goto label_3793a8;
        case 0x3793bcu: goto label_3793bc;
        case 0x3793c4u: goto label_3793c4;
        case 0x3793d8u: goto label_3793d8;
        case 0x3793e0u: goto label_3793e0;
        case 0x3793f4u: goto label_3793f4;
        case 0x3793fcu: goto label_3793fc;
        case 0x379410u: goto label_379410;
        case 0x379418u: goto label_379418;
        case 0x37942cu: goto label_37942c;
        case 0x379438u: goto label_379438;
        case 0x379450u: goto label_379450;
        case 0x379458u: goto label_379458;
        case 0x37949cu: goto label_37949c;
        case 0x3794a8u: goto label_3794a8;
        case 0x3794bcu: goto label_3794bc;
        case 0x3794d4u: goto label_3794d4;
        case 0x3794e8u: goto label_3794e8;
        default: break;
    }

    ctx->pc = 0x3792c0u;

    // 0x3792c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3792c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3792c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3792c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3792c8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3792c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3792cc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3792ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3792d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3792d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3792d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3792d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3792d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3792d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3792dc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3792dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3792e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3792e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3792e4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3792e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3792e8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3792e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3792ec: 0xe7ba00c0  swc1        $f26, 0xC0($sp)
    ctx->pc = 0x3792ecu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3792f0: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x3792f0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3792f4: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x3792f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3792f8: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x3792f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3792fc: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x3792fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x379300: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x379300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x379304: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x379304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x379308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x379308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37930c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37930Cu;
    SET_GPR_U32(ctx, 31, 0x379314u);
    ctx->pc = 0x379310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37930Cu;
    // 0x379310: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37930Cu, 0x379314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379314u;
label_379314:
    // 0x379314: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379314u;
    SET_GPR_U32(ctx, 31, 0x37931Cu);
    ctx->pc = 0x379318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379314u;
    // 0x379318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379314u, 0x37931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37931Cu;
label_37931c:
    // 0x37931c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37931cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379320: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x379320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x379324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379328: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379328u;
    SET_GPR_U32(ctx, 31, 0x379330u);
    ctx->pc = 0x37932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379328u;
    // 0x37932c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379328u, 0x379330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379330u;
label_379330:
    // 0x379330: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379330u;
    SET_GPR_U32(ctx, 31, 0x379338u);
    ctx->pc = 0x379334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379330u;
    // 0x379334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379330u, 0x379338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379338u;
label_379338:
    // 0x379338: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x379338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37933c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x379340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379344: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379344u;
    SET_GPR_U32(ctx, 31, 0x37934Cu);
    ctx->pc = 0x379348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379344u;
    // 0x379348: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379344u, 0x37934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37934Cu;
label_37934c:
    // 0x37934c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37934Cu;
    SET_GPR_U32(ctx, 31, 0x379354u);
    ctx->pc = 0x379350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37934Cu;
    // 0x379350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37934Cu, 0x379354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379354u;
label_379354:
    // 0x379354: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x379354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379358: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x379358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37935c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379360: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379360u;
    SET_GPR_U32(ctx, 31, 0x379368u);
    ctx->pc = 0x379364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379360u;
    // 0x379364: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379360u, 0x379368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379368u;
label_379368:
    // 0x379368: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x379368u;
    SET_GPR_U32(ctx, 31, 0x379370u);
    ctx->pc = 0x37936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379368u;
    // 0x37936c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x379368u, 0x379370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379370u;
label_379370:
    // 0x379370: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x379370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379374: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x379374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x379378: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x379378u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x37937c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37937Cu;
    SET_GPR_U32(ctx, 31, 0x379384u);
    ctx->pc = 0x379380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37937Cu;
    // 0x379380: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37937Cu, 0x379384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379384u;
label_379384:
    // 0x379384: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x379384u;
    SET_GPR_U32(ctx, 31, 0x37938Cu);
    ctx->pc = 0x379388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379384u;
    // 0x379388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x379384u, 0x37938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37938Cu;
label_37938c:
    // 0x37938c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37938cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379390: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x379390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x379394: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x379394u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x379398: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379398u;
    SET_GPR_U32(ctx, 31, 0x3793A0u);
    ctx->pc = 0x37939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379398u;
    // 0x37939c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379398u, 0x3793A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793A0u;
label_3793a0:
    // 0x3793a0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3793A0u;
    SET_GPR_U32(ctx, 31, 0x3793A8u);
    ctx->pc = 0x3793A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3793A0u;
    // 0x3793a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3793A0u, 0x3793A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793A8u;
label_3793a8:
    // 0x3793a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3793a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3793ac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3793acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3793b0: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x3793b0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x3793b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3793B4u;
    SET_GPR_U32(ctx, 31, 0x3793BCu);
    ctx->pc = 0x3793B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3793B4u;
    // 0x3793b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3793B4u, 0x3793BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793BCu;
label_3793bc:
    // 0x3793bc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3793BCu;
    SET_GPR_U32(ctx, 31, 0x3793C4u);
    ctx->pc = 0x3793C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3793BCu;
    // 0x3793c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3793BCu, 0x3793C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793C4u;
label_3793c4:
    // 0x3793c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3793c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3793c8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3793c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3793cc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3793ccu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x3793d0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3793D0u;
    SET_GPR_U32(ctx, 31, 0x3793D8u);
    ctx->pc = 0x3793D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3793D0u;
    // 0x3793d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3793D0u, 0x3793D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793D8u;
label_3793d8:
    // 0x3793d8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3793D8u;
    SET_GPR_U32(ctx, 31, 0x3793E0u);
    ctx->pc = 0x3793DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3793D8u;
    // 0x3793dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3793D8u, 0x3793E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793E0u;
label_3793e0:
    // 0x3793e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3793e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3793e4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3793e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3793e8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3793e8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x3793ec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3793ECu;
    SET_GPR_U32(ctx, 31, 0x3793F4u);
    ctx->pc = 0x3793F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3793ECu;
    // 0x3793f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3793ECu, 0x3793F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793F4u;
label_3793f4:
    // 0x3793f4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3793F4u;
    SET_GPR_U32(ctx, 31, 0x3793FCu);
    ctx->pc = 0x3793F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3793F4u;
    // 0x3793f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3793F4u, 0x3793FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793FCu;
label_3793fc:
    // 0x3793fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3793fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379400: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x379400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x379404: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x379404u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x379408: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379408u;
    SET_GPR_U32(ctx, 31, 0x379410u);
    ctx->pc = 0x37940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379408u;
    // 0x37940c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379408u, 0x379410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379410u;
label_379410:
    // 0x379410: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x379410u;
    SET_GPR_U32(ctx, 31, 0x379418u);
    ctx->pc = 0x379414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379410u;
    // 0x379414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x379410u, 0x379418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379418u;
label_379418:
    // 0x379418: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x379418u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37941c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37941cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379420: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x379420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x379424: 0xc1024c6  jal         func_409318
    ctx->pc = 0x379424u;
    SET_GPR_U32(ctx, 31, 0x37942Cu);
    ctx->pc = 0x379428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379424u;
    // 0x379428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x379424u, 0x37942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37942Cu;
label_37942c:
    // 0x37942c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x37942cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x379430: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x379430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379434: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x379434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_379438:
    // 0x379438: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x379438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37943c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379440: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x379440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379444: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x379444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379448: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x379448u;
    SET_GPR_U32(ctx, 31, 0x379450u);
    ctx->pc = 0x37944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379448u;
    // 0x37944c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x379448u, 0x379450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379450u;
label_379450:
    // 0x379450: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379450u;
    SET_GPR_U32(ctx, 31, 0x379458u);
    ctx->pc = 0x379454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379450u;
    // 0x379454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379450u, 0x379458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379458u;
label_379458:
    // 0x379458: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x379458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x37945c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37945cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x379460: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x379460u;
    {
        const bool branch_taken_0x379460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379460u;
        // 0x379464: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379460) {
            ctx->pc = 0x379438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379438;
        }
    }
    ctx->pc = 0x379468u;
    // 0x379468: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x379468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37946c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x37946cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379470: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x379470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379474: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x379474u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x379478: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x379478u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x37947c: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x37947cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x379480: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x379480u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x379484: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x379484u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x379488: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x379488u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x37948c: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x37948cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x379490: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x379490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379494: 0xc0e6f8a  jal         func_39BE28
    ctx->pc = 0x379494u;
    SET_GPR_U32(ctx, 31, 0x37949Cu);
    ctx->pc = 0x379498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379494u;
    // 0x379498: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BE28u, 0x379494u, 0x37949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37949Cu;
label_37949c:
    // 0x37949c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37949cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3794a0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3794a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3794a4: 0x0  nop
    ctx->pc = 0x3794a4u;
    // NOP
label_3794a8:
    // 0x3794a8: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x3794a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3794ac: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3794acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3794b0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3794b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3794b4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3794B4u;
    SET_GPR_U32(ctx, 31, 0x3794BCu);
    ctx->pc = 0x3794B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3794B4u;
    // 0x3794b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3794B4u, 0x3794BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3794BCu;
label_3794bc:
    // 0x3794bc: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3794BCu;
    {
        const bool branch_taken_0x3794bc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3794C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794BCu;
        // 0x3794c0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794bc) {
            ctx->pc = 0x3794D8u;
            goto label_3794d8;
        }
    }
    ctx->pc = 0x3794C4u;
    // 0x3794c4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3794c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3794c8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3794c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3794cc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3794CCu;
    SET_GPR_U32(ctx, 31, 0x3794D4u);
    ctx->pc = 0x3794D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3794CCu;
    // 0x3794d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3794CCu, 0x3794D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3794D4u;
label_3794d4:
    // 0x3794d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3794d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3794d8:
    // 0x3794d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3794d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3794dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3794dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3794e0: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3794E0u;
    SET_GPR_U32(ctx, 31, 0x3794E8u);
    ctx->pc = 0x3794E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3794E0u;
    // 0x3794e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3794E0u, 0x3794E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3794E8u;
label_3794e8:
    // 0x3794e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3794e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3794ec: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x3794ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3794f0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3794F0u;
    {
        const bool branch_taken_0x3794f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3794F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794F0u;
        // 0x3794f4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794f0) {
            ctx->pc = 0x3794A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3794a8;
        }
    }
    ctx->pc = 0x3794F8u;
    // 0x3794f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3794f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3794fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3794fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379500: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x379500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x379504: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x379504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x379508: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x379508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37950c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37950cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379510: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x379510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379514: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x379514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x379518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37951c: 0xc7ba00c0  lwc1        $f26, 0xC0($sp)
    ctx->pc = 0x37951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x379520: 0xc7b900b8  lwc1        $f25, 0xB8($sp)
    ctx->pc = 0x379520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x379524: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x379524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x379528: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x379528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37952c: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x37952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x379530: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x379530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x379534: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x379534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x379538: 0x3e00008  jr          $ra
    ctx->pc = 0x379538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379538u;
        // 0x37953c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379540u;
}

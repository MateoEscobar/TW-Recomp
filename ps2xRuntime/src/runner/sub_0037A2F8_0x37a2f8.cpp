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

// Function: sub_0037A2F8
// Address: 0x37a2f8 - 0x37a4a8
void sub_0037A2F8_0x37a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A2F8_0x37a2f8");
#endif

    switch (ctx->pc) {
        case 0x37a338u: goto label_37a338;
        case 0x37a340u: goto label_37a340;
        case 0x37a358u: goto label_37a358;
        case 0x37a360u: goto label_37a360;
        case 0x37a374u: goto label_37a374;
        case 0x37a37cu: goto label_37a37c;
        case 0x37a394u: goto label_37a394;
        case 0x37a39cu: goto label_37a39c;
        case 0x37a3b0u: goto label_37a3b0;
        case 0x37a3b8u: goto label_37a3b8;
        case 0x37a3ccu: goto label_37a3cc;
        case 0x37a3d4u: goto label_37a3d4;
        case 0x37a3e8u: goto label_37a3e8;
        case 0x37a400u: goto label_37a400;
        case 0x37a408u: goto label_37a408;
        case 0x37a438u: goto label_37a438;
        case 0x37a440u: goto label_37a440;
        case 0x37a450u: goto label_37a450;
        case 0x37a464u: goto label_37a464;
        default: break;
    }

    ctx->pc = 0x37a2f8u;

    // 0x37a2f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x37a2fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a300: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x37a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x37a304: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x37a304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x37a308: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a30c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37a30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a310: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x37a310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x37a314: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x37a314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x37a318: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x37a31c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x37a31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x37a320: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x37a320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x37a324: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x37a324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x37a328: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x37a328u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x37a32c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37a32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37a330: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A330u;
    SET_GPR_U32(ctx, 31, 0x37A338u);
    ctx->pc = 0x37A334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A330u;
    // 0x37a334: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A330u, 0x37A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A338u;
label_37a338:
    // 0x37a338: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37A338u;
    SET_GPR_U32(ctx, 31, 0x37A340u);
    ctx->pc = 0x37A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A338u;
    // 0x37a33c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37A338u, 0x37A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A340u;
label_37a340:
    // 0x37a340: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a344: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a348: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37a348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a34c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a350: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A350u;
    SET_GPR_U32(ctx, 31, 0x37A358u);
    ctx->pc = 0x37A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A350u;
    // 0x37a354: 0x2bc03  sra         $s7, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A350u, 0x37A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A358u;
label_37a358:
    // 0x37a358: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37A358u;
    SET_GPR_U32(ctx, 31, 0x37A360u);
    ctx->pc = 0x37A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A358u;
    // 0x37a35c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37A358u, 0x37A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A360u;
label_37a360:
    // 0x37a360: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37a360u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37a364: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a368: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37a36c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A36Cu;
    SET_GPR_U32(ctx, 31, 0x37A374u);
    ctx->pc = 0x37A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A36Cu;
    // 0x37a370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A36Cu, 0x37A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A374u;
label_37a374:
    // 0x37a374: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37A374u;
    SET_GPR_U32(ctx, 31, 0x37A37Cu);
    ctx->pc = 0x37A378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A374u;
    // 0x37a378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37A374u, 0x37A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A37Cu;
label_37a37c:
    // 0x37a37c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a380: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a384: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37a384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37a388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a38c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A38Cu;
    SET_GPR_U32(ctx, 31, 0x37A394u);
    ctx->pc = 0x37A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A38Cu;
    // 0x37a390: 0x2b403  sra         $s6, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A38Cu, 0x37A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A394u;
label_37a394:
    // 0x37a394: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A394u;
    SET_GPR_U32(ctx, 31, 0x37A39Cu);
    ctx->pc = 0x37A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A394u;
    // 0x37a398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A394u, 0x37A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A39Cu;
label_37a39c:
    // 0x37a39c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a3a0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37a3a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a3a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A3A8u;
    SET_GPR_U32(ctx, 31, 0x37A3B0u);
    ctx->pc = 0x37A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A3A8u;
    // 0x37a3ac: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A3A8u, 0x37A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A3B0u;
label_37a3b0:
    // 0x37a3b0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A3B0u;
    SET_GPR_U32(ctx, 31, 0x37A3B8u);
    ctx->pc = 0x37A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A3B0u;
    // 0x37a3b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A3B0u, 0x37A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A3B8u;
label_37a3b8:
    // 0x37a3b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a3bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a3c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x37a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37a3c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A3C4u;
    SET_GPR_U32(ctx, 31, 0x37A3CCu);
    ctx->pc = 0x37A3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A3C4u;
    // 0x37a3c8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A3C4u, 0x37A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A3CCu;
label_37a3cc:
    // 0x37a3cc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37A3CCu;
    SET_GPR_U32(ctx, 31, 0x37A3D4u);
    ctx->pc = 0x37A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A3CCu;
    // 0x37a3d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37A3CCu, 0x37A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A3D4u;
label_37a3d4:
    // 0x37a3d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a3d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a3dc: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x37a3dcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37a3e0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37a3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a3e4: 0x0  nop
    ctx->pc = 0x37a3e4u;
    // NOP
label_37a3e8:
    // 0x37a3e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37a3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37a3ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a3f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a3f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a3f8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37A3F8u;
    SET_GPR_U32(ctx, 31, 0x37A400u);
    ctx->pc = 0x37A3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A3F8u;
    // 0x37a3fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37A3F8u, 0x37A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A400u;
label_37a400:
    // 0x37a400: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37A400u;
    SET_GPR_U32(ctx, 31, 0x37A408u);
    ctx->pc = 0x37A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A400u;
    // 0x37a404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37A400u, 0x37A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A408u;
label_37a408:
    // 0x37a408: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37a408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37a40c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37a40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a410: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37A410u;
    {
        const bool branch_taken_0x37a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A410u;
        // 0x37a414: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a410) {
            ctx->pc = 0x37A3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a3e8;
        }
    }
    ctx->pc = 0x37A418u;
    // 0x37a418: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x37a418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a41c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37a41cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x37a420: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x37a420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a424: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x37a424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a428: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x37a428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a42c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x37a42cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a430: 0xc106db8  jal         func_41B6E0
    ctx->pc = 0x37A430u;
    SET_GPR_U32(ctx, 31, 0x37A438u);
    ctx->pc = 0x37A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A430u;
    // 0x37a434: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B6E0u, 0x37A430u, 0x37A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A438u;
label_37a438:
    // 0x37a438: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a43c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_37a440:
    // 0x37a440: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x37a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37a444: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37a444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37a448: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37A448u;
    SET_GPR_U32(ctx, 31, 0x37A450u);
    ctx->pc = 0x37A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A448u;
    // 0x37a44c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37A448u, 0x37A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A450u;
label_37a450:
    // 0x37a450: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37a450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a458: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a45c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37A45Cu;
    SET_GPR_U32(ctx, 31, 0x37A464u);
    ctx->pc = 0x37A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A45Cu;
    // 0x37a460: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37A45Cu, 0x37A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A464u;
label_37a464:
    // 0x37a464: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37a464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a468: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37A468u;
    {
        const bool branch_taken_0x37a468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A468u;
        // 0x37a46c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a468) {
            ctx->pc = 0x37A440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a440;
        }
    }
    ctx->pc = 0x37A470u;
    // 0x37a470: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x37a470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37a474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a478: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x37a478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37a47c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x37a47cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37a480: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x37a480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37a484: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x37a484u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37a488: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x37a488u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37a48c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x37a48cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a490: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x37a490u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a498: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x37a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37a49c: 0x3e00008  jr          $ra
    ctx->pc = 0x37A49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A49Cu;
        // 0x37a4a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A4A4u;
    // 0x37a4a4: 0x0  nop
    ctx->pc = 0x37a4a4u;
    // NOP
    ctx->pc = 0x37a4a8u;
}

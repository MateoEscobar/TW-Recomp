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

// Function: sub_0035A330
// Address: 0x35a330 - 0x35a480
void sub_0035A330_0x35a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A330_0x35a330");
#endif

    switch (ctx->pc) {
        case 0x35a36cu: goto label_35a36c;
        case 0x35a374u: goto label_35a374;
        case 0x35a38cu: goto label_35a38c;
        case 0x35a394u: goto label_35a394;
        case 0x35a3acu: goto label_35a3ac;
        case 0x35a3b4u: goto label_35a3b4;
        case 0x35a3ccu: goto label_35a3cc;
        case 0x35a3d4u: goto label_35a3d4;
        case 0x35a3e8u: goto label_35a3e8;
        case 0x35a3f0u: goto label_35a3f0;
        case 0x35a408u: goto label_35a408;
        case 0x35a410u: goto label_35a410;
        case 0x35a428u: goto label_35a428;
        case 0x35a430u: goto label_35a430;
        case 0x35a450u: goto label_35a450;
        default: break;
    }

    ctx->pc = 0x35a330u;

    // 0x35a330: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x35a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x35a334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a338: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x35a338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x35a33c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x35a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x35a340: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35a340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a344: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35a344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a348: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x35a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x35a34c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x35a350: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a354: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x35a354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x35a358: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x35a358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x35a35c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x35a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x35a360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a364: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A364u;
    SET_GPR_U32(ctx, 31, 0x35A36Cu);
    ctx->pc = 0x35A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A364u;
    // 0x35a368: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A364u, 0x35A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A36Cu;
label_35a36c:
    // 0x35a36c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35A36Cu;
    SET_GPR_U32(ctx, 31, 0x35A374u);
    ctx->pc = 0x35A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A36Cu;
    // 0x35a370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35A36Cu, 0x35A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A374u;
label_35a374:
    // 0x35a374: 0x2b600  sll         $s6, $v0, 24
    ctx->pc = 0x35a374u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x35a378: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a37c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35a37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a380: 0x16b603  sra         $s6, $s6, 24
    ctx->pc = 0x35a380u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 24));
    // 0x35a384: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A384u;
    SET_GPR_U32(ctx, 31, 0x35A38Cu);
    ctx->pc = 0x35A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A384u;
    // 0x35a388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A384u, 0x35A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A38Cu;
label_35a38c:
    // 0x35a38c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35A38Cu;
    SET_GPR_U32(ctx, 31, 0x35A394u);
    ctx->pc = 0x35A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A38Cu;
    // 0x35a390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35A38Cu, 0x35A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A394u;
label_35a394:
    // 0x35a394: 0x2ae00  sll         $s5, $v0, 24
    ctx->pc = 0x35a394u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x35a398: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a39c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35a39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a3a0: 0x15ae03  sra         $s5, $s5, 24
    ctx->pc = 0x35a3a0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 21), 24));
    // 0x35a3a4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A3A4u;
    SET_GPR_U32(ctx, 31, 0x35A3ACu);
    ctx->pc = 0x35A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A3A4u;
    // 0x35a3a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A3A4u, 0x35A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A3ACu;
label_35a3ac:
    // 0x35a3ac: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35A3ACu;
    SET_GPR_U32(ctx, 31, 0x35A3B4u);
    ctx->pc = 0x35A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A3ACu;
    // 0x35a3b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35A3ACu, 0x35A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A3B4u;
label_35a3b4:
    // 0x35a3b4: 0x2a600  sll         $s4, $v0, 24
    ctx->pc = 0x35a3b4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x35a3b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a3bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35a3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35a3c0: 0x14a603  sra         $s4, $s4, 24
    ctx->pc = 0x35a3c0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 24));
    // 0x35a3c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A3C4u;
    SET_GPR_U32(ctx, 31, 0x35A3CCu);
    ctx->pc = 0x35A3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A3C4u;
    // 0x35a3c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A3C4u, 0x35A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A3CCu;
label_35a3cc:
    // 0x35a3cc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A3CCu;
    SET_GPR_U32(ctx, 31, 0x35A3D4u);
    ctx->pc = 0x35A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A3CCu;
    // 0x35a3d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A3CCu, 0x35A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A3D4u;
label_35a3d4:
    // 0x35a3d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35a3d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35a3d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a3dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35a3e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A3E0u;
    SET_GPR_U32(ctx, 31, 0x35A3E8u);
    ctx->pc = 0x35A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A3E0u;
    // 0x35a3e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A3E0u, 0x35A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A3E8u;
label_35a3e8:
    // 0x35a3e8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35A3E8u;
    SET_GPR_U32(ctx, 31, 0x35A3F0u);
    ctx->pc = 0x35A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A3E8u;
    // 0x35a3ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35A3E8u, 0x35A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A3F0u;
label_35a3f0:
    // 0x35a3f0: 0x29e00  sll         $s3, $v0, 24
    ctx->pc = 0x35a3f0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x35a3f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a3f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35a3fc: 0x139e03  sra         $s3, $s3, 24
    ctx->pc = 0x35a3fcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 24));
    // 0x35a400: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A400u;
    SET_GPR_U32(ctx, 31, 0x35A408u);
    ctx->pc = 0x35A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A400u;
    // 0x35a404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A400u, 0x35A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A408u;
label_35a408:
    // 0x35a408: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35A408u;
    SET_GPR_U32(ctx, 31, 0x35A410u);
    ctx->pc = 0x35A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A408u;
    // 0x35a40c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35A408u, 0x35A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A410u;
label_35a410:
    // 0x35a410: 0x28600  sll         $s0, $v0, 24
    ctx->pc = 0x35a410u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x35a414: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a418: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x35a418u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x35a41c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a420: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A420u;
    SET_GPR_U32(ctx, 31, 0x35A428u);
    ctx->pc = 0x35A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A420u;
    // 0x35a424: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A420u, 0x35A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A428u;
label_35a428:
    // 0x35a428: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A428u;
    SET_GPR_U32(ctx, 31, 0x35A430u);
    ctx->pc = 0x35A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A428u;
    // 0x35a42c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A428u, 0x35A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A430u;
label_35a430:
    // 0x35a430: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x35a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a434: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x35a434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a438: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x35a438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a43c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35a43cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35a440: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x35a440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a444: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x35a444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a448: 0xc10750a  jal         func_41D428
    ctx->pc = 0x35A448u;
    SET_GPR_U32(ctx, 31, 0x35A450u);
    ctx->pc = 0x35A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A448u;
    // 0x35a44c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D428u, 0x35A448u, 0x35A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A450u;
label_35a450:
    // 0x35a450: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x35a450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35a454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a458: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x35a458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35a45c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x35a45cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35a460: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35a460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35a464: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x35a464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35a468: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x35a468u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a46c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x35a46cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a474: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x35a474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35a478: 0x3e00008  jr          $ra
    ctx->pc = 0x35A478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A478u;
        // 0x35a47c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A480u;
}

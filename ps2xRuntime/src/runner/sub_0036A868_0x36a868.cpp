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

// Function: sub_0036A868
// Address: 0x36a868 - 0x36a9f8
void sub_0036A868_0x36a868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A868_0x36a868");
#endif

    switch (ctx->pc) {
        case 0x36a8acu: goto label_36a8ac;
        case 0x36a8b4u: goto label_36a8b4;
        case 0x36a8c8u: goto label_36a8c8;
        case 0x36a8d0u: goto label_36a8d0;
        case 0x36a8e4u: goto label_36a8e4;
        case 0x36a8ecu: goto label_36a8ec;
        case 0x36a900u: goto label_36a900;
        case 0x36a908u: goto label_36a908;
        case 0x36a91cu: goto label_36a91c;
        case 0x36a924u: goto label_36a924;
        case 0x36a938u: goto label_36a938;
        case 0x36a940u: goto label_36a940;
        case 0x36a954u: goto label_36a954;
        case 0x36a95cu: goto label_36a95c;
        case 0x36a970u: goto label_36a970;
        case 0x36a978u: goto label_36a978;
        case 0x36a98cu: goto label_36a98c;
        case 0x36a994u: goto label_36a994;
        case 0x36a9bcu: goto label_36a9bc;
        default: break;
    }

    ctx->pc = 0x36a868u;

    // 0x36a868: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36a868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36a86c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a870: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x36a870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x36a874: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x36a874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x36a878: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a87c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36a87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a880: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x36a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x36a884: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x36a884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x36a888: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a88c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x36a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x36a890: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x36a890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x36a894: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x36a894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x36a898: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x36a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x36a89c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x36a89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x36a8a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36a8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36a8a4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A8A4u;
    SET_GPR_U32(ctx, 31, 0x36A8ACu);
    ctx->pc = 0x36A8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A8A4u;
    // 0x36a8a8: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A8A4u, 0x36A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8ACu;
label_36a8ac:
    // 0x36a8ac: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A8ACu;
    SET_GPR_U32(ctx, 31, 0x36A8B4u);
    ctx->pc = 0x36A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A8ACu;
    // 0x36a8b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A8ACu, 0x36A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8B4u;
label_36a8b4:
    // 0x36a8b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36a8b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36a8b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a8bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36a8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a8c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A8C0u;
    SET_GPR_U32(ctx, 31, 0x36A8C8u);
    ctx->pc = 0x36A8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A8C0u;
    // 0x36a8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A8C0u, 0x36A8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8C8u;
label_36a8c8:
    // 0x36a8c8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A8C8u;
    SET_GPR_U32(ctx, 31, 0x36A8D0u);
    ctx->pc = 0x36A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A8C8u;
    // 0x36a8cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A8C8u, 0x36A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8D0u;
label_36a8d0:
    // 0x36a8d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a8d4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x36a8d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a8d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a8dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A8DCu;
    SET_GPR_U32(ctx, 31, 0x36A8E4u);
    ctx->pc = 0x36A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A8DCu;
    // 0x36a8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A8DCu, 0x36A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8E4u;
label_36a8e4:
    // 0x36a8e4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A8E4u;
    SET_GPR_U32(ctx, 31, 0x36A8ECu);
    ctx->pc = 0x36A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A8E4u;
    // 0x36a8e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A8E4u, 0x36A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8ECu;
label_36a8ec:
    // 0x36a8ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a8f0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x36a8f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a8f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36a8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36a8f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A8F8u;
    SET_GPR_U32(ctx, 31, 0x36A900u);
    ctx->pc = 0x36A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A8F8u;
    // 0x36a8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A8F8u, 0x36A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A900u;
label_36a900:
    // 0x36a900: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A900u;
    SET_GPR_U32(ctx, 31, 0x36A908u);
    ctx->pc = 0x36A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A900u;
    // 0x36a904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A900u, 0x36A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A908u;
label_36a908:
    // 0x36a908: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a90c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x36a90cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a910: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36a910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36a914: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A914u;
    SET_GPR_U32(ctx, 31, 0x36A91Cu);
    ctx->pc = 0x36A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A914u;
    // 0x36a918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A914u, 0x36A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A91Cu;
label_36a91c:
    // 0x36a91c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A91Cu;
    SET_GPR_U32(ctx, 31, 0x36A924u);
    ctx->pc = 0x36A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A91Cu;
    // 0x36a920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A91Cu, 0x36A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A924u;
label_36a924:
    // 0x36a924: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a928: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x36a928u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a92c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36a92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36a930: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A930u;
    SET_GPR_U32(ctx, 31, 0x36A938u);
    ctx->pc = 0x36A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A930u;
    // 0x36a934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A930u, 0x36A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A938u;
label_36a938:
    // 0x36a938: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A938u;
    SET_GPR_U32(ctx, 31, 0x36A940u);
    ctx->pc = 0x36A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A938u;
    // 0x36a93c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A938u, 0x36A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A940u;
label_36a940:
    // 0x36a940: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a944: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36a944u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a948: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36a948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36a94c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A94Cu;
    SET_GPR_U32(ctx, 31, 0x36A954u);
    ctx->pc = 0x36A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A94Cu;
    // 0x36a950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A94Cu, 0x36A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A954u;
label_36a954:
    // 0x36a954: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A954u;
    SET_GPR_U32(ctx, 31, 0x36A95Cu);
    ctx->pc = 0x36A958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A954u;
    // 0x36a958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A954u, 0x36A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A95Cu;
label_36a95c:
    // 0x36a95c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a960: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36a960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a964: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x36a964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36a968: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A968u;
    SET_GPR_U32(ctx, 31, 0x36A970u);
    ctx->pc = 0x36A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A968u;
    // 0x36a96c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A968u, 0x36A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A970u;
label_36a970:
    // 0x36a970: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A970u;
    SET_GPR_U32(ctx, 31, 0x36A978u);
    ctx->pc = 0x36A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A970u;
    // 0x36a974: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A970u, 0x36A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A978u;
label_36a978:
    // 0x36a978: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a97c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36a97cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a984: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A984u;
    SET_GPR_U32(ctx, 31, 0x36A98Cu);
    ctx->pc = 0x36A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A984u;
    // 0x36a988: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A984u, 0x36A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A98Cu;
label_36a98c:
    // 0x36a98c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A98Cu;
    SET_GPR_U32(ctx, 31, 0x36A994u);
    ctx->pc = 0x36A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A98Cu;
    // 0x36a990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A98Cu, 0x36A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A994u;
label_36a994:
    // 0x36a994: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x36a994u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a998: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36a998u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36a99c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x36a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a9a0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x36a9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a9a4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x36a9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a9a8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x36a9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a9ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x36a9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a9b0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x36a9b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a9b4: 0xc0a51b0  jal         func_2946C0
    ctx->pc = 0x36A9B4u;
    SET_GPR_U32(ctx, 31, 0x36A9BCu);
    ctx->pc = 0x36A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A9B4u;
    // 0x36a9b8: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2946C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2946C0u, 0x36A9B4u, 0x36A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A9BCu;
label_36a9bc:
    // 0x36a9bc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x36a9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36a9c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a9c4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x36a9c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36a9c8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x36a9c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36a9cc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x36a9ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36a9d0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x36a9d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36a9d4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x36a9d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36a9d8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x36a9d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a9dc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x36a9dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a9e0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x36a9e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a9e8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x36a9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36a9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x36A9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9ECu;
        // 0x36a9f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A9F4u;
    // 0x36a9f4: 0x0  nop
    ctx->pc = 0x36a9f4u;
    // NOP
    ctx->pc = 0x36a9f8u;
}

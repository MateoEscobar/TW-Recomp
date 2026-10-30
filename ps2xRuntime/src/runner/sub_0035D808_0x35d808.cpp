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

// Function: sub_0035D808
// Address: 0x35d808 - 0x35d9e0
void sub_0035D808_0x35d808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D808_0x35d808");
#endif

    switch (ctx->pc) {
        case 0x35d850u: goto label_35d850;
        case 0x35d858u: goto label_35d858;
        case 0x35d86cu: goto label_35d86c;
        case 0x35d874u: goto label_35d874;
        case 0x35d888u: goto label_35d888;
        case 0x35d890u: goto label_35d890;
        case 0x35d8a4u: goto label_35d8a4;
        case 0x35d8acu: goto label_35d8ac;
        case 0x35d8c0u: goto label_35d8c0;
        case 0x35d8c8u: goto label_35d8c8;
        case 0x35d8dcu: goto label_35d8dc;
        case 0x35d8e4u: goto label_35d8e4;
        case 0x35d8f8u: goto label_35d8f8;
        case 0x35d900u: goto label_35d900;
        case 0x35d914u: goto label_35d914;
        case 0x35d91cu: goto label_35d91c;
        case 0x35d930u: goto label_35d930;
        case 0x35d938u: goto label_35d938;
        case 0x35d94cu: goto label_35d94c;
        case 0x35d954u: goto label_35d954;
        case 0x35d968u: goto label_35d968;
        case 0x35d970u: goto label_35d970;
        case 0x35d9a0u: goto label_35d9a0;
        default: break;
    }

    ctx->pc = 0x35d808u;

    // 0x35d808: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x35d808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x35d80c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d810: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x35d810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x35d814: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x35d814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x35d818: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35d818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d81c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35d81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d820: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x35d820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x35d824: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x35d824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x35d828: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d82c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x35d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x35d830: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x35d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x35d834: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x35d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x35d838: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x35d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x35d83c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x35d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x35d840: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35d840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35d844: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x35d844u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x35d848: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D848u;
    SET_GPR_U32(ctx, 31, 0x35D850u);
    ctx->pc = 0x35D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D848u;
    // 0x35d84c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D848u, 0x35D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D850u;
label_35d850:
    // 0x35d850: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D850u;
    SET_GPR_U32(ctx, 31, 0x35D858u);
    ctx->pc = 0x35D854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D850u;
    // 0x35d854: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D850u, 0x35D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D858u;
label_35d858:
    // 0x35d858: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x35d858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x35d85c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d860: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35d860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d864: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D864u;
    SET_GPR_U32(ctx, 31, 0x35D86Cu);
    ctx->pc = 0x35D868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D864u;
    // 0x35d868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D864u, 0x35D86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D86Cu;
label_35d86c:
    // 0x35d86c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D86Cu;
    SET_GPR_U32(ctx, 31, 0x35D874u);
    ctx->pc = 0x35D870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D86Cu;
    // 0x35d870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D86Cu, 0x35D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D874u;
label_35d874:
    // 0x35d874: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d878: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x35d878u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d87c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35d87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35d880: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D880u;
    SET_GPR_U32(ctx, 31, 0x35D888u);
    ctx->pc = 0x35D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D880u;
    // 0x35d884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D880u, 0x35D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D888u;
label_35d888:
    // 0x35d888: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D888u;
    SET_GPR_U32(ctx, 31, 0x35D890u);
    ctx->pc = 0x35D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D888u;
    // 0x35d88c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D888u, 0x35D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D890u;
label_35d890:
    // 0x35d890: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d894: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x35d894u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d898: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35d898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35d89c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D89Cu;
    SET_GPR_U32(ctx, 31, 0x35D8A4u);
    ctx->pc = 0x35D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D89Cu;
    // 0x35d8a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D89Cu, 0x35D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D8A4u;
label_35d8a4:
    // 0x35d8a4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D8A4u;
    SET_GPR_U32(ctx, 31, 0x35D8ACu);
    ctx->pc = 0x35D8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D8A4u;
    // 0x35d8a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D8A4u, 0x35D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D8ACu;
label_35d8ac:
    // 0x35d8ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d8b0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x35d8b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d8b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35d8b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D8B8u;
    SET_GPR_U32(ctx, 31, 0x35D8C0u);
    ctx->pc = 0x35D8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D8B8u;
    // 0x35d8bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D8B8u, 0x35D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D8C0u;
label_35d8c0:
    // 0x35d8c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D8C0u;
    SET_GPR_U32(ctx, 31, 0x35D8C8u);
    ctx->pc = 0x35D8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D8C0u;
    // 0x35d8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D8C0u, 0x35D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D8C8u;
label_35d8c8:
    // 0x35d8c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d8cc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35d8ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d8d0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35d8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35d8d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D8D4u;
    SET_GPR_U32(ctx, 31, 0x35D8DCu);
    ctx->pc = 0x35D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D8D4u;
    // 0x35d8d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D8D4u, 0x35D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D8DCu;
label_35d8dc:
    // 0x35d8dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D8DCu;
    SET_GPR_U32(ctx, 31, 0x35D8E4u);
    ctx->pc = 0x35D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D8DCu;
    // 0x35d8e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D8DCu, 0x35D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D8E4u;
label_35d8e4:
    // 0x35d8e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d8e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35d8e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d8ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35d8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35d8f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D8F0u;
    SET_GPR_U32(ctx, 31, 0x35D8F8u);
    ctx->pc = 0x35D8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D8F0u;
    // 0x35d8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D8F0u, 0x35D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D8F8u;
label_35d8f8:
    // 0x35d8f8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35D8F8u;
    SET_GPR_U32(ctx, 31, 0x35D900u);
    ctx->pc = 0x35D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D8F8u;
    // 0x35d8fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35D8F8u, 0x35D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D900u;
label_35d900:
    // 0x35d900: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x35d900u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x35d904: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d908: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x35d908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35d90c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D90Cu;
    SET_GPR_U32(ctx, 31, 0x35D914u);
    ctx->pc = 0x35D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D90Cu;
    // 0x35d910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D90Cu, 0x35D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D914u;
label_35d914:
    // 0x35d914: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35D914u;
    SET_GPR_U32(ctx, 31, 0x35D91Cu);
    ctx->pc = 0x35D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D914u;
    // 0x35d918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35D914u, 0x35D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D91Cu;
label_35d91c:
    // 0x35d91c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35d91cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35d920: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d924: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x35d924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x35d928: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D928u;
    SET_GPR_U32(ctx, 31, 0x35D930u);
    ctx->pc = 0x35D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D928u;
    // 0x35d92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D928u, 0x35D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D930u;
label_35d930:
    // 0x35d930: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D930u;
    SET_GPR_U32(ctx, 31, 0x35D938u);
    ctx->pc = 0x35D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D930u;
    // 0x35d934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D930u, 0x35D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D938u;
label_35d938:
    // 0x35d938: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d93c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35d93cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d940: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x35d940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35d944: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D944u;
    SET_GPR_U32(ctx, 31, 0x35D94Cu);
    ctx->pc = 0x35D948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D944u;
    // 0x35d948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D944u, 0x35D94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D94Cu;
label_35d94c:
    // 0x35d94c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D94Cu;
    SET_GPR_U32(ctx, 31, 0x35D954u);
    ctx->pc = 0x35D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D94Cu;
    // 0x35d950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D94Cu, 0x35D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D954u;
label_35d954:
    // 0x35d954: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d958: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35d958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35d95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d960: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D960u;
    SET_GPR_U32(ctx, 31, 0x35D968u);
    ctx->pc = 0x35D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D960u;
    // 0x35d964: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D960u, 0x35D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D968u;
label_35d968:
    // 0x35d968: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D968u;
    SET_GPR_U32(ctx, 31, 0x35D970u);
    ctx->pc = 0x35D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D968u;
    // 0x35d96c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D968u, 0x35D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D970u;
label_35d970:
    // 0x35d970: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x35d970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d974: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x35d974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d978: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x35d978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x35d97c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x35d97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d980: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x35d980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d984: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x35d984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d988: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x35d988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d98c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x35d98cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x35d990: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x35d990u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x35d994: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x35d994u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d998: 0xc0a152c  jal         func_2854B0
    ctx->pc = 0x35D998u;
    SET_GPR_U32(ctx, 31, 0x35D9A0u);
    ctx->pc = 0x35D99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D998u;
    // 0x35d99c: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2854B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2854B0u, 0x35D998u, 0x35D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D9A0u;
label_35d9a0:
    // 0x35d9a0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x35d9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35d9a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d9a8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x35d9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35d9ac: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x35d9acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35d9b0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x35d9b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35d9b4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x35d9b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35d9b8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35d9b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35d9bc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x35d9bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35d9c0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x35d9c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35d9c4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x35d9c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d9c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35d9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d9cc: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x35d9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35d9d0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x35d9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35d9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x35D9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9D4u;
        // 0x35d9d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D9DCu;
    // 0x35d9dc: 0x0  nop
    ctx->pc = 0x35d9dcu;
    // NOP
    ctx->pc = 0x35d9e0u;
}

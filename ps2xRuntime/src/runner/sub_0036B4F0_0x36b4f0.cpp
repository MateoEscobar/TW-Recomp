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

// Function: sub_0036B4F0
// Address: 0x36b4f0 - 0x36b670
void sub_0036B4F0_0x36b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B4F0_0x36b4f0");
#endif

    switch (ctx->pc) {
        case 0x36b530u: goto label_36b530;
        case 0x36b544u: goto label_36b544;
        case 0x36b54cu: goto label_36b54c;
        case 0x36b560u: goto label_36b560;
        case 0x36b574u: goto label_36b574;
        case 0x36b588u: goto label_36b588;
        case 0x36b59cu: goto label_36b59c;
        case 0x36b5a4u: goto label_36b5a4;
        case 0x36b5b8u: goto label_36b5b8;
        case 0x36b5c0u: goto label_36b5c0;
        case 0x36b5d4u: goto label_36b5d4;
        case 0x36b5dcu: goto label_36b5dc;
        case 0x36b5f0u: goto label_36b5f0;
        case 0x36b5f8u: goto label_36b5f8;
        case 0x36b60cu: goto label_36b60c;
        case 0x36b638u: goto label_36b638;
        default: break;
    }

    ctx->pc = 0x36b4f0u;

    // 0x36b4f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x36b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x36b4f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b4f8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x36b4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x36b4fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36b4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36b500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b504: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x36b504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x36b508: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x36b508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x36b50c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x36b50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x36b510: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x36b510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x36b514: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x36b514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x36b518: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x36b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x36b51c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x36b51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x36b520: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x36b520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x36b524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36b528: 0xc102488  jal         func_409220
    ctx->pc = 0x36B528u;
    SET_GPR_U32(ctx, 31, 0x36B530u);
    ctx->pc = 0x36B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B528u;
    // 0x36b52c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36B528u, 0x36B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B530u;
label_36b530:
    // 0x36b530: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x36b530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x36b534: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b538: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36b538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b53c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B53Cu;
    SET_GPR_U32(ctx, 31, 0x36B544u);
    ctx->pc = 0x36B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B53Cu;
    // 0x36b540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B53Cu, 0x36B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B544u;
label_36b544:
    // 0x36b544: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B544u;
    SET_GPR_U32(ctx, 31, 0x36B54Cu);
    ctx->pc = 0x36B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B544u;
    // 0x36b548: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B544u, 0x36B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B54Cu;
label_36b54c:
    // 0x36b54c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x36b54cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b554: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36b554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36b558: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36B558u;
    SET_GPR_U32(ctx, 31, 0x36B560u);
    ctx->pc = 0x36B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B558u;
    // 0x36b55c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36B558u, 0x36B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B560u;
label_36b560:
    // 0x36b560: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x36b560u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36b564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b568: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36b568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36b56c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36B56Cu;
    SET_GPR_U32(ctx, 31, 0x36B574u);
    ctx->pc = 0x36B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B56Cu;
    // 0x36b570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36B56Cu, 0x36B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B574u;
label_36b574:
    // 0x36b574: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x36b574u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36b578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b57c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36b57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36b580: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36B580u;
    SET_GPR_U32(ctx, 31, 0x36B588u);
    ctx->pc = 0x36B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B580u;
    // 0x36b584: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36B580u, 0x36B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B588u;
label_36b588:
    // 0x36b588: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b58c: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x36b58cu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36b590: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36b590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36b594: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B594u;
    SET_GPR_U32(ctx, 31, 0x36B59Cu);
    ctx->pc = 0x36B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B594u;
    // 0x36b598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B594u, 0x36B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B59Cu;
label_36b59c:
    // 0x36b59c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B59Cu;
    SET_GPR_U32(ctx, 31, 0x36B5A4u);
    ctx->pc = 0x36B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B59Cu;
    // 0x36b5a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B59Cu, 0x36B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B5A4u;
label_36b5a4:
    // 0x36b5a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b5a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36b5a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b5ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36b5b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B5B0u;
    SET_GPR_U32(ctx, 31, 0x36B5B8u);
    ctx->pc = 0x36B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B5B0u;
    // 0x36b5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B5B0u, 0x36B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B5B8u;
label_36b5b8:
    // 0x36b5b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B5B8u;
    SET_GPR_U32(ctx, 31, 0x36B5C0u);
    ctx->pc = 0x36B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B5B8u;
    // 0x36b5bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B5B8u, 0x36B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B5C0u;
label_36b5c0:
    // 0x36b5c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b5c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36b5c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b5c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x36b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36b5cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B5CCu;
    SET_GPR_U32(ctx, 31, 0x36B5D4u);
    ctx->pc = 0x36B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B5CCu;
    // 0x36b5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B5CCu, 0x36B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B5D4u;
label_36b5d4:
    // 0x36b5d4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B5D4u;
    SET_GPR_U32(ctx, 31, 0x36B5DCu);
    ctx->pc = 0x36B5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B5D4u;
    // 0x36b5d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B5D4u, 0x36B5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B5DCu;
label_36b5dc:
    // 0x36b5dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b5e0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x36b5e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36b5e4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x36b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36b5e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B5E8u;
    SET_GPR_U32(ctx, 31, 0x36B5F0u);
    ctx->pc = 0x36B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B5E8u;
    // 0x36b5ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B5E8u, 0x36B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B5F0u;
label_36b5f0:
    // 0x36b5f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B5F0u;
    SET_GPR_U32(ctx, 31, 0x36B5F8u);
    ctx->pc = 0x36B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B5F0u;
    // 0x36b5f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B5F0u, 0x36B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B5F8u;
label_36b5f8:
    // 0x36b5f8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x36b5f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36b5fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b600: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x36b600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36b604: 0xc102488  jal         func_409220
    ctx->pc = 0x36B604u;
    SET_GPR_U32(ctx, 31, 0x36B60Cu);
    ctx->pc = 0x36B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B604u;
    // 0x36b608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36B604u, 0x36B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B60Cu;
label_36b60c:
    // 0x36b60c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x36b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b610: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x36b610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b614: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x36b614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x36b618: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x36b618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b61c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x36b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x36b620: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x36b620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b624: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x36b624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b628: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x36b628u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b62c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x36b62cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b630: 0xc07e044  jal         func_1F8110
    ctx->pc = 0x36B630u;
    SET_GPR_U32(ctx, 31, 0x36B638u);
    ctx->pc = 0x36B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B630u;
    // 0x36b634: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8110u, 0x36B630u, 0x36B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B638u;
label_36b638:
    // 0x36b638: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x36b638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36b63c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36b63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b640: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x36b640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36b644: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x36b644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36b648: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x36b648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36b64c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x36b64cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36b650: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x36b650u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36b654: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x36b654u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36b658: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x36b658u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b65c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x36b65cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36b660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36b660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36b664: 0x3e00008  jr          $ra
    ctx->pc = 0x36B664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B664u;
        // 0x36b668: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B66Cu;
    // 0x36b66c: 0x0  nop
    ctx->pc = 0x36b66cu;
    // NOP
    ctx->pc = 0x36b670u;
}

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

// Function: sub_00358428
// Address: 0x358428 - 0x358608
void sub_00358428_0x358428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358428_0x358428");
#endif

    switch (ctx->pc) {
        case 0x35846cu: goto label_35846c;
        case 0x358480u: goto label_358480;
        case 0x358488u: goto label_358488;
        case 0x35849cu: goto label_35849c;
        case 0x3584a4u: goto label_3584a4;
        case 0x3584b8u: goto label_3584b8;
        case 0x3584ccu: goto label_3584cc;
        case 0x3584d4u: goto label_3584d4;
        case 0x3584e8u: goto label_3584e8;
        case 0x3584f0u: goto label_3584f0;
        case 0x358504u: goto label_358504;
        case 0x358510u: goto label_358510;
        case 0x358528u: goto label_358528;
        case 0x358530u: goto label_358530;
        case 0x358564u: goto label_358564;
        case 0x358570u: goto label_358570;
        case 0x358588u: goto label_358588;
        case 0x358594u: goto label_358594;
        case 0x3585a0u: goto label_3585a0;
        case 0x3585b0u: goto label_3585b0;
        case 0x3585c4u: goto label_3585c4;
        default: break;
    }

    ctx->pc = 0x358428u;

    // 0x358428: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x358428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x35842c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35842cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358430: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x358430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x358434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358438: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x358438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35843c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x35843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x358440: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x358440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x358444: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x358444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x358448: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x358448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x35844c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x358450: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x358450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x358454: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x358454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x358458: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x358458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x35845c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x35845cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x358460: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x358460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x358464: 0xc102488  jal         func_409220
    ctx->pc = 0x358464u;
    SET_GPR_U32(ctx, 31, 0x35846Cu);
    ctx->pc = 0x358468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358464u;
    // 0x358468: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x358464u, 0x35846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35846Cu;
label_35846c:
    // 0x35846c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35846cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358470: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x358470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x358474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358478: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358478u;
    SET_GPR_U32(ctx, 31, 0x358480u);
    ctx->pc = 0x35847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358478u;
    // 0x35847c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358478u, 0x358480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358480u;
label_358480:
    // 0x358480: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x358480u;
    SET_GPR_U32(ctx, 31, 0x358488u);
    ctx->pc = 0x358484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358480u;
    // 0x358484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x358480u, 0x358488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358488u;
label_358488:
    // 0x358488: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x358488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35848c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x358490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x358490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358494: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358494u;
    SET_GPR_U32(ctx, 31, 0x35849Cu);
    ctx->pc = 0x358498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358494u;
    // 0x358498: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358494u, 0x35849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35849Cu;
label_35849c:
    // 0x35849c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35849Cu;
    SET_GPR_U32(ctx, 31, 0x3584A4u);
    ctx->pc = 0x3584A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35849Cu;
    // 0x3584a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35849Cu, 0x3584A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584A4u;
label_3584a4:
    // 0x3584a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3584a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3584a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3584a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3584acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3584b0: 0xc102488  jal         func_409220
    ctx->pc = 0x3584B0u;
    SET_GPR_U32(ctx, 31, 0x3584B8u);
    ctx->pc = 0x3584B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584B0u;
    // 0x3584b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3584B0u, 0x3584B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584B8u;
label_3584b8:
    // 0x3584b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3584b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3584bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3584c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3584c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3584C4u;
    SET_GPR_U32(ctx, 31, 0x3584CCu);
    ctx->pc = 0x3584C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584C4u;
    // 0x3584c8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3584C4u, 0x3584CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584CCu;
label_3584cc:
    // 0x3584cc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3584CCu;
    SET_GPR_U32(ctx, 31, 0x3584D4u);
    ctx->pc = 0x3584D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584CCu;
    // 0x3584d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3584CCu, 0x3584D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584D4u;
label_3584d4:
    // 0x3584d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3584d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3584d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3584dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3584dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3584E0u;
    SET_GPR_U32(ctx, 31, 0x3584E8u);
    ctx->pc = 0x3584E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584E0u;
    // 0x3584e4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3584E0u, 0x3584E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584E8u;
label_3584e8:
    // 0x3584e8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3584E8u;
    SET_GPR_U32(ctx, 31, 0x3584F0u);
    ctx->pc = 0x3584ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584E8u;
    // 0x3584ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3584E8u, 0x3584F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584F0u;
label_3584f0:
    // 0x3584f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3584f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3584f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584f8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3584f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3584fc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3584FCu;
    SET_GPR_U32(ctx, 31, 0x358504u);
    ctx->pc = 0x358500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584FCu;
    // 0x358500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3584FCu, 0x358504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358504u;
label_358504:
    // 0x358504: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x358504u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358508: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x358508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35850c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x35850cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_358510:
    // 0x358510: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x358510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x358514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x358514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358518: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x358518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35851c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35851cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358520: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x358520u;
    SET_GPR_U32(ctx, 31, 0x358528u);
    ctx->pc = 0x358524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358520u;
    // 0x358524: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x358520u, 0x358528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358528u;
label_358528:
    // 0x358528: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x358528u;
    SET_GPR_U32(ctx, 31, 0x358530u);
    ctx->pc = 0x35852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358528u;
    // 0x35852c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x358528u, 0x358530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358530u;
label_358530:
    // 0x358530: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x358530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x358534: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x358534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x358538: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x358538u;
    {
        const bool branch_taken_0x358538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358538u;
        // 0x35853c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358538) {
            ctx->pc = 0x358510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358510;
        }
    }
    ctx->pc = 0x358540u;
    // 0x358540: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x358540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358544: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x358544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358548: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x358548u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35854c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x35854cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358550: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x358550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358554: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x358554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358558: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x358558u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35855c: 0xc08cf58  jal         func_233D60
    ctx->pc = 0x35855Cu;
    SET_GPR_U32(ctx, 31, 0x358564u);
    ctx->pc = 0x358560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35855Cu;
    // 0x358560: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D60u, 0x35855Cu, 0x358564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358564u;
label_358564:
    // 0x358564: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x358564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358568: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x358568u;
    SET_GPR_U32(ctx, 31, 0x358570u);
    ctx->pc = 0x35856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358568u;
    // 0x35856c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x358568u, 0x358570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358570u;
label_358570:
    // 0x358570: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x358570u;
    {
        const bool branch_taken_0x358570 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x358574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358570u;
        // 0x358574: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358570) {
            ctx->pc = 0x35858Cu;
            goto label_35858c;
        }
    }
    ctx->pc = 0x358578u;
    // 0x358578: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x358578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x35857c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x35857cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x358580: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x358580u;
    SET_GPR_U32(ctx, 31, 0x358588u);
    ctx->pc = 0x358584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358580u;
    // 0x358584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x358580u, 0x358588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358588u;
label_358588:
    // 0x358588: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35858c:
    // 0x35858c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35858Cu;
    SET_GPR_U32(ctx, 31, 0x358594u);
    ctx->pc = 0x358590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35858Cu;
    // 0x358590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35858Cu, 0x358594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358594u;
label_358594:
    // 0x358594: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x358594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358598: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x358598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35859c: 0x0  nop
    ctx->pc = 0x35859cu;
    // NOP
label_3585a0:
    // 0x3585a0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3585a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3585a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3585a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3585a8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3585A8u;
    SET_GPR_U32(ctx, 31, 0x3585B0u);
    ctx->pc = 0x3585ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585A8u;
    // 0x3585ac: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3585A8u, 0x3585B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585B0u;
label_3585b0:
    // 0x3585b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3585b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3585b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3585b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3585b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3585b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3585bc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3585BCu;
    SET_GPR_U32(ctx, 31, 0x3585C4u);
    ctx->pc = 0x3585C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585BCu;
    // 0x3585c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3585BCu, 0x3585C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585C4u;
label_3585c4:
    // 0x3585c4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3585c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3585c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3585C8u;
    {
        const bool branch_taken_0x3585c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3585CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585C8u;
        // 0x3585cc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585c8) {
            ctx->pc = 0x3585A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3585a0;
        }
    }
    ctx->pc = 0x3585D0u;
    // 0x3585d0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3585d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3585d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3585d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3585d8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3585d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3585dc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3585dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3585e0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3585e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3585e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3585e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3585e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3585e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3585ec: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3585ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3585f0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3585f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3585f4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3585f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3585f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3585f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3585fc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3585fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x358600: 0x3e00008  jr          $ra
    ctx->pc = 0x358600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358600u;
        // 0x358604: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358608u;
}

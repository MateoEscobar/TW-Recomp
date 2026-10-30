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

// Function: sub_00366518
// Address: 0x366518 - 0x3666e8
void sub_00366518_0x366518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366518_0x366518");
#endif

    switch (ctx->pc) {
        case 0x366558u: goto label_366558;
        case 0x36656cu: goto label_36656c;
        case 0x366574u: goto label_366574;
        case 0x366588u: goto label_366588;
        case 0x366590u: goto label_366590;
        case 0x3665a4u: goto label_3665a4;
        case 0x3665acu: goto label_3665ac;
        case 0x3665c0u: goto label_3665c0;
        case 0x3665c8u: goto label_3665c8;
        case 0x3665e0u: goto label_3665e0;
        case 0x3665e8u: goto label_3665e8;
        case 0x3665f8u: goto label_3665f8;
        case 0x366610u: goto label_366610;
        case 0x366618u: goto label_366618;
        case 0x366648u: goto label_366648;
        case 0x366654u: goto label_366654;
        case 0x36666cu: goto label_36666c;
        case 0x366678u: goto label_366678;
        case 0x366680u: goto label_366680;
        case 0x366690u: goto label_366690;
        case 0x3666a4u: goto label_3666a4;
        default: break;
    }

    ctx->pc = 0x366518u;

    // 0x366518: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x366518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x36651c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36651cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366520: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x366520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x366524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366528: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x366528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36652c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x36652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x366530: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x366530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x366534: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x366534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x366538: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x366538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x36653c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x36653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x366540: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x366540u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x366544: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x366544u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x366548: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x366548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x36654c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36654cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x366550: 0xc102488  jal         func_409220
    ctx->pc = 0x366550u;
    SET_GPR_U32(ctx, 31, 0x366558u);
    ctx->pc = 0x366554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366550u;
    // 0x366554: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x366550u, 0x366558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366558u;
label_366558:
    // 0x366558: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36655c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36655cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366564: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366564u;
    SET_GPR_U32(ctx, 31, 0x36656Cu);
    ctx->pc = 0x366568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366564u;
    // 0x366568: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366564u, 0x36656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36656Cu;
label_36656c:
    // 0x36656c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36656Cu;
    SET_GPR_U32(ctx, 31, 0x366574u);
    ctx->pc = 0x366570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36656Cu;
    // 0x366570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36656Cu, 0x366574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366574u;
label_366574:
    // 0x366574: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366578: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x366578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36657c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366580: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366580u;
    SET_GPR_U32(ctx, 31, 0x366588u);
    ctx->pc = 0x366584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366580u;
    // 0x366584: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366580u, 0x366588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366588u;
label_366588:
    // 0x366588: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366588u;
    SET_GPR_U32(ctx, 31, 0x366590u);
    ctx->pc = 0x36658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366588u;
    // 0x36658c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366588u, 0x366590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366590u;
label_366590:
    // 0x366590: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366594: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x366594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x366598: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x366598u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x36659c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36659Cu;
    SET_GPR_U32(ctx, 31, 0x3665A4u);
    ctx->pc = 0x3665A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36659Cu;
    // 0x3665a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36659Cu, 0x3665A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665A4u;
label_3665a4:
    // 0x3665a4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3665A4u;
    SET_GPR_U32(ctx, 31, 0x3665ACu);
    ctx->pc = 0x3665A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3665A4u;
    // 0x3665a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3665A4u, 0x3665ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665ACu;
label_3665ac:
    // 0x3665ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3665acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3665b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3665b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3665b4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3665b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3665b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3665B8u;
    SET_GPR_U32(ctx, 31, 0x3665C0u);
    ctx->pc = 0x3665BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3665B8u;
    // 0x3665bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3665B8u, 0x3665C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665C0u;
label_3665c0:
    // 0x3665c0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3665C0u;
    SET_GPR_U32(ctx, 31, 0x3665C8u);
    ctx->pc = 0x3665C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3665C0u;
    // 0x3665c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3665C0u, 0x3665C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665C8u;
label_3665c8:
    // 0x3665c8: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x3665c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x3665cc: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3665ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3665d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3665d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3665d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3665d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3665d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3665D8u;
    SET_GPR_U32(ctx, 31, 0x3665E0u);
    ctx->pc = 0x3665DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3665D8u;
    // 0x3665dc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3665D8u, 0x3665E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665E0u;
label_3665e0:
    // 0x3665e0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3665E0u;
    SET_GPR_U32(ctx, 31, 0x3665E8u);
    ctx->pc = 0x3665E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3665E0u;
    // 0x3665e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3665E0u, 0x3665E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665E8u;
label_3665e8:
    // 0x3665e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3665e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3665ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3665ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3665f0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3665f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3665f4: 0x0  nop
    ctx->pc = 0x3665f4u;
    // NOP
label_3665f8:
    // 0x3665f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3665f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3665fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3665fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366600: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x366600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x366604: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366608: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x366608u;
    SET_GPR_U32(ctx, 31, 0x366610u);
    ctx->pc = 0x36660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366608u;
    // 0x36660c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x366608u, 0x366610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366610u;
label_366610:
    // 0x366610: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366610u;
    SET_GPR_U32(ctx, 31, 0x366618u);
    ctx->pc = 0x366614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366610u;
    // 0x366614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366610u, 0x366618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366618u;
label_366618:
    // 0x366618: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x366618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36661c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36661cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366620: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366620u;
    {
        const bool branch_taken_0x366620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366620u;
        // 0x366624: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366620) {
            ctx->pc = 0x3665F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3665f8;
        }
    }
    ctx->pc = 0x366628u;
    // 0x366628: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x366628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36662c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36662cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366630: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x366630u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x366634: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x366634u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x366638: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x366638u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36663c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36663cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366640: 0xc04733a  jal         func_11CCE8
    ctx->pc = 0x366640u;
    SET_GPR_U32(ctx, 31, 0x366648u);
    ctx->pc = 0x366644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366640u;
    // 0x366644: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCE8u, 0x366640u, 0x366648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366648u;
label_366648:
    // 0x366648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x366648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36664c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36664Cu;
    SET_GPR_U32(ctx, 31, 0x366654u);
    ctx->pc = 0x366650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36664Cu;
    // 0x366650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36664Cu, 0x366654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366654u;
label_366654:
    // 0x366654: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x366654u;
    {
        const bool branch_taken_0x366654 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x366658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366654u;
        // 0x366658: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366654) {
            ctx->pc = 0x366670u;
            goto label_366670;
        }
    }
    ctx->pc = 0x36665Cu;
    // 0x36665c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36665cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x366660: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x366660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x366664: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x366664u;
    SET_GPR_U32(ctx, 31, 0x36666Cu);
    ctx->pc = 0x366668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366664u;
    // 0x366668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x366664u, 0x36666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36666Cu;
label_36666c:
    // 0x36666c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36666cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_366670:
    // 0x366670: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x366670u;
    SET_GPR_U32(ctx, 31, 0x366678u);
    ctx->pc = 0x366674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366670u;
    // 0x366674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x366670u, 0x366678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366678u;
label_366678:
    // 0x366678: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36667c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36667cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_366680:
    // 0x366680: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x366680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x366684: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366688: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x366688u;
    SET_GPR_U32(ctx, 31, 0x366690u);
    ctx->pc = 0x36668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366688u;
    // 0x36668c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x366688u, 0x366690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366690u;
label_366690:
    // 0x366690: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x366690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366698: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x366698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36669c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36669Cu;
    SET_GPR_U32(ctx, 31, 0x3666A4u);
    ctx->pc = 0x3666A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36669Cu;
    // 0x3666a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36669Cu, 0x3666A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3666A4u;
label_3666a4:
    // 0x3666a4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3666a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3666a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3666A8u;
    {
        const bool branch_taken_0x3666a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3666ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3666A8u;
        // 0x3666ac: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3666a8) {
            ctx->pc = 0x366680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366680;
        }
    }
    ctx->pc = 0x3666B0u;
    // 0x3666b0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3666b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3666b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3666b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3666b8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3666b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3666bc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3666bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3666c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3666c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3666c4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3666c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3666c8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3666c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3666cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3666ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3666d0: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x3666d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3666d4: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x3666d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3666d8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3666d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3666dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3666DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3666E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3666DCu;
        // 0x3666e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3666DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3666E4u;
    // 0x3666e4: 0x0  nop
    ctx->pc = 0x3666e4u;
    // NOP
    ctx->pc = 0x3666e8u;
}

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

// Function: sub_00376408
// Address: 0x376408 - 0x376608
void sub_00376408_0x376408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376408_0x376408");
#endif

    switch (ctx->pc) {
        case 0x376450u: goto label_376450;
        case 0x376460u: goto label_376460;
        case 0x376474u: goto label_376474;
        case 0x37647cu: goto label_37647c;
        case 0x376494u: goto label_376494;
        case 0x37649cu: goto label_37649c;
        case 0x3764b4u: goto label_3764b4;
        case 0x3764bcu: goto label_3764bc;
        case 0x3764d0u: goto label_3764d0;
        case 0x3764d8u: goto label_3764d8;
        case 0x3764ecu: goto label_3764ec;
        case 0x3764f4u: goto label_3764f4;
        case 0x376508u: goto label_376508;
        case 0x37651cu: goto label_37651c;
        case 0x376530u: goto label_376530;
        case 0x376544u: goto label_376544;
        case 0x376558u: goto label_376558;
        case 0x37656cu: goto label_37656c;
        case 0x37658cu: goto label_37658c;
        case 0x376594u: goto label_376594;
        case 0x3765ccu: goto label_3765cc;
        default: break;
    }

    ctx->pc = 0x376408u;

    // 0x376408: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x376408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x37640c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37640cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376410: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x376410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x376414: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x376414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x376418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x376418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37641c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37641cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376420: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x376420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x376424: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x376424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x376428: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x376428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37642c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x37642cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x376430: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x376430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x376434: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x376434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x376438: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x376438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x37643c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x37643cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x376440: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x376440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x376444: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x376444u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x376448: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376448u;
    SET_GPR_U32(ctx, 31, 0x376450u);
    ctx->pc = 0x37644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376448u;
    // 0x37644c: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376448u, 0x376450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376450u;
label_376450:
    // 0x376450: 0x3412bff0  ori         $s2, $zero, 0xBFF0
    ctx->pc = 0x376450u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x376454: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x376454u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x376458: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376458u;
    SET_GPR_U32(ctx, 31, 0x376460u);
    ctx->pc = 0x37645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376458u;
    // 0x37645c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376458u, 0x376460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376460u;
label_376460:
    // 0x376460: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x376460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x376464: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x376464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376468: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x376468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37646c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37646Cu;
    SET_GPR_U32(ctx, 31, 0x376474u);
    ctx->pc = 0x376470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37646Cu;
    // 0x376470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37646Cu, 0x376474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376474u;
label_376474:
    // 0x376474: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376474u;
    SET_GPR_U32(ctx, 31, 0x37647Cu);
    ctx->pc = 0x376478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376474u;
    // 0x376478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376474u, 0x37647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37647Cu;
label_37647c:
    // 0x37647c: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x37647cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x376480: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x376480u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x376484: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x376484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x376488: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x376488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x37648c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37648Cu;
    SET_GPR_U32(ctx, 31, 0x376494u);
    ctx->pc = 0x376490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37648Cu;
    // 0x376490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37648Cu, 0x376494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376494u;
label_376494:
    // 0x376494: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x376494u;
    SET_GPR_U32(ctx, 31, 0x37649Cu);
    ctx->pc = 0x376498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376494u;
    // 0x376498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x376494u, 0x37649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37649Cu;
label_37649c:
    // 0x37649c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x37649cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3764a0: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x3764a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x3764a4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3764a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3764a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3764a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3764ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3764ACu;
    SET_GPR_U32(ctx, 31, 0x3764B4u);
    ctx->pc = 0x3764B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3764ACu;
    // 0x3764b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3764ACu, 0x3764B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764B4u;
label_3764b4:
    // 0x3764b4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3764B4u;
    SET_GPR_U32(ctx, 31, 0x3764BCu);
    ctx->pc = 0x3764B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3764B4u;
    // 0x3764b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3764B4u, 0x3764BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764BCu;
label_3764bc:
    // 0x3764bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3764bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3764c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3764c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3764c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3764c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3764C8u;
    SET_GPR_U32(ctx, 31, 0x3764D0u);
    ctx->pc = 0x3764CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3764C8u;
    // 0x3764cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3764C8u, 0x3764D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764D0u;
label_3764d0:
    // 0x3764d0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3764D0u;
    SET_GPR_U32(ctx, 31, 0x3764D8u);
    ctx->pc = 0x3764D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3764D0u;
    // 0x3764d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3764D0u, 0x3764D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764D8u;
label_3764d8:
    // 0x3764d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3764d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764dc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3764dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3764e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3764e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3764E4u;
    SET_GPR_U32(ctx, 31, 0x3764ECu);
    ctx->pc = 0x3764E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3764E4u;
    // 0x3764e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3764E4u, 0x3764ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764ECu;
label_3764ec:
    // 0x3764ec: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3764ECu;
    SET_GPR_U32(ctx, 31, 0x3764F4u);
    ctx->pc = 0x3764F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3764ECu;
    // 0x3764f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3764ECu, 0x3764F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764F4u;
label_3764f4:
    // 0x3764f4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3764f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3764f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3764fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x376500: 0xc102488  jal         func_409220
    ctx->pc = 0x376500u;
    SET_GPR_U32(ctx, 31, 0x376508u);
    ctx->pc = 0x376504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376500u;
    // 0x376504: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376500u, 0x376508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376508u;
label_376508:
    // 0x376508: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x376508u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37650c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37650cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376510: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x376510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x376514: 0xc102488  jal         func_409220
    ctx->pc = 0x376514u;
    SET_GPR_U32(ctx, 31, 0x37651Cu);
    ctx->pc = 0x376518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376514u;
    // 0x376518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376514u, 0x37651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37651Cu;
label_37651c:
    // 0x37651c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x37651cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376524: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x376524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x376528: 0xc102488  jal         func_409220
    ctx->pc = 0x376528u;
    SET_GPR_U32(ctx, 31, 0x376530u);
    ctx->pc = 0x37652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376528u;
    // 0x37652c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376528u, 0x376530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376530u;
label_376530:
    // 0x376530: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x376530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376538: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x376538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37653c: 0xc102488  jal         func_409220
    ctx->pc = 0x37653Cu;
    SET_GPR_U32(ctx, 31, 0x376544u);
    ctx->pc = 0x376540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37653Cu;
    // 0x376540: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37653Cu, 0x376544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376544u;
label_376544:
    // 0x376544: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x376544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37654c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x37654cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x376550: 0xc102488  jal         func_409220
    ctx->pc = 0x376550u;
    SET_GPR_U32(ctx, 31, 0x376558u);
    ctx->pc = 0x376554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376550u;
    // 0x376554: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376550u, 0x376558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376558u;
label_376558:
    // 0x376558: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x376558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37655c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376560: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x376560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x376564: 0xc102488  jal         func_409220
    ctx->pc = 0x376564u;
    SET_GPR_U32(ctx, 31, 0x37656Cu);
    ctx->pc = 0x376568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376564u;
    // 0x376568: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376564u, 0x37656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37656Cu;
label_37656c:
    // 0x37656c: 0x340680c1  ori         $a2, $zero, 0x80C1
    ctx->pc = 0x37656cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32961);
    // 0x376570: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x376570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x376574: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x376574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
    // 0x376578: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x376578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x37657c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37657cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376584: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376584u;
    SET_GPR_U32(ctx, 31, 0x37658Cu);
    ctx->pc = 0x376588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376584u;
    // 0x376588: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376584u, 0x37658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37658Cu;
label_37658c:
    // 0x37658c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37658Cu;
    SET_GPR_U32(ctx, 31, 0x376594u);
    ctx->pc = 0x376590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37658Cu;
    // 0x376590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37658Cu, 0x376594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376594u;
label_376594:
    // 0x376594: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x376594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376598: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x376598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x37659c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x37659cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3765a0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3765a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3765a4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3765a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3765a8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3765a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3765ac: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x3765acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x3765b0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3765b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3765b4: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x3765b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x3765b8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3765b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3765bc: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x3765bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3765c0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x3765c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3765c4: 0xc0c5b76  jal         func_316DD8
    ctx->pc = 0x3765C4u;
    SET_GPR_U32(ctx, 31, 0x3765CCu);
    ctx->pc = 0x3765C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3765C4u;
    // 0x3765c8: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316DD8u, 0x3765C4u, 0x3765CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3765CCu;
label_3765cc:
    // 0x3765cc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3765ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3765d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3765d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3765d4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3765d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3765d8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3765d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3765dc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3765dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3765e0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3765e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3765e4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3765e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3765e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3765e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3765ec: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3765ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3765f0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3765f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3765f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3765f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3765f8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x3765f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3765fc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3765fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x376600: 0x3e00008  jr          $ra
    ctx->pc = 0x376600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376600u;
        // 0x376604: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376608u;
}

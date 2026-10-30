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

// Function: sub_00370368
// Address: 0x370368 - 0x3705d0
void sub_00370368_0x370368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370368_0x370368");
#endif

    switch (ctx->pc) {
        case 0x3703a8u: goto label_3703a8;
        case 0x3703b0u: goto label_3703b0;
        case 0x3703ccu: goto label_3703cc;
        case 0x3703e0u: goto label_3703e0;
        case 0x3703e8u: goto label_3703e8;
        case 0x370404u: goto label_370404;
        case 0x37040cu: goto label_37040c;
        case 0x370428u: goto label_370428;
        case 0x370430u: goto label_370430;
        case 0x37044cu: goto label_37044c;
        case 0x370454u: goto label_370454;
        case 0x370470u: goto label_370470;
        case 0x370478u: goto label_370478;
        case 0x370490u: goto label_370490;
        case 0x370498u: goto label_370498;
        case 0x3704b0u: goto label_3704b0;
        case 0x3704b8u: goto label_3704b8;
        case 0x3704d0u: goto label_3704d0;
        case 0x3704d8u: goto label_3704d8;
        case 0x3704f0u: goto label_3704f0;
        case 0x3704f8u: goto label_3704f8;
        case 0x370510u: goto label_370510;
        case 0x370518u: goto label_370518;
        case 0x370530u: goto label_370530;
        case 0x370538u: goto label_370538;
        case 0x370550u: goto label_370550;
        case 0x370558u: goto label_370558;
        case 0x37059cu: goto label_37059c;
        default: break;
    }

    ctx->pc = 0x370368u;

    // 0x370368: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x370368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x37036c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37036cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370370: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x370370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x370374: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x370374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x370378: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x370378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37037c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37037cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370380: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x370380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x370384: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x370384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x370388: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x370388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x37038c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x37038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x370390: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x370390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x370394: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x370394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x370398: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x370398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x37039c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37039cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3703a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3703A0u;
    SET_GPR_U32(ctx, 31, 0x3703A8u);
    ctx->pc = 0x3703A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3703A0u;
    // 0x3703a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3703A0u, 0x3703A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703A8u;
label_3703a8:
    // 0x3703a8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3703A8u;
    SET_GPR_U32(ctx, 31, 0x3703B0u);
    ctx->pc = 0x3703ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3703A8u;
    // 0x3703ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3703A8u, 0x3703B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703B0u;
label_3703b0:
    // 0x3703b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3703b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3703b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3703b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3703b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3703bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3703bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3703c0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3703c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3703c4: 0xc102488  jal         func_409220
    ctx->pc = 0x3703C4u;
    SET_GPR_U32(ctx, 31, 0x3703CCu);
    ctx->pc = 0x3703C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3703C4u;
    // 0x3703c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3703C4u, 0x3703CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703CCu;
label_3703cc:
    // 0x3703cc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3703ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3703d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3703d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3703d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3703d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3703D8u;
    SET_GPR_U32(ctx, 31, 0x3703E0u);
    ctx->pc = 0x3703DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3703D8u;
    // 0x3703dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3703D8u, 0x3703E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703E0u;
label_3703e0:
    // 0x3703e0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3703E0u;
    SET_GPR_U32(ctx, 31, 0x3703E8u);
    ctx->pc = 0x3703E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3703E0u;
    // 0x3703e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3703E0u, 0x3703E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703E8u;
label_3703e8:
    // 0x3703e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3703e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3703ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3703ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3703f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3703f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3703f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3703f8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3703f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x3703fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3703FCu;
    SET_GPR_U32(ctx, 31, 0x370404u);
    ctx->pc = 0x370400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3703FCu;
    // 0x370400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3703FCu, 0x370404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370404u;
label_370404:
    // 0x370404: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370404u;
    SET_GPR_U32(ctx, 31, 0x37040Cu);
    ctx->pc = 0x370408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370404u;
    // 0x370408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370404u, 0x37040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37040Cu;
label_37040c:
    // 0x37040c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37040cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x370410: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x370410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370414: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x370414u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x370418: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x370418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37041c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x37041cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x370420: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370420u;
    SET_GPR_U32(ctx, 31, 0x370428u);
    ctx->pc = 0x370424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370420u;
    // 0x370424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370420u, 0x370428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370428u;
label_370428:
    // 0x370428: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370428u;
    SET_GPR_U32(ctx, 31, 0x370430u);
    ctx->pc = 0x37042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370428u;
    // 0x37042c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370428u, 0x370430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370430u;
label_370430:
    // 0x370430: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x370430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x370434: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x370434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370438: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x370438u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37043c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37043cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x370440: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x370440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x370444: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370444u;
    SET_GPR_U32(ctx, 31, 0x37044Cu);
    ctx->pc = 0x370448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370444u;
    // 0x370448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370444u, 0x37044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37044Cu;
label_37044c:
    // 0x37044c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37044Cu;
    SET_GPR_U32(ctx, 31, 0x370454u);
    ctx->pc = 0x370450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37044Cu;
    // 0x370450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37044Cu, 0x370454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370454u;
label_370454:
    // 0x370454: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x370454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x370458: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x370458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37045c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x37045cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x370460: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x370460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x370464: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x370464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x370468: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370468u;
    SET_GPR_U32(ctx, 31, 0x370470u);
    ctx->pc = 0x37046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370468u;
    // 0x37046c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370468u, 0x370470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370470u;
label_370470:
    // 0x370470: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370470u;
    SET_GPR_U32(ctx, 31, 0x370478u);
    ctx->pc = 0x370474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370470u;
    // 0x370474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370470u, 0x370478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370478u;
label_370478:
    // 0x370478: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x370478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37047c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37047cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370480: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x370480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x370484: 0x2f403  sra         $fp, $v0, 16
    ctx->pc = 0x370484u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 16));
    // 0x370488: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370488u;
    SET_GPR_U32(ctx, 31, 0x370490u);
    ctx->pc = 0x37048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370488u;
    // 0x37048c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370488u, 0x370490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370490u;
label_370490:
    // 0x370490: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370490u;
    SET_GPR_U32(ctx, 31, 0x370498u);
    ctx->pc = 0x370494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370490u;
    // 0x370494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370490u, 0x370498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370498u;
label_370498:
    // 0x370498: 0x2bc00  sll         $s7, $v0, 16
    ctx->pc = 0x370498u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37049c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37049cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3704a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3704a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3704a4: 0x17bc03  sra         $s7, $s7, 16
    ctx->pc = 0x3704a4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 23), 16));
    // 0x3704a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3704A8u;
    SET_GPR_U32(ctx, 31, 0x3704B0u);
    ctx->pc = 0x3704ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3704A8u;
    // 0x3704ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3704A8u, 0x3704B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704B0u;
label_3704b0:
    // 0x3704b0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3704B0u;
    SET_GPR_U32(ctx, 31, 0x3704B8u);
    ctx->pc = 0x3704B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3704B0u;
    // 0x3704b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3704B0u, 0x3704B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704B8u;
label_3704b8:
    // 0x3704b8: 0x2b400  sll         $s6, $v0, 16
    ctx->pc = 0x3704b8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3704bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3704bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3704c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3704c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3704c4: 0x16b403  sra         $s6, $s6, 16
    ctx->pc = 0x3704c4u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 16));
    // 0x3704c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3704C8u;
    SET_GPR_U32(ctx, 31, 0x3704D0u);
    ctx->pc = 0x3704CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3704C8u;
    // 0x3704cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3704C8u, 0x3704D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704D0u;
label_3704d0:
    // 0x3704d0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3704D0u;
    SET_GPR_U32(ctx, 31, 0x3704D8u);
    ctx->pc = 0x3704D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3704D0u;
    // 0x3704d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3704D0u, 0x3704D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704D8u;
label_3704d8:
    // 0x3704d8: 0x2ac00  sll         $s5, $v0, 16
    ctx->pc = 0x3704d8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3704dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3704dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3704e0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3704e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3704e4: 0x15ac03  sra         $s5, $s5, 16
    ctx->pc = 0x3704e4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 21), 16));
    // 0x3704e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3704E8u;
    SET_GPR_U32(ctx, 31, 0x3704F0u);
    ctx->pc = 0x3704ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3704E8u;
    // 0x3704ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3704E8u, 0x3704F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704F0u;
label_3704f0:
    // 0x3704f0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3704F0u;
    SET_GPR_U32(ctx, 31, 0x3704F8u);
    ctx->pc = 0x3704F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3704F0u;
    // 0x3704f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3704F0u, 0x3704F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704F8u;
label_3704f8:
    // 0x3704f8: 0x2a400  sll         $s4, $v0, 16
    ctx->pc = 0x3704f8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3704fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3704fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370500: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x370500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x370504: 0x14a403  sra         $s4, $s4, 16
    ctx->pc = 0x370504u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 16));
    // 0x370508: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370508u;
    SET_GPR_U32(ctx, 31, 0x370510u);
    ctx->pc = 0x37050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370508u;
    // 0x37050c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370508u, 0x370510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370510u;
label_370510:
    // 0x370510: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370510u;
    SET_GPR_U32(ctx, 31, 0x370518u);
    ctx->pc = 0x370514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370510u;
    // 0x370514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370510u, 0x370518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370518u;
label_370518:
    // 0x370518: 0x29c00  sll         $s3, $v0, 16
    ctx->pc = 0x370518u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37051c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37051cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370520: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x370520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x370524: 0x139c03  sra         $s3, $s3, 16
    ctx->pc = 0x370524u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 16));
    // 0x370528: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370528u;
    SET_GPR_U32(ctx, 31, 0x370530u);
    ctx->pc = 0x37052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370528u;
    // 0x37052c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370528u, 0x370530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370530u;
label_370530:
    // 0x370530: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370530u;
    SET_GPR_U32(ctx, 31, 0x370538u);
    ctx->pc = 0x370534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370530u;
    // 0x370534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370530u, 0x370538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370538u;
label_370538:
    // 0x370538: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x370538u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37053c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37053cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370540: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x370540u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x370544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x370544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370548: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370548u;
    SET_GPR_U32(ctx, 31, 0x370550u);
    ctx->pc = 0x37054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370548u;
    // 0x37054c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370548u, 0x370550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370550u;
label_370550:
    // 0x370550: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370550u;
    SET_GPR_U32(ctx, 31, 0x370558u);
    ctx->pc = 0x370554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370550u;
    // 0x370554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370550u, 0x370558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370558u;
label_370558:
    // 0x370558: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x370558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37055c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x37055cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370560: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x370560u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x370564: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x370564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x370568: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x370568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37056c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x37056cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370570: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x370570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x370574: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x370574u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370578: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x370578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37057c: 0x8fa90044  lw          $t1, 0x44($sp)
    ctx->pc = 0x37057cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x370580: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x370580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x370584: 0xafb50008  sw          $s5, 0x8($sp)
    ctx->pc = 0x370584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
    // 0x370588: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x370588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x37058c: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x37058cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x370590: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x370590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x370594: 0xc05b6cc  jal         func_16DB30
    ctx->pc = 0x370594u;
    SET_GPR_U32(ctx, 31, 0x37059Cu);
    ctx->pc = 0x370598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370594u;
    // 0x370598: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DB30u, 0x370594u, 0x37059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37059Cu;
label_37059c:
    // 0x37059c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x37059cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3705a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3705a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3705a4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3705a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3705a8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3705a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3705ac: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3705acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3705b0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3705b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3705b4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3705b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3705b8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3705b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3705bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3705bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3705c0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3705c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3705c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3705c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3705c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3705C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3705CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3705C8u;
        // 0x3705cc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3705C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3705D0u;
}

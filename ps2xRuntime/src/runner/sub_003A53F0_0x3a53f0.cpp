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

// Function: sub_003A53F0
// Address: 0x3a53f0 - 0x3a5530
void sub_003A53F0_0x3a53f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A53F0_0x3a53f0");
#endif

    switch (ctx->pc) {
        case 0x3a53f0u: goto label_3a53f0;
        case 0x3a53f4u: goto label_3a53f4;
        case 0x3a53f8u: goto label_3a53f8;
        case 0x3a53fcu: goto label_3a53fc;
        case 0x3a5400u: goto label_3a5400;
        case 0x3a5404u: goto label_3a5404;
        case 0x3a5408u: goto label_3a5408;
        case 0x3a540cu: goto label_3a540c;
        case 0x3a5410u: goto label_3a5410;
        case 0x3a5414u: goto label_3a5414;
        case 0x3a5418u: goto label_3a5418;
        case 0x3a541cu: goto label_3a541c;
        case 0x3a5420u: goto label_3a5420;
        case 0x3a5424u: goto label_3a5424;
        case 0x3a5428u: goto label_3a5428;
        case 0x3a542cu: goto label_3a542c;
        case 0x3a5430u: goto label_3a5430;
        case 0x3a5434u: goto label_3a5434;
        case 0x3a5438u: goto label_3a5438;
        case 0x3a543cu: goto label_3a543c;
        case 0x3a5440u: goto label_3a5440;
        case 0x3a5444u: goto label_3a5444;
        case 0x3a5448u: goto label_3a5448;
        case 0x3a544cu: goto label_3a544c;
        case 0x3a5450u: goto label_3a5450;
        case 0x3a5454u: goto label_3a5454;
        case 0x3a5458u: goto label_3a5458;
        case 0x3a545cu: goto label_3a545c;
        case 0x3a5460u: goto label_3a5460;
        case 0x3a5464u: goto label_3a5464;
        case 0x3a5468u: goto label_3a5468;
        case 0x3a546cu: goto label_3a546c;
        case 0x3a5470u: goto label_3a5470;
        case 0x3a5474u: goto label_3a5474;
        case 0x3a5478u: goto label_3a5478;
        case 0x3a547cu: goto label_3a547c;
        case 0x3a5480u: goto label_3a5480;
        case 0x3a5484u: goto label_3a5484;
        case 0x3a5488u: goto label_3a5488;
        case 0x3a548cu: goto label_3a548c;
        case 0x3a5490u: goto label_3a5490;
        case 0x3a5494u: goto label_3a5494;
        case 0x3a5498u: goto label_3a5498;
        case 0x3a549cu: goto label_3a549c;
        case 0x3a54a0u: goto label_3a54a0;
        case 0x3a54a4u: goto label_3a54a4;
        case 0x3a54a8u: goto label_3a54a8;
        case 0x3a54acu: goto label_3a54ac;
        case 0x3a54b0u: goto label_3a54b0;
        case 0x3a54b4u: goto label_3a54b4;
        case 0x3a54b8u: goto label_3a54b8;
        case 0x3a54bcu: goto label_3a54bc;
        case 0x3a54c0u: goto label_3a54c0;
        case 0x3a54c4u: goto label_3a54c4;
        case 0x3a54c8u: goto label_3a54c8;
        case 0x3a54ccu: goto label_3a54cc;
        case 0x3a54d0u: goto label_3a54d0;
        case 0x3a54d4u: goto label_3a54d4;
        case 0x3a54d8u: goto label_3a54d8;
        case 0x3a54dcu: goto label_3a54dc;
        case 0x3a54e0u: goto label_3a54e0;
        case 0x3a54e4u: goto label_3a54e4;
        case 0x3a54e8u: goto label_3a54e8;
        case 0x3a54ecu: goto label_3a54ec;
        case 0x3a54f0u: goto label_3a54f0;
        case 0x3a54f4u: goto label_3a54f4;
        case 0x3a54f8u: goto label_3a54f8;
        case 0x3a54fcu: goto label_3a54fc;
        case 0x3a5500u: goto label_3a5500;
        case 0x3a5504u: goto label_3a5504;
        case 0x3a5508u: goto label_3a5508;
        case 0x3a550cu: goto label_3a550c;
        case 0x3a5510u: goto label_3a5510;
        case 0x3a5514u: goto label_3a5514;
        case 0x3a5518u: goto label_3a5518;
        case 0x3a551cu: goto label_3a551c;
        case 0x3a5520u: goto label_3a5520;
        case 0x3a5524u: goto label_3a5524;
        case 0x3a5528u: goto label_3a5528;
        case 0x3a552cu: goto label_3a552c;
        default: break;
    }

    ctx->pc = 0x3a53f0u;

label_3a53f0:
    // 0x3a53f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a53f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3a53f4:
    // 0x3a53f4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3a53f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3a53f8:
    // 0x3a53f8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3a53f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3a53fc:
    // 0x3a53fc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3a53fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a5400:
    // 0x3a5400: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3a5400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3a5404:
    // 0x3a5404: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3a5404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3a5408:
    // 0x3a5408: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3a5408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3a540c:
    // 0x3a540c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3a540cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_3a5410:
    // 0x3a5410: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3a5410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3a5414:
    // 0x3a5414: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3a5414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a5418:
    // 0x3a5418: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a5418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3a541c:
    // 0x3a541c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3a5420:
    // 0x3a5420: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a5420u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a5424:
    // 0x3a5424: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a5424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_3a5428:
    // 0x3a5428: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a5428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3a542c:
    // 0x3a542c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a542cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3a5430:
    // 0x3a5430: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3a5430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_3a5434:
    // 0x3a5434: 0xc0e8b48  jal         func_3A2D20
label_3a5438:
    if (ctx->pc == 0x3A5438u) {
        ctx->pc = 0x3A5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5434u;
        // 0x3a5438: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A543Cu;
        goto label_3a543c;
    }
    ctx->pc = 0x3A5434u;
    SET_GPR_U32(ctx, 31, 0x3A543Cu);
    ctx->pc = 0x3A5438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5434u;
    // 0x3a5438: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A5434u, 0x3A543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A543Cu;
label_3a543c:
    // 0x3a543c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a543cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_3a5440:
    // 0x3a5440: 0xc0e8b58  jal         func_3A2D60
label_3a5444:
    if (ctx->pc == 0x3A5444u) {
        ctx->pc = 0x3A5444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5440u;
        // 0x3a5444: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5448u;
        goto label_3a5448;
    }
    ctx->pc = 0x3A5440u;
    SET_GPR_U32(ctx, 31, 0x3A5448u);
    ctx->pc = 0x3A5444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5440u;
    // 0x3a5444: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A5440u, 0x3A5448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5448u;
label_3a5448:
    // 0x3a5448: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a5448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_3a544c:
    // 0x3a544c: 0xc0e8b58  jal         func_3A2D60
label_3a5450:
    if (ctx->pc == 0x3A5450u) {
        ctx->pc = 0x3A5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A544Cu;
        // 0x3a5450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5454u;
        goto label_3a5454;
    }
    ctx->pc = 0x3A544Cu;
    SET_GPR_U32(ctx, 31, 0x3A5454u);
    ctx->pc = 0x3A5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A544Cu;
    // 0x3a5450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A544Cu, 0x3A5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5454u;
label_3a5454:
    // 0x3a5454: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a5454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_3a5458:
    // 0x3a5458: 0xc0e8b70  jal         func_3A2DC0
label_3a545c:
    if (ctx->pc == 0x3A545Cu) {
        ctx->pc = 0x3A545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5458u;
        // 0x3a545c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5460u;
        goto label_3a5460;
    }
    ctx->pc = 0x3A5458u;
    SET_GPR_U32(ctx, 31, 0x3A5460u);
    ctx->pc = 0x3A545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5458u;
    // 0x3a545c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3A5458u, 0x3A5460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5460u;
label_3a5460:
    // 0x3a5460: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a5460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_3a5464:
    // 0x3a5464: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3a5464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a5468:
    // 0x3a5468: 0xc0e8b98  jal         func_3A2E60
label_3a546c:
    if (ctx->pc == 0x3A546Cu) {
        ctx->pc = 0x3A546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5468u;
        // 0x3a546c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5470u;
        goto label_3a5470;
    }
    ctx->pc = 0x3A5468u;
    SET_GPR_U32(ctx, 31, 0x3A5470u);
    ctx->pc = 0x3A546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5468u;
    // 0x3a546c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E60u, 0x3A5468u, 0x3A5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5470u;
label_3a5470:
    // 0x3a5470: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a5470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_3a5474:
    // 0x3a5474: 0xc0e8b50  jal         func_3A2D40
label_3a5478:
    if (ctx->pc == 0x3A5478u) {
        ctx->pc = 0x3A5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5474u;
        // 0x3a5478: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A547Cu;
        goto label_3a547c;
    }
    ctx->pc = 0x3A5474u;
    SET_GPR_U32(ctx, 31, 0x3A547Cu);
    ctx->pc = 0x3A5478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5474u;
    // 0x3a5478: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A5474u, 0x3A547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A547Cu;
label_3a547c:
    // 0x3a547c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3a547cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3a5480:
    // 0x3a5480: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a5480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a5484:
    // 0x3a5484: 0xc10d74c  jal         func_435D30
label_3a5488:
    if (ctx->pc == 0x3A5488u) {
        ctx->pc = 0x3A5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5484u;
        // 0x3a5488: 0x24a51a98  addiu       $a1, $a1, 0x1A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A548Cu;
        goto label_3a548c;
    }
    ctx->pc = 0x3A5484u;
    SET_GPR_U32(ctx, 31, 0x3A548Cu);
    ctx->pc = 0x3A5488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5484u;
    // 0x3a5488: 0x24a51a98  addiu       $a1, $a1, 0x1A98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x3A5484u, 0x3A548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A548Cu;
label_3a548c:
    // 0x3a548c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3a5490:
    if (ctx->pc == 0x3A5490u) {
        ctx->pc = 0x3A5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A548Cu;
        // 0x3a5490: 0x8e452c7c  lw          $a1, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5494u;
        goto label_3a5494;
    }
    ctx->pc = 0x3A548Cu;
    {
        const bool branch_taken_0x3a548c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A548Cu;
        // 0x3a5490: 0x8e452c7c  lw          $a1, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a548c) {
            ctx->pc = 0x3A5504u;
            goto label_3a5504;
        }
    }
    ctx->pc = 0x3A5494u;
label_3a5494:
    // 0x3a5494: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3a5494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a5498:
    // 0x3a5498: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3a5498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3a549c:
    // 0x3a549c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3a549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3a54a0:
    // 0x3a54a0: 0x8cb00840  lw          $s0, 0x840($a1)
    ctx->pc = 0x3a54a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
label_3a54a4:
    // 0x3a54a4: 0x40f809  jalr        $v0
label_3a54a8:
    if (ctx->pc == 0x3A54A8u) {
        ctx->pc = 0x3A54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54A4u;
        // 0x3a54a8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A54ACu;
        goto label_3a54ac;
    }
    ctx->pc = 0x3A54A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A54ACu);
        ctx->pc = 0x3A54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54A4u;
        // 0x3a54a8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A54A4u, 0x3A54ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A54ACu;
label_3a54ac:
    // 0x3a54ac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3a54acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a54b0:
    // 0x3a54b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a54b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a54b4:
    // 0x3a54b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3a54b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3a54b8:
    // 0x3a54b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3a54b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3a54bc:
    // 0x3a54bc: 0x40f809  jalr        $v0
label_3a54c0:
    if (ctx->pc == 0x3A54C0u) {
        ctx->pc = 0x3A54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54BCu;
        // 0x3a54c0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A54C4u;
        goto label_3a54c4;
    }
    ctx->pc = 0x3A54BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A54C4u);
        ctx->pc = 0x3A54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54BCu;
        // 0x3a54c0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A54BCu, 0x3A54C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A54C4u;
label_3a54c4:
    // 0x3a54c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3a54c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3a54c8:
    // 0x3a54c8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x3a54c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_3a54cc:
    // 0x3a54cc: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x3a54ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_3a54d0:
    // 0x3a54d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a54d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3a54d4:
    // 0x3a54d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a54d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_3a54d8:
    // 0x3a54d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a54d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a54dc:
    // 0x3a54dc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a54dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a54e0:
    // 0x3a54e0: 0x24e716c0  addiu       $a3, $a3, 0x16C0
    ctx->pc = 0x3a54e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5824));
label_3a54e4:
    // 0x3a54e4: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x3a54e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
label_3a54e8:
    // 0x3a54e8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3a54e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a54ec:
    // 0x3a54ec: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3a54ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a54f0:
    // 0x3a54f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3a54f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_3a54f4:
    // 0x3a54f4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3a54f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3a54f8:
    // 0x3a54f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a54f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a54fc:
    // 0x3a54fc: 0xc0e6250  jal         func_398940
label_3a5500:
    if (ctx->pc == 0x3A5500u) {
        ctx->pc = 0x3A5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54FCu;
        // 0x3a5500: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5504u;
        goto label_3a5504;
    }
    ctx->pc = 0x3A54FCu;
    SET_GPR_U32(ctx, 31, 0x3A5504u);
    ctx->pc = 0x3A5500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A54FCu;
    // 0x3a5500: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x3A54FCu, 0x3A5504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5504u;
label_3a5504:
    // 0x3a5504: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a5504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a5508:
    // 0x3a5508: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3a5508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a550c:
    // 0x3a550c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3a550cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a5510:
    // 0x3a5510: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3a5510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a5514:
    // 0x3a5514: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3a5514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a5518:
    // 0x3a5518: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3a5518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a551c:
    // 0x3a551c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a551cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a5520:
    // 0x3a5520: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a5520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a5524:
    // 0x3a5524: 0x3e00008  jr          $ra
label_3a5528:
    if (ctx->pc == 0x3A5528u) {
        ctx->pc = 0x3A5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5524u;
        // 0x3a5528: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A552Cu;
        goto label_3a552c;
    }
    ctx->pc = 0x3A5524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5524u;
        // 0x3a5528: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A552Cu;
label_3a552c:
    // 0x3a552c: 0x0  nop
    ctx->pc = 0x3a552cu;
    // NOP
    ctx->pc = 0x3a5530u;
}

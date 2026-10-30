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

// Function: sub_0028C3B0
// Address: 0x28c3b0 - 0x28c488
void sub_0028C3B0_0x28c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C3B0_0x28c3b0");
#endif

    switch (ctx->pc) {
        case 0x28c3b0u: goto label_28c3b0;
        case 0x28c3b4u: goto label_28c3b4;
        case 0x28c3b8u: goto label_28c3b8;
        case 0x28c3bcu: goto label_28c3bc;
        case 0x28c3c0u: goto label_28c3c0;
        case 0x28c3c4u: goto label_28c3c4;
        case 0x28c3c8u: goto label_28c3c8;
        case 0x28c3ccu: goto label_28c3cc;
        case 0x28c3d0u: goto label_28c3d0;
        case 0x28c3d4u: goto label_28c3d4;
        case 0x28c3d8u: goto label_28c3d8;
        case 0x28c3dcu: goto label_28c3dc;
        case 0x28c3e0u: goto label_28c3e0;
        case 0x28c3e4u: goto label_28c3e4;
        case 0x28c3e8u: goto label_28c3e8;
        case 0x28c3ecu: goto label_28c3ec;
        case 0x28c3f0u: goto label_28c3f0;
        case 0x28c3f4u: goto label_28c3f4;
        case 0x28c3f8u: goto label_28c3f8;
        case 0x28c3fcu: goto label_28c3fc;
        case 0x28c400u: goto label_28c400;
        case 0x28c404u: goto label_28c404;
        case 0x28c408u: goto label_28c408;
        case 0x28c40cu: goto label_28c40c;
        case 0x28c410u: goto label_28c410;
        case 0x28c414u: goto label_28c414;
        case 0x28c418u: goto label_28c418;
        case 0x28c41cu: goto label_28c41c;
        case 0x28c420u: goto label_28c420;
        case 0x28c424u: goto label_28c424;
        case 0x28c428u: goto label_28c428;
        case 0x28c42cu: goto label_28c42c;
        case 0x28c430u: goto label_28c430;
        case 0x28c434u: goto label_28c434;
        case 0x28c438u: goto label_28c438;
        case 0x28c43cu: goto label_28c43c;
        case 0x28c440u: goto label_28c440;
        case 0x28c444u: goto label_28c444;
        case 0x28c448u: goto label_28c448;
        case 0x28c44cu: goto label_28c44c;
        case 0x28c450u: goto label_28c450;
        case 0x28c454u: goto label_28c454;
        case 0x28c458u: goto label_28c458;
        case 0x28c45cu: goto label_28c45c;
        case 0x28c460u: goto label_28c460;
        case 0x28c464u: goto label_28c464;
        case 0x28c468u: goto label_28c468;
        case 0x28c46cu: goto label_28c46c;
        case 0x28c470u: goto label_28c470;
        case 0x28c474u: goto label_28c474;
        case 0x28c478u: goto label_28c478;
        case 0x28c47cu: goto label_28c47c;
        case 0x28c480u: goto label_28c480;
        case 0x28c484u: goto label_28c484;
        default: break;
    }

    ctx->pc = 0x28c3b0u;

label_28c3b0:
    // 0x28c3b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28c3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_28c3b4:
    // 0x28c3b4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x28c3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_28c3b8:
    // 0x28c3b8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x28c3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_28c3bc:
    // 0x28c3bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28c3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c3c0:
    // 0x28c3c0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x28c3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_28c3c4:
    // 0x28c3c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28c3c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c3c8:
    // 0x28c3c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28c3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28c3cc:
    // 0x28c3cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28c3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28c3d0:
    // 0x28c3d0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x28c3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_28c3d4:
    // 0x28c3d4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x28c3d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28c3d8:
    // 0x28c3d8: 0xc089f76  jal         func_227DD8
label_28c3dc:
    if (ctx->pc == 0x28C3DCu) {
        ctx->pc = 0x28C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3D8u;
        // 0x28c3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3E0u;
        goto label_28c3e0;
    }
    ctx->pc = 0x28C3D8u;
    SET_GPR_U32(ctx, 31, 0x28C3E0u);
    ctx->pc = 0x28C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C3D8u;
    // 0x28c3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x28C3D8u, 0x28C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C3E0u;
label_28c3e0:
    // 0x28c3e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28c3e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c3e4:
    // 0x28c3e4: 0xc089f66  jal         func_227D98
label_28c3e8:
    if (ctx->pc == 0x28C3E8u) {
        ctx->pc = 0x28C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3E4u;
        // 0x28c3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3ECu;
        goto label_28c3ec;
    }
    ctx->pc = 0x28C3E4u;
    SET_GPR_U32(ctx, 31, 0x28C3ECu);
    ctx->pc = 0x28C3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C3E4u;
    // 0x28c3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x28C3E4u, 0x28C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C3ECu;
label_28c3ec:
    // 0x28c3ec: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_28c3f0:
    if (ctx->pc == 0x28C3F0u) {
        ctx->pc = 0x28C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3ECu;
        // 0x28c3f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3F4u;
        goto label_28c3f4;
    }
    ctx->pc = 0x28C3ECu;
    {
        const bool branch_taken_0x28c3ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3ECu;
        // 0x28c3f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3ec) {
            ctx->pc = 0x28C404u;
            goto label_28c404;
        }
    }
    ctx->pc = 0x28C3F4u;
label_28c3f4:
    // 0x28c3f4: 0xc0a3c90  jal         func_28F240
label_28c3f8:
    if (ctx->pc == 0x28C3F8u) {
        ctx->pc = 0x28C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3F4u;
        // 0x28c3f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3FCu;
        goto label_28c3fc;
    }
    ctx->pc = 0x28C3F4u;
    SET_GPR_U32(ctx, 31, 0x28C3FCu);
    ctx->pc = 0x28C3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C3F4u;
    // 0x28c3f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F240u, 0x28C3F4u, 0x28C3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C3FCu;
label_28c3fc:
    // 0x28c3fc: 0xc0a3644  jal         func_28D910
label_28c400:
    if (ctx->pc == 0x28C400u) {
        ctx->pc = 0x28C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3FCu;
        // 0x28c400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C404u;
        goto label_28c404;
    }
    ctx->pc = 0x28C3FCu;
    SET_GPR_U32(ctx, 31, 0x28C404u);
    ctx->pc = 0x28C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C3FCu;
    // 0x28c400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D910u, 0x28C3FCu, 0x28C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C404u;
label_28c404:
    // 0x28c404: 0xc0a36c8  jal         func_28DB20
label_28c408:
    if (ctx->pc == 0x28C408u) {
        ctx->pc = 0x28C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C404u;
        // 0x28c408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C40Cu;
        goto label_28c40c;
    }
    ctx->pc = 0x28C404u;
    SET_GPR_U32(ctx, 31, 0x28C40Cu);
    ctx->pc = 0x28C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C404u;
    // 0x28c408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x28C404u, 0x28C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C40Cu;
label_28c40c:
    // 0x28c40c: 0xc089bdc  jal         func_226F70
label_28c410:
    if (ctx->pc == 0x28C410u) {
        ctx->pc = 0x28C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C40Cu;
        // 0x28c410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C414u;
        goto label_28c414;
    }
    ctx->pc = 0x28C40Cu;
    SET_GPR_U32(ctx, 31, 0x28C414u);
    ctx->pc = 0x28C410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C40Cu;
    // 0x28c410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x28C40Cu, 0x28C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C414u;
label_28c414:
    // 0x28c414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c418:
    // 0x28c418: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_28c41c:
    if (ctx->pc == 0x28C41Cu) {
        ctx->pc = 0x28C420u;
        goto label_28c420;
    }
    ctx->pc = 0x28C418u;
    {
        const bool branch_taken_0x28c418 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x28c418) {
            ctx->pc = 0x28C428u;
            goto label_28c428;
        }
    }
    ctx->pc = 0x28C420u;
label_28c420:
    // 0x28c420: 0xc0a3e7a  jal         func_28F9E8
label_28c424:
    if (ctx->pc == 0x28C424u) {
        ctx->pc = 0x28C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C420u;
        // 0x28c424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C428u;
        goto label_28c428;
    }
    ctx->pc = 0x28C420u;
    SET_GPR_U32(ctx, 31, 0x28C428u);
    ctx->pc = 0x28C424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C420u;
    // 0x28c424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F9E8u, 0x28C420u, 0x28C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C428u;
label_28c428:
    // 0x28c428: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_28c42c:
    if (ctx->pc == 0x28C42Cu) {
        ctx->pc = 0x28C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C428u;
        // 0x28c42c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C430u;
        goto label_28c430;
    }
    ctx->pc = 0x28C428u;
    {
        const bool branch_taken_0x28c428 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C428u;
        // 0x28c42c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c428) {
            ctx->pc = 0x28C43Cu;
            goto label_28c43c;
        }
    }
    ctx->pc = 0x28C430u;
label_28c430:
    // 0x28c430: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
label_28c434:
    if (ctx->pc == 0x28C434u) {
        ctx->pc = 0x28C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C430u;
        // 0x28c434: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C438u;
        goto label_28c438;
    }
    ctx->pc = 0x28C430u;
    {
        const bool branch_taken_0x28c430 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C430u;
        // 0x28c434: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c430) {
            ctx->pc = 0x28C46Cu;
            goto label_28c46c;
        }
    }
    ctx->pc = 0x28C438u;
label_28c438:
    // 0x28c438: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x28c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_28c43c:
    // 0x28c43c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c440:
    // 0x28c440: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28c440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_28c444:
    // 0x28c444: 0xc0899e8  jal         func_2267A0
label_28c448:
    if (ctx->pc == 0x28C448u) {
        ctx->pc = 0x28C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C444u;
        // 0x28c448: 0xafb10024  sw          $s1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C44Cu;
        goto label_28c44c;
    }
    ctx->pc = 0x28C444u;
    SET_GPR_U32(ctx, 31, 0x28C44Cu);
    ctx->pc = 0x28C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C444u;
    // 0x28c448: 0xafb10024  sw          $s1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x28C444u, 0x28C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C44Cu;
label_28c44c:
    // 0x28c44c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_28c450:
    // 0x28c450: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28c450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28c454:
    // 0x28c454: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28c454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28c458:
    // 0x28c458: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28c458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28c45c:
    // 0x28c45c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28c460:
    // 0x28c460: 0x40f809  jalr        $v0
label_28c464:
    if (ctx->pc == 0x28C464u) {
        ctx->pc = 0x28C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C460u;
        // 0x28c464: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C468u;
        goto label_28c468;
    }
    ctx->pc = 0x28C460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C468u);
        ctx->pc = 0x28C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C460u;
        // 0x28c464: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C460u, 0x28C468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C468u;
label_28c468:
    // 0x28c468: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x28c468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28c46c:
    // 0x28c46c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x28c46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28c470:
    // 0x28c470: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x28c470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28c474:
    // 0x28c474: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x28c474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28c478:
    // 0x28c478: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28c478u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28c47c:
    // 0x28c47c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28c480:
    // 0x28c480: 0x3e00008  jr          $ra
label_28c484:
    if (ctx->pc == 0x28C484u) {
        ctx->pc = 0x28C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C480u;
        // 0x28c484: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C488u;
        goto label_fallthrough_0x28c480;
    }
    ctx->pc = 0x28C480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C480u;
        // 0x28c484: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28c480:
    ctx->pc = 0x28C488u;
}

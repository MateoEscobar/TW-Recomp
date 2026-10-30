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

// Function: sub_003FB330
// Address: 0x3fb330 - 0x3fb430
void sub_003FB330_0x3fb330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB330_0x3fb330");
#endif

    switch (ctx->pc) {
        case 0x3fb330u: goto label_3fb330;
        case 0x3fb334u: goto label_3fb334;
        case 0x3fb338u: goto label_3fb338;
        case 0x3fb33cu: goto label_3fb33c;
        case 0x3fb340u: goto label_3fb340;
        case 0x3fb344u: goto label_3fb344;
        case 0x3fb348u: goto label_3fb348;
        case 0x3fb34cu: goto label_3fb34c;
        case 0x3fb350u: goto label_3fb350;
        case 0x3fb354u: goto label_3fb354;
        case 0x3fb358u: goto label_3fb358;
        case 0x3fb35cu: goto label_3fb35c;
        case 0x3fb360u: goto label_3fb360;
        case 0x3fb364u: goto label_3fb364;
        case 0x3fb368u: goto label_3fb368;
        case 0x3fb36cu: goto label_3fb36c;
        case 0x3fb370u: goto label_3fb370;
        case 0x3fb374u: goto label_3fb374;
        case 0x3fb378u: goto label_3fb378;
        case 0x3fb37cu: goto label_3fb37c;
        case 0x3fb380u: goto label_3fb380;
        case 0x3fb384u: goto label_3fb384;
        case 0x3fb388u: goto label_3fb388;
        case 0x3fb38cu: goto label_3fb38c;
        case 0x3fb390u: goto label_3fb390;
        case 0x3fb394u: goto label_3fb394;
        case 0x3fb398u: goto label_3fb398;
        case 0x3fb39cu: goto label_3fb39c;
        case 0x3fb3a0u: goto label_3fb3a0;
        case 0x3fb3a4u: goto label_3fb3a4;
        case 0x3fb3a8u: goto label_3fb3a8;
        case 0x3fb3acu: goto label_3fb3ac;
        case 0x3fb3b0u: goto label_3fb3b0;
        case 0x3fb3b4u: goto label_3fb3b4;
        case 0x3fb3b8u: goto label_3fb3b8;
        case 0x3fb3bcu: goto label_3fb3bc;
        case 0x3fb3c0u: goto label_3fb3c0;
        case 0x3fb3c4u: goto label_3fb3c4;
        case 0x3fb3c8u: goto label_3fb3c8;
        case 0x3fb3ccu: goto label_3fb3cc;
        case 0x3fb3d0u: goto label_3fb3d0;
        case 0x3fb3d4u: goto label_3fb3d4;
        case 0x3fb3d8u: goto label_3fb3d8;
        case 0x3fb3dcu: goto label_3fb3dc;
        case 0x3fb3e0u: goto label_3fb3e0;
        case 0x3fb3e4u: goto label_3fb3e4;
        case 0x3fb3e8u: goto label_3fb3e8;
        case 0x3fb3ecu: goto label_3fb3ec;
        case 0x3fb3f0u: goto label_3fb3f0;
        case 0x3fb3f4u: goto label_3fb3f4;
        case 0x3fb3f8u: goto label_3fb3f8;
        case 0x3fb3fcu: goto label_3fb3fc;
        case 0x3fb400u: goto label_3fb400;
        case 0x3fb404u: goto label_3fb404;
        case 0x3fb408u: goto label_3fb408;
        case 0x3fb40cu: goto label_3fb40c;
        case 0x3fb410u: goto label_3fb410;
        case 0x3fb414u: goto label_3fb414;
        case 0x3fb418u: goto label_3fb418;
        case 0x3fb41cu: goto label_3fb41c;
        case 0x3fb420u: goto label_3fb420;
        case 0x3fb424u: goto label_3fb424;
        case 0x3fb428u: goto label_3fb428;
        case 0x3fb42cu: goto label_3fb42c;
        default: break;
    }

    ctx->pc = 0x3fb330u;

label_3fb330:
    // 0x3fb330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fb330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3fb334:
    // 0x3fb334: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3fb334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3fb338:
    // 0x3fb338: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3fb338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3fb33c:
    // 0x3fb33c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fb33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fb340:
    // 0x3fb340: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3fb340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3fb344:
    // 0x3fb344: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fb344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fb348:
    // 0x3fb348: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3fb348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3fb34c:
    // 0x3fb34c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3fb34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3fb350:
    // 0x3fb350: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fb350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fb354:
    // 0x3fb354: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fb354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fb358:
    // 0x3fb358: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fb358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fb35c:
    // 0x3fb35c: 0x40f809  jalr        $v0
label_3fb360:
    if (ctx->pc == 0x3FB360u) {
        ctx->pc = 0x3FB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB35Cu;
        // 0x3fb360: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB364u;
        goto label_3fb364;
    }
    ctx->pc = 0x3FB35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FB364u);
        ctx->pc = 0x3FB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB35Cu;
        // 0x3fb360: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB35Cu, 0x3FB364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FB364u;
label_3fb364:
    // 0x3fb364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fb364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb368:
    // 0x3fb368: 0xc0ea14c  jal         func_3A8530
label_3fb36c:
    if (ctx->pc == 0x3FB36Cu) {
        ctx->pc = 0x3FB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB368u;
        // 0x3fb36c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB370u;
        goto label_3fb370;
    }
    ctx->pc = 0x3FB368u;
    SET_GPR_U32(ctx, 31, 0x3FB370u);
    ctx->pc = 0x3FB36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB368u;
    // 0x3fb36c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FB368u, 0x3FB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB370u;
label_3fb370:
    // 0x3fb370: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3fb370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb374:
    // 0x3fb374: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fb374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fb378:
    // 0x3fb378: 0xc0ea12a  jal         func_3A84A8
label_3fb37c:
    if (ctx->pc == 0x3FB37Cu) {
        ctx->pc = 0x3FB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB378u;
        // 0x3fb37c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB380u;
        goto label_3fb380;
    }
    ctx->pc = 0x3FB378u;
    SET_GPR_U32(ctx, 31, 0x3FB380u);
    ctx->pc = 0x3FB37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB378u;
    // 0x3fb37c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FB378u, 0x3FB380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB380u;
label_3fb380:
    // 0x3fb380: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fb380u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fb384:
    // 0x3fb384: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fb384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fb388:
    // 0x3fb388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fb388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb38c:
    // 0x3fb38c: 0xc0ea12a  jal         func_3A84A8
label_3fb390:
    if (ctx->pc == 0x3FB390u) {
        ctx->pc = 0x3FB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB38Cu;
        // 0x3fb390: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB394u;
        goto label_3fb394;
    }
    ctx->pc = 0x3FB38Cu;
    SET_GPR_U32(ctx, 31, 0x3FB394u);
    ctx->pc = 0x3FB390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB38Cu;
    // 0x3fb390: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FB38Cu, 0x3FB394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB394u;
label_3fb394:
    // 0x3fb394: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fb394u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fb398:
    // 0x3fb398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fb398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fb39c:
    // 0x3fb39c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3fb39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3fb3a0:
    // 0x3fb3a0: 0xc0e858c  jal         func_3A1630
label_3fb3a4:
    if (ctx->pc == 0x3FB3A4u) {
        ctx->pc = 0x3FB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB3A0u;
        // 0x3fb3a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB3A8u;
        goto label_3fb3a8;
    }
    ctx->pc = 0x3FB3A0u;
    SET_GPR_U32(ctx, 31, 0x3FB3A8u);
    ctx->pc = 0x3FB3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB3A0u;
    // 0x3fb3a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FB3A0u, 0x3FB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB3A8u;
label_3fb3a8:
    // 0x3fb3a8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3fb3a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fb3ac:
    // 0x3fb3ac: 0x24041021  addiu       $a0, $zero, 0x1021
    ctx->pc = 0x3fb3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4129));
label_3fb3b0:
    // 0x3fb3b0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3fb3b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fb3b4:
    // 0x3fb3b4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3fb3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3fb3b8:
    // 0x3fb3b8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3fb3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3fb3bc:
    // 0x3fb3bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3fb3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fb3c0:
    // 0x3fb3c0: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x3fb3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
label_3fb3c4:
    // 0x3fb3c4: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3fb3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3fb3c8:
    // 0x3fb3c8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x3fb3c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_3fb3cc:
    // 0x3fb3cc: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x3fb3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3fb3d0:
    // 0x3fb3d0: 0x60f809  jalr        $v1
label_3fb3d4:
    if (ctx->pc == 0x3FB3D4u) {
        ctx->pc = 0x3FB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB3D0u;
        // 0x3fb3d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB3D8u;
        goto label_3fb3d8;
    }
    ctx->pc = 0x3FB3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FB3D8u);
        ctx->pc = 0x3FB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB3D0u;
        // 0x3fb3d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB3D0u, 0x3FB3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FB3D8u;
label_3fb3d8:
    // 0x3fb3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fb3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fb3dc:
    // 0x3fb3dc: 0xc0e9132  jal         func_3A44C8
label_3fb3e0:
    if (ctx->pc == 0x3FB3E0u) {
        ctx->pc = 0x3FB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB3DCu;
        // 0x3fb3e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB3E4u;
        goto label_3fb3e4;
    }
    ctx->pc = 0x3FB3DCu;
    SET_GPR_U32(ctx, 31, 0x3FB3E4u);
    ctx->pc = 0x3FB3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB3DCu;
    // 0x3fb3e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3FB3DCu, 0x3FB3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB3E4u;
label_3fb3e4:
    // 0x3fb3e4: 0x3c03b141  lui         $v1, 0xB141
    ctx->pc = 0x3fb3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45377 << 16));
label_3fb3e8:
    // 0x3fb3e8: 0x346309ba  ori         $v1, $v1, 0x9BA
    ctx->pc = 0x3fb3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2490);
label_3fb3ec:
    // 0x3fb3ec: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_3fb3f0:
    if (ctx->pc == 0x3FB3F0u) {
        ctx->pc = 0x3FB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB3ECu;
        // 0x3fb3f0: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB3F4u;
        goto label_3fb3f4;
    }
    ctx->pc = 0x3FB3ECu;
    {
        const bool branch_taken_0x3fb3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB3ECu;
        // 0x3fb3f0: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb3ec) {
            ctx->pc = 0x3FB400u;
            goto label_3fb400;
        }
    }
    ctx->pc = 0x3FB3F4u;
label_3fb3f4:
    // 0x3fb3f4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3fb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3fb3f8:
    // 0x3fb3f8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3fb3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_3fb3fc:
    // 0x3fb3fc: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3fb3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3fb400:
    // 0x3fb400: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3fb400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fb404:
    // 0x3fb404: 0xae530010  sw          $s3, 0x10($s2)
    ctx->pc = 0x3fb404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
label_3fb408:
    // 0x3fb408: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3fb408u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3fb40c:
    // 0x3fb40c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3fb40cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3fb410:
    // 0x3fb410: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3fb410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fb414:
    // 0x3fb414: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3fb414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fb418:
    // 0x3fb418: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3fb418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fb41c:
    // 0x3fb41c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3fb41cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fb420:
    // 0x3fb420: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3fb420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3fb424:
    // 0x3fb424: 0x3e00008  jr          $ra
label_3fb428:
    if (ctx->pc == 0x3FB428u) {
        ctx->pc = 0x3FB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB424u;
        // 0x3fb428: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB42Cu;
        goto label_3fb42c;
    }
    ctx->pc = 0x3FB424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB424u;
        // 0x3fb428: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB42Cu;
label_3fb42c:
    // 0x3fb42c: 0x0  nop
    ctx->pc = 0x3fb42cu;
    // NOP
    ctx->pc = 0x3fb430u;
}

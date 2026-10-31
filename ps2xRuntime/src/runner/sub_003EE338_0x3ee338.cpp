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

// Function: sub_003EE338
// Address: 0x3ee338 - 0x3ee4a8
void sub_003EE338_0x3ee338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE338_0x3ee338");
#endif

    switch (ctx->pc) {
        case 0x3ee338u: goto label_3ee338;
        case 0x3ee33cu: goto label_3ee33c;
        case 0x3ee340u: goto label_3ee340;
        case 0x3ee344u: goto label_3ee344;
        case 0x3ee348u: goto label_3ee348;
        case 0x3ee34cu: goto label_3ee34c;
        case 0x3ee350u: goto label_3ee350;
        case 0x3ee354u: goto label_3ee354;
        case 0x3ee358u: goto label_3ee358;
        case 0x3ee35cu: goto label_3ee35c;
        case 0x3ee360u: goto label_3ee360;
        case 0x3ee364u: goto label_3ee364;
        case 0x3ee368u: goto label_3ee368;
        case 0x3ee36cu: goto label_3ee36c;
        case 0x3ee370u: goto label_3ee370;
        case 0x3ee374u: goto label_3ee374;
        case 0x3ee378u: goto label_3ee378;
        case 0x3ee37cu: goto label_3ee37c;
        case 0x3ee380u: goto label_3ee380;
        case 0x3ee384u: goto label_3ee384;
        case 0x3ee388u: goto label_3ee388;
        case 0x3ee38cu: goto label_3ee38c;
        case 0x3ee390u: goto label_3ee390;
        case 0x3ee394u: goto label_3ee394;
        case 0x3ee398u: goto label_3ee398;
        case 0x3ee39cu: goto label_3ee39c;
        case 0x3ee3a0u: goto label_3ee3a0;
        case 0x3ee3a4u: goto label_3ee3a4;
        case 0x3ee3a8u: goto label_3ee3a8;
        case 0x3ee3acu: goto label_3ee3ac;
        case 0x3ee3b0u: goto label_3ee3b0;
        case 0x3ee3b4u: goto label_3ee3b4;
        case 0x3ee3b8u: goto label_3ee3b8;
        case 0x3ee3bcu: goto label_3ee3bc;
        case 0x3ee3c0u: goto label_3ee3c0;
        case 0x3ee3c4u: goto label_3ee3c4;
        case 0x3ee3c8u: goto label_3ee3c8;
        case 0x3ee3ccu: goto label_3ee3cc;
        case 0x3ee3d0u: goto label_3ee3d0;
        case 0x3ee3d4u: goto label_3ee3d4;
        case 0x3ee3d8u: goto label_3ee3d8;
        case 0x3ee3dcu: goto label_3ee3dc;
        case 0x3ee3e0u: goto label_3ee3e0;
        case 0x3ee3e4u: goto label_3ee3e4;
        case 0x3ee3e8u: goto label_3ee3e8;
        case 0x3ee3ecu: goto label_3ee3ec;
        case 0x3ee3f0u: goto label_3ee3f0;
        case 0x3ee3f4u: goto label_3ee3f4;
        case 0x3ee3f8u: goto label_3ee3f8;
        case 0x3ee3fcu: goto label_3ee3fc;
        case 0x3ee400u: goto label_3ee400;
        case 0x3ee404u: goto label_3ee404;
        case 0x3ee408u: goto label_3ee408;
        case 0x3ee40cu: goto label_3ee40c;
        case 0x3ee410u: goto label_3ee410;
        case 0x3ee414u: goto label_3ee414;
        case 0x3ee418u: goto label_3ee418;
        case 0x3ee41cu: goto label_3ee41c;
        case 0x3ee420u: goto label_3ee420;
        case 0x3ee424u: goto label_3ee424;
        case 0x3ee428u: goto label_3ee428;
        case 0x3ee42cu: goto label_3ee42c;
        case 0x3ee430u: goto label_3ee430;
        case 0x3ee434u: goto label_3ee434;
        case 0x3ee438u: goto label_3ee438;
        case 0x3ee43cu: goto label_3ee43c;
        case 0x3ee440u: goto label_3ee440;
        case 0x3ee444u: goto label_3ee444;
        case 0x3ee448u: goto label_3ee448;
        case 0x3ee44cu: goto label_3ee44c;
        case 0x3ee450u: goto label_3ee450;
        case 0x3ee454u: goto label_3ee454;
        case 0x3ee458u: goto label_3ee458;
        case 0x3ee45cu: goto label_3ee45c;
        case 0x3ee460u: goto label_3ee460;
        case 0x3ee464u: goto label_3ee464;
        case 0x3ee468u: goto label_3ee468;
        case 0x3ee46cu: goto label_3ee46c;
        case 0x3ee470u: goto label_3ee470;
        case 0x3ee474u: goto label_3ee474;
        case 0x3ee478u: goto label_3ee478;
        case 0x3ee47cu: goto label_3ee47c;
        case 0x3ee480u: goto label_3ee480;
        case 0x3ee484u: goto label_3ee484;
        case 0x3ee488u: goto label_3ee488;
        case 0x3ee48cu: goto label_3ee48c;
        case 0x3ee490u: goto label_3ee490;
        case 0x3ee494u: goto label_3ee494;
        case 0x3ee498u: goto label_3ee498;
        case 0x3ee49cu: goto label_3ee49c;
        case 0x3ee4a0u: goto label_3ee4a0;
        case 0x3ee4a4u: goto label_3ee4a4;
        default: break;
    }

    ctx->pc = 0x3ee338u;

label_3ee338:
    // 0x3ee338: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ee338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ee33c:
    // 0x3ee33c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3ee33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3ee340:
    // 0x3ee340: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3ee340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3ee344:
    // 0x3ee344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ee344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ee348:
    // 0x3ee348: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ee348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3ee34c:
    // 0x3ee34c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ee34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ee350:
    // 0x3ee350: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ee350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ee354:
    // 0x3ee354: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ee354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ee358:
    // 0x3ee358: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ee358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ee35c:
    // 0x3ee35c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ee35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ee360:
    // 0x3ee360: 0x40f809  jalr        $v0
label_3ee364:
    if (ctx->pc == 0x3EE364u) {
        ctx->pc = 0x3EE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE360u;
        // 0x3ee364: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE368u;
        goto label_3ee368;
    }
    ctx->pc = 0x3EE360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EE368u);
        ctx->pc = 0x3EE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE360u;
        // 0x3ee364: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE360u, 0x3EE368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EE368u;
label_3ee368:
    // 0x3ee368: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x3ee368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_3ee36c:
    // 0x3ee36c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ee36cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ee370:
    // 0x3ee370: 0x34630081  ori         $v1, $v1, 0x81
    ctx->pc = 0x3ee370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)129);
label_3ee374:
    // 0x3ee374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ee374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ee378:
    // 0x3ee378: 0xc0ea14c  jal         func_3A8530
label_3ee37c:
    if (ctx->pc == 0x3EE37Cu) {
        ctx->pc = 0x3EE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE378u;
        // 0x3ee37c: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE380u;
        goto label_3ee380;
    }
    ctx->pc = 0x3EE378u;
    SET_GPR_U32(ctx, 31, 0x3EE380u);
    ctx->pc = 0x3EE37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE378u;
    // 0x3ee37c: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EE378u, 0x3EE380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE380u;
label_3ee380:
    // 0x3ee380: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ee380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ee384:
    // 0x3ee384: 0xc0ea12a  jal         func_3A84A8
label_3ee388:
    if (ctx->pc == 0x3EE388u) {
        ctx->pc = 0x3EE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE384u;
        // 0x3ee388: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE38Cu;
        goto label_3ee38c;
    }
    ctx->pc = 0x3EE384u;
    SET_GPR_U32(ctx, 31, 0x3EE38Cu);
    ctx->pc = 0x3EE388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE384u;
    // 0x3ee388: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EE384u, 0x3EE38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE38Cu;
label_3ee38c:
    // 0x3ee38c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ee38cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ee390:
    // 0x3ee390: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ee390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ee394:
    // 0x3ee394: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ee394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ee398:
    // 0x3ee398: 0xc0ea12a  jal         func_3A84A8
label_3ee39c:
    if (ctx->pc == 0x3EE39Cu) {
        ctx->pc = 0x3EE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE398u;
        // 0x3ee39c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE3A0u;
        goto label_3ee3a0;
    }
    ctx->pc = 0x3EE398u;
    SET_GPR_U32(ctx, 31, 0x3EE3A0u);
    ctx->pc = 0x3EE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE398u;
    // 0x3ee39c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EE398u, 0x3EE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE3A0u;
label_3ee3a0:
    // 0x3ee3a0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ee3a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ee3a4:
    // 0x3ee3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee3a8:
    // 0x3ee3a8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3ee3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ee3ac:
    // 0x3ee3ac: 0xc0e858c  jal         func_3A1630
label_3ee3b0:
    if (ctx->pc == 0x3EE3B0u) {
        ctx->pc = 0x3EE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE3ACu;
        // 0x3ee3b0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE3B4u;
        goto label_3ee3b4;
    }
    ctx->pc = 0x3EE3ACu;
    SET_GPR_U32(ctx, 31, 0x3EE3B4u);
    ctx->pc = 0x3EE3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE3ACu;
    // 0x3ee3b0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EE3ACu, 0x3EE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE3B4u;
label_3ee3b4:
    // 0x3ee3b4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3ee3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ee3b8:
    // 0x3ee3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee3bc:
    // 0x3ee3bc: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3ee3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3ee3c0:
    // 0x3ee3c0: 0xc0e9132  jal         func_3A44C8
label_3ee3c4:
    if (ctx->pc == 0x3EE3C4u) {
        ctx->pc = 0x3EE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE3C0u;
        // 0x3ee3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE3C8u;
        goto label_3ee3c8;
    }
    ctx->pc = 0x3EE3C0u;
    SET_GPR_U32(ctx, 31, 0x3EE3C8u);
    ctx->pc = 0x3EE3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE3C0u;
    // 0x3ee3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EE3C0u, 0x3EE3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE3C8u;
label_3ee3c8:
    // 0x3ee3c8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3ee3c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ee3cc:
    // 0x3ee3cc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ee3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ee3d0:
    // 0x3ee3d0: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3ee3d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ee3d4:
    // 0x3ee3d4: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3ee3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3ee3d8:
    // 0x3ee3d8: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3ee3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3ee3dc:
    // 0x3ee3dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3ee3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ee3e0:
    // 0x3ee3e0: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x3ee3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
label_3ee3e4:
    // 0x3ee3e4: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3ee3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3ee3e8:
    // 0x3ee3e8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3ee3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3ee3ec:
    // 0x3ee3ec: 0xc0cd4ee  jal         func_3353B8
label_3ee3f0:
    if (ctx->pc == 0x3EE3F0u) {
        ctx->pc = 0x3EE3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE3ECu;
        // 0x3ee3f0: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE3F4u;
        goto label_3ee3f4;
    }
    ctx->pc = 0x3EE3ECu;
    SET_GPR_U32(ctx, 31, 0x3EE3F4u);
    ctx->pc = 0x3EE3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE3ECu;
    // 0x3ee3f0: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EE3ECu, 0x3EE3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE3F4u;
label_3ee3f4:
    // 0x3ee3f4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3ee3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3ee3f8:
    // 0x3ee3f8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x3ee3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3ee3fc:
    // 0x3ee3fc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3ee3fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ee400:
    // 0x3ee400: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3ee400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3ee404:
    // 0x3ee404: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x3ee404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_3ee408:
    // 0x3ee408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee40c:
    // 0x3ee40c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ee40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ee410:
    // 0x3ee410: 0xc0e8dee  jal         func_3A37B8
label_3ee414:
    if (ctx->pc == 0x3EE414u) {
        ctx->pc = 0x3EE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE410u;
        // 0x3ee414: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE418u;
        goto label_3ee418;
    }
    ctx->pc = 0x3EE410u;
    SET_GPR_U32(ctx, 31, 0x3EE418u);
    ctx->pc = 0x3EE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE410u;
    // 0x3ee414: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3EE410u, 0x3EE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE418u;
label_3ee418:
    // 0x3ee418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee41c:
    // 0x3ee41c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ee41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ee420:
    // 0x3ee420: 0xc0e8dee  jal         func_3A37B8
label_3ee424:
    if (ctx->pc == 0x3EE424u) {
        ctx->pc = 0x3EE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE420u;
        // 0x3ee424: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE428u;
        goto label_3ee428;
    }
    ctx->pc = 0x3EE420u;
    SET_GPR_U32(ctx, 31, 0x3EE428u);
    ctx->pc = 0x3EE424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE420u;
    // 0x3ee424: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3EE420u, 0x3EE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE428u;
label_3ee428:
    // 0x3ee428: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x3ee428u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
label_3ee42c:
    // 0x3ee42c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3ee42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3ee430:
    // 0x3ee430: 0x263191e0  addiu       $s1, $s1, -0x6E20
    ctx->pc = 0x3ee430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939104));
label_3ee434:
    // 0x3ee434: 0x24a55cb0  addiu       $a1, $a1, 0x5CB0
    ctx->pc = 0x3ee434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23728));
label_3ee438:
    // 0x3ee438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ee438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ee43c:
    // 0x3ee43c: 0xc050fda  jal         func_143F68
label_3ee440:
    if (ctx->pc == 0x3EE440u) {
        ctx->pc = 0x3EE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE43Cu;
        // 0x3ee440: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE444u;
        goto label_3ee444;
    }
    ctx->pc = 0x3EE43Cu;
    SET_GPR_U32(ctx, 31, 0x3EE444u);
    ctx->pc = 0x3EE440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE43Cu;
    // 0x3ee440: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x3EE43Cu, 0x3EE444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE444u;
label_3ee444:
    // 0x3ee444: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3ee444u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3ee448:
    // 0x3ee448: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3ee448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3ee44c:
    // 0x3ee44c: 0xae023190  sw          $v0, 0x3190($s0)
    ctx->pc = 0x3ee44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12688), GPR_U32(ctx, 2));
label_3ee450:
    // 0x3ee450: 0x24a55cd0  addiu       $a1, $a1, 0x5CD0
    ctx->pc = 0x3ee450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23760));
label_3ee454:
    // 0x3ee454: 0x26103190  addiu       $s0, $s0, 0x3190
    ctx->pc = 0x3ee454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12688));
label_3ee458:
    // 0x3ee458: 0xc050fda  jal         func_143F68
label_3ee45c:
    if (ctx->pc == 0x3EE45Cu) {
        ctx->pc = 0x3EE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE458u;
        // 0x3ee45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE460u;
        goto label_3ee460;
    }
    ctx->pc = 0x3EE458u;
    SET_GPR_U32(ctx, 31, 0x3EE460u);
    ctx->pc = 0x3EE45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE458u;
    // 0x3ee45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x3EE458u, 0x3EE460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE460u;
label_3ee460:
    // 0x3ee460: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3ee460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3ee464:
    // 0x3ee464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ee464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ee468:
    // 0x3ee468: 0x24a55cf0  addiu       $a1, $a1, 0x5CF0
    ctx->pc = 0x3ee468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23792));
label_3ee46c:
    // 0x3ee46c: 0xc050fda  jal         func_143F68
label_3ee470:
    if (ctx->pc == 0x3EE470u) {
        ctx->pc = 0x3EE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE46Cu;
        // 0x3ee470: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE474u;
        goto label_3ee474;
    }
    ctx->pc = 0x3EE46Cu;
    SET_GPR_U32(ctx, 31, 0x3EE474u);
    ctx->pc = 0x3EE470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE46Cu;
    // 0x3ee470: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x3EE46Cu, 0x3EE474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE474u;
label_3ee474:
    // 0x3ee474: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3ee474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3ee478:
    // 0x3ee478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ee478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ee47c:
    // 0x3ee47c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3ee47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3ee480:
    // 0x3ee480: 0xc050fda  jal         func_143F68
label_3ee484:
    if (ctx->pc == 0x3EE484u) {
        ctx->pc = 0x3EE484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE480u;
        // 0x3ee484: 0x24a55d10  addiu       $a1, $a1, 0x5D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE488u;
        goto label_3ee488;
    }
    ctx->pc = 0x3EE480u;
    SET_GPR_U32(ctx, 31, 0x3EE488u);
    ctx->pc = 0x3EE484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE480u;
    // 0x3ee484: 0x24a55d10  addiu       $a1, $a1, 0x5D10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x3EE480u, 0x3EE488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE488u;
label_3ee488:
    // 0x3ee488: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3ee488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_3ee48c:
    // 0x3ee48c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3ee48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ee490:
    // 0x3ee490: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3ee490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ee494:
    // 0x3ee494: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ee494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ee498:
    // 0x3ee498: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ee498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ee49c:
    // 0x3ee49c: 0x3e00008  jr          $ra
label_3ee4a0:
    if (ctx->pc == 0x3EE4A0u) {
        ctx->pc = 0x3EE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE49Cu;
        // 0x3ee4a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE4A4u;
        goto label_3ee4a4;
    }
    ctx->pc = 0x3EE49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE49Cu;
        // 0x3ee4a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE4A4u;
label_3ee4a4:
    // 0x3ee4a4: 0x0  nop
    ctx->pc = 0x3ee4a4u;
    // NOP
    ctx->pc = 0x3ee4a8u;
}

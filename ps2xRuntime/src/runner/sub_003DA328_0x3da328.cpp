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

// Function: sub_003DA328
// Address: 0x3da328 - 0x3da418
void sub_003DA328_0x3da328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA328_0x3da328");
#endif

    switch (ctx->pc) {
        case 0x3da328u: goto label_3da328;
        case 0x3da32cu: goto label_3da32c;
        case 0x3da330u: goto label_3da330;
        case 0x3da334u: goto label_3da334;
        case 0x3da338u: goto label_3da338;
        case 0x3da33cu: goto label_3da33c;
        case 0x3da340u: goto label_3da340;
        case 0x3da344u: goto label_3da344;
        case 0x3da348u: goto label_3da348;
        case 0x3da34cu: goto label_3da34c;
        case 0x3da350u: goto label_3da350;
        case 0x3da354u: goto label_3da354;
        case 0x3da358u: goto label_3da358;
        case 0x3da35cu: goto label_3da35c;
        case 0x3da360u: goto label_3da360;
        case 0x3da364u: goto label_3da364;
        case 0x3da368u: goto label_3da368;
        case 0x3da36cu: goto label_3da36c;
        case 0x3da370u: goto label_3da370;
        case 0x3da374u: goto label_3da374;
        case 0x3da378u: goto label_3da378;
        case 0x3da37cu: goto label_3da37c;
        case 0x3da380u: goto label_3da380;
        case 0x3da384u: goto label_3da384;
        case 0x3da388u: goto label_3da388;
        case 0x3da38cu: goto label_3da38c;
        case 0x3da390u: goto label_3da390;
        case 0x3da394u: goto label_3da394;
        case 0x3da398u: goto label_3da398;
        case 0x3da39cu: goto label_3da39c;
        case 0x3da3a0u: goto label_3da3a0;
        case 0x3da3a4u: goto label_3da3a4;
        case 0x3da3a8u: goto label_3da3a8;
        case 0x3da3acu: goto label_3da3ac;
        case 0x3da3b0u: goto label_3da3b0;
        case 0x3da3b4u: goto label_3da3b4;
        case 0x3da3b8u: goto label_3da3b8;
        case 0x3da3bcu: goto label_3da3bc;
        case 0x3da3c0u: goto label_3da3c0;
        case 0x3da3c4u: goto label_3da3c4;
        case 0x3da3c8u: goto label_3da3c8;
        case 0x3da3ccu: goto label_3da3cc;
        case 0x3da3d0u: goto label_3da3d0;
        case 0x3da3d4u: goto label_3da3d4;
        case 0x3da3d8u: goto label_3da3d8;
        case 0x3da3dcu: goto label_3da3dc;
        case 0x3da3e0u: goto label_3da3e0;
        case 0x3da3e4u: goto label_3da3e4;
        case 0x3da3e8u: goto label_3da3e8;
        case 0x3da3ecu: goto label_3da3ec;
        case 0x3da3f0u: goto label_3da3f0;
        case 0x3da3f4u: goto label_3da3f4;
        case 0x3da3f8u: goto label_3da3f8;
        case 0x3da3fcu: goto label_3da3fc;
        case 0x3da400u: goto label_3da400;
        case 0x3da404u: goto label_3da404;
        case 0x3da408u: goto label_3da408;
        case 0x3da40cu: goto label_3da40c;
        case 0x3da410u: goto label_3da410;
        case 0x3da414u: goto label_3da414;
        default: break;
    }

    ctx->pc = 0x3da328u;

label_3da328:
    // 0x3da328: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x3da328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_3da32c:
    // 0x3da32c: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x3da32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_3da330:
    // 0x3da330: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x3da330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_3da334:
    // 0x3da334: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3da334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3da338:
    // 0x3da338: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x3da338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_3da33c:
    // 0x3da33c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3da33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3da340:
    // 0x3da340: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x3da340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
label_3da344:
    // 0x3da344: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3da344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3da348:
    // 0x3da348: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3da348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3da34c:
    // 0x3da34c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3da34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3da350:
    // 0x3da350: 0x40f809  jalr        $v0
label_3da354:
    if (ctx->pc == 0x3DA354u) {
        ctx->pc = 0x3DA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA350u;
        // 0x3da354: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA358u;
        goto label_3da358;
    }
    ctx->pc = 0x3DA350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DA358u);
        ctx->pc = 0x3DA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA350u;
        // 0x3da354: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA350u, 0x3DA358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DA358u;
label_3da358:
    // 0x3da358: 0x24030404  addiu       $v1, $zero, 0x404
    ctx->pc = 0x3da358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3da35c:
    // 0x3da35c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3da35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3da360:
    // 0x3da360: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3da360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3da364:
    // 0x3da364: 0xc0e858c  jal         func_3A1630
label_3da368:
    if (ctx->pc == 0x3DA368u) {
        ctx->pc = 0x3DA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA364u;
        // 0x3da368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA36Cu;
        goto label_3da36c;
    }
    ctx->pc = 0x3DA364u;
    SET_GPR_U32(ctx, 31, 0x3DA36Cu);
    ctx->pc = 0x3DA368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA364u;
    // 0x3da368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DA364u, 0x3DA36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA36Cu;
label_3da36c:
    // 0x3da36c: 0xc0ea14c  jal         func_3A8530
label_3da370:
    if (ctx->pc == 0x3DA370u) {
        ctx->pc = 0x3DA370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA36Cu;
        // 0x3da370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA374u;
        goto label_3da374;
    }
    ctx->pc = 0x3DA36Cu;
    SET_GPR_U32(ctx, 31, 0x3DA374u);
    ctx->pc = 0x3DA370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA36Cu;
    // 0x3da370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DA36Cu, 0x3DA374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA374u;
label_3da374:
    // 0x3da374: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da378:
    // 0x3da378: 0xc0ea12a  jal         func_3A84A8
label_3da37c:
    if (ctx->pc == 0x3DA37Cu) {
        ctx->pc = 0x3DA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA378u;
        // 0x3da37c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA380u;
        goto label_3da380;
    }
    ctx->pc = 0x3DA378u;
    SET_GPR_U32(ctx, 31, 0x3DA380u);
    ctx->pc = 0x3DA37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA378u;
    // 0x3da37c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA378u, 0x3DA380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA380u;
label_3da380:
    // 0x3da380: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3da380u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da384:
    // 0x3da384: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da388:
    // 0x3da388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3da388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da38c:
    // 0x3da38c: 0xc0ea12a  jal         func_3A84A8
label_3da390:
    if (ctx->pc == 0x3DA390u) {
        ctx->pc = 0x3DA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA38Cu;
        // 0x3da390: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA394u;
        goto label_3da394;
    }
    ctx->pc = 0x3DA38Cu;
    SET_GPR_U32(ctx, 31, 0x3DA394u);
    ctx->pc = 0x3DA390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA38Cu;
    // 0x3da390: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA38Cu, 0x3DA394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA394u;
label_3da394:
    // 0x3da394: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3da394u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da398:
    // 0x3da398: 0x3c03ffe3  lui         $v1, 0xFFE3
    ctx->pc = 0x3da398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65507 << 16));
label_3da39c:
    // 0x3da39c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3da39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3da3a0:
    // 0x3da3a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3da3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3da3a4:
    // 0x3da3a4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3da3a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3da3a8:
    // 0x3da3a8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3da3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3da3ac:
    // 0x3da3ac: 0x3463aeff  ori         $v1, $v1, 0xAEFF
    ctx->pc = 0x3da3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44799);
label_3da3b0:
    // 0x3da3b0: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x3da3b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3da3b4:
    // 0x3da3b4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3da3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3da3b8:
    // 0x3da3b8: 0x26105128  addiu       $s0, $s0, 0x5128
    ctx->pc = 0x3da3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20776));
label_3da3bc:
    // 0x3da3bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3da3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3da3c0:
    // 0x3da3c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3da3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da3c4:
    // 0x3da3c4: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3da3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3da3c8:
    // 0x3da3c8: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3da3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3da3cc:
    // 0x3da3cc: 0x27a80460  addiu       $t0, $sp, 0x460
    ctx->pc = 0x3da3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3da3d0:
    // 0x3da3d0: 0x27a90470  addiu       $t1, $sp, 0x470
    ctx->pc = 0x3da3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3da3d4:
    // 0x3da3d4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3da3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3da3d8:
    // 0x3da3d8: 0xafa30440  sw          $v1, 0x440($sp)
    ctx->pc = 0x3da3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 3));
label_3da3dc:
    // 0x3da3dc: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3da3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3da3e0:
    // 0x3da3e0: 0xafaa0470  sw          $t2, 0x470($sp)
    ctx->pc = 0x3da3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 10));
label_3da3e4:
    // 0x3da3e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3da3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3da3e8:
    // 0x3da3e8: 0xc0ea004  jal         func_3A8010
label_3da3ec:
    if (ctx->pc == 0x3DA3ECu) {
        ctx->pc = 0x3DA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA3E8u;
        // 0x3da3ec: 0xafa00450  sw          $zero, 0x450($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA3F0u;
        goto label_3da3f0;
    }
    ctx->pc = 0x3DA3E8u;
    SET_GPR_U32(ctx, 31, 0x3DA3F0u);
    ctx->pc = 0x3DA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA3E8u;
    // 0x3da3ec: 0xafa00450  sw          $zero, 0x450($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3DA3E8u, 0x3DA3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA3F0u;
label_3da3f0:
    // 0x3da3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da3f4:
    // 0x3da3f4: 0xc0f15bc  jal         func_3C56F0
label_3da3f8:
    if (ctx->pc == 0x3DA3F8u) {
        ctx->pc = 0x3DA3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA3F4u;
        // 0x3da3f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA3FCu;
        goto label_3da3fc;
    }
    ctx->pc = 0x3DA3F4u;
    SET_GPR_U32(ctx, 31, 0x3DA3FCu);
    ctx->pc = 0x3DA3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA3F4u;
    // 0x3da3f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DA3F4u, 0x3DA3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA3FCu;
label_3da3fc:
    // 0x3da3fc: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x3da3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3da400:
    // 0x3da400: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x3da400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3da404:
    // 0x3da404: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x3da404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3da408:
    // 0x3da408: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x3da408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_3da40c:
    // 0x3da40c: 0x3e00008  jr          $ra
label_3da410:
    if (ctx->pc == 0x3DA410u) {
        ctx->pc = 0x3DA410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA40Cu;
        // 0x3da410: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA414u;
        goto label_3da414;
    }
    ctx->pc = 0x3DA40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA40Cu;
        // 0x3da410: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA414u;
label_3da414:
    // 0x3da414: 0x0  nop
    ctx->pc = 0x3da414u;
    // NOP
    ctx->pc = 0x3da418u;
}

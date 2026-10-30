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

// Function: sub_003C0330
// Address: 0x3c0330 - 0x3c04e0
void sub_003C0330_0x3c0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0330_0x3c0330");
#endif

    switch (ctx->pc) {
        case 0x3c0330u: goto label_3c0330;
        case 0x3c0334u: goto label_3c0334;
        case 0x3c0338u: goto label_3c0338;
        case 0x3c033cu: goto label_3c033c;
        case 0x3c0340u: goto label_3c0340;
        case 0x3c0344u: goto label_3c0344;
        case 0x3c0348u: goto label_3c0348;
        case 0x3c034cu: goto label_3c034c;
        case 0x3c0350u: goto label_3c0350;
        case 0x3c0354u: goto label_3c0354;
        case 0x3c0358u: goto label_3c0358;
        case 0x3c035cu: goto label_3c035c;
        case 0x3c0360u: goto label_3c0360;
        case 0x3c0364u: goto label_3c0364;
        case 0x3c0368u: goto label_3c0368;
        case 0x3c036cu: goto label_3c036c;
        case 0x3c0370u: goto label_3c0370;
        case 0x3c0374u: goto label_3c0374;
        case 0x3c0378u: goto label_3c0378;
        case 0x3c037cu: goto label_3c037c;
        case 0x3c0380u: goto label_3c0380;
        case 0x3c0384u: goto label_3c0384;
        case 0x3c0388u: goto label_3c0388;
        case 0x3c038cu: goto label_3c038c;
        case 0x3c0390u: goto label_3c0390;
        case 0x3c0394u: goto label_3c0394;
        case 0x3c0398u: goto label_3c0398;
        case 0x3c039cu: goto label_3c039c;
        case 0x3c03a0u: goto label_3c03a0;
        case 0x3c03a4u: goto label_3c03a4;
        case 0x3c03a8u: goto label_3c03a8;
        case 0x3c03acu: goto label_3c03ac;
        case 0x3c03b0u: goto label_3c03b0;
        case 0x3c03b4u: goto label_3c03b4;
        case 0x3c03b8u: goto label_3c03b8;
        case 0x3c03bcu: goto label_3c03bc;
        case 0x3c03c0u: goto label_3c03c0;
        case 0x3c03c4u: goto label_3c03c4;
        case 0x3c03c8u: goto label_3c03c8;
        case 0x3c03ccu: goto label_3c03cc;
        case 0x3c03d0u: goto label_3c03d0;
        case 0x3c03d4u: goto label_3c03d4;
        case 0x3c03d8u: goto label_3c03d8;
        case 0x3c03dcu: goto label_3c03dc;
        case 0x3c03e0u: goto label_3c03e0;
        case 0x3c03e4u: goto label_3c03e4;
        case 0x3c03e8u: goto label_3c03e8;
        case 0x3c03ecu: goto label_3c03ec;
        case 0x3c03f0u: goto label_3c03f0;
        case 0x3c03f4u: goto label_3c03f4;
        case 0x3c03f8u: goto label_3c03f8;
        case 0x3c03fcu: goto label_3c03fc;
        case 0x3c0400u: goto label_3c0400;
        case 0x3c0404u: goto label_3c0404;
        case 0x3c0408u: goto label_3c0408;
        case 0x3c040cu: goto label_3c040c;
        case 0x3c0410u: goto label_3c0410;
        case 0x3c0414u: goto label_3c0414;
        case 0x3c0418u: goto label_3c0418;
        case 0x3c041cu: goto label_3c041c;
        case 0x3c0420u: goto label_3c0420;
        case 0x3c0424u: goto label_3c0424;
        case 0x3c0428u: goto label_3c0428;
        case 0x3c042cu: goto label_3c042c;
        case 0x3c0430u: goto label_3c0430;
        case 0x3c0434u: goto label_3c0434;
        case 0x3c0438u: goto label_3c0438;
        case 0x3c043cu: goto label_3c043c;
        case 0x3c0440u: goto label_3c0440;
        case 0x3c0444u: goto label_3c0444;
        case 0x3c0448u: goto label_3c0448;
        case 0x3c044cu: goto label_3c044c;
        case 0x3c0450u: goto label_3c0450;
        case 0x3c0454u: goto label_3c0454;
        case 0x3c0458u: goto label_3c0458;
        case 0x3c045cu: goto label_3c045c;
        case 0x3c0460u: goto label_3c0460;
        case 0x3c0464u: goto label_3c0464;
        case 0x3c0468u: goto label_3c0468;
        case 0x3c046cu: goto label_3c046c;
        case 0x3c0470u: goto label_3c0470;
        case 0x3c0474u: goto label_3c0474;
        case 0x3c0478u: goto label_3c0478;
        case 0x3c047cu: goto label_3c047c;
        case 0x3c0480u: goto label_3c0480;
        case 0x3c0484u: goto label_3c0484;
        case 0x3c0488u: goto label_3c0488;
        case 0x3c048cu: goto label_3c048c;
        case 0x3c0490u: goto label_3c0490;
        case 0x3c0494u: goto label_3c0494;
        case 0x3c0498u: goto label_3c0498;
        case 0x3c049cu: goto label_3c049c;
        case 0x3c04a0u: goto label_3c04a0;
        case 0x3c04a4u: goto label_3c04a4;
        case 0x3c04a8u: goto label_3c04a8;
        case 0x3c04acu: goto label_3c04ac;
        case 0x3c04b0u: goto label_3c04b0;
        case 0x3c04b4u: goto label_3c04b4;
        case 0x3c04b8u: goto label_3c04b8;
        case 0x3c04bcu: goto label_3c04bc;
        case 0x3c04c0u: goto label_3c04c0;
        case 0x3c04c4u: goto label_3c04c4;
        case 0x3c04c8u: goto label_3c04c8;
        case 0x3c04ccu: goto label_3c04cc;
        case 0x3c04d0u: goto label_3c04d0;
        case 0x3c04d4u: goto label_3c04d4;
        case 0x3c04d8u: goto label_3c04d8;
        case 0x3c04dcu: goto label_3c04dc;
        default: break;
    }

    ctx->pc = 0x3c0330u;

label_3c0330:
    // 0x3c0330: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3c0330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3c0334:
    // 0x3c0334: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3c0334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3c0338:
    // 0x3c0338: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3c0338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3c033c:
    // 0x3c033c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3c033cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c0340:
    // 0x3c0340: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c0340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c0344:
    // 0x3c0344: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c0344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c0348:
    // 0x3c0348: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c0348u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c034c:
    // 0x3c034c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3c034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3c0350:
    // 0x3c0350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c0350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c0354:
    // 0x3c0354: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3c0354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3c0358:
    // 0x3c0358: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c0358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c035c:
    // 0x3c035c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c035cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0360:
    // 0x3c0360: 0xc0ea12a  jal         func_3A84A8
label_3c0364:
    if (ctx->pc == 0x3C0364u) {
        ctx->pc = 0x3C0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0360u;
        // 0x3c0364: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0368u;
        goto label_3c0368;
    }
    ctx->pc = 0x3C0360u;
    SET_GPR_U32(ctx, 31, 0x3C0368u);
    ctx->pc = 0x3C0364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0360u;
    // 0x3c0364: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C0360u, 0x3C0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0368u;
label_3c0368:
    // 0x3c0368: 0xc0ea14c  jal         func_3A8530
label_3c036c:
    if (ctx->pc == 0x3C036Cu) {
        ctx->pc = 0x3C036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0368u;
        // 0x3c036c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0370u;
        goto label_3c0370;
    }
    ctx->pc = 0x3C0368u;
    SET_GPR_U32(ctx, 31, 0x3C0370u);
    ctx->pc = 0x3C036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0368u;
    // 0x3c036c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C0368u, 0x3C0370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0370u;
label_3c0370:
    // 0x3c0370: 0xc08a61a  jal         func_229868
label_3c0374:
    if (ctx->pc == 0x3C0374u) {
        ctx->pc = 0x3C0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0370u;
        // 0x3c0374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0378u;
        goto label_3c0378;
    }
    ctx->pc = 0x3C0370u;
    SET_GPR_U32(ctx, 31, 0x3C0378u);
    ctx->pc = 0x3C0374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0370u;
    // 0x3c0374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3C0370u, 0x3C0378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0378u;
label_3c0378:
    // 0x3c0378: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3c0378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c037c:
    // 0x3c037c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3c037cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3c0380:
    // 0x3c0380: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3c0380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3c0384:
    // 0x3c0384: 0x40f809  jalr        $v0
label_3c0388:
    if (ctx->pc == 0x3C0388u) {
        ctx->pc = 0x3C0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0384u;
        // 0x3c0388: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C038Cu;
        goto label_3c038c;
    }
    ctx->pc = 0x3C0384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C038Cu);
        ctx->pc = 0x3C0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0384u;
        // 0x3c0388: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0384u, 0x3C038Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C038Cu;
label_3c038c:
    // 0x3c038c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3c038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3c0390:
    // 0x3c0390: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
label_3c0394:
    if (ctx->pc == 0x3C0394u) {
        ctx->pc = 0x3C0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0390u;
        // 0x3c0394: 0x8e830054  lw          $v1, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0398u;
        goto label_3c0398;
    }
    ctx->pc = 0x3C0390u;
    {
        const bool branch_taken_0x3c0390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0390) {
            ctx->pc = 0x3C0394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0390u;
            // 0x3c0394: 0x8e830054  lw          $v1, 0x54($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C04A8u;
            goto label_3c04a8;
        }
    }
    ctx->pc = 0x3C0398u;
label_3c0398:
    // 0x3c0398: 0xc0e8630  jal         func_3A18C0
label_3c039c:
    if (ctx->pc == 0x3C039Cu) {
        ctx->pc = 0x3C039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0398u;
        // 0x3c039c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C03A0u;
        goto label_3c03a0;
    }
    ctx->pc = 0x3C0398u;
    SET_GPR_U32(ctx, 31, 0x3C03A0u);
    ctx->pc = 0x3C039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0398u;
    // 0x3c039c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3C0398u, 0x3C03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C03A0u;
label_3c03a0:
    // 0x3c03a0: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
label_3c03a4:
    if (ctx->pc == 0x3C03A4u) {
        ctx->pc = 0x3C03A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03A0u;
        // 0x3c03a4: 0x8e830054  lw          $v1, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C03A8u;
        goto label_3c03a8;
    }
    ctx->pc = 0x3C03A0u;
    {
        const bool branch_taken_0x3c03a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c03a0) {
            ctx->pc = 0x3C03A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C03A0u;
            // 0x3c03a4: 0x8e830054  lw          $v1, 0x54($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C04A8u;
            goto label_3c04a8;
        }
    }
    ctx->pc = 0x3C03A8u;
label_3c03a8:
    // 0x3c03a8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3c03a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c03ac:
    // 0x3c03ac: 0xc0e8630  jal         func_3A18C0
label_3c03b0:
    if (ctx->pc == 0x3C03B0u) {
        ctx->pc = 0x3C03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03ACu;
        // 0x3c03b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C03B4u;
        goto label_3c03b4;
    }
    ctx->pc = 0x3C03ACu;
    SET_GPR_U32(ctx, 31, 0x3C03B4u);
    ctx->pc = 0x3C03B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C03ACu;
    // 0x3c03b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3C03ACu, 0x3C03B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C03B4u;
label_3c03b4:
    // 0x3c03b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c03b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c03b8:
    // 0x3c03b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c03b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c03bc:
    // 0x3c03bc: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3c03bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_3c03c0:
    // 0x3c03c0: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x3c03c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_3c03c4:
    // 0x3c03c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c03c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c03c8:
    // 0x3c03c8: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3c03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3c03cc:
    // 0x3c03cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3c03ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3c03d0:
    // 0x3c03d0: 0xc0e8616  jal         func_3A1858
label_3c03d4:
    if (ctx->pc == 0x3C03D4u) {
        ctx->pc = 0x3C03D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03D0u;
        // 0x3c03d4: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C03D8u;
        goto label_3c03d8;
    }
    ctx->pc = 0x3C03D0u;
    SET_GPR_U32(ctx, 31, 0x3C03D8u);
    ctx->pc = 0x3C03D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C03D0u;
    // 0x3c03d4: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3C03D0u, 0x3C03D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C03D8u;
label_3c03d8:
    // 0x3c03d8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3c03d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c03dc:
    // 0x3c03dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c03dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c03e0:
    // 0x3c03e0: 0xc0e911e  jal         func_3A4478
label_3c03e4:
    if (ctx->pc == 0x3C03E4u) {
        ctx->pc = 0x3C03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03E0u;
        // 0x3c03e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C03E8u;
        goto label_3c03e8;
    }
    ctx->pc = 0x3C03E0u;
    SET_GPR_U32(ctx, 31, 0x3C03E8u);
    ctx->pc = 0x3C03E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C03E0u;
    // 0x3c03e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3C03E0u, 0x3C03E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C03E8u;
label_3c03e8:
    // 0x3c03e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c03e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c03ec:
    // 0x3c03ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3c03ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c03f0:
    // 0x3c03f0: 0xc136b30  jal         func_4DACC0
label_3c03f4:
    if (ctx->pc == 0x3C03F4u) {
        ctx->pc = 0x3C03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03F0u;
        // 0x3c03f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C03F8u;
        goto label_3c03f8;
    }
    ctx->pc = 0x3C03F0u;
    SET_GPR_U32(ctx, 31, 0x3C03F8u);
    ctx->pc = 0x3C03F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C03F0u;
    // 0x3c03f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3C03F0u, 0x3C03F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C03F8u;
label_3c03f8:
    // 0x3c03f8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c03f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c03fc:
    // 0x3c03fc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c03fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c0400:
    // 0x3c0400: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c0400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c0404:
    // 0x3c0404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c0404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c0408:
    // 0x3c0408: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c0408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c040c:
    // 0x3c040c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3c040cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3c0410:
    // 0x3c0410: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3c0410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c0414:
    // 0x3c0414: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3c0414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3c0418:
    // 0x3c0418: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3c0418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3c041c:
    // 0x3c041c: 0x60f809  jalr        $v1
label_3c0420:
    if (ctx->pc == 0x3C0420u) {
        ctx->pc = 0x3C0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C041Cu;
        // 0x3c0420: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0424u;
        goto label_3c0424;
    }
    ctx->pc = 0x3C041Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C0424u);
        ctx->pc = 0x3C0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C041Cu;
        // 0x3c0420: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C041Cu, 0x3C0424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0424u;
label_3c0424:
    // 0x3c0424: 0x3c01c11c  lui         $at, 0xC11C
    ctx->pc = 0x3c0424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49436 << 16));
label_3c0428:
    // 0x3c0428: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c0428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c042c:
    // 0x3c042c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c042cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0430:
    // 0x3c0430: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3c0430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3c0434:
    // 0x3c0434: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c0434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c0438:
    // 0x3c0438: 0xc136b24  jal         func_4DAC90
label_3c043c:
    if (ctx->pc == 0x3C043Cu) {
        ctx->pc = 0x3C043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0438u;
        // 0x3c043c: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0440u;
        goto label_3c0440;
    }
    ctx->pc = 0x3C0438u;
    SET_GPR_U32(ctx, 31, 0x3C0440u);
    ctx->pc = 0x3C043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0438u;
    // 0x3c043c: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C0438u, 0x3C0440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0440u;
label_3c0440:
    // 0x3c0440: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c0440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c0444:
    // 0x3c0444: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x3c0444u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_3c0448:
    // 0x3c0448: 0x2652b8b8  addiu       $s2, $s2, -0x4748
    ctx->pc = 0x3c0448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_3c044c:
    // 0x3c044c: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x3c044cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
label_3c0450:
    // 0x3c0450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c0450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0454:
    // 0x3c0454: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3c0454u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_3c0458:
    // 0x3c0458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c045c:
    // 0x3c045c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c0460:
    // 0x3c0460: 0x3c01c090  lui         $at, 0xC090
    ctx->pc = 0x3c0460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49296 << 16));
label_3c0464:
    // 0x3c0464: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c0464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c0468:
    // 0x3c0468: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x3c0468u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c046c:
    // 0x3c046c: 0x86110078  lh          $s1, 0x78($s0)
    ctx->pc = 0x3c046cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
label_3c0470:
    // 0x3c0470: 0x26100078  addiu       $s0, $s0, 0x78
    ctx->pc = 0x3c0470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_3c0474:
    // 0x3c0474: 0xc0cd518  jal         func_335460
label_3c0478:
    if (ctx->pc == 0x3C0478u) {
        ctx->pc = 0x3C0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0474u;
        // 0x3c0478: 0x2918821  addu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C047Cu;
        goto label_3c047c;
    }
    ctx->pc = 0x3C0474u;
    SET_GPR_U32(ctx, 31, 0x3C047Cu);
    ctx->pc = 0x3C0478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0474u;
    // 0x3c0478: 0x2918821  addu        $s1, $s4, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C0474u, 0x3C047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C047Cu;
label_3c047c:
    // 0x3c047c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c047cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c0480:
    // 0x3c0480: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c0480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0484:
    // 0x3c0484: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c0484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0488:
    // 0x3c0488: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x3c0488u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_3c048c:
    // 0x3c048c: 0xc0cd55c  jal         func_335570
label_3c0490:
    if (ctx->pc == 0x3C0490u) {
        ctx->pc = 0x3C0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C048Cu;
        // 0x3c0490: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0494u;
        goto label_3c0494;
    }
    ctx->pc = 0x3C048Cu;
    SET_GPR_U32(ctx, 31, 0x3C0494u);
    ctx->pc = 0x3C0490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C048Cu;
    // 0x3c0490: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3C048Cu, 0x3C0494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0494u;
label_3c0494:
    // 0x3c0494: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3c0494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c0498:
    // 0x3c0498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c049c:
    // 0x3c049c: 0x40f809  jalr        $v0
label_3c04a0:
    if (ctx->pc == 0x3C04A0u) {
        ctx->pc = 0x3C04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C049Cu;
        // 0x3c04a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C04A4u;
        goto label_3c04a4;
    }
    ctx->pc = 0x3C049Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C04A4u);
        ctx->pc = 0x3C04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C049Cu;
        // 0x3c04a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C049Cu, 0x3C04A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C04A4u;
label_3c04a4:
    // 0x3c04a4: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x3c04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3c04a8:
    // 0x3c04a8: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3c04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3c04ac:
    // 0x3c04ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c04acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c04b0:
    // 0x3c04b0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3c04b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c04b4:
    // 0x3c04b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c04b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3c04b8:
    // 0x3c04b8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3c04b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c04bc:
    // 0x3c04bc: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x3c04bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_3c04c0:
    // 0x3c04c0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3c04c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c04c4:
    // 0x3c04c4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3c04c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c04c8:
    // 0x3c04c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c04c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c04cc:
    // 0x3c04cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c04ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c04d0:
    // 0x3c04d0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3c04d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c04d4:
    // 0x3c04d4: 0x3e00008  jr          $ra
label_3c04d8:
    if (ctx->pc == 0x3C04D8u) {
        ctx->pc = 0x3C04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04D4u;
        // 0x3c04d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C04DCu;
        goto label_3c04dc;
    }
    ctx->pc = 0x3C04D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04D4u;
        // 0x3c04d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C04D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C04DCu;
label_3c04dc:
    // 0x3c04dc: 0x0  nop
    ctx->pc = 0x3c04dcu;
    // NOP
    ctx->pc = 0x3c04e0u;
}

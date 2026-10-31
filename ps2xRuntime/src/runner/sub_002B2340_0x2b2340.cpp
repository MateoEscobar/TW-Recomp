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

// Function: sub_002B2340
// Address: 0x2b2340 - 0x2b2410
void sub_002B2340_0x2b2340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2340_0x2b2340");
#endif

    switch (ctx->pc) {
        case 0x2b2340u: goto label_2b2340;
        case 0x2b2344u: goto label_2b2344;
        case 0x2b2348u: goto label_2b2348;
        case 0x2b234cu: goto label_2b234c;
        case 0x2b2350u: goto label_2b2350;
        case 0x2b2354u: goto label_2b2354;
        case 0x2b2358u: goto label_2b2358;
        case 0x2b235cu: goto label_2b235c;
        case 0x2b2360u: goto label_2b2360;
        case 0x2b2364u: goto label_2b2364;
        case 0x2b2368u: goto label_2b2368;
        case 0x2b236cu: goto label_2b236c;
        case 0x2b2370u: goto label_2b2370;
        case 0x2b2374u: goto label_2b2374;
        case 0x2b2378u: goto label_2b2378;
        case 0x2b237cu: goto label_2b237c;
        case 0x2b2380u: goto label_2b2380;
        case 0x2b2384u: goto label_2b2384;
        case 0x2b2388u: goto label_2b2388;
        case 0x2b238cu: goto label_2b238c;
        case 0x2b2390u: goto label_2b2390;
        case 0x2b2394u: goto label_2b2394;
        case 0x2b2398u: goto label_2b2398;
        case 0x2b239cu: goto label_2b239c;
        case 0x2b23a0u: goto label_2b23a0;
        case 0x2b23a4u: goto label_2b23a4;
        case 0x2b23a8u: goto label_2b23a8;
        case 0x2b23acu: goto label_2b23ac;
        case 0x2b23b0u: goto label_2b23b0;
        case 0x2b23b4u: goto label_2b23b4;
        case 0x2b23b8u: goto label_2b23b8;
        case 0x2b23bcu: goto label_2b23bc;
        case 0x2b23c0u: goto label_2b23c0;
        case 0x2b23c4u: goto label_2b23c4;
        case 0x2b23c8u: goto label_2b23c8;
        case 0x2b23ccu: goto label_2b23cc;
        case 0x2b23d0u: goto label_2b23d0;
        case 0x2b23d4u: goto label_2b23d4;
        case 0x2b23d8u: goto label_2b23d8;
        case 0x2b23dcu: goto label_2b23dc;
        case 0x2b23e0u: goto label_2b23e0;
        case 0x2b23e4u: goto label_2b23e4;
        case 0x2b23e8u: goto label_2b23e8;
        case 0x2b23ecu: goto label_2b23ec;
        case 0x2b23f0u: goto label_2b23f0;
        case 0x2b23f4u: goto label_2b23f4;
        case 0x2b23f8u: goto label_2b23f8;
        case 0x2b23fcu: goto label_2b23fc;
        case 0x2b2400u: goto label_2b2400;
        case 0x2b2404u: goto label_2b2404;
        case 0x2b2408u: goto label_2b2408;
        case 0x2b240cu: goto label_2b240c;
        default: break;
    }

    ctx->pc = 0x2b2340u;

label_2b2340:
    // 0x2b2340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b2344:
    // 0x2b2344: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b2344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2b2348:
    // 0x2b2348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b234c:
    // 0x2b234c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b234cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b2350:
    // 0x2b2350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b2354:
    // 0x2b2354: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b2354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2358:
    // 0x2b2358: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2b2358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b235c:
    // 0x2b235c: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2b235cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
label_2b2360:
    // 0x2b2360: 0x92040024  lbu         $a0, 0x24($s0)
    ctx->pc = 0x2b2360u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
label_2b2364:
    // 0x2b2364: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b2364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2368:
    // 0x2b2368: 0xa0440265  sb          $a0, 0x265($v0)
    ctx->pc = 0x2b2368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 4));
label_2b236c:
    // 0x2b236c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b236cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2370:
    // 0x2b2370: 0xc05959e  jal         func_165678
label_2b2374:
    if (ctx->pc == 0x2B2374u) {
        ctx->pc = 0x2B2374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2370u;
        // 0x2b2374: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2378u;
        goto label_2b2378;
    }
    ctx->pc = 0x2B2370u;
    SET_GPR_U32(ctx, 31, 0x2B2378u);
    ctx->pc = 0x2B2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2370u;
    // 0x2b2374: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2B2370u, 0x2B2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2378u;
label_2b2378:
    // 0x2b2378: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b2378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b237c:
    // 0x2b237c: 0x5220001a  beql        $s1, $zero, . + 4 + (0x1A << 2)
label_2b2380:
    if (ctx->pc == 0x2B2380u) {
        ctx->pc = 0x2B2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B237Cu;
        // 0x2b2380: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2384u;
        goto label_2b2384;
    }
    ctx->pc = 0x2B237Cu;
    {
        const bool branch_taken_0x2b237c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b237c) {
            ctx->pc = 0x2B2380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B237Cu;
            // 0x2b2380: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B23E8u;
            goto label_2b23e8;
        }
    }
    ctx->pc = 0x2B2384u;
label_2b2384:
    // 0x2b2384: 0xc0a3678  jal         func_28D9E0
label_2b2388:
    if (ctx->pc == 0x2B2388u) {
        ctx->pc = 0x2B2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2384u;
        // 0x2b2388: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B238Cu;
        goto label_2b238c;
    }
    ctx->pc = 0x2B2384u;
    SET_GPR_U32(ctx, 31, 0x2B238Cu);
    ctx->pc = 0x2B2388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2384u;
    // 0x2b2388: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2B2384u, 0x2B238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B238Cu;
label_2b238c:
    // 0x2b238c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_2b2390:
    if (ctx->pc == 0x2B2390u) {
        ctx->pc = 0x2B2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B238Cu;
        // 0x2b2390: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2394u;
        goto label_2b2394;
    }
    ctx->pc = 0x2B238Cu;
    {
        const bool branch_taken_0x2b238c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b238c) {
            ctx->pc = 0x2B2390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B238Cu;
            // 0x2b2390: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B23E8u;
            goto label_2b23e8;
        }
    }
    ctx->pc = 0x2B2394u;
label_2b2394:
    // 0x2b2394: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b2394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2398:
    // 0x2b2398: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2b2398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b239c:
    // 0x2b239c: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2b239cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2b23a0:
    // 0x2b23a0: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
label_2b23a4:
    if (ctx->pc == 0x2B23A4u) {
        ctx->pc = 0x2B23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23A0u;
        // 0x2b23a4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23A8u;
        goto label_2b23a8;
    }
    ctx->pc = 0x2B23A0u;
    {
        const bool branch_taken_0x2b23a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b23a0) {
            ctx->pc = 0x2B23A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B23A0u;
            // 0x2b23a4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B23E8u;
            goto label_2b23e8;
        }
    }
    ctx->pc = 0x2B23A8u;
label_2b23a8:
    // 0x2b23a8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2b23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2b23ac:
    // 0x2b23ac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2b23acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2b23b0:
    // 0x2b23b0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b23b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2b23b4:
    // 0x2b23b4: 0x40f809  jalr        $v0
label_2b23b8:
    if (ctx->pc == 0x2B23B8u) {
        ctx->pc = 0x2B23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23B4u;
        // 0x2b23b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23BCu;
        goto label_2b23bc;
    }
    ctx->pc = 0x2B23B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B23BCu);
        ctx->pc = 0x2B23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23B4u;
        // 0x2b23b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B23B4u, 0x2B23BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B23BCu;
label_2b23bc:
    // 0x2b23bc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b23bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b23c0:
    // 0x2b23c0: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_2b23c4:
    if (ctx->pc == 0x2B23C4u) {
        ctx->pc = 0x2B23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23C0u;
        // 0x2b23c4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23C8u;
        goto label_2b23c8;
    }
    ctx->pc = 0x2B23C0u;
    {
        const bool branch_taken_0x2b23c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b23c0) {
            ctx->pc = 0x2B23C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B23C0u;
            // 0x2b23c4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B23E8u;
            goto label_2b23e8;
        }
    }
    ctx->pc = 0x2B23C8u;
label_2b23c8:
    // 0x2b23c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b23c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b23cc:
    // 0x2b23cc: 0xc08750a  jal         func_21D428
label_2b23d0:
    if (ctx->pc == 0x2B23D0u) {
        ctx->pc = 0x2B23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23CCu;
        // 0x2b23d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23D4u;
        goto label_2b23d4;
    }
    ctx->pc = 0x2B23CCu;
    SET_GPR_U32(ctx, 31, 0x2B23D4u);
    ctx->pc = 0x2B23D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B23CCu;
    // 0x2b23d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2B23CCu, 0x2B23D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B23D4u;
label_2b23d4:
    // 0x2b23d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b23d8:
    // 0x2b23d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b23d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b23dc:
    // 0x2b23dc: 0xc0a580a  jal         func_296028
label_2b23e0:
    if (ctx->pc == 0x2B23E0u) {
        ctx->pc = 0x2B23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23DCu;
        // 0x2b23e0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23E4u;
        goto label_2b23e4;
    }
    ctx->pc = 0x2B23DCu;
    SET_GPR_U32(ctx, 31, 0x2B23E4u);
    ctx->pc = 0x2B23E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B23DCu;
    // 0x2b23e0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296028u, 0x2B23DCu, 0x2B23E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B23E4u;
label_2b23e4:
    // 0x2b23e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2b23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2b23e8:
    // 0x2b23e8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2b23e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2b23ec:
    // 0x2b23ec: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2b23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2b23f0:
    // 0x2b23f0: 0x60f809  jalr        $v1
label_2b23f4:
    if (ctx->pc == 0x2B23F4u) {
        ctx->pc = 0x2B23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23F0u;
        // 0x2b23f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23F8u;
        goto label_2b23f8;
    }
    ctx->pc = 0x2B23F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B23F8u);
        ctx->pc = 0x2B23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23F0u;
        // 0x2b23f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B23F0u, 0x2B23F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B23F8u;
label_2b23f8:
    // 0x2b23f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b23f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b23fc:
    // 0x2b23fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b23fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b2400:
    // 0x2b2400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2404:
    // 0x2b2404: 0x3e00008  jr          $ra
label_2b2408:
    if (ctx->pc == 0x2B2408u) {
        ctx->pc = 0x2B2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2404u;
        // 0x2b2408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B240Cu;
        goto label_2b240c;
    }
    ctx->pc = 0x2B2404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2404u;
        // 0x2b2408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B240Cu;
label_2b240c:
    // 0x2b240c: 0x0  nop
    ctx->pc = 0x2b240cu;
    // NOP
    ctx->pc = 0x2b2410u;
}

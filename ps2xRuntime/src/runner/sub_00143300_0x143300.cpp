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

// Function: sub_00143300
// Address: 0x143300 - 0x143540
void sub_00143300_0x143300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143300_0x143300");
#endif

    switch (ctx->pc) {
        case 0x143300u: goto label_143300;
        case 0x143304u: goto label_143304;
        case 0x143308u: goto label_143308;
        case 0x14330cu: goto label_14330c;
        case 0x143310u: goto label_143310;
        case 0x143314u: goto label_143314;
        case 0x143318u: goto label_143318;
        case 0x14331cu: goto label_14331c;
        case 0x143320u: goto label_143320;
        case 0x143324u: goto label_143324;
        case 0x143328u: goto label_143328;
        case 0x14332cu: goto label_14332c;
        case 0x143330u: goto label_143330;
        case 0x143334u: goto label_143334;
        case 0x143338u: goto label_143338;
        case 0x14333cu: goto label_14333c;
        case 0x143340u: goto label_143340;
        case 0x143344u: goto label_143344;
        case 0x143348u: goto label_143348;
        case 0x14334cu: goto label_14334c;
        case 0x143350u: goto label_143350;
        case 0x143354u: goto label_143354;
        case 0x143358u: goto label_143358;
        case 0x14335cu: goto label_14335c;
        case 0x143360u: goto label_143360;
        case 0x143364u: goto label_143364;
        case 0x143368u: goto label_143368;
        case 0x14336cu: goto label_14336c;
        case 0x143370u: goto label_143370;
        case 0x143374u: goto label_143374;
        case 0x143378u: goto label_143378;
        case 0x14337cu: goto label_14337c;
        case 0x143380u: goto label_143380;
        case 0x143384u: goto label_143384;
        case 0x143388u: goto label_143388;
        case 0x14338cu: goto label_14338c;
        case 0x143390u: goto label_143390;
        case 0x143394u: goto label_143394;
        case 0x143398u: goto label_143398;
        case 0x14339cu: goto label_14339c;
        case 0x1433a0u: goto label_1433a0;
        case 0x1433a4u: goto label_1433a4;
        case 0x1433a8u: goto label_1433a8;
        case 0x1433acu: goto label_1433ac;
        case 0x1433b0u: goto label_1433b0;
        case 0x1433b4u: goto label_1433b4;
        case 0x1433b8u: goto label_1433b8;
        case 0x1433bcu: goto label_1433bc;
        case 0x1433c0u: goto label_1433c0;
        case 0x1433c4u: goto label_1433c4;
        case 0x1433c8u: goto label_1433c8;
        case 0x1433ccu: goto label_1433cc;
        case 0x1433d0u: goto label_1433d0;
        case 0x1433d4u: goto label_1433d4;
        case 0x1433d8u: goto label_1433d8;
        case 0x1433dcu: goto label_1433dc;
        case 0x1433e0u: goto label_1433e0;
        case 0x1433e4u: goto label_1433e4;
        case 0x1433e8u: goto label_1433e8;
        case 0x1433ecu: goto label_1433ec;
        case 0x1433f0u: goto label_1433f0;
        case 0x1433f4u: goto label_1433f4;
        case 0x1433f8u: goto label_1433f8;
        case 0x1433fcu: goto label_1433fc;
        case 0x143400u: goto label_143400;
        case 0x143404u: goto label_143404;
        case 0x143408u: goto label_143408;
        case 0x14340cu: goto label_14340c;
        case 0x143410u: goto label_143410;
        case 0x143414u: goto label_143414;
        case 0x143418u: goto label_143418;
        case 0x14341cu: goto label_14341c;
        case 0x143420u: goto label_143420;
        case 0x143424u: goto label_143424;
        case 0x143428u: goto label_143428;
        case 0x14342cu: goto label_14342c;
        case 0x143430u: goto label_143430;
        case 0x143434u: goto label_143434;
        case 0x143438u: goto label_143438;
        case 0x14343cu: goto label_14343c;
        case 0x143440u: goto label_143440;
        case 0x143444u: goto label_143444;
        case 0x143448u: goto label_143448;
        case 0x14344cu: goto label_14344c;
        case 0x143450u: goto label_143450;
        case 0x143454u: goto label_143454;
        case 0x143458u: goto label_143458;
        case 0x14345cu: goto label_14345c;
        case 0x143460u: goto label_143460;
        case 0x143464u: goto label_143464;
        case 0x143468u: goto label_143468;
        case 0x14346cu: goto label_14346c;
        case 0x143470u: goto label_143470;
        case 0x143474u: goto label_143474;
        case 0x143478u: goto label_143478;
        case 0x14347cu: goto label_14347c;
        case 0x143480u: goto label_143480;
        case 0x143484u: goto label_143484;
        case 0x143488u: goto label_143488;
        case 0x14348cu: goto label_14348c;
        case 0x143490u: goto label_143490;
        case 0x143494u: goto label_143494;
        case 0x143498u: goto label_143498;
        case 0x14349cu: goto label_14349c;
        case 0x1434a0u: goto label_1434a0;
        case 0x1434a4u: goto label_1434a4;
        case 0x1434a8u: goto label_1434a8;
        case 0x1434acu: goto label_1434ac;
        case 0x1434b0u: goto label_1434b0;
        case 0x1434b4u: goto label_1434b4;
        case 0x1434b8u: goto label_1434b8;
        case 0x1434bcu: goto label_1434bc;
        case 0x1434c0u: goto label_1434c0;
        case 0x1434c4u: goto label_1434c4;
        case 0x1434c8u: goto label_1434c8;
        case 0x1434ccu: goto label_1434cc;
        case 0x1434d0u: goto label_1434d0;
        case 0x1434d4u: goto label_1434d4;
        case 0x1434d8u: goto label_1434d8;
        case 0x1434dcu: goto label_1434dc;
        case 0x1434e0u: goto label_1434e0;
        case 0x1434e4u: goto label_1434e4;
        case 0x1434e8u: goto label_1434e8;
        case 0x1434ecu: goto label_1434ec;
        case 0x1434f0u: goto label_1434f0;
        case 0x1434f4u: goto label_1434f4;
        case 0x1434f8u: goto label_1434f8;
        case 0x1434fcu: goto label_1434fc;
        case 0x143500u: goto label_143500;
        case 0x143504u: goto label_143504;
        case 0x143508u: goto label_143508;
        case 0x14350cu: goto label_14350c;
        case 0x143510u: goto label_143510;
        case 0x143514u: goto label_143514;
        case 0x143518u: goto label_143518;
        case 0x14351cu: goto label_14351c;
        case 0x143520u: goto label_143520;
        case 0x143524u: goto label_143524;
        case 0x143528u: goto label_143528;
        case 0x14352cu: goto label_14352c;
        case 0x143530u: goto label_143530;
        case 0x143534u: goto label_143534;
        case 0x143538u: goto label_143538;
        case 0x14353cu: goto label_14353c;
        default: break;
    }

    ctx->pc = 0x143300u;

label_143300:
    // 0x143300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_143304:
    // 0x143304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143308:
    // 0x143308: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x143308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_14330c:
    // 0x14330c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14330cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_143310:
    // 0x143310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143314:
    // 0x143314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_143318:
    // 0x143318: 0xa2020234  sb          $v0, 0x234($s0)
    ctx->pc = 0x143318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 2));
label_14331c:
    // 0x14331c: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x14331cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_143320:
    // 0x143320: 0x10a00051  beqz        $a1, . + 4 + (0x51 << 2)
label_143324:
    if (ctx->pc == 0x143324u) {
        ctx->pc = 0x143324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143320u;
        // 0x143324: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143328u;
        goto label_143328;
    }
    ctx->pc = 0x143320u;
    {
        const bool branch_taken_0x143320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x143324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143320u;
        // 0x143324: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143320) {
            ctx->pc = 0x143468u;
            goto label_143468;
        }
    }
    ctx->pc = 0x143328u;
label_143328:
    // 0x143328: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x143328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14332c:
    // 0x14332c: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x14332cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_143330:
    // 0x143330: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x143330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_143334:
    // 0x143334: 0x40f809  jalr        $v0
label_143338:
    if (ctx->pc == 0x143338u) {
        ctx->pc = 0x143338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143334u;
        // 0x143338: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14333Cu;
        goto label_14333c;
    }
    ctx->pc = 0x143334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14333Cu);
        ctx->pc = 0x143338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143334u;
        // 0x143338: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143334u, 0x14333Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14333Cu;
label_14333c:
    // 0x14333c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14333cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_143340:
    // 0x143340: 0x8e060210  lw          $a2, 0x210($s0)
    ctx->pc = 0x143340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_143344:
    // 0x143344: 0x7e0301e0  sq          $v1, 0x1E0($s0)
    ctx->pc = 0x143344u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 480), GPR_VEC(ctx, 3));
label_143348:
    // 0x143348: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x143348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14334c:
    // 0x14334c: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x14334cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_143350:
    // 0x143350: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x143350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_143354:
    // 0x143354: 0x40f809  jalr        $v0
label_143358:
    if (ctx->pc == 0x143358u) {
        ctx->pc = 0x143358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143354u;
        // 0x143358: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14335Cu;
        goto label_14335c;
    }
    ctx->pc = 0x143354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14335Cu);
        ctx->pc = 0x143358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143354u;
        // 0x143358: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143354u, 0x14335Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14335Cu;
label_14335c:
    // 0x14335c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14335cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_143360:
    // 0x143360: 0x8e060210  lw          $a2, 0x210($s0)
    ctx->pc = 0x143360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_143364:
    // 0x143364: 0x7e0301f0  sq          $v1, 0x1F0($s0)
    ctx->pc = 0x143364u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 3));
label_143368:
    // 0x143368: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x143368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14336c:
    // 0x14336c: 0x84a40248  lh          $a0, 0x248($a1)
    ctx->pc = 0x14336cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 584)));
label_143370:
    // 0x143370: 0x8ca2024c  lw          $v0, 0x24C($a1)
    ctx->pc = 0x143370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 588)));
label_143374:
    // 0x143374: 0x40f809  jalr        $v0
label_143378:
    if (ctx->pc == 0x143378u) {
        ctx->pc = 0x143378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143374u;
        // 0x143378: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14337Cu;
        goto label_14337c;
    }
    ctx->pc = 0x143374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14337Cu);
        ctx->pc = 0x143378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143374u;
        // 0x143378: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143374u, 0x14337Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14337Cu;
label_14337c:
    // 0x14337c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14337cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_143380:
    // 0x143380: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x143380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_143384:
    // 0x143384: 0x7e030200  sq          $v1, 0x200($s0)
    ctx->pc = 0x143384u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 512), GPR_VEC(ctx, 3));
label_143388:
    // 0x143388: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x143388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14338c:
    // 0x14338c: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x14338cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_143390:
    // 0x143390: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x143390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_143394:
    // 0x143394: 0x60f809  jalr        $v1
label_143398:
    if (ctx->pc == 0x143398u) {
        ctx->pc = 0x143398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143394u;
        // 0x143398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14339Cu;
        goto label_14339c;
    }
    ctx->pc = 0x143394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14339Cu);
        ctx->pc = 0x143398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143394u;
        // 0x143398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143394u, 0x14339Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14339Cu;
label_14339c:
    // 0x14339c: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x14339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
label_1433a0:
    // 0x1433a0: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x1433a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_1433a4:
    // 0x1433a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1433a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1433a8:
    // 0x1433a8: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x1433a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_1433ac:
    // 0x1433ac: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x1433acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_1433b0:
    // 0x1433b0: 0x60f809  jalr        $v1
label_1433b4:
    if (ctx->pc == 0x1433B4u) {
        ctx->pc = 0x1433B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433B0u;
        // 0x1433b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1433B8u;
        goto label_1433b8;
    }
    ctx->pc = 0x1433B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1433B8u);
        ctx->pc = 0x1433B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433B0u;
        // 0x1433b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1433B0u, 0x1433B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1433B8u;
label_1433b8:
    // 0x1433b8: 0xe6000228  swc1        $f0, 0x228($s0)
    ctx->pc = 0x1433b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
label_1433bc:
    // 0x1433bc: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x1433bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_1433c0:
    // 0x1433c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1433c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1433c4:
    // 0x1433c4: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x1433c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_1433c8:
    // 0x1433c8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1433c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1433cc:
    // 0x1433cc: 0x60f809  jalr        $v1
label_1433d0:
    if (ctx->pc == 0x1433D0u) {
        ctx->pc = 0x1433D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433CCu;
        // 0x1433d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1433D4u;
        goto label_1433d4;
    }
    ctx->pc = 0x1433CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1433D4u);
        ctx->pc = 0x1433D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433CCu;
        // 0x1433d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1433CCu, 0x1433D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1433D4u;
label_1433d4:
    // 0x1433d4: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x1433d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_1433d8:
    // 0x1433d8: 0xe600022c  swc1        $f0, 0x22C($s0)
    ctx->pc = 0x1433d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
label_1433dc:
    // 0x1433dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1433dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1433e0:
    // 0x1433e0: 0x84440210  lh          $a0, 0x210($v0)
    ctx->pc = 0x1433e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
label_1433e4:
    // 0x1433e4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1433e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1433e8:
    // 0x1433e8: 0x60f809  jalr        $v1
label_1433ec:
    if (ctx->pc == 0x1433ECu) {
        ctx->pc = 0x1433ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433E8u;
        // 0x1433ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1433F0u;
        goto label_1433f0;
    }
    ctx->pc = 0x1433E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1433F0u);
        ctx->pc = 0x1433ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433E8u;
        // 0x1433ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1433E8u, 0x1433F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1433F0u;
label_1433f0:
    // 0x1433f0: 0xc6010224  lwc1        $f1, 0x224($s0)
    ctx->pc = 0x1433f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1433f4:
    // 0x1433f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1433f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1433f8:
    // 0x1433f8: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x1433f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
label_1433fc:
    // 0x1433fc: 0xc0482a6  jal         func_120A98
label_143400:
    if (ctx->pc == 0x143400u) {
        ctx->pc = 0x143400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433FCu;
        // 0x143400: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x143404u;
        goto label_143404;
    }
    ctx->pc = 0x1433FCu;
    SET_GPR_U32(ctx, 31, 0x143404u);
    ctx->pc = 0x143400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433FCu;
    // 0x143400: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x1433FCu, 0x143404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143404u;
label_143404:
    // 0x143404: 0x7a0201f0  lq          $v0, 0x1F0($s0)
    ctx->pc = 0x143404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 496)));
label_143408:
    // 0x143408: 0x7a0301e0  lq          $v1, 0x1E0($s0)
    ctx->pc = 0x143408u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 480)));
label_14340c:
    // 0x14340c: 0x7a040200  lq          $a0, 0x200($s0)
    ctx->pc = 0x14340cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 512)));
label_143410:
    // 0x143410: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x143410u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_143414:
    // 0x143414: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x143414u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_143418:
    // 0x143418: 0x7e040180  sq          $a0, 0x180($s0)
    ctx->pc = 0x143418u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), GPR_VEC(ctx, 4));
label_14341c:
    // 0x14341c: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x14341cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_143420:
    // 0x143420: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x143420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_143424:
    // 0x143424: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x143424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_143428:
    // 0x143428: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x143428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_14342c:
    // 0x14342c: 0x40f809  jalr        $v0
label_143430:
    if (ctx->pc == 0x143430u) {
        ctx->pc = 0x143430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14342Cu;
        // 0x143430: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143434u;
        goto label_143434;
    }
    ctx->pc = 0x14342Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143434u);
        ctx->pc = 0x143430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14342Cu;
        // 0x143430: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14342Cu, 0x143434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143434u;
label_143434:
    // 0x143434: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x143434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_143438:
    // 0x143438: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14343c:
    if (ctx->pc == 0x14343Cu) {
        ctx->pc = 0x143440u;
        goto label_143440;
    }
    ctx->pc = 0x143438u;
    {
        const bool branch_taken_0x143438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143438) {
            ctx->pc = 0x143460u;
            goto label_143460;
        }
    }
    ctx->pc = 0x143440u;
label_143440:
    // 0x143440: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x143440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_143444:
    // 0x143444: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x143444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_143448:
    // 0x143448: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x143448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_14344c:
    // 0x14344c: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x14344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_143450:
    // 0x143450: 0x40f809  jalr        $v0
label_143454:
    if (ctx->pc == 0x143454u) {
        ctx->pc = 0x143454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143450u;
        // 0x143454: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143458u;
        goto label_143458;
    }
    ctx->pc = 0x143450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143458u);
        ctx->pc = 0x143454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143450u;
        // 0x143454: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143450u, 0x143458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143458u;
label_143458:
    // 0x143458: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x143458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_14345c:
    // 0x14345c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x14345cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_143460:
    // 0x143460: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
label_143464:
    if (ctx->pc == 0x143464u) {
        ctx->pc = 0x143464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143460u;
        // 0x143464: 0xa2000234  sb          $zero, 0x234($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143468u;
        goto label_143468;
    }
    ctx->pc = 0x143460u;
    {
        const bool branch_taken_0x143460 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x143460) {
            ctx->pc = 0x143464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143460u;
            // 0x143464: 0xa2000234  sb          $zero, 0x234($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143468u;
            goto label_143468;
        }
    }
    ctx->pc = 0x143468u;
label_143468:
    // 0x143468: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x143468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_14346c:
    // 0x14346c: 0x50a00029  beql        $a1, $zero, . + 4 + (0x29 << 2)
label_143470:
    if (ctx->pc == 0x143470u) {
        ctx->pc = 0x143470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14346Cu;
        // 0x143470: 0xc6000230  lwc1        $f0, 0x230($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x143474u;
        goto label_143474;
    }
    ctx->pc = 0x14346Cu;
    {
        const bool branch_taken_0x14346c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14346c) {
            ctx->pc = 0x143470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14346Cu;
            // 0x143470: 0xc6000230  lwc1        $f0, 0x230($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x143514u;
            goto label_143514;
        }
    }
    ctx->pc = 0x143474u;
label_143474:
    // 0x143474: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x143474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_143478:
    // 0x143478: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_14347c:
    if (ctx->pc == 0x14347Cu) {
        ctx->pc = 0x14347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143478u;
        // 0x14347c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143480u;
        goto label_143480;
    }
    ctx->pc = 0x143478u;
    {
        const bool branch_taken_0x143478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143478u;
        // 0x14347c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143478) {
            ctx->pc = 0x143500u;
            goto label_143500;
        }
    }
    ctx->pc = 0x143480u;
label_143480:
    // 0x143480: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x143480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_143484:
    // 0x143484: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x143484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_143488:
    // 0x143488: 0x60f809  jalr        $v1
label_14348c:
    if (ctx->pc == 0x14348Cu) {
        ctx->pc = 0x14348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143488u;
        // 0x14348c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143490u;
        goto label_143490;
    }
    ctx->pc = 0x143488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143490u);
        ctx->pc = 0x14348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143488u;
        // 0x14348c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143488u, 0x143490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143490u;
label_143490:
    // 0x143490: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x143490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
label_143494:
    // 0x143494: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x143494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_143498:
    // 0x143498: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x143498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14349c:
    // 0x14349c: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x14349cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_1434a0:
    // 0x1434a0: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x1434a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_1434a4:
    // 0x1434a4: 0x60f809  jalr        $v1
label_1434a8:
    if (ctx->pc == 0x1434A8u) {
        ctx->pc = 0x1434A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434A4u;
        // 0x1434a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1434ACu;
        goto label_1434ac;
    }
    ctx->pc = 0x1434A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1434ACu);
        ctx->pc = 0x1434A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434A4u;
        // 0x1434a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434A4u, 0x1434ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1434ACu;
label_1434ac:
    // 0x1434ac: 0xe6000228  swc1        $f0, 0x228($s0)
    ctx->pc = 0x1434acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
label_1434b0:
    // 0x1434b0: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x1434b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1434b4:
    // 0x1434b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1434b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1434b8:
    // 0x1434b8: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x1434b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_1434bc:
    // 0x1434bc: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1434bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1434c0:
    // 0x1434c0: 0x60f809  jalr        $v1
label_1434c4:
    if (ctx->pc == 0x1434C4u) {
        ctx->pc = 0x1434C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434C0u;
        // 0x1434c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1434C8u;
        goto label_1434c8;
    }
    ctx->pc = 0x1434C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1434C8u);
        ctx->pc = 0x1434C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434C0u;
        // 0x1434c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434C0u, 0x1434C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1434C8u;
label_1434c8:
    // 0x1434c8: 0xe600022c  swc1        $f0, 0x22C($s0)
    ctx->pc = 0x1434c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
label_1434cc:
    // 0x1434cc: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x1434ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1434d0:
    // 0x1434d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1434d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1434d4:
    // 0x1434d4: 0x84440210  lh          $a0, 0x210($v0)
    ctx->pc = 0x1434d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
label_1434d8:
    // 0x1434d8: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1434d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1434dc:
    // 0x1434dc: 0x60f809  jalr        $v1
label_1434e0:
    if (ctx->pc == 0x1434E0u) {
        ctx->pc = 0x1434E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434DCu;
        // 0x1434e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1434E4u;
        goto label_1434e4;
    }
    ctx->pc = 0x1434DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1434E4u);
        ctx->pc = 0x1434E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434DCu;
        // 0x1434e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434DCu, 0x1434E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1434E4u;
label_1434e4:
    // 0x1434e4: 0xc6010224  lwc1        $f1, 0x224($s0)
    ctx->pc = 0x1434e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1434e8:
    // 0x1434e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1434e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1434ec:
    // 0x1434ec: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x1434ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
label_1434f0:
    // 0x1434f0: 0xc0482a6  jal         func_120A98
label_1434f4:
    if (ctx->pc == 0x1434F4u) {
        ctx->pc = 0x1434F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434F0u;
        // 0x1434f4: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1434F8u;
        goto label_1434f8;
    }
    ctx->pc = 0x1434F0u;
    SET_GPR_U32(ctx, 31, 0x1434F8u);
    ctx->pc = 0x1434F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1434F0u;
    // 0x1434f4: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x1434F0u, 0x1434F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1434F8u;
label_1434f8:
    // 0x1434f8: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x1434f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1434fc:
    // 0x1434fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1434fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_143500:
    // 0x143500: 0x84440140  lh          $a0, 0x140($v0)
    ctx->pc = 0x143500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 320)));
label_143504:
    // 0x143504: 0x8c430144  lw          $v1, 0x144($v0)
    ctx->pc = 0x143504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_143508:
    // 0x143508: 0x60f809  jalr        $v1
label_14350c:
    if (ctx->pc == 0x14350Cu) {
        ctx->pc = 0x14350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143508u;
        // 0x14350c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143510u;
        goto label_143510;
    }
    ctx->pc = 0x143508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143510u);
        ctx->pc = 0x14350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143508u;
        // 0x14350c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143508u, 0x143510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143510u;
label_143510:
    // 0x143510: 0xc6000230  lwc1        $f0, 0x230($s0)
    ctx->pc = 0x143510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143514:
    // 0x143514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143518:
    // 0x143518: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x143518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_14351c:
    // 0x14351c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x14351cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_143520:
    // 0x143520: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x143520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_143524:
    // 0x143524: 0xc04828c  jal         func_120A30
label_143528:
    if (ctx->pc == 0x143528u) {
        ctx->pc = 0x143528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143524u;
        // 0x143528: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14352Cu;
        goto label_14352c;
    }
    ctx->pc = 0x143524u;
    SET_GPR_U32(ctx, 31, 0x14352Cu);
    ctx->pc = 0x143528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143524u;
    // 0x143528: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x143524u, 0x14352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14352Cu;
label_14352c:
    // 0x14352c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14352cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_143530:
    // 0x143530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_143534:
    // 0x143534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143538:
    // 0x143538: 0x3e00008  jr          $ra
label_14353c:
    if (ctx->pc == 0x14353Cu) {
        ctx->pc = 0x14353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143538u;
        // 0x14353c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143540u;
        goto label_fallthrough_0x143538;
    }
    ctx->pc = 0x143538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143538u;
        // 0x14353c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x143538:
    ctx->pc = 0x143540u;
}

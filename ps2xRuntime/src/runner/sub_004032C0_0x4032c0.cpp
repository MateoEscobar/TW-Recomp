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

// Function: sub_004032C0
// Address: 0x4032c0 - 0x4034b8
void sub_004032C0_0x4032c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004032C0_0x4032c0");
#endif

    switch (ctx->pc) {
        case 0x4032c0u: goto label_4032c0;
        case 0x4032c4u: goto label_4032c4;
        case 0x4032c8u: goto label_4032c8;
        case 0x4032ccu: goto label_4032cc;
        case 0x4032d0u: goto label_4032d0;
        case 0x4032d4u: goto label_4032d4;
        case 0x4032d8u: goto label_4032d8;
        case 0x4032dcu: goto label_4032dc;
        case 0x4032e0u: goto label_4032e0;
        case 0x4032e4u: goto label_4032e4;
        case 0x4032e8u: goto label_4032e8;
        case 0x4032ecu: goto label_4032ec;
        case 0x4032f0u: goto label_4032f0;
        case 0x4032f4u: goto label_4032f4;
        case 0x4032f8u: goto label_4032f8;
        case 0x4032fcu: goto label_4032fc;
        case 0x403300u: goto label_403300;
        case 0x403304u: goto label_403304;
        case 0x403308u: goto label_403308;
        case 0x40330cu: goto label_40330c;
        case 0x403310u: goto label_403310;
        case 0x403314u: goto label_403314;
        case 0x403318u: goto label_403318;
        case 0x40331cu: goto label_40331c;
        case 0x403320u: goto label_403320;
        case 0x403324u: goto label_403324;
        case 0x403328u: goto label_403328;
        case 0x40332cu: goto label_40332c;
        case 0x403330u: goto label_403330;
        case 0x403334u: goto label_403334;
        case 0x403338u: goto label_403338;
        case 0x40333cu: goto label_40333c;
        case 0x403340u: goto label_403340;
        case 0x403344u: goto label_403344;
        case 0x403348u: goto label_403348;
        case 0x40334cu: goto label_40334c;
        case 0x403350u: goto label_403350;
        case 0x403354u: goto label_403354;
        case 0x403358u: goto label_403358;
        case 0x40335cu: goto label_40335c;
        case 0x403360u: goto label_403360;
        case 0x403364u: goto label_403364;
        case 0x403368u: goto label_403368;
        case 0x40336cu: goto label_40336c;
        case 0x403370u: goto label_403370;
        case 0x403374u: goto label_403374;
        case 0x403378u: goto label_403378;
        case 0x40337cu: goto label_40337c;
        case 0x403380u: goto label_403380;
        case 0x403384u: goto label_403384;
        case 0x403388u: goto label_403388;
        case 0x40338cu: goto label_40338c;
        case 0x403390u: goto label_403390;
        case 0x403394u: goto label_403394;
        case 0x403398u: goto label_403398;
        case 0x40339cu: goto label_40339c;
        case 0x4033a0u: goto label_4033a0;
        case 0x4033a4u: goto label_4033a4;
        case 0x4033a8u: goto label_4033a8;
        case 0x4033acu: goto label_4033ac;
        case 0x4033b0u: goto label_4033b0;
        case 0x4033b4u: goto label_4033b4;
        case 0x4033b8u: goto label_4033b8;
        case 0x4033bcu: goto label_4033bc;
        case 0x4033c0u: goto label_4033c0;
        case 0x4033c4u: goto label_4033c4;
        case 0x4033c8u: goto label_4033c8;
        case 0x4033ccu: goto label_4033cc;
        case 0x4033d0u: goto label_4033d0;
        case 0x4033d4u: goto label_4033d4;
        case 0x4033d8u: goto label_4033d8;
        case 0x4033dcu: goto label_4033dc;
        case 0x4033e0u: goto label_4033e0;
        case 0x4033e4u: goto label_4033e4;
        case 0x4033e8u: goto label_4033e8;
        case 0x4033ecu: goto label_4033ec;
        case 0x4033f0u: goto label_4033f0;
        case 0x4033f4u: goto label_4033f4;
        case 0x4033f8u: goto label_4033f8;
        case 0x4033fcu: goto label_4033fc;
        case 0x403400u: goto label_403400;
        case 0x403404u: goto label_403404;
        case 0x403408u: goto label_403408;
        case 0x40340cu: goto label_40340c;
        case 0x403410u: goto label_403410;
        case 0x403414u: goto label_403414;
        case 0x403418u: goto label_403418;
        case 0x40341cu: goto label_40341c;
        case 0x403420u: goto label_403420;
        case 0x403424u: goto label_403424;
        case 0x403428u: goto label_403428;
        case 0x40342cu: goto label_40342c;
        case 0x403430u: goto label_403430;
        case 0x403434u: goto label_403434;
        case 0x403438u: goto label_403438;
        case 0x40343cu: goto label_40343c;
        case 0x403440u: goto label_403440;
        case 0x403444u: goto label_403444;
        case 0x403448u: goto label_403448;
        case 0x40344cu: goto label_40344c;
        case 0x403450u: goto label_403450;
        case 0x403454u: goto label_403454;
        case 0x403458u: goto label_403458;
        case 0x40345cu: goto label_40345c;
        case 0x403460u: goto label_403460;
        case 0x403464u: goto label_403464;
        case 0x403468u: goto label_403468;
        case 0x40346cu: goto label_40346c;
        case 0x403470u: goto label_403470;
        case 0x403474u: goto label_403474;
        case 0x403478u: goto label_403478;
        case 0x40347cu: goto label_40347c;
        case 0x403480u: goto label_403480;
        case 0x403484u: goto label_403484;
        case 0x403488u: goto label_403488;
        case 0x40348cu: goto label_40348c;
        case 0x403490u: goto label_403490;
        case 0x403494u: goto label_403494;
        case 0x403498u: goto label_403498;
        case 0x40349cu: goto label_40349c;
        case 0x4034a0u: goto label_4034a0;
        case 0x4034a4u: goto label_4034a4;
        case 0x4034a8u: goto label_4034a8;
        case 0x4034acu: goto label_4034ac;
        case 0x4034b0u: goto label_4034b0;
        case 0x4034b4u: goto label_4034b4;
        default: break;
    }

    ctx->pc = 0x4032c0u;

label_4032c0:
    // 0x4032c0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4032c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4032c4:
    // 0x4032c4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x4032c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_4032c8:
    // 0x4032c8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x4032c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_4032cc:
    // 0x4032cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4032ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4032d0:
    // 0x4032d0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4032d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4032d4:
    // 0x4032d4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x4032d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_4032d8:
    // 0x4032d8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x4032d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_4032dc:
    // 0x4032dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4032dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4032e0:
    // 0x4032e0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x4032e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_4032e4:
    // 0x4032e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4032e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4032e8:
    // 0x4032e8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x4032e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_4032ec:
    // 0x4032ec: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x4032ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_4032f0:
    // 0x4032f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4032f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4032f4:
    // 0x4032f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4032f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4032f8:
    // 0x4032f8: 0xc0ea146  jal         func_3A8518
label_4032fc:
    if (ctx->pc == 0x4032FCu) {
        ctx->pc = 0x4032FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4032F8u;
        // 0x4032fc: 0x26970010  addiu       $s7, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403300u;
        goto label_403300;
    }
    ctx->pc = 0x4032F8u;
    SET_GPR_U32(ctx, 31, 0x403300u);
    ctx->pc = 0x4032FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4032F8u;
    // 0x4032fc: 0x26970010  addiu       $s7, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x4032F8u, 0x403300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403300u;
label_403300:
    // 0x403300: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x403300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_403304:
    // 0x403304: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x403304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_403308:
    // 0x403308: 0xc0ea12a  jal         func_3A84A8
label_40330c:
    if (ctx->pc == 0x40330Cu) {
        ctx->pc = 0x40330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403308u;
        // 0x40330c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403310u;
        goto label_403310;
    }
    ctx->pc = 0x403308u;
    SET_GPR_U32(ctx, 31, 0x403310u);
    ctx->pc = 0x40330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403308u;
    // 0x40330c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x403308u, 0x403310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403310u;
label_403310:
    // 0x403310: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x403310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_403314:
    // 0x403314: 0xc0ea12a  jal         func_3A84A8
label_403318:
    if (ctx->pc == 0x403318u) {
        ctx->pc = 0x403318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403314u;
        // 0x403318: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40331Cu;
        goto label_40331c;
    }
    ctx->pc = 0x403314u;
    SET_GPR_U32(ctx, 31, 0x40331Cu);
    ctx->pc = 0x403318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403314u;
    // 0x403318: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x403314u, 0x40331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40331Cu;
label_40331c:
    // 0x40331c: 0xc0ea146  jal         func_3A8518
label_403320:
    if (ctx->pc == 0x403320u) {
        ctx->pc = 0x403320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40331Cu;
        // 0x403320: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403324u;
        goto label_403324;
    }
    ctx->pc = 0x40331Cu;
    SET_GPR_U32(ctx, 31, 0x403324u);
    ctx->pc = 0x403320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40331Cu;
    // 0x403320: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x40331Cu, 0x403324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403324u;
label_403324:
    // 0x403324: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x403324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_403328:
    // 0x403328: 0xc0ea14c  jal         func_3A8530
label_40332c:
    if (ctx->pc == 0x40332Cu) {
        ctx->pc = 0x40332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403328u;
        // 0x40332c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403330u;
        goto label_403330;
    }
    ctx->pc = 0x403328u;
    SET_GPR_U32(ctx, 31, 0x403330u);
    ctx->pc = 0x40332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403328u;
    // 0x40332c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x403328u, 0x403330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403330u;
label_403330:
    // 0x403330: 0xc08a61a  jal         func_229868
label_403334:
    if (ctx->pc == 0x403334u) {
        ctx->pc = 0x403334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403330u;
        // 0x403334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403338u;
        goto label_403338;
    }
    ctx->pc = 0x403330u;
    SET_GPR_U32(ctx, 31, 0x403338u);
    ctx->pc = 0x403334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403330u;
    // 0x403334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x403330u, 0x403338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403338u;
label_403338:
    // 0x403338: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x403338u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_40333c:
    // 0x40333c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x40333cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_403340:
    // 0x403340: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x403340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_403344:
    // 0x403344: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x403344u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_403348:
    // 0x403348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x403348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40334c:
    // 0x40334c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x40334cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_403350:
    // 0x403350: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x403350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_403354:
    // 0x403354: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x403354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_403358:
    // 0x403358: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x403358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_40335c:
    // 0x40335c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x40335cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_403360:
    // 0x403360: 0x60f809  jalr        $v1
label_403364:
    if (ctx->pc == 0x403364u) {
        ctx->pc = 0x403364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403360u;
        // 0x403364: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403368u;
        goto label_403368;
    }
    ctx->pc = 0x403360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x403368u);
        ctx->pc = 0x403364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403360u;
        // 0x403364: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403360u, 0x403368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403368u;
label_403368:
    // 0x403368: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x403368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_40336c:
    // 0x40336c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40336cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_403370:
    // 0x403370: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x403370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_403374:
    // 0x403374: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x403374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_403378:
    // 0x403378: 0x60f809  jalr        $v1
label_40337c:
    if (ctx->pc == 0x40337Cu) {
        ctx->pc = 0x40337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403378u;
        // 0x40337c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403380u;
        goto label_403380;
    }
    ctx->pc = 0x403378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x403380u);
        ctx->pc = 0x40337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403378u;
        // 0x40337c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403378u, 0x403380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403380u;
label_403380:
    // 0x403380: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x403380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
label_403384:
    // 0x403384: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x403384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_403388:
    // 0x403388: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x403388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_40338c:
    // 0x40338c: 0xc0e8604  jal         func_3A1810
label_403390:
    if (ctx->pc == 0x403390u) {
        ctx->pc = 0x403390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40338Cu;
        // 0x403390: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403394u;
        goto label_403394;
    }
    ctx->pc = 0x40338Cu;
    SET_GPR_U32(ctx, 31, 0x403394u);
    ctx->pc = 0x403390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40338Cu;
    // 0x403390: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x40338Cu, 0x403394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403394u;
label_403394:
    // 0x403394: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x403394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_403398:
    // 0x403398: 0x3c02f9ff  lui         $v0, 0xF9FF
    ctx->pc = 0x403398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63999 << 16));
label_40339c:
    // 0x40339c: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x40339cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4033a0:
    // 0x4033a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4033a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4033a4:
    // 0x4033a4: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x4033a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4033a8:
    // 0x4033a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4033a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4033ac:
    // 0x4033ac: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x4033acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_4033b0:
    // 0x4033b0: 0x7e850010  sq          $a1, 0x10($s4)
    ctx->pc = 0x4033b0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 5));
label_4033b4:
    // 0x4033b4: 0x16600012  bnez        $s3, . + 4 + (0x12 << 2)
label_4033b8:
    if (ctx->pc == 0x4033B8u) {
        ctx->pc = 0x4033B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4033B4u;
        // 0x4033b8: 0x7ee40010  sq          $a0, 0x10($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4033BCu;
        goto label_4033bc;
    }
    ctx->pc = 0x4033B4u;
    {
        const bool branch_taken_0x4033b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4033B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4033B4u;
        // 0x4033b8: 0x7ee40010  sq          $a0, 0x10($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4033b4) {
            ctx->pc = 0x403400u;
            goto label_403400;
        }
    }
    ctx->pc = 0x4033BCu;
label_4033bc:
    // 0x4033bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4033bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4033c0:
    // 0x4033c0: 0xc0e8e26  jal         func_3A3898
label_4033c4:
    if (ctx->pc == 0x4033C4u) {
        ctx->pc = 0x4033C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4033C0u;
        // 0x4033c4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4033C8u;
        goto label_4033c8;
    }
    ctx->pc = 0x4033C0u;
    SET_GPR_U32(ctx, 31, 0x4033C8u);
    ctx->pc = 0x4033C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4033C0u;
    // 0x4033c4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x4033C0u, 0x4033C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4033C8u;
label_4033c8:
    // 0x4033c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4033c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4033cc:
    // 0x4033cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4033ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4033d0:
    // 0x4033d0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x4033d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4033d4:
    // 0x4033d4: 0xc136b30  jal         func_4DACC0
label_4033d8:
    if (ctx->pc == 0x4033D8u) {
        ctx->pc = 0x4033D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4033D4u;
        // 0x4033d8: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4033DCu;
        goto label_4033dc;
    }
    ctx->pc = 0x4033D4u;
    SET_GPR_U32(ctx, 31, 0x4033DCu);
    ctx->pc = 0x4033D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4033D4u;
    // 0x4033d8: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x4033D4u, 0x4033DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4033DCu;
label_4033dc:
    // 0x4033dc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x4033dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4033e0:
    // 0x4033e0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4033e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4033e4:
    // 0x4033e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4033e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4033e8:
    // 0x4033e8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4033e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4033ec:
    // 0x4033ec: 0xc136b18  jal         func_4DAC60
label_4033f0:
    if (ctx->pc == 0x4033F0u) {
        ctx->pc = 0x4033F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4033ECu;
        // 0x4033f0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4033F4u;
        goto label_4033f4;
    }
    ctx->pc = 0x4033ECu;
    SET_GPR_U32(ctx, 31, 0x4033F4u);
    ctx->pc = 0x4033F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4033ECu;
    // 0x4033f0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4033ECu, 0x4033F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4033F4u;
label_4033f4:
    // 0x4033f4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x4033f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4033f8:
    // 0x4033f8: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x4033f8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_4033fc:
    // 0x4033fc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x4033fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_403400:
    // 0x403400: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x403400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_403404:
    // 0x403404: 0xc0ea176  jal         func_3A85D8
label_403408:
    if (ctx->pc == 0x403408u) {
        ctx->pc = 0x403408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403404u;
        // 0x403408: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40340Cu;
        goto label_40340c;
    }
    ctx->pc = 0x403404u;
    SET_GPR_U32(ctx, 31, 0x40340Cu);
    ctx->pc = 0x403408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403404u;
    // 0x403408: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x403404u, 0x40340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40340Cu;
label_40340c:
    // 0x40340c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x40340cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_403410:
    // 0x403410: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x403410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_403414:
    // 0x403414: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x403414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_403418:
    // 0x403418: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x403418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_40341c:
    // 0x40341c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x40341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_403420:
    // 0x403420: 0x40f809  jalr        $v0
label_403424:
    if (ctx->pc == 0x403424u) {
        ctx->pc = 0x403424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403420u;
        // 0x403424: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403428u;
        goto label_403428;
    }
    ctx->pc = 0x403420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x403428u);
        ctx->pc = 0x403424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403420u;
        // 0x403424: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403420u, 0x403428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403428u;
label_403428:
    // 0x403428: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x403428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_40342c:
    // 0x40342c: 0xc0e8e26  jal         func_3A3898
label_403430:
    if (ctx->pc == 0x403430u) {
        ctx->pc = 0x403430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40342Cu;
        // 0x403430: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403434u;
        goto label_403434;
    }
    ctx->pc = 0x40342Cu;
    SET_GPR_U32(ctx, 31, 0x403434u);
    ctx->pc = 0x403430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40342Cu;
    // 0x403430: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x40342Cu, 0x403434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403434u;
label_403434:
    // 0x403434: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x403434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_403438:
    // 0x403438: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40343c:
    // 0x40343c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x40343cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_403440:
    // 0x403440: 0xc0ea164  jal         func_3A8590
label_403444:
    if (ctx->pc == 0x403444u) {
        ctx->pc = 0x403444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403440u;
        // 0x403444: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x403448u;
        goto label_403448;
    }
    ctx->pc = 0x403440u;
    SET_GPR_U32(ctx, 31, 0x403448u);
    ctx->pc = 0x403444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403440u;
    // 0x403444: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x403440u, 0x403448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403448u;
label_403448:
    // 0x403448: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x403448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40344c:
    // 0x40344c: 0xc0ea158  jal         func_3A8560
label_403450:
    if (ctx->pc == 0x403450u) {
        ctx->pc = 0x403450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40344Cu;
        // 0x403450: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403454u;
        goto label_403454;
    }
    ctx->pc = 0x40344Cu;
    SET_GPR_U32(ctx, 31, 0x403454u);
    ctx->pc = 0x403450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40344Cu;
    // 0x403450: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x40344Cu, 0x403454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403454u;
label_403454:
    // 0x403454: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x403454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_403458:
    // 0x403458: 0xc0e8dee  jal         func_3A37B8
label_40345c:
    if (ctx->pc == 0x40345Cu) {
        ctx->pc = 0x40345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403458u;
        // 0x40345c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403460u;
        goto label_403460;
    }
    ctx->pc = 0x403458u;
    SET_GPR_U32(ctx, 31, 0x403460u);
    ctx->pc = 0x40345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403458u;
    // 0x40345c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x403458u, 0x403460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403460u;
label_403460:
    // 0x403460: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x403460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_403464:
    // 0x403464: 0xc0ea16a  jal         func_3A85A8
label_403468:
    if (ctx->pc == 0x403468u) {
        ctx->pc = 0x403468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403464u;
        // 0x403468: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40346Cu;
        goto label_40346c;
    }
    ctx->pc = 0x403464u;
    SET_GPR_U32(ctx, 31, 0x40346Cu);
    ctx->pc = 0x403468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403464u;
    // 0x403468: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x403464u, 0x40346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40346Cu;
label_40346c:
    // 0x40346c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x40346cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_403470:
    // 0x403470: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x403470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_403474:
    // 0x403474: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x403474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_403478:
    // 0x403478: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x403478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_40347c:
    // 0x40347c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x40347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_403480:
    // 0x403480: 0x40f809  jalr        $v0
label_403484:
    if (ctx->pc == 0x403484u) {
        ctx->pc = 0x403484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403480u;
        // 0x403484: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403488u;
        goto label_403488;
    }
    ctx->pc = 0x403480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x403488u);
        ctx->pc = 0x403484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403480u;
        // 0x403484: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403480u, 0x403488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403488u;
label_403488:
    // 0x403488: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x403488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_40348c:
    // 0x40348c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x40348cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_403490:
    // 0x403490: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x403490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_403494:
    // 0x403494: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x403494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_403498:
    // 0x403498: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x403498u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_40349c:
    // 0x40349c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x40349cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4034a0:
    // 0x4034a0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x4034a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4034a4:
    // 0x4034a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4034a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4034a8:
    // 0x4034a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4034a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4034ac:
    // 0x4034ac: 0x3e00008  jr          $ra
label_4034b0:
    if (ctx->pc == 0x4034B0u) {
        ctx->pc = 0x4034B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4034ACu;
        // 0x4034b0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4034B4u;
        goto label_4034b4;
    }
    ctx->pc = 0x4034ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4034B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4034ACu;
        // 0x4034b0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4034ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4034B4u;
label_4034b4:
    // 0x4034b4: 0x0  nop
    ctx->pc = 0x4034b4u;
    // NOP
    ctx->pc = 0x4034b8u;
}

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

// Function: sub_001691A0
// Address: 0x1691a0 - 0x169468
void sub_001691A0_0x1691a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001691A0_0x1691a0");
#endif

    switch (ctx->pc) {
        case 0x1691a0u: goto label_1691a0;
        case 0x1691a4u: goto label_1691a4;
        case 0x1691a8u: goto label_1691a8;
        case 0x1691acu: goto label_1691ac;
        case 0x1691b0u: goto label_1691b0;
        case 0x1691b4u: goto label_1691b4;
        case 0x1691b8u: goto label_1691b8;
        case 0x1691bcu: goto label_1691bc;
        case 0x1691c0u: goto label_1691c0;
        case 0x1691c4u: goto label_1691c4;
        case 0x1691c8u: goto label_1691c8;
        case 0x1691ccu: goto label_1691cc;
        case 0x1691d0u: goto label_1691d0;
        case 0x1691d4u: goto label_1691d4;
        case 0x1691d8u: goto label_1691d8;
        case 0x1691dcu: goto label_1691dc;
        case 0x1691e0u: goto label_1691e0;
        case 0x1691e4u: goto label_1691e4;
        case 0x1691e8u: goto label_1691e8;
        case 0x1691ecu: goto label_1691ec;
        case 0x1691f0u: goto label_1691f0;
        case 0x1691f4u: goto label_1691f4;
        case 0x1691f8u: goto label_1691f8;
        case 0x1691fcu: goto label_1691fc;
        case 0x169200u: goto label_169200;
        case 0x169204u: goto label_169204;
        case 0x169208u: goto label_169208;
        case 0x16920cu: goto label_16920c;
        case 0x169210u: goto label_169210;
        case 0x169214u: goto label_169214;
        case 0x169218u: goto label_169218;
        case 0x16921cu: goto label_16921c;
        case 0x169220u: goto label_169220;
        case 0x169224u: goto label_169224;
        case 0x169228u: goto label_169228;
        case 0x16922cu: goto label_16922c;
        case 0x169230u: goto label_169230;
        case 0x169234u: goto label_169234;
        case 0x169238u: goto label_169238;
        case 0x16923cu: goto label_16923c;
        case 0x169240u: goto label_169240;
        case 0x169244u: goto label_169244;
        case 0x169248u: goto label_169248;
        case 0x16924cu: goto label_16924c;
        case 0x169250u: goto label_169250;
        case 0x169254u: goto label_169254;
        case 0x169258u: goto label_169258;
        case 0x16925cu: goto label_16925c;
        case 0x169260u: goto label_169260;
        case 0x169264u: goto label_169264;
        case 0x169268u: goto label_169268;
        case 0x16926cu: goto label_16926c;
        case 0x169270u: goto label_169270;
        case 0x169274u: goto label_169274;
        case 0x169278u: goto label_169278;
        case 0x16927cu: goto label_16927c;
        case 0x169280u: goto label_169280;
        case 0x169284u: goto label_169284;
        case 0x169288u: goto label_169288;
        case 0x16928cu: goto label_16928c;
        case 0x169290u: goto label_169290;
        case 0x169294u: goto label_169294;
        case 0x169298u: goto label_169298;
        case 0x16929cu: goto label_16929c;
        case 0x1692a0u: goto label_1692a0;
        case 0x1692a4u: goto label_1692a4;
        case 0x1692a8u: goto label_1692a8;
        case 0x1692acu: goto label_1692ac;
        case 0x1692b0u: goto label_1692b0;
        case 0x1692b4u: goto label_1692b4;
        case 0x1692b8u: goto label_1692b8;
        case 0x1692bcu: goto label_1692bc;
        case 0x1692c0u: goto label_1692c0;
        case 0x1692c4u: goto label_1692c4;
        case 0x1692c8u: goto label_1692c8;
        case 0x1692ccu: goto label_1692cc;
        case 0x1692d0u: goto label_1692d0;
        case 0x1692d4u: goto label_1692d4;
        case 0x1692d8u: goto label_1692d8;
        case 0x1692dcu: goto label_1692dc;
        case 0x1692e0u: goto label_1692e0;
        case 0x1692e4u: goto label_1692e4;
        case 0x1692e8u: goto label_1692e8;
        case 0x1692ecu: goto label_1692ec;
        case 0x1692f0u: goto label_1692f0;
        case 0x1692f4u: goto label_1692f4;
        case 0x1692f8u: goto label_1692f8;
        case 0x1692fcu: goto label_1692fc;
        case 0x169300u: goto label_169300;
        case 0x169304u: goto label_169304;
        case 0x169308u: goto label_169308;
        case 0x16930cu: goto label_16930c;
        case 0x169310u: goto label_169310;
        case 0x169314u: goto label_169314;
        case 0x169318u: goto label_169318;
        case 0x16931cu: goto label_16931c;
        case 0x169320u: goto label_169320;
        case 0x169324u: goto label_169324;
        case 0x169328u: goto label_169328;
        case 0x16932cu: goto label_16932c;
        case 0x169330u: goto label_169330;
        case 0x169334u: goto label_169334;
        case 0x169338u: goto label_169338;
        case 0x16933cu: goto label_16933c;
        case 0x169340u: goto label_169340;
        case 0x169344u: goto label_169344;
        case 0x169348u: goto label_169348;
        case 0x16934cu: goto label_16934c;
        case 0x169350u: goto label_169350;
        case 0x169354u: goto label_169354;
        case 0x169358u: goto label_169358;
        case 0x16935cu: goto label_16935c;
        case 0x169360u: goto label_169360;
        case 0x169364u: goto label_169364;
        case 0x169368u: goto label_169368;
        case 0x16936cu: goto label_16936c;
        case 0x169370u: goto label_169370;
        case 0x169374u: goto label_169374;
        case 0x169378u: goto label_169378;
        case 0x16937cu: goto label_16937c;
        case 0x169380u: goto label_169380;
        case 0x169384u: goto label_169384;
        case 0x169388u: goto label_169388;
        case 0x16938cu: goto label_16938c;
        case 0x169390u: goto label_169390;
        case 0x169394u: goto label_169394;
        case 0x169398u: goto label_169398;
        case 0x16939cu: goto label_16939c;
        case 0x1693a0u: goto label_1693a0;
        case 0x1693a4u: goto label_1693a4;
        case 0x1693a8u: goto label_1693a8;
        case 0x1693acu: goto label_1693ac;
        case 0x1693b0u: goto label_1693b0;
        case 0x1693b4u: goto label_1693b4;
        case 0x1693b8u: goto label_1693b8;
        case 0x1693bcu: goto label_1693bc;
        case 0x1693c0u: goto label_1693c0;
        case 0x1693c4u: goto label_1693c4;
        case 0x1693c8u: goto label_1693c8;
        case 0x1693ccu: goto label_1693cc;
        case 0x1693d0u: goto label_1693d0;
        case 0x1693d4u: goto label_1693d4;
        case 0x1693d8u: goto label_1693d8;
        case 0x1693dcu: goto label_1693dc;
        case 0x1693e0u: goto label_1693e0;
        case 0x1693e4u: goto label_1693e4;
        case 0x1693e8u: goto label_1693e8;
        case 0x1693ecu: goto label_1693ec;
        case 0x1693f0u: goto label_1693f0;
        case 0x1693f4u: goto label_1693f4;
        case 0x1693f8u: goto label_1693f8;
        case 0x1693fcu: goto label_1693fc;
        case 0x169400u: goto label_169400;
        case 0x169404u: goto label_169404;
        case 0x169408u: goto label_169408;
        case 0x16940cu: goto label_16940c;
        case 0x169410u: goto label_169410;
        case 0x169414u: goto label_169414;
        case 0x169418u: goto label_169418;
        case 0x16941cu: goto label_16941c;
        case 0x169420u: goto label_169420;
        case 0x169424u: goto label_169424;
        case 0x169428u: goto label_169428;
        case 0x16942cu: goto label_16942c;
        case 0x169430u: goto label_169430;
        case 0x169434u: goto label_169434;
        case 0x169438u: goto label_169438;
        case 0x16943cu: goto label_16943c;
        case 0x169440u: goto label_169440;
        case 0x169444u: goto label_169444;
        case 0x169448u: goto label_169448;
        case 0x16944cu: goto label_16944c;
        case 0x169450u: goto label_169450;
        case 0x169454u: goto label_169454;
        case 0x169458u: goto label_169458;
        case 0x16945cu: goto label_16945c;
        case 0x169460u: goto label_169460;
        case 0x169464u: goto label_169464;
        default: break;
    }

    ctx->pc = 0x1691a0u;

label_1691a0:
    // 0x1691a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1691a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1691a4:
    // 0x1691a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1691a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1691a8:
    // 0x1691a8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1691a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1691ac:
    // 0x1691ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1691acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1691b0:
    // 0x1691b0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1691b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1691b4:
    // 0x1691b4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1691b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1691b8:
    // 0x1691b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1691b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1691bc:
    // 0x1691bc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1691bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1691c0:
    // 0x1691c0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1691c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1691c4:
    // 0x1691c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1691c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1691c8:
    // 0x1691c8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1691c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1691cc:
    // 0x1691cc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1691ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1691d0:
    // 0x1691d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1691d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1691d4:
    // 0x1691d4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1691d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1691d8:
    // 0x1691d8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1691d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1691dc:
    // 0x1691dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1691dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1691e0:
    // 0x1691e0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1691e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1691e4:
    // 0x1691e4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1691e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_1691e8:
    // 0x1691e8: 0x8c8356fc  lw          $v1, 0x56FC($a0)
    ctx->pc = 0x1691e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22268)));
label_1691ec:
    // 0x1691ec: 0x14620090  bne         $v1, $v0, . + 4 + (0x90 << 2)
label_1691f0:
    if (ctx->pc == 0x1691F0u) {
        ctx->pc = 0x1691F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691ECu;
        // 0x1691f0: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1691F4u;
        goto label_1691f4;
    }
    ctx->pc = 0x1691ECu;
    {
        const bool branch_taken_0x1691ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1691F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691ECu;
        // 0x1691f0: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691ec) {
            ctx->pc = 0x169430u;
            goto label_169430;
        }
    }
    ctx->pc = 0x1691F4u;
label_1691f4:
    // 0x1691f4: 0x924200d0  lbu         $v0, 0xD0($s2)
    ctx->pc = 0x1691f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 208)));
label_1691f8:
    // 0x1691f8: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
label_1691fc:
    if (ctx->pc == 0x1691FCu) {
        ctx->pc = 0x1691FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691F8u;
        // 0x1691fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169200u;
        goto label_169200;
    }
    ctx->pc = 0x1691F8u;
    {
        const bool branch_taken_0x1691f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1691FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691F8u;
        // 0x1691fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691f8) {
            ctx->pc = 0x169430u;
            goto label_169430;
        }
    }
    ctx->pc = 0x169200u;
label_169200:
    // 0x169200: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x169200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_169204:
    // 0x169204: 0xc087502  jal         func_21D408
label_169208:
    if (ctx->pc == 0x169208u) {
        ctx->pc = 0x169208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169204u;
        // 0x169208: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16920Cu;
        goto label_16920c;
    }
    ctx->pc = 0x169204u;
    SET_GPR_U32(ctx, 31, 0x16920Cu);
    ctx->pc = 0x169208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169204u;
    // 0x169208: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x169204u, 0x16920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16920Cu;
label_16920c:
    // 0x16920c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16920cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169210:
    // 0x169210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169214:
    // 0x169214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_169218:
    // 0x169218: 0x8c55020c  lw          $s5, 0x20C($v0)
    ctx->pc = 0x169218u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_16921c:
    // 0x16921c: 0xc059856  jal         func_166158
label_169220:
    if (ctx->pc == 0x169220u) {
        ctx->pc = 0x169220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16921Cu;
        // 0x169220: 0x26570048  addiu       $s7, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169224u;
        goto label_169224;
    }
    ctx->pc = 0x16921Cu;
    SET_GPR_U32(ctx, 31, 0x169224u);
    ctx->pc = 0x169220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16921Cu;
    // 0x169220: 0x26570048  addiu       $s7, $s2, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x16921Cu, 0x169224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169224u;
label_169224:
    // 0x169224: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_169228:
    // 0x169228: 0xc059722  jal         func_165C88
label_16922c:
    if (ctx->pc == 0x16922Cu) {
        ctx->pc = 0x16922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169228u;
        // 0x16922c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169230u;
        goto label_169230;
    }
    ctx->pc = 0x169228u;
    SET_GPR_U32(ctx, 31, 0x169230u);
    ctx->pc = 0x16922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169228u;
    // 0x16922c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C88u, 0x169228u, 0x169230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169230u;
label_169230:
    // 0x169230: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x169230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_169234:
    // 0x169234: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x169234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_169238:
    // 0x169238: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x169238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_16923c:
    // 0x16923c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x16923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_169240:
    // 0x169240: 0x87c50092  lh          $a1, 0x92($fp)
    ctx->pc = 0x169240u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 146)));
label_169244:
    // 0x169244: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x169244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_169248:
    // 0x169248: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x169248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_16924c:
    // 0x16924c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16924cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_169250:
    // 0x169250: 0xc0cdb38  jal         func_336CE0
label_169254:
    if (ctx->pc == 0x169254u) {
        ctx->pc = 0x169254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169250u;
        // 0x169254: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169258u;
        goto label_169258;
    }
    ctx->pc = 0x169250u;
    SET_GPR_U32(ctx, 31, 0x169258u);
    ctx->pc = 0x169254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169250u;
    // 0x169254: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x169250u, 0x169258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169258u;
label_169258:
    // 0x169258: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x169258u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16925c:
    // 0x16925c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_169260:
    // 0x169260: 0xc137826  jal         func_4DE098
label_169264:
    if (ctx->pc == 0x169264u) {
        ctx->pc = 0x169264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169260u;
        // 0x169264: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169268u;
        goto label_169268;
    }
    ctx->pc = 0x169260u;
    SET_GPR_U32(ctx, 31, 0x169268u);
    ctx->pc = 0x169264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169260u;
    // 0x169264: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x169260u, 0x169268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169268u;
label_169268:
    // 0x169268: 0xc0e409a  jal         func_390268
label_16926c:
    if (ctx->pc == 0x16926Cu) {
        ctx->pc = 0x16926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169268u;
        // 0x16926c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169270u;
        goto label_169270;
    }
    ctx->pc = 0x169268u;
    SET_GPR_U32(ctx, 31, 0x169270u);
    ctx->pc = 0x16926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169268u;
    // 0x16926c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x169268u, 0x169270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169270u;
label_169270:
    // 0x169270: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_169274:
    if (ctx->pc == 0x169274u) {
        ctx->pc = 0x169274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169270u;
        // 0x169274: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169278u;
        goto label_169278;
    }
    ctx->pc = 0x169270u;
    {
        const bool branch_taken_0x169270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169270) {
            ctx->pc = 0x169274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169270u;
            // 0x169274: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1692D8u;
            goto label_1692d8;
        }
    }
    ctx->pc = 0x169278u;
label_169278:
    // 0x169278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x169278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16927c:
    // 0x16927c: 0xc087502  jal         func_21D408
label_169280:
    if (ctx->pc == 0x169280u) {
        ctx->pc = 0x169280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16927Cu;
        // 0x169280: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169284u;
        goto label_169284;
    }
    ctx->pc = 0x16927Cu;
    SET_GPR_U32(ctx, 31, 0x169284u);
    ctx->pc = 0x169280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16927Cu;
    // 0x169280: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16927Cu, 0x169284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169284u;
label_169284:
    // 0x169284: 0x24510164  addiu       $s1, $v0, 0x164
    ctx->pc = 0x169284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
label_169288:
    // 0x169288: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x169288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16928c:
    // 0x16928c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_169290:
    if (ctx->pc == 0x169290u) {
        ctx->pc = 0x169290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16928Cu;
        // 0x169290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169294u;
        goto label_169294;
    }
    ctx->pc = 0x16928Cu;
    {
        const bool branch_taken_0x16928c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16928Cu;
        // 0x169290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16928c) {
            ctx->pc = 0x1692CCu;
            goto label_1692cc;
        }
    }
    ctx->pc = 0x169294u;
label_169294:
    // 0x169294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_169298:
    // 0x169298: 0xc137826  jal         func_4DE098
label_16929c:
    if (ctx->pc == 0x16929Cu) {
        ctx->pc = 0x16929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169298u;
        // 0x16929c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1692A0u;
        goto label_1692a0;
    }
    ctx->pc = 0x169298u;
    SET_GPR_U32(ctx, 31, 0x1692A0u);
    ctx->pc = 0x16929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169298u;
    // 0x16929c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x169298u, 0x1692A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692A0u;
label_1692a0:
    // 0x1692a0: 0xc0e409a  jal         func_390268
label_1692a4:
    if (ctx->pc == 0x1692A4u) {
        ctx->pc = 0x1692A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692A0u;
        // 0x1692a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1692A8u;
        goto label_1692a8;
    }
    ctx->pc = 0x1692A0u;
    SET_GPR_U32(ctx, 31, 0x1692A8u);
    ctx->pc = 0x1692A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692A0u;
    // 0x1692a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1692A0u, 0x1692A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692A8u;
label_1692a8:
    // 0x1692a8: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
label_1692ac:
    if (ctx->pc == 0x1692ACu) {
        ctx->pc = 0x1692ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692A8u;
        // 0x1692ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1692B0u;
        goto label_1692b0;
    }
    ctx->pc = 0x1692A8u;
    {
        const bool branch_taken_0x1692a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692a8) {
            ctx->pc = 0x1692ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1692A8u;
            // 0x1692ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169288;
        }
    }
    ctx->pc = 0x1692B0u;
label_1692b0:
    // 0x1692b0: 0xc087502  jal         func_21D408
label_1692b4:
    if (ctx->pc == 0x1692B4u) {
        ctx->pc = 0x1692B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692B0u;
        // 0x1692b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1692B8u;
        goto label_1692b8;
    }
    ctx->pc = 0x1692B0u;
    SET_GPR_U32(ctx, 31, 0x1692B8u);
    ctx->pc = 0x1692B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692B0u;
    // 0x1692b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1692B0u, 0x1692B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692B8u;
label_1692b8:
    // 0x1692b8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1692b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1692bc:
    // 0x1692bc: 0x5475fff2  bnel        $v1, $s5, . + 4 + (-0xE << 2)
label_1692c0:
    if (ctx->pc == 0x1692C0u) {
        ctx->pc = 0x1692C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692BCu;
        // 0x1692c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1692C4u;
        goto label_1692c4;
    }
    ctx->pc = 0x1692BCu;
    {
        const bool branch_taken_0x1692bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x1692bc) {
            ctx->pc = 0x1692C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1692BCu;
            // 0x1692c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169288;
        }
    }
    ctx->pc = 0x1692C4u;
label_1692c4:
    // 0x1692c4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1692c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1692c8:
    // 0x1692c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1692c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1692cc:
    // 0x1692cc: 0x12c20005  beq         $s6, $v0, . + 4 + (0x5 << 2)
label_1692d0:
    if (ctx->pc == 0x1692D0u) {
        ctx->pc = 0x1692D4u;
        goto label_1692d4;
    }
    ctx->pc = 0x1692CCu;
    {
        const bool branch_taken_0x1692cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x1692cc) {
            ctx->pc = 0x1692E4u;
            goto label_1692e4;
        }
    }
    ctx->pc = 0x1692D4u;
label_1692d4:
    // 0x1692d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1692d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1692d8:
    // 0x1692d8: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x1692d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1692dc:
    // 0x1692dc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_1692e0:
    if (ctx->pc == 0x1692E0u) {
        ctx->pc = 0x1692E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692DCu;
        // 0x1692e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1692E4u;
        goto label_1692e4;
    }
    ctx->pc = 0x1692DCu;
    {
        const bool branch_taken_0x1692dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1692E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692DCu;
        // 0x1692e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692dc) {
            ctx->pc = 0x169260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169260;
        }
    }
    ctx->pc = 0x1692E4u;
label_1692e4:
    // 0x1692e4: 0xc087502  jal         func_21D408
label_1692e8:
    if (ctx->pc == 0x1692E8u) {
        ctx->pc = 0x1692E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692E4u;
        // 0x1692e8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1692ECu;
        goto label_1692ec;
    }
    ctx->pc = 0x1692E4u;
    SET_GPR_U32(ctx, 31, 0x1692ECu);
    ctx->pc = 0x1692E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692E4u;
    // 0x1692e8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1692E4u, 0x1692ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692ECu;
label_1692ec:
    // 0x1692ec: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x1692ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_1692f0:
    // 0x1692f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1692f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1692f4:
    // 0x1692f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1692f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1692f8:
    // 0x1692f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1692f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1692fc:
    // 0x1692fc: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1692fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169300:
    // 0x169300: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x169300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_169304:
    // 0x169304: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x169304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_169308:
    // 0x169308: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_16930c:
    if (ctx->pc == 0x16930Cu) {
        ctx->pc = 0x16930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169308u;
        // 0x16930c: 0x3580b  movn        $t3, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169310u;
        goto label_169310;
    }
    ctx->pc = 0x169308u;
    {
        const bool branch_taken_0x169308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169308u;
        // 0x16930c: 0x3580b  movn        $t3, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169308) {
            ctx->pc = 0x1693B4u;
            goto label_1693b4;
        }
    }
    ctx->pc = 0x169310u;
label_169310:
    // 0x169310: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x169310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_169314:
    // 0x169314: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x169314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169318:
    // 0x169318: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x169318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16931c:
    // 0x16931c: 0x9246060d  lbu         $a2, 0x60D($s2)
    ctx->pc = 0x16931cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1549)));
label_169320:
    // 0x169320: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x169320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_169324:
    // 0x169324: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x169324u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_169328:
    // 0x169328: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x169328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16932c:
    // 0x16932c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x16932cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_169330:
    // 0x169330: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x169330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_169334:
    // 0x169334: 0x8e8503b0  lw          $a1, 0x3B0($s4)
    ctx->pc = 0x169334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 944)));
label_169338:
    // 0x169338: 0x82480b  movn        $t1, $a0, $v0
    ctx->pc = 0x169338u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 4));
label_16933c:
    // 0x16933c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x16933cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_169340:
    // 0x169340: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x169340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_169344:
    // 0x169344: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x169344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_169348:
    // 0x169348: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x169348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_16934c:
    // 0x16934c: 0xe2480a  movz        $t1, $a3, $v0
    ctx->pc = 0x16934cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 7));
label_169350:
    // 0x169350: 0xc044420  jal         func_111080
label_169354:
    if (ctx->pc == 0x169354u) {
        ctx->pc = 0x169354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169350u;
        // 0x169354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169358u;
        goto label_169358;
    }
    ctx->pc = 0x169350u;
    SET_GPR_U32(ctx, 31, 0x169358u);
    ctx->pc = 0x169354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169350u;
    // 0x169354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111080u, 0x169350u, 0x169358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169358u;
label_169358:
    // 0x169358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x169358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16935c:
    // 0x16935c: 0xc05a58c  jal         func_169630
label_169360:
    if (ctx->pc == 0x169360u) {
        ctx->pc = 0x169360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16935Cu;
        // 0x169360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169364u;
        goto label_169364;
    }
    ctx->pc = 0x16935Cu;
    SET_GPR_U32(ctx, 31, 0x169364u);
    ctx->pc = 0x169360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16935Cu;
    // 0x169360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169630u, 0x16935Cu, 0x169364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169364u;
label_169364:
    // 0x169364: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x169364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_169368:
    // 0x169368: 0xc087b0e  jal         func_21EC38
label_16936c:
    if (ctx->pc == 0x16936Cu) {
        ctx->pc = 0x16936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169368u;
        // 0x16936c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169370u;
        goto label_169370;
    }
    ctx->pc = 0x169368u;
    SET_GPR_U32(ctx, 31, 0x169370u);
    ctx->pc = 0x16936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169368u;
    // 0x16936c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x169368u, 0x169370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169370u;
label_169370:
    // 0x169370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x169370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_169374:
    // 0x169374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x169374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169378:
    // 0x169378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16937c:
    // 0x16937c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16937cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_169380:
    // 0x169380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169384:
    // 0x169384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x169384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169388:
    // 0x169388: 0xc087900  jal         func_21E400
label_16938c:
    if (ctx->pc == 0x16938Cu) {
        ctx->pc = 0x16938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169388u;
        // 0x16938c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169390u;
        goto label_169390;
    }
    ctx->pc = 0x169388u;
    SET_GPR_U32(ctx, 31, 0x169390u);
    ctx->pc = 0x16938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169388u;
    // 0x16938c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x169388u, 0x169390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169390u;
label_169390:
    // 0x169390: 0x16c00023  bnez        $s6, . + 4 + (0x23 << 2)
label_169394:
    if (ctx->pc == 0x169394u) {
        ctx->pc = 0x169394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169390u;
        // 0x169394: 0xae420610  sw          $v0, 0x610($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169398u;
        goto label_169398;
    }
    ctx->pc = 0x169390u;
    {
        const bool branch_taken_0x169390 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x169394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169390u;
        // 0x169394: 0xae420610  sw          $v0, 0x610($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169390) {
            ctx->pc = 0x169420u;
            goto label_169420;
        }
    }
    ctx->pc = 0x169398u;
label_169398:
    // 0x169398: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x169398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16939c:
    // 0x16939c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16939cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1693a0:
    // 0x1693a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1693a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1693a4:
    // 0x1693a4: 0x40f809  jalr        $v0
label_1693a8:
    if (ctx->pc == 0x1693A8u) {
        ctx->pc = 0x1693A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693A4u;
        // 0x1693a8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1693ACu;
        goto label_1693ac;
    }
    ctx->pc = 0x1693A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1693ACu);
        ctx->pc = 0x1693A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693A4u;
        // 0x1693a8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1693A4u, 0x1693ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1693ACu;
label_1693ac:
    // 0x1693ac: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1693b0:
    if (ctx->pc == 0x1693B0u) {
        ctx->pc = 0x1693B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693ACu;
        // 0x1693b0: 0xae420614  sw          $v0, 0x614($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1693B4u;
        goto label_1693b4;
    }
    ctx->pc = 0x1693ACu;
    {
        const bool branch_taken_0x1693ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693ACu;
        // 0x1693b0: 0xae420614  sw          $v0, 0x614($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693ac) {
            ctx->pc = 0x16942Cu;
            goto label_16942c;
        }
    }
    ctx->pc = 0x1693B4u;
label_1693b4:
    // 0x1693b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1693b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1693b8:
    // 0x1693b8: 0x1444001d  bne         $v0, $a0, . + 4 + (0x1D << 2)
label_1693bc:
    if (ctx->pc == 0x1693BCu) {
        ctx->pc = 0x1693BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693B8u;
        // 0x1693bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1693C0u;
        goto label_1693c0;
    }
    ctx->pc = 0x1693B8u;
    {
        const bool branch_taken_0x1693b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1693BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693B8u;
        // 0x1693bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693b8) {
            ctx->pc = 0x169430u;
            goto label_169430;
        }
    }
    ctx->pc = 0x1693C0u;
label_1693c0:
    // 0x1693c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1693c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1693c4:
    // 0x1693c4: 0x9246060d  lbu         $a2, 0x60D($s2)
    ctx->pc = 0x1693c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1549)));
label_1693c8:
    // 0x1693c8: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x1693c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1693cc:
    // 0x1693cc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1693ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1693d0:
    // 0x1693d0: 0x8e8503b0  lw          $a1, 0x3B0($s4)
    ctx->pc = 0x1693d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 944)));
label_1693d4:
    // 0x1693d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1693d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1693d8:
    // 0x1693d8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1693d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1693dc:
    // 0x1693dc: 0xc044420  jal         func_111080
label_1693e0:
    if (ctx->pc == 0x1693E0u) {
        ctx->pc = 0x1693E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693DCu;
        // 0x1693e0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1693E4u;
        goto label_1693e4;
    }
    ctx->pc = 0x1693DCu;
    SET_GPR_U32(ctx, 31, 0x1693E4u);
    ctx->pc = 0x1693E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693DCu;
    // 0x1693e0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111080u, 0x1693DCu, 0x1693E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693E4u;
label_1693e4:
    // 0x1693e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1693e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1693e8:
    // 0x1693e8: 0xc05a58c  jal         func_169630
label_1693ec:
    if (ctx->pc == 0x1693ECu) {
        ctx->pc = 0x1693ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693E8u;
        // 0x1693ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1693F0u;
        goto label_1693f0;
    }
    ctx->pc = 0x1693E8u;
    SET_GPR_U32(ctx, 31, 0x1693F0u);
    ctx->pc = 0x1693ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693E8u;
    // 0x1693ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169630u, 0x1693E8u, 0x1693F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693F0u;
label_1693f0:
    // 0x1693f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1693f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1693f4:
    // 0x1693f4: 0xc087b0e  jal         func_21EC38
label_1693f8:
    if (ctx->pc == 0x1693F8u) {
        ctx->pc = 0x1693F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693F4u;
        // 0x1693f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1693FCu;
        goto label_1693fc;
    }
    ctx->pc = 0x1693F4u;
    SET_GPR_U32(ctx, 31, 0x1693FCu);
    ctx->pc = 0x1693F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693F4u;
    // 0x1693f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x1693F4u, 0x1693FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693FCu;
label_1693fc:
    // 0x1693fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1693fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_169400:
    // 0x169400: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x169400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169404:
    // 0x169404: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x169404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_169408:
    // 0x169408: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16940c:
    // 0x16940c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16940cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169410:
    // 0x169410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x169410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169414:
    // 0x169414: 0xc087900  jal         func_21E400
label_169418:
    if (ctx->pc == 0x169418u) {
        ctx->pc = 0x169418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169414u;
        // 0x169418: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16941Cu;
        goto label_16941c;
    }
    ctx->pc = 0x169414u;
    SET_GPR_U32(ctx, 31, 0x16941Cu);
    ctx->pc = 0x169418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169414u;
    // 0x169418: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x169414u, 0x16941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16941Cu;
label_16941c:
    // 0x16941c: 0xae420610  sw          $v0, 0x610($s2)
    ctx->pc = 0x16941cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1552), GPR_U32(ctx, 2));
label_169420:
    // 0x169420: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x169420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_169424:
    // 0x169424: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x169424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_169428:
    // 0x169428: 0xae430614  sw          $v1, 0x614($s2)
    ctx->pc = 0x169428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1556), GPR_U32(ctx, 3));
label_16942c:
    // 0x16942c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169430:
    // 0x169430: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x169430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_169434:
    // 0x169434: 0xa24200d0  sb          $v0, 0xD0($s2)
    ctx->pc = 0x169434u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 208), (uint8_t)GPR_U32(ctx, 2));
label_169438:
    // 0x169438: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x169438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16943c:
    // 0x16943c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x16943cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_169440:
    // 0x169440: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x169440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_169444:
    // 0x169444: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x169444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_169448:
    // 0x169448: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x169448u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16944c:
    // 0x16944c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x16944cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_169450:
    // 0x169450: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x169450u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_169454:
    // 0x169454: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x169454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_169458:
    // 0x169458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16945c:
    // 0x16945c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x16945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_169460:
    // 0x169460: 0x3e00008  jr          $ra
label_169464:
    if (ctx->pc == 0x169464u) {
        ctx->pc = 0x169464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169460u;
        // 0x169464: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169468u;
        goto label_fallthrough_0x169460;
    }
    ctx->pc = 0x169460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169460u;
        // 0x169464: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x169460:
    ctx->pc = 0x169468u;
}

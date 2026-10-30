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

// Function: sub_00106360
// Address: 0x106360 - 0x106498
void sub_00106360_0x106360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106360_0x106360");
#endif

    switch (ctx->pc) {
        case 0x106360u: goto label_106360;
        case 0x106364u: goto label_106364;
        case 0x106368u: goto label_106368;
        case 0x10636cu: goto label_10636c;
        case 0x106370u: goto label_106370;
        case 0x106374u: goto label_106374;
        case 0x106378u: goto label_106378;
        case 0x10637cu: goto label_10637c;
        case 0x106380u: goto label_106380;
        case 0x106384u: goto label_106384;
        case 0x106388u: goto label_106388;
        case 0x10638cu: goto label_10638c;
        case 0x106390u: goto label_106390;
        case 0x106394u: goto label_106394;
        case 0x106398u: goto label_106398;
        case 0x10639cu: goto label_10639c;
        case 0x1063a0u: goto label_1063a0;
        case 0x1063a4u: goto label_1063a4;
        case 0x1063a8u: goto label_1063a8;
        case 0x1063acu: goto label_1063ac;
        case 0x1063b0u: goto label_1063b0;
        case 0x1063b4u: goto label_1063b4;
        case 0x1063b8u: goto label_1063b8;
        case 0x1063bcu: goto label_1063bc;
        case 0x1063c0u: goto label_1063c0;
        case 0x1063c4u: goto label_1063c4;
        case 0x1063c8u: goto label_1063c8;
        case 0x1063ccu: goto label_1063cc;
        case 0x1063d0u: goto label_1063d0;
        case 0x1063d4u: goto label_1063d4;
        case 0x1063d8u: goto label_1063d8;
        case 0x1063dcu: goto label_1063dc;
        case 0x1063e0u: goto label_1063e0;
        case 0x1063e4u: goto label_1063e4;
        case 0x1063e8u: goto label_1063e8;
        case 0x1063ecu: goto label_1063ec;
        case 0x1063f0u: goto label_1063f0;
        case 0x1063f4u: goto label_1063f4;
        case 0x1063f8u: goto label_1063f8;
        case 0x1063fcu: goto label_1063fc;
        case 0x106400u: goto label_106400;
        case 0x106404u: goto label_106404;
        case 0x106408u: goto label_106408;
        case 0x10640cu: goto label_10640c;
        case 0x106410u: goto label_106410;
        case 0x106414u: goto label_106414;
        case 0x106418u: goto label_106418;
        case 0x10641cu: goto label_10641c;
        case 0x106420u: goto label_106420;
        case 0x106424u: goto label_106424;
        case 0x106428u: goto label_106428;
        case 0x10642cu: goto label_10642c;
        case 0x106430u: goto label_106430;
        case 0x106434u: goto label_106434;
        case 0x106438u: goto label_106438;
        case 0x10643cu: goto label_10643c;
        case 0x106440u: goto label_106440;
        case 0x106444u: goto label_106444;
        case 0x106448u: goto label_106448;
        case 0x10644cu: goto label_10644c;
        case 0x106450u: goto label_106450;
        case 0x106454u: goto label_106454;
        case 0x106458u: goto label_106458;
        case 0x10645cu: goto label_10645c;
        case 0x106460u: goto label_106460;
        case 0x106464u: goto label_106464;
        case 0x106468u: goto label_106468;
        case 0x10646cu: goto label_10646c;
        case 0x106470u: goto label_106470;
        case 0x106474u: goto label_106474;
        case 0x106478u: goto label_106478;
        case 0x10647cu: goto label_10647c;
        case 0x106480u: goto label_106480;
        case 0x106484u: goto label_106484;
        case 0x106488u: goto label_106488;
        case 0x10648cu: goto label_10648c;
        case 0x106490u: goto label_106490;
        case 0x106494u: goto label_106494;
        default: break;
    }

    ctx->pc = 0x106360u;

label_106360:
    // 0x106360: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x106360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_106364:
    // 0x106364: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x106364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_106368:
    // 0x106368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10636c:
    // 0x10636c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x10636cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_106370:
    // 0x106370: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x106370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_106374:
    // 0x106374: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x106374u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_106378:
    // 0x106378: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x106378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_10637c:
    // 0x10637c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x10637cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_106380:
    // 0x106380: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x106380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_106384:
    // 0x106384: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x106384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_106388:
    // 0x106388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10638c:
    // 0x10638c: 0xc0420dc  jal         func_108370
label_106390:
    if (ctx->pc == 0x106390u) {
        ctx->pc = 0x106390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10638Cu;
        // 0x106390: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106394u;
        goto label_106394;
    }
    ctx->pc = 0x10638Cu;
    SET_GPR_U32(ctx, 31, 0x106394u);
    ctx->pc = 0x106390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10638Cu;
    // 0x106390: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10638Cu, 0x106394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106394u;
label_106394:
    // 0x106394: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x106394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_106398:
    // 0x106398: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x106398u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_10639c:
    // 0x10639c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1063a0:
    // 0x1063a0: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1063a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1063a4:
    // 0x1063a4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1063a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1063a8:
    // 0x1063a8: 0xc05d462  jal         func_175188
label_1063ac:
    if (ctx->pc == 0x1063ACu) {
        ctx->pc = 0x1063ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063A8u;
        // 0x1063ac: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1063B0u;
        goto label_1063b0;
    }
    ctx->pc = 0x1063A8u;
    SET_GPR_U32(ctx, 31, 0x1063B0u);
    ctx->pc = 0x1063ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1063A8u;
    // 0x1063ac: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x1063A8u, 0x1063B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1063B0u;
label_1063b0:
    // 0x1063b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1063b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1063b4:
    // 0x1063b4: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1063b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1063b8:
    // 0x1063b8: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x1063b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1063bc:
    // 0x1063bc: 0xa0f809  jalr        $a1
label_1063c0:
    if (ctx->pc == 0x1063C0u) {
        ctx->pc = 0x1063C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063BCu;
        // 0x1063c0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1063C4u;
        goto label_1063c4;
    }
    ctx->pc = 0x1063BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1063C4u);
        ctx->pc = 0x1063C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063BCu;
        // 0x1063c0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1063BCu, 0x1063C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1063C4u;
label_1063c4:
    // 0x1063c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1063c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1063c8:
    // 0x1063c8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1063c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1063cc:
    // 0x1063cc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1063ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1063d0:
    // 0x1063d0: 0x10730016  beq         $v1, $s3, . + 4 + (0x16 << 2)
label_1063d4:
    if (ctx->pc == 0x1063D4u) {
        ctx->pc = 0x1063D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063D0u;
        // 0x1063d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1063D8u;
        goto label_1063d8;
    }
    ctx->pc = 0x1063D0u;
    {
        const bool branch_taken_0x1063d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1063D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063D0u;
        // 0x1063d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063d0) {
            ctx->pc = 0x10642Cu;
            goto label_10642c;
        }
    }
    ctx->pc = 0x1063D8u;
label_1063d8:
    // 0x1063d8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1063d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1063dc:
    // 0x1063dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1063e0:
    if (ctx->pc == 0x1063E0u) {
        ctx->pc = 0x1063E4u;
        goto label_1063e4;
    }
    ctx->pc = 0x1063DCu;
    {
        const bool branch_taken_0x1063dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1063dc) {
            ctx->pc = 0x1063F4u;
            goto label_1063f4;
        }
    }
    ctx->pc = 0x1063E4u;
label_1063e4:
    // 0x1063e4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_1063e8:
    if (ctx->pc == 0x1063E8u) {
        ctx->pc = 0x1063E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063E4u;
        // 0x1063e8: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1063ECu;
        goto label_1063ec;
    }
    ctx->pc = 0x1063E4u;
    {
        const bool branch_taken_0x1063e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1063e4) {
            ctx->pc = 0x1063E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1063E4u;
            // 0x1063e8: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x106404u;
            goto label_106404;
        }
    }
    ctx->pc = 0x1063ECu;
label_1063ec:
    // 0x1063ec: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1063f0:
    if (ctx->pc == 0x1063F0u) {
        ctx->pc = 0x1063F4u;
        goto label_1063f4;
    }
    ctx->pc = 0x1063ECu;
    {
        const bool branch_taken_0x1063ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1063ec) {
            ctx->pc = 0x10646Cu;
            goto label_10646c;
        }
    }
    ctx->pc = 0x1063F4u;
label_1063f4:
    // 0x1063f4: 0x50720018  beql        $v1, $s2, . + 4 + (0x18 << 2)
label_1063f8:
    if (ctx->pc == 0x1063F8u) {
        ctx->pc = 0x1063F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063F4u;
        // 0x1063f8: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1063FCu;
        goto label_1063fc;
    }
    ctx->pc = 0x1063F4u;
    {
        const bool branch_taken_0x1063f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x1063f4) {
            ctx->pc = 0x1063F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1063F4u;
            // 0x1063f8: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x106458u;
            goto label_106458;
        }
    }
    ctx->pc = 0x1063FCu;
label_1063fc:
    // 0x1063fc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_106400:
    if (ctx->pc == 0x106400u) {
        ctx->pc = 0x106404u;
        goto label_106404;
    }
    ctx->pc = 0x1063FCu;
    {
        const bool branch_taken_0x1063fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1063fc) {
            ctx->pc = 0x10646Cu;
            goto label_10646c;
        }
    }
    ctx->pc = 0x106404u;
label_106404:
    // 0x106404: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x106404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_106408:
    // 0x106408: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x106408u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10640c:
    // 0x10640c: 0x0  nop
    ctx->pc = 0x10640cu;
    // NOP
label_106410:
    // 0x106410: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_106414:
    if (ctx->pc == 0x106414u) {
        ctx->pc = 0x106418u;
        goto label_106418;
    }
    ctx->pc = 0x106410u;
    {
        const bool branch_taken_0x106410 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x106410) {
            ctx->pc = 0x10646Cu;
            goto label_10646c;
        }
    }
    ctx->pc = 0x106418u;
label_106418:
    // 0x106418: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x106418u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_10641c:
    // 0x10641c: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x10641cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
label_106420:
    // 0x106420: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x106420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_106424:
    // 0x106424: 0x10000011  b           . + 4 + (0x11 << 2)
label_106428:
    if (ctx->pc == 0x106428u) {
        ctx->pc = 0x106428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106424u;
        // 0x106428: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10642Cu;
        goto label_10642c;
    }
    ctx->pc = 0x106424u;
    {
        const bool branch_taken_0x106424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106424u;
        // 0x106428: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106424) {
            ctx->pc = 0x10646Cu;
            goto label_10646c;
        }
    }
    ctx->pc = 0x10642Cu;
label_10642c:
    // 0x10642c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_106430:
    // 0x106430: 0xc041128  jal         func_1044A0
label_106434:
    if (ctx->pc == 0x106434u) {
        ctx->pc = 0x106434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106430u;
        // 0x106434: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x106438u;
        goto label_106438;
    }
    ctx->pc = 0x106430u;
    SET_GPR_U32(ctx, 31, 0x106438u);
    ctx->pc = 0x106434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106430u;
    // 0x106434: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x106430u, 0x106438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106438u;
label_106438:
    // 0x106438: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x106438u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10643c:
    // 0x10643c: 0x0  nop
    ctx->pc = 0x10643cu;
    // NOP
label_106440:
    // 0x106440: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_106444:
    if (ctx->pc == 0x106444u) {
        ctx->pc = 0x106448u;
        goto label_106448;
    }
    ctx->pc = 0x106440u;
    {
        const bool branch_taken_0x106440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x106440) {
            ctx->pc = 0x10646Cu;
            goto label_10646c;
        }
    }
    ctx->pc = 0x106448u;
label_106448:
    // 0x106448: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x106448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_10644c:
    // 0x10644c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x10644cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_106450:
    // 0x106450: 0x10000006  b           . + 4 + (0x6 << 2)
label_106454:
    if (ctx->pc == 0x106454u) {
        ctx->pc = 0x106454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106450u;
        // 0x106454: 0xae120030  sw          $s2, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106458u;
        goto label_106458;
    }
    ctx->pc = 0x106450u;
    {
        const bool branch_taken_0x106450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106450u;
        // 0x106454: 0xae120030  sw          $s2, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106450) {
            ctx->pc = 0x10646Cu;
            goto label_10646c;
        }
    }
    ctx->pc = 0x106458u;
label_106458:
    // 0x106458: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x106458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10645c:
    // 0x10645c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10645cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_106460:
    // 0x106460: 0x0  nop
    ctx->pc = 0x106460u;
    // NOP
label_106464:
    // 0x106464: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_106468:
    if (ctx->pc == 0x106468u) {
        ctx->pc = 0x106468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106464u;
        // 0x106468: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10646Cu;
        goto label_10646c;
    }
    ctx->pc = 0x106464u;
    {
        const bool branch_taken_0x106464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x106464) {
            ctx->pc = 0x106468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106464u;
            // 0x106468: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106478u;
            goto label_106478;
        }
    }
    ctx->pc = 0x10646Cu;
label_10646c:
    // 0x10646c: 0x5620ffd8  bnel        $s1, $zero, . + 4 + (-0x28 << 2)
label_106470:
    if (ctx->pc == 0x106470u) {
        ctx->pc = 0x106470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10646Cu;
        // 0x106470: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106474u;
        goto label_106474;
    }
    ctx->pc = 0x10646Cu;
    {
        const bool branch_taken_0x10646c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10646c) {
            ctx->pc = 0x106470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10646Cu;
            // 0x106470: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1063D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1063d0;
        }
    }
    ctx->pc = 0x106474u;
label_106474:
    // 0x106474: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x106474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_106478:
    // 0x106478: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x106478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10647c:
    // 0x10647c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10647cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_106480:
    // 0x106480: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x106480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_106484:
    // 0x106484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106488:
    // 0x106488: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x106488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10648c:
    // 0x10648c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x10648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_106490:
    // 0x106490: 0x3e00008  jr          $ra
label_106494:
    if (ctx->pc == 0x106494u) {
        ctx->pc = 0x106494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106490u;
        // 0x106494: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106498u;
        goto label_fallthrough_0x106490;
    }
    ctx->pc = 0x106490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106490u;
        // 0x106494: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106490:
    ctx->pc = 0x106498u;
}

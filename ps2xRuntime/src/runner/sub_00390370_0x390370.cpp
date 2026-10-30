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

// Function: sub_00390370
// Address: 0x390370 - 0x390480
void sub_00390370_0x390370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390370_0x390370");
#endif

    switch (ctx->pc) {
        case 0x390370u: goto label_390370;
        case 0x390374u: goto label_390374;
        case 0x390378u: goto label_390378;
        case 0x39037cu: goto label_39037c;
        case 0x390380u: goto label_390380;
        case 0x390384u: goto label_390384;
        case 0x390388u: goto label_390388;
        case 0x39038cu: goto label_39038c;
        case 0x390390u: goto label_390390;
        case 0x390394u: goto label_390394;
        case 0x390398u: goto label_390398;
        case 0x39039cu: goto label_39039c;
        case 0x3903a0u: goto label_3903a0;
        case 0x3903a4u: goto label_3903a4;
        case 0x3903a8u: goto label_3903a8;
        case 0x3903acu: goto label_3903ac;
        case 0x3903b0u: goto label_3903b0;
        case 0x3903b4u: goto label_3903b4;
        case 0x3903b8u: goto label_3903b8;
        case 0x3903bcu: goto label_3903bc;
        case 0x3903c0u: goto label_3903c0;
        case 0x3903c4u: goto label_3903c4;
        case 0x3903c8u: goto label_3903c8;
        case 0x3903ccu: goto label_3903cc;
        case 0x3903d0u: goto label_3903d0;
        case 0x3903d4u: goto label_3903d4;
        case 0x3903d8u: goto label_3903d8;
        case 0x3903dcu: goto label_3903dc;
        case 0x3903e0u: goto label_3903e0;
        case 0x3903e4u: goto label_3903e4;
        case 0x3903e8u: goto label_3903e8;
        case 0x3903ecu: goto label_3903ec;
        case 0x3903f0u: goto label_3903f0;
        case 0x3903f4u: goto label_3903f4;
        case 0x3903f8u: goto label_3903f8;
        case 0x3903fcu: goto label_3903fc;
        case 0x390400u: goto label_390400;
        case 0x390404u: goto label_390404;
        case 0x390408u: goto label_390408;
        case 0x39040cu: goto label_39040c;
        case 0x390410u: goto label_390410;
        case 0x390414u: goto label_390414;
        case 0x390418u: goto label_390418;
        case 0x39041cu: goto label_39041c;
        case 0x390420u: goto label_390420;
        case 0x390424u: goto label_390424;
        case 0x390428u: goto label_390428;
        case 0x39042cu: goto label_39042c;
        case 0x390430u: goto label_390430;
        case 0x390434u: goto label_390434;
        case 0x390438u: goto label_390438;
        case 0x39043cu: goto label_39043c;
        case 0x390440u: goto label_390440;
        case 0x390444u: goto label_390444;
        case 0x390448u: goto label_390448;
        case 0x39044cu: goto label_39044c;
        case 0x390450u: goto label_390450;
        case 0x390454u: goto label_390454;
        case 0x390458u: goto label_390458;
        case 0x39045cu: goto label_39045c;
        case 0x390460u: goto label_390460;
        case 0x390464u: goto label_390464;
        case 0x390468u: goto label_390468;
        case 0x39046cu: goto label_39046c;
        case 0x390470u: goto label_390470;
        case 0x390474u: goto label_390474;
        case 0x390478u: goto label_390478;
        case 0x39047cu: goto label_39047c;
        default: break;
    }

    ctx->pc = 0x390370u;

label_390370:
    // 0x390370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x390370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_390374:
    // 0x390374: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x390374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_390378:
    // 0x390378: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x390378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39037c:
    // 0x39037c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_390380:
    // 0x390380: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x390380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_390384:
    // 0x390384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x390384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_390388:
    // 0x390388: 0xc0e8570  jal         func_3A15C0
label_39038c:
    if (ctx->pc == 0x39038Cu) {
        ctx->pc = 0x39038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390388u;
        // 0x39038c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390390u;
        goto label_390390;
    }
    ctx->pc = 0x390388u;
    SET_GPR_U32(ctx, 31, 0x390390u);
    ctx->pc = 0x39038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390388u;
    // 0x39038c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15C0u, 0x390388u, 0x390390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390390u;
label_390390:
    // 0x390390: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x390390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_390394:
    // 0x390394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390398:
    // 0x390398: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x390398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_39039c:
    // 0x39039c: 0x24510190  addiu       $s1, $v0, 0x190
    ctx->pc = 0x39039cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_3903a0:
    // 0x3903a0: 0x84500190  lh          $s0, 0x190($v0)
    ctx->pc = 0x3903a0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_3903a4:
    // 0x3903a4: 0xc0f15a8  jal         func_3C56A0
label_3903a8:
    if (ctx->pc == 0x3903A8u) {
        ctx->pc = 0x3903A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3903A4u;
        // 0x3903a8: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3903ACu;
        goto label_3903ac;
    }
    ctx->pc = 0x3903A4u;
    SET_GPR_U32(ctx, 31, 0x3903ACu);
    ctx->pc = 0x3903A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3903A4u;
    // 0x3903a8: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56A0u, 0x3903A4u, 0x3903ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3903ACu;
label_3903ac:
    // 0x3903ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3903acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3903b0:
    // 0x3903b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3903b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3903b4:
    // 0x3903b4: 0x60f809  jalr        $v1
label_3903b8:
    if (ctx->pc == 0x3903B8u) {
        ctx->pc = 0x3903B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3903B4u;
        // 0x3903b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3903BCu;
        goto label_3903bc;
    }
    ctx->pc = 0x3903B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3903BCu);
        ctx->pc = 0x3903B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3903B4u;
        // 0x3903b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3903B4u, 0x3903BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3903BCu;
label_3903bc:
    // 0x3903bc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3903bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3903c0:
    // 0x3903c0: 0xae400088  sw          $zero, 0x88($s2)
    ctx->pc = 0x3903c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
label_3903c4:
    // 0x3903c4: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x3903c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
label_3903c8:
    // 0x3903c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3903c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3903cc:
    // 0x3903cc: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x3903ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
label_3903d0:
    // 0x3903d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3903d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3903d4:
    // 0x3903d4: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x3903d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
label_3903d8:
    // 0x3903d8: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x3903d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
label_3903dc:
    // 0x3903dc: 0xc0e858c  jal         func_3A1630
label_3903e0:
    if (ctx->pc == 0x3903E0u) {
        ctx->pc = 0x3903E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3903DCu;
        // 0x3903e0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3903E4u;
        goto label_3903e4;
    }
    ctx->pc = 0x3903DCu;
    SET_GPR_U32(ctx, 31, 0x3903E4u);
    ctx->pc = 0x3903E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3903DCu;
    // 0x3903e0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3903DCu, 0x3903E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3903E4u;
label_3903e4:
    // 0x3903e4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3903e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3903e8:
    // 0x3903e8: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x3903e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
label_3903ec:
    // 0x3903ec: 0xc4400c2c  lwc1        $f0, 0xC2C($v0)
    ctx->pc = 0x3903ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3903f0:
    // 0x3903f0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3903f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3903f4:
    // 0x3903f4: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x3903f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_3903f8:
    // 0x3903f8: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3903f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_3903fc:
    // 0x3903fc: 0xe6400094  swc1        $f0, 0x94($s2)
    ctx->pc = 0x3903fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
label_390400:
    // 0x390400: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x390400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_390404:
    // 0x390404: 0x52ef8  dsll        $a1, $a1, 27
    ctx->pc = 0x390404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 27);
label_390408:
    // 0x390408: 0xde430050  ld          $v1, 0x50($s2)
    ctx->pc = 0x390408u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 80)));
label_39040c:
    // 0x39040c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x39040cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_390410:
    // 0x390410: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x390410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_390414:
    // 0x390414: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x390414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_390418:
    // 0x390418: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_39041c:
    if (ctx->pc == 0x39041Cu) {
        ctx->pc = 0x39041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390418u;
        // 0x39041c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390420u;
        goto label_390420;
    }
    ctx->pc = 0x390418u;
    {
        const bool branch_taken_0x390418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390418u;
        // 0x39041c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390418) {
            ctx->pc = 0x390438u;
            goto label_390438;
        }
    }
    ctx->pc = 0x390420u;
label_390420:
    // 0x390420: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x390420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_390424:
    // 0x390424: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x390424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_390428:
    // 0x390428: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x390428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_39042c:
    // 0x39042c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x39042cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_390430:
    // 0x390430: 0x60f809  jalr        $v1
label_390434:
    if (ctx->pc == 0x390434u) {
        ctx->pc = 0x390434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390430u;
        // 0x390434: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390438u;
        goto label_390438;
    }
    ctx->pc = 0x390430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x390438u);
        ctx->pc = 0x390434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390430u;
        // 0x390434: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390430u, 0x390438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390438u;
label_390438:
    // 0x390438: 0xde420050  ld          $v0, 0x50($s2)
    ctx->pc = 0x390438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 80)));
label_39043c:
    // 0x39043c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x39043cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_390440:
    // 0x390440: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x390440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
label_390444:
    // 0x390444: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x390444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_390448:
    // 0x390448: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_39044c:
    if (ctx->pc == 0x39044Cu) {
        ctx->pc = 0x39044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390448u;
        // 0x39044c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390450u;
        goto label_390450;
    }
    ctx->pc = 0x390448u;
    {
        const bool branch_taken_0x390448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390448u;
        // 0x39044c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390448) {
            ctx->pc = 0x39046Cu;
            goto label_39046c;
        }
    }
    ctx->pc = 0x390450u;
label_390450:
    // 0x390450: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x390450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_390454:
    // 0x390454: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x390454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_390458:
    // 0x390458: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x390458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_39045c:
    // 0x39045c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x39045cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_390460:
    // 0x390460: 0x60f809  jalr        $v1
label_390464:
    if (ctx->pc == 0x390464u) {
        ctx->pc = 0x390464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390460u;
        // 0x390464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390468u;
        goto label_390468;
    }
    ctx->pc = 0x390460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x390468u);
        ctx->pc = 0x390464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390460u;
        // 0x390464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390460u, 0x390468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390468u;
label_390468:
    // 0x390468: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x390468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39046c:
    // 0x39046c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39046cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_390470:
    // 0x390470: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x390470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_390474:
    // 0x390474: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x390474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_390478:
    // 0x390478: 0x3e00008  jr          $ra
label_39047c:
    if (ctx->pc == 0x39047Cu) {
        ctx->pc = 0x39047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390478u;
        // 0x39047c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390480u;
        goto label_fallthrough_0x390478;
    }
    ctx->pc = 0x390478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390478u;
        // 0x39047c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x390478:
    ctx->pc = 0x390480u;
}

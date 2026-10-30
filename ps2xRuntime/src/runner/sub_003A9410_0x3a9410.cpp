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

// Function: sub_003A9410
// Address: 0x3a9410 - 0x3a9628
void sub_003A9410_0x3a9410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9410_0x3a9410");
#endif

    switch (ctx->pc) {
        case 0x3a9410u: goto label_3a9410;
        case 0x3a9414u: goto label_3a9414;
        case 0x3a9418u: goto label_3a9418;
        case 0x3a941cu: goto label_3a941c;
        case 0x3a9420u: goto label_3a9420;
        case 0x3a9424u: goto label_3a9424;
        case 0x3a9428u: goto label_3a9428;
        case 0x3a942cu: goto label_3a942c;
        case 0x3a9430u: goto label_3a9430;
        case 0x3a9434u: goto label_3a9434;
        case 0x3a9438u: goto label_3a9438;
        case 0x3a943cu: goto label_3a943c;
        case 0x3a9440u: goto label_3a9440;
        case 0x3a9444u: goto label_3a9444;
        case 0x3a9448u: goto label_3a9448;
        case 0x3a944cu: goto label_3a944c;
        case 0x3a9450u: goto label_3a9450;
        case 0x3a9454u: goto label_3a9454;
        case 0x3a9458u: goto label_3a9458;
        case 0x3a945cu: goto label_3a945c;
        case 0x3a9460u: goto label_3a9460;
        case 0x3a9464u: goto label_3a9464;
        case 0x3a9468u: goto label_3a9468;
        case 0x3a946cu: goto label_3a946c;
        case 0x3a9470u: goto label_3a9470;
        case 0x3a9474u: goto label_3a9474;
        case 0x3a9478u: goto label_3a9478;
        case 0x3a947cu: goto label_3a947c;
        case 0x3a9480u: goto label_3a9480;
        case 0x3a9484u: goto label_3a9484;
        case 0x3a9488u: goto label_3a9488;
        case 0x3a948cu: goto label_3a948c;
        case 0x3a9490u: goto label_3a9490;
        case 0x3a9494u: goto label_3a9494;
        case 0x3a9498u: goto label_3a9498;
        case 0x3a949cu: goto label_3a949c;
        case 0x3a94a0u: goto label_3a94a0;
        case 0x3a94a4u: goto label_3a94a4;
        case 0x3a94a8u: goto label_3a94a8;
        case 0x3a94acu: goto label_3a94ac;
        case 0x3a94b0u: goto label_3a94b0;
        case 0x3a94b4u: goto label_3a94b4;
        case 0x3a94b8u: goto label_3a94b8;
        case 0x3a94bcu: goto label_3a94bc;
        case 0x3a94c0u: goto label_3a94c0;
        case 0x3a94c4u: goto label_3a94c4;
        case 0x3a94c8u: goto label_3a94c8;
        case 0x3a94ccu: goto label_3a94cc;
        case 0x3a94d0u: goto label_3a94d0;
        case 0x3a94d4u: goto label_3a94d4;
        case 0x3a94d8u: goto label_3a94d8;
        case 0x3a94dcu: goto label_3a94dc;
        case 0x3a94e0u: goto label_3a94e0;
        case 0x3a94e4u: goto label_3a94e4;
        case 0x3a94e8u: goto label_3a94e8;
        case 0x3a94ecu: goto label_3a94ec;
        case 0x3a94f0u: goto label_3a94f0;
        case 0x3a94f4u: goto label_3a94f4;
        case 0x3a94f8u: goto label_3a94f8;
        case 0x3a94fcu: goto label_3a94fc;
        case 0x3a9500u: goto label_3a9500;
        case 0x3a9504u: goto label_3a9504;
        case 0x3a9508u: goto label_3a9508;
        case 0x3a950cu: goto label_3a950c;
        case 0x3a9510u: goto label_3a9510;
        case 0x3a9514u: goto label_3a9514;
        case 0x3a9518u: goto label_3a9518;
        case 0x3a951cu: goto label_3a951c;
        case 0x3a9520u: goto label_3a9520;
        case 0x3a9524u: goto label_3a9524;
        case 0x3a9528u: goto label_3a9528;
        case 0x3a952cu: goto label_3a952c;
        case 0x3a9530u: goto label_3a9530;
        case 0x3a9534u: goto label_3a9534;
        case 0x3a9538u: goto label_3a9538;
        case 0x3a953cu: goto label_3a953c;
        case 0x3a9540u: goto label_3a9540;
        case 0x3a9544u: goto label_3a9544;
        case 0x3a9548u: goto label_3a9548;
        case 0x3a954cu: goto label_3a954c;
        case 0x3a9550u: goto label_3a9550;
        case 0x3a9554u: goto label_3a9554;
        case 0x3a9558u: goto label_3a9558;
        case 0x3a955cu: goto label_3a955c;
        case 0x3a9560u: goto label_3a9560;
        case 0x3a9564u: goto label_3a9564;
        case 0x3a9568u: goto label_3a9568;
        case 0x3a956cu: goto label_3a956c;
        case 0x3a9570u: goto label_3a9570;
        case 0x3a9574u: goto label_3a9574;
        case 0x3a9578u: goto label_3a9578;
        case 0x3a957cu: goto label_3a957c;
        case 0x3a9580u: goto label_3a9580;
        case 0x3a9584u: goto label_3a9584;
        case 0x3a9588u: goto label_3a9588;
        case 0x3a958cu: goto label_3a958c;
        case 0x3a9590u: goto label_3a9590;
        case 0x3a9594u: goto label_3a9594;
        case 0x3a9598u: goto label_3a9598;
        case 0x3a959cu: goto label_3a959c;
        case 0x3a95a0u: goto label_3a95a0;
        case 0x3a95a4u: goto label_3a95a4;
        case 0x3a95a8u: goto label_3a95a8;
        case 0x3a95acu: goto label_3a95ac;
        case 0x3a95b0u: goto label_3a95b0;
        case 0x3a95b4u: goto label_3a95b4;
        case 0x3a95b8u: goto label_3a95b8;
        case 0x3a95bcu: goto label_3a95bc;
        case 0x3a95c0u: goto label_3a95c0;
        case 0x3a95c4u: goto label_3a95c4;
        case 0x3a95c8u: goto label_3a95c8;
        case 0x3a95ccu: goto label_3a95cc;
        case 0x3a95d0u: goto label_3a95d0;
        case 0x3a95d4u: goto label_3a95d4;
        case 0x3a95d8u: goto label_3a95d8;
        case 0x3a95dcu: goto label_3a95dc;
        case 0x3a95e0u: goto label_3a95e0;
        case 0x3a95e4u: goto label_3a95e4;
        case 0x3a95e8u: goto label_3a95e8;
        case 0x3a95ecu: goto label_3a95ec;
        case 0x3a95f0u: goto label_3a95f0;
        case 0x3a95f4u: goto label_3a95f4;
        case 0x3a95f8u: goto label_3a95f8;
        case 0x3a95fcu: goto label_3a95fc;
        case 0x3a9600u: goto label_3a9600;
        case 0x3a9604u: goto label_3a9604;
        case 0x3a9608u: goto label_3a9608;
        case 0x3a960cu: goto label_3a960c;
        case 0x3a9610u: goto label_3a9610;
        case 0x3a9614u: goto label_3a9614;
        case 0x3a9618u: goto label_3a9618;
        case 0x3a961cu: goto label_3a961c;
        case 0x3a9620u: goto label_3a9620;
        case 0x3a9624u: goto label_3a9624;
        default: break;
    }

    ctx->pc = 0x3a9410u;

label_3a9410:
    // 0x3a9410: 0x27bdfb00  addiu       $sp, $sp, -0x500
    ctx->pc = 0x3a9410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966016));
label_3a9414:
    // 0x3a9414: 0x7fb004d0  sq          $s0, 0x4D0($sp)
    ctx->pc = 0x3a9414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 16));
label_3a9418:
    // 0x3a9418: 0x7fb104c0  sq          $s1, 0x4C0($sp)
    ctx->pc = 0x3a9418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 17));
label_3a941c:
    // 0x3a941c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a941cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9420:
    // 0x3a9420: 0x7fb204b0  sq          $s2, 0x4B0($sp)
    ctx->pc = 0x3a9420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 18));
label_3a9424:
    // 0x3a9424: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a9424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a9428:
    // 0x3a9428: 0x7fb304a0  sq          $s3, 0x4A0($sp)
    ctx->pc = 0x3a9428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 19));
label_3a942c:
    // 0x3a942c: 0x7fb40490  sq          $s4, 0x490($sp)
    ctx->pc = 0x3a942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 20));
label_3a9430:
    // 0x3a9430: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x3a9430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
label_3a9434:
    // 0x3a9434: 0xe7b604f0  swc1        $f22, 0x4F0($sp)
    ctx->pc = 0x3a9434u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1264), bits); }
label_3a9438:
    // 0x3a9438: 0xe7b504e8  swc1        $f21, 0x4E8($sp)
    ctx->pc = 0x3a9438u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1256), bits); }
label_3a943c:
    // 0x3a943c: 0xe7b404e0  swc1        $f20, 0x4E0($sp)
    ctx->pc = 0x3a943cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
label_3a9440:
    // 0x3a9440: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a9440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9444:
    // 0x3a9444: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a9444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a9448:
    // 0x3a9448: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a9448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a944c:
    // 0x3a944c: 0x40f809  jalr        $v0
label_3a9450:
    if (ctx->pc == 0x3A9450u) {
        ctx->pc = 0x3A9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A944Cu;
        // 0x3a9450: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9454u;
        goto label_3a9454;
    }
    ctx->pc = 0x3A944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9454u);
        ctx->pc = 0x3A9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A944Cu;
        // 0x3a9450: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A944Cu, 0x3A9454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9454u;
label_3a9454:
    // 0x3a9454: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a9454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9458:
    // 0x3a9458: 0xc0ea146  jal         func_3A8518
label_3a945c:
    if (ctx->pc == 0x3A945Cu) {
        ctx->pc = 0x3A945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9458u;
        // 0x3a945c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9460u;
        goto label_3a9460;
    }
    ctx->pc = 0x3A9458u;
    SET_GPR_U32(ctx, 31, 0x3A9460u);
    ctx->pc = 0x3A945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9458u;
    // 0x3a945c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A9458u, 0x3A9460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9460u;
label_3a9460:
    // 0x3a9460: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a9460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9464:
    // 0x3a9464: 0xc0ea12a  jal         func_3A84A8
label_3a9468:
    if (ctx->pc == 0x3A9468u) {
        ctx->pc = 0x3A9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9464u;
        // 0x3a9468: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A946Cu;
        goto label_3a946c;
    }
    ctx->pc = 0x3A9464u;
    SET_GPR_U32(ctx, 31, 0x3A946Cu);
    ctx->pc = 0x3A9468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9464u;
    // 0x3a9468: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A9464u, 0x3A946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A946Cu;
label_3a946c:
    // 0x3a946c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a946cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9470:
    // 0x3a9470: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a9470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9474:
    // 0x3a9474: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a9474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9478:
    // 0x3a9478: 0xc0ea12a  jal         func_3A84A8
label_3a947c:
    if (ctx->pc == 0x3A947Cu) {
        ctx->pc = 0x3A947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9478u;
        // 0x3a947c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9480u;
        goto label_3a9480;
    }
    ctx->pc = 0x3A9478u;
    SET_GPR_U32(ctx, 31, 0x3A9480u);
    ctx->pc = 0x3A947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9478u;
    // 0x3a947c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A9478u, 0x3A9480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9480u;
label_3a9480:
    // 0x3a9480: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a9480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9484:
    // 0x3a9484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a9484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9488:
    // 0x3a9488: 0xc0ea146  jal         func_3A8518
label_3a948c:
    if (ctx->pc == 0x3A948Cu) {
        ctx->pc = 0x3A948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9488u;
        // 0x3a948c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9490u;
        goto label_3a9490;
    }
    ctx->pc = 0x3A9488u;
    SET_GPR_U32(ctx, 31, 0x3A9490u);
    ctx->pc = 0x3A948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9488u;
    // 0x3a948c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A9488u, 0x3A9490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9490u;
label_3a9490:
    // 0x3a9490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a9490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9494:
    // 0x3a9494: 0xc0ea14c  jal         func_3A8530
label_3a9498:
    if (ctx->pc == 0x3A9498u) {
        ctx->pc = 0x3A9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9494u;
        // 0x3a9498: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A949Cu;
        goto label_3a949c;
    }
    ctx->pc = 0x3A9494u;
    SET_GPR_U32(ctx, 31, 0x3A949Cu);
    ctx->pc = 0x3A9498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9494u;
    // 0x3a9498: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3A9494u, 0x3A949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A949Cu;
label_3a949c:
    // 0x3a949c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3a949cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a94a0:
    // 0x3a94a0: 0xc0ea146  jal         func_3A8518
label_3a94a4:
    if (ctx->pc == 0x3A94A4u) {
        ctx->pc = 0x3A94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94A0u;
        // 0x3a94a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94A8u;
        goto label_3a94a8;
    }
    ctx->pc = 0x3A94A0u;
    SET_GPR_U32(ctx, 31, 0x3A94A8u);
    ctx->pc = 0x3A94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A94A0u;
    // 0x3a94a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A94A0u, 0x3A94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A94A8u;
label_3a94a8:
    // 0x3a94a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a94ac:
    // 0x3a94ac: 0xc0e858c  jal         func_3A1630
label_3a94b0:
    if (ctx->pc == 0x3A94B0u) {
        ctx->pc = 0x3A94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94ACu;
        // 0x3a94b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94B4u;
        goto label_3a94b4;
    }
    ctx->pc = 0x3A94ACu;
    SET_GPR_U32(ctx, 31, 0x3A94B4u);
    ctx->pc = 0x3A94B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A94ACu;
    // 0x3a94b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3A94ACu, 0x3A94B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A94B4u;
label_3a94b4:
    // 0x3a94b4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3a94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3a94b8:
    // 0x3a94b8: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3a94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3a94bc:
    // 0x3a94bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a94bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a94c0:
    // 0x3a94c0: 0xc0e896e  jal         func_3A25B8
label_3a94c4:
    if (ctx->pc == 0x3A94C4u) {
        ctx->pc = 0x3A94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94C0u;
        // 0x3a94c4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94C8u;
        goto label_3a94c8;
    }
    ctx->pc = 0x3A94C0u;
    SET_GPR_U32(ctx, 31, 0x3A94C8u);
    ctx->pc = 0x3A94C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A94C0u;
    // 0x3a94c4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3A94C0u, 0x3A94C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A94C8u;
label_3a94c8:
    // 0x3a94c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a94c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a94cc:
    // 0x3a94cc: 0xc0e862e  jal         func_3A18B8
label_3a94d0:
    if (ctx->pc == 0x3A94D0u) {
        ctx->pc = 0x3A94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94CCu;
        // 0x3a94d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94D4u;
        goto label_3a94d4;
    }
    ctx->pc = 0x3A94CCu;
    SET_GPR_U32(ctx, 31, 0x3A94D4u);
    ctx->pc = 0x3A94D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A94CCu;
    // 0x3a94d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3A94CCu, 0x3A94D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A94D4u;
label_3a94d4:
    // 0x3a94d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a94d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a94d8:
    // 0x3a94d8: 0xc0e896c  jal         func_3A25B0
label_3a94dc:
    if (ctx->pc == 0x3A94DCu) {
        ctx->pc = 0x3A94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94D8u;
        // 0x3a94dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94E0u;
        goto label_3a94e0;
    }
    ctx->pc = 0x3A94D8u;
    SET_GPR_U32(ctx, 31, 0x3A94E0u);
    ctx->pc = 0x3A94DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A94D8u;
    // 0x3a94dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3A94D8u, 0x3A94E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A94E0u;
label_3a94e0:
    // 0x3a94e0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3a94e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a94e4:
    // 0x3a94e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a94e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a94e8:
    // 0x3a94e8: 0xc0e911e  jal         func_3A4478
label_3a94ec:
    if (ctx->pc == 0x3A94ECu) {
        ctx->pc = 0x3A94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94E8u;
        // 0x3a94ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94F0u;
        goto label_3a94f0;
    }
    ctx->pc = 0x3A94E8u;
    SET_GPR_U32(ctx, 31, 0x3A94F0u);
    ctx->pc = 0x3A94ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A94E8u;
    // 0x3a94ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3A94E8u, 0x3A94F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A94F0u;
label_3a94f0:
    // 0x3a94f0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3a94f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a94f4:
    // 0x3a94f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3a94f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3a94f8:
    // 0x3a94f8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3a94f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a94fc:
    // 0x3a94fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a94fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9500:
    // 0x3a9500: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3a9500u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3a9504:
    // 0x3a9504: 0xc0e90ca  jal         func_3A4328
label_3a9508:
    if (ctx->pc == 0x3A9508u) {
        ctx->pc = 0x3A9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9504u;
        // 0x3a9508: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A950Cu;
        goto label_3a950c;
    }
    ctx->pc = 0x3A9504u;
    SET_GPR_U32(ctx, 31, 0x3A950Cu);
    ctx->pc = 0x3A9508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9504u;
    // 0x3a9508: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3A9504u, 0x3A950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A950Cu;
label_3a950c:
    // 0x3a950c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3a950cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a9510:
    // 0x3a9510: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3a9510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3a9514:
    // 0x3a9514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a9514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9518:
    // 0x3a9518: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a9518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3a951c:
    // 0x3a951c: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x3a951cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
label_3a9520:
    // 0x3a9520: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3a9520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3a9524:
    // 0x3a9524: 0xc0e9694  jal         func_3A5A50
label_3a9528:
    if (ctx->pc == 0x3A9528u) {
        ctx->pc = 0x3A9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9524u;
        // 0x3a9528: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A952Cu;
        goto label_3a952c;
    }
    ctx->pc = 0x3A9524u;
    SET_GPR_U32(ctx, 31, 0x3A952Cu);
    ctx->pc = 0x3A9528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9524u;
    // 0x3a9528: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A9524u, 0x3A952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A952Cu;
label_3a952c:
    // 0x3a952c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_3a9530:
    if (ctx->pc == 0x3A9530u) {
        ctx->pc = 0x3A9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A952Cu;
        // 0x3a9530: 0x7bb004d0  lq          $s0, 0x4D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9534u;
        goto label_3a9534;
    }
    ctx->pc = 0x3A952Cu;
    {
        const bool branch_taken_0x3a952c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A952Cu;
        // 0x3a9530: 0x7bb004d0  lq          $s0, 0x4D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a952c) {
            ctx->pc = 0x3A95FCu;
            goto label_3a95fc;
        }
    }
    ctx->pc = 0x3A9534u;
label_3a9534:
    // 0x3a9534: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3a9534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3a9538:
    // 0x3a9538: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a9538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a953c:
    // 0x3a953c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3a953cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3a9540:
    // 0x3a9540: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a9540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a9544:
    // 0x3a9544: 0xc0e9f56  jal         func_3A7D58
label_3a9548:
    if (ctx->pc == 0x3A9548u) {
        ctx->pc = 0x3A9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9544u;
        // 0x3a9548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A954Cu;
        goto label_3a954c;
    }
    ctx->pc = 0x3A9544u;
    SET_GPR_U32(ctx, 31, 0x3A954Cu);
    ctx->pc = 0x3A9548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9544u;
    // 0x3a9548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3A9544u, 0x3A954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A954Cu;
label_3a954c:
    // 0x3a954c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_3a9550:
    if (ctx->pc == 0x3A9550u) {
        ctx->pc = 0x3A9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A954Cu;
        // 0x3a9550: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9554u;
        goto label_3a9554;
    }
    ctx->pc = 0x3A954Cu;
    {
        const bool branch_taken_0x3a954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A954Cu;
        // 0x3a9550: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a954c) {
            ctx->pc = 0x3A95F8u;
            goto label_3a95f8;
        }
    }
    ctx->pc = 0x3A9554u;
label_3a9554:
    // 0x3a9554: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x3a9554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_3a9558:
    // 0x3a9558: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a9558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3a955c:
    // 0x3a955c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a955cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3a9560:
    // 0x3a9560: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3a9560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3a9564:
    // 0x3a9564: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a9564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3a9568:
    // 0x3a9568: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a9568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a956c:
    // 0x3a956c: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3a956cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3a9570:
    // 0x3a9570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9574:
    // 0x3a9574: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3a9574u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3a9578:
    // 0x3a9578: 0xc0cd518  jal         func_335460
label_3a957c:
    if (ctx->pc == 0x3A957Cu) {
        ctx->pc = 0x3A957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9578u;
        // 0x3a957c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9580u;
        goto label_3a9580;
    }
    ctx->pc = 0x3A9578u;
    SET_GPR_U32(ctx, 31, 0x3A9580u);
    ctx->pc = 0x3A957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9578u;
    // 0x3a957c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A9578u, 0x3A9580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9580u;
label_3a9580:
    // 0x3a9580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9584:
    // 0x3a9584: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3a9584u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3a9588:
    // 0x3a9588: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3a9588u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3a958c:
    // 0x3a958c: 0xc0cd518  jal         func_335460
label_3a9590:
    if (ctx->pc == 0x3A9590u) {
        ctx->pc = 0x3A9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A958Cu;
        // 0x3a9590: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9594u;
        goto label_3a9594;
    }
    ctx->pc = 0x3A958Cu;
    SET_GPR_U32(ctx, 31, 0x3A9594u);
    ctx->pc = 0x3A9590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A958Cu;
    // 0x3a9590: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A958Cu, 0x3A9594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9594u;
label_3a9594:
    // 0x3a9594: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3a9594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3a9598:
    // 0x3a9598: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a9598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a959c:
    // 0x3a959c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3a959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3a95a0:
    // 0x3a95a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a95a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a95a4:
    // 0x3a95a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a95a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a95a8:
    // 0x3a95a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a95a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a95ac:
    // 0x3a95ac: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x3a95acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3a95b0:
    // 0x3a95b0: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x3a95b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3a95b4:
    // 0x3a95b4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3a95b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3a95b8:
    // 0x3a95b8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3a95b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3a95bc:
    // 0x3a95bc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3a95bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3a95c0:
    // 0x3a95c0: 0x26101cc0  addiu       $s0, $s0, 0x1CC0
    ctx->pc = 0x3a95c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7360));
label_3a95c4:
    // 0x3a95c4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x3a95c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3a95c8:
    // 0x3a95c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a95c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a95cc:
    // 0x3a95cc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3a95ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3a95d0:
    // 0x3a95d0: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3a95d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3a95d4:
    // 0x3a95d4: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3a95d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a95d8:
    // 0x3a95d8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a95d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a95dc:
    // 0x3a95dc: 0xafb40470  sw          $s4, 0x470($sp)
    ctx->pc = 0x3a95dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 20));
label_3a95e0:
    // 0x3a95e0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3a95e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3a95e4:
    // 0x3a95e4: 0xc0e9fa6  jal         func_3A7E98
label_3a95e8:
    if (ctx->pc == 0x3A95E8u) {
        ctx->pc = 0x3A95E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95E4u;
        // 0x3a95e8: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A95ECu;
        goto label_3a95ec;
    }
    ctx->pc = 0x3A95E4u;
    SET_GPR_U32(ctx, 31, 0x3A95ECu);
    ctx->pc = 0x3A95E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A95E4u;
    // 0x3a95e8: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3A95E4u, 0x3A95ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A95ECu;
label_3a95ec:
    // 0x3a95ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a95ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a95f0:
    // 0x3a95f0: 0xc0f15bc  jal         func_3C56F0
label_3a95f4:
    if (ctx->pc == 0x3A95F4u) {
        ctx->pc = 0x3A95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95F0u;
        // 0x3a95f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A95F8u;
        goto label_3a95f8;
    }
    ctx->pc = 0x3A95F0u;
    SET_GPR_U32(ctx, 31, 0x3A95F8u);
    ctx->pc = 0x3A95F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A95F0u;
    // 0x3a95f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A95F0u, 0x3A95F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A95F8u;
label_3a95f8:
    // 0x3a95f8: 0x7bb004d0  lq          $s0, 0x4D0($sp)
    ctx->pc = 0x3a95f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3a95fc:
    // 0x3a95fc: 0x7bb104c0  lq          $s1, 0x4C0($sp)
    ctx->pc = 0x3a95fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3a9600:
    // 0x3a9600: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x3a9600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3a9604:
    // 0x3a9604: 0x7bb304a0  lq          $s3, 0x4A0($sp)
    ctx->pc = 0x3a9604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3a9608:
    // 0x3a9608: 0x7bb40490  lq          $s4, 0x490($sp)
    ctx->pc = 0x3a9608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3a960c:
    // 0x3a960c: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x3a960cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_3a9610:
    // 0x3a9610: 0xc7b604f0  lwc1        $f22, 0x4F0($sp)
    ctx->pc = 0x3a9610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a9614:
    // 0x3a9614: 0xc7b504e8  lwc1        $f21, 0x4E8($sp)
    ctx->pc = 0x3a9614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a9618:
    // 0x3a9618: 0xc7b404e0  lwc1        $f20, 0x4E0($sp)
    ctx->pc = 0x3a9618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a961c:
    // 0x3a961c: 0x3e00008  jr          $ra
label_3a9620:
    if (ctx->pc == 0x3A9620u) {
        ctx->pc = 0x3A9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A961Cu;
        // 0x3a9620: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9624u;
        goto label_3a9624;
    }
    ctx->pc = 0x3A961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A961Cu;
        // 0x3a9620: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A961Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9624u;
label_3a9624:
    // 0x3a9624: 0x0  nop
    ctx->pc = 0x3a9624u;
    // NOP
    ctx->pc = 0x3a9628u;
}

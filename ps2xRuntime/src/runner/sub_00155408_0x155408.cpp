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

// Function: sub_00155408
// Address: 0x155408 - 0x155648
void sub_00155408_0x155408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155408_0x155408");
#endif

    switch (ctx->pc) {
        case 0x155408u: goto label_155408;
        case 0x15540cu: goto label_15540c;
        case 0x155410u: goto label_155410;
        case 0x155414u: goto label_155414;
        case 0x155418u: goto label_155418;
        case 0x15541cu: goto label_15541c;
        case 0x155420u: goto label_155420;
        case 0x155424u: goto label_155424;
        case 0x155428u: goto label_155428;
        case 0x15542cu: goto label_15542c;
        case 0x155430u: goto label_155430;
        case 0x155434u: goto label_155434;
        case 0x155438u: goto label_155438;
        case 0x15543cu: goto label_15543c;
        case 0x155440u: goto label_155440;
        case 0x155444u: goto label_155444;
        case 0x155448u: goto label_155448;
        case 0x15544cu: goto label_15544c;
        case 0x155450u: goto label_155450;
        case 0x155454u: goto label_155454;
        case 0x155458u: goto label_155458;
        case 0x15545cu: goto label_15545c;
        case 0x155460u: goto label_155460;
        case 0x155464u: goto label_155464;
        case 0x155468u: goto label_155468;
        case 0x15546cu: goto label_15546c;
        case 0x155470u: goto label_155470;
        case 0x155474u: goto label_155474;
        case 0x155478u: goto label_155478;
        case 0x15547cu: goto label_15547c;
        case 0x155480u: goto label_155480;
        case 0x155484u: goto label_155484;
        case 0x155488u: goto label_155488;
        case 0x15548cu: goto label_15548c;
        case 0x155490u: goto label_155490;
        case 0x155494u: goto label_155494;
        case 0x155498u: goto label_155498;
        case 0x15549cu: goto label_15549c;
        case 0x1554a0u: goto label_1554a0;
        case 0x1554a4u: goto label_1554a4;
        case 0x1554a8u: goto label_1554a8;
        case 0x1554acu: goto label_1554ac;
        case 0x1554b0u: goto label_1554b0;
        case 0x1554b4u: goto label_1554b4;
        case 0x1554b8u: goto label_1554b8;
        case 0x1554bcu: goto label_1554bc;
        case 0x1554c0u: goto label_1554c0;
        case 0x1554c4u: goto label_1554c4;
        case 0x1554c8u: goto label_1554c8;
        case 0x1554ccu: goto label_1554cc;
        case 0x1554d0u: goto label_1554d0;
        case 0x1554d4u: goto label_1554d4;
        case 0x1554d8u: goto label_1554d8;
        case 0x1554dcu: goto label_1554dc;
        case 0x1554e0u: goto label_1554e0;
        case 0x1554e4u: goto label_1554e4;
        case 0x1554e8u: goto label_1554e8;
        case 0x1554ecu: goto label_1554ec;
        case 0x1554f0u: goto label_1554f0;
        case 0x1554f4u: goto label_1554f4;
        case 0x1554f8u: goto label_1554f8;
        case 0x1554fcu: goto label_1554fc;
        case 0x155500u: goto label_155500;
        case 0x155504u: goto label_155504;
        case 0x155508u: goto label_155508;
        case 0x15550cu: goto label_15550c;
        case 0x155510u: goto label_155510;
        case 0x155514u: goto label_155514;
        case 0x155518u: goto label_155518;
        case 0x15551cu: goto label_15551c;
        case 0x155520u: goto label_155520;
        case 0x155524u: goto label_155524;
        case 0x155528u: goto label_155528;
        case 0x15552cu: goto label_15552c;
        case 0x155530u: goto label_155530;
        case 0x155534u: goto label_155534;
        case 0x155538u: goto label_155538;
        case 0x15553cu: goto label_15553c;
        case 0x155540u: goto label_155540;
        case 0x155544u: goto label_155544;
        case 0x155548u: goto label_155548;
        case 0x15554cu: goto label_15554c;
        case 0x155550u: goto label_155550;
        case 0x155554u: goto label_155554;
        case 0x155558u: goto label_155558;
        case 0x15555cu: goto label_15555c;
        case 0x155560u: goto label_155560;
        case 0x155564u: goto label_155564;
        case 0x155568u: goto label_155568;
        case 0x15556cu: goto label_15556c;
        case 0x155570u: goto label_155570;
        case 0x155574u: goto label_155574;
        case 0x155578u: goto label_155578;
        case 0x15557cu: goto label_15557c;
        case 0x155580u: goto label_155580;
        case 0x155584u: goto label_155584;
        case 0x155588u: goto label_155588;
        case 0x15558cu: goto label_15558c;
        case 0x155590u: goto label_155590;
        case 0x155594u: goto label_155594;
        case 0x155598u: goto label_155598;
        case 0x15559cu: goto label_15559c;
        case 0x1555a0u: goto label_1555a0;
        case 0x1555a4u: goto label_1555a4;
        case 0x1555a8u: goto label_1555a8;
        case 0x1555acu: goto label_1555ac;
        case 0x1555b0u: goto label_1555b0;
        case 0x1555b4u: goto label_1555b4;
        case 0x1555b8u: goto label_1555b8;
        case 0x1555bcu: goto label_1555bc;
        case 0x1555c0u: goto label_1555c0;
        case 0x1555c4u: goto label_1555c4;
        case 0x1555c8u: goto label_1555c8;
        case 0x1555ccu: goto label_1555cc;
        case 0x1555d0u: goto label_1555d0;
        case 0x1555d4u: goto label_1555d4;
        case 0x1555d8u: goto label_1555d8;
        case 0x1555dcu: goto label_1555dc;
        case 0x1555e0u: goto label_1555e0;
        case 0x1555e4u: goto label_1555e4;
        case 0x1555e8u: goto label_1555e8;
        case 0x1555ecu: goto label_1555ec;
        case 0x1555f0u: goto label_1555f0;
        case 0x1555f4u: goto label_1555f4;
        case 0x1555f8u: goto label_1555f8;
        case 0x1555fcu: goto label_1555fc;
        case 0x155600u: goto label_155600;
        case 0x155604u: goto label_155604;
        case 0x155608u: goto label_155608;
        case 0x15560cu: goto label_15560c;
        case 0x155610u: goto label_155610;
        case 0x155614u: goto label_155614;
        case 0x155618u: goto label_155618;
        case 0x15561cu: goto label_15561c;
        case 0x155620u: goto label_155620;
        case 0x155624u: goto label_155624;
        case 0x155628u: goto label_155628;
        case 0x15562cu: goto label_15562c;
        case 0x155630u: goto label_155630;
        case 0x155634u: goto label_155634;
        case 0x155638u: goto label_155638;
        case 0x15563cu: goto label_15563c;
        case 0x155640u: goto label_155640;
        case 0x155644u: goto label_155644;
        default: break;
    }

    ctx->pc = 0x155408u;

label_155408:
    // 0x155408: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x155408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15540c:
    // 0x15540c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_155410:
    // 0x155410: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x155410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_155414:
    // 0x155414: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x155414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_155418:
    // 0x155418: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x155418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_15541c:
    // 0x15541c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_155420:
    // 0x155420: 0xc0579d2  jal         func_15E748
label_155424:
    if (ctx->pc == 0x155424u) {
        ctx->pc = 0x155424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155420u;
        // 0x155424: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x155428u;
        goto label_155428;
    }
    ctx->pc = 0x155420u;
    SET_GPR_U32(ctx, 31, 0x155428u);
    ctx->pc = 0x155424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155420u;
    // 0x155424: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x155420u, 0x155428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155428u;
label_155428:
    // 0x155428: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x155428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_15542c:
    // 0x15542c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_155430:
    if (ctx->pc == 0x155430u) {
        ctx->pc = 0x155430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15542Cu;
        // 0x155430: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155434u;
        goto label_155434;
    }
    ctx->pc = 0x15542Cu;
    {
        const bool branch_taken_0x15542c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15542Cu;
        // 0x155430: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15542c) {
            ctx->pc = 0x155444u;
            goto label_155444;
        }
    }
    ctx->pc = 0x155434u;
label_155434:
    // 0x155434: 0xc05797a  jal         func_15E5E8
label_155438:
    if (ctx->pc == 0x155438u) {
        ctx->pc = 0x155438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155434u;
        // 0x155438: 0x24845dc0  addiu       $a0, $a0, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15543Cu;
        goto label_15543c;
    }
    ctx->pc = 0x155434u;
    SET_GPR_U32(ctx, 31, 0x15543Cu);
    ctx->pc = 0x155438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155434u;
    // 0x155438: 0x24845dc0  addiu       $a0, $a0, 0x5DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x155434u, 0x15543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15543Cu;
label_15543c:
    // 0x15543c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_155440:
    if (ctx->pc == 0x155440u) {
        ctx->pc = 0x155440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15543Cu;
        // 0x155440: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155444u;
        goto label_155444;
    }
    ctx->pc = 0x15543Cu;
    {
        const bool branch_taken_0x15543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15543Cu;
        // 0x155440: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15543c) {
            ctx->pc = 0x155630u;
            goto label_155630;
        }
    }
    ctx->pc = 0x155444u;
label_155444:
    // 0x155444: 0xc057994  jal         func_15E650
label_155448:
    if (ctx->pc == 0x155448u) {
        ctx->pc = 0x15544Cu;
        goto label_15544c;
    }
    ctx->pc = 0x155444u;
    SET_GPR_U32(ctx, 31, 0x15544Cu);
    ctx->pc = 0x15E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E650u, 0x155444u, 0x15544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15544Cu;
label_15544c:
    // 0x15544c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15544cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_155450:
    // 0x155450: 0x8c64ec8c  lw          $a0, -0x1374($v1)
    ctx->pc = 0x155450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962316)));
label_155454:
    // 0x155454: 0x8c8207ac  lw          $v0, 0x7AC($a0)
    ctx->pc = 0x155454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1964)));
label_155458:
    // 0x155458: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_15545c:
    if (ctx->pc == 0x15545Cu) {
        ctx->pc = 0x15545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155458u;
        // 0x15545c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155460u;
        goto label_155460;
    }
    ctx->pc = 0x155458u;
    {
        const bool branch_taken_0x155458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155458u;
        // 0x15545c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155458) {
            ctx->pc = 0x1554B8u;
            goto label_1554b8;
        }
    }
    ctx->pc = 0x155460u;
label_155460:
    // 0x155460: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x155460u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_155464:
    // 0x155464: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x155464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_155468:
    // 0x155468: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x155468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15546c:
    // 0x15546c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x15546cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_155470:
    // 0x155470: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x155470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_155474:
    // 0x155474: 0xac83014c  sw          $v1, 0x14C($a0)
    ctx->pc = 0x155474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 3));
label_155478:
    // 0x155478: 0x24a5e798  addiu       $a1, $a1, -0x1868
    ctx->pc = 0x155478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961048));
label_15547c:
    // 0x15547c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_155480:
    // 0x155480: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x155480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_155484:
    // 0x155484: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x155484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_155488:
    // 0x155488: 0x40f809  jalr        $v0
label_15548c:
    if (ctx->pc == 0x15548Cu) {
        ctx->pc = 0x15548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155488u;
        // 0x15548c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155490u;
        goto label_155490;
    }
    ctx->pc = 0x155488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155490u);
        ctx->pc = 0x15548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155488u;
        // 0x15548c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155488u, 0x155490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155490u;
label_155490:
    // 0x155490: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x155490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_155494:
    // 0x155494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155498:
    // 0x155498: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x155498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15549c:
    // 0x15549c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x15549cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1554a0:
    // 0x1554a0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1554a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1554a4:
    // 0x1554a4: 0x60f809  jalr        $v1
label_1554a8:
    if (ctx->pc == 0x1554A8u) {
        ctx->pc = 0x1554A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554A4u;
        // 0x1554a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1554ACu;
        goto label_1554ac;
    }
    ctx->pc = 0x1554A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1554ACu);
        ctx->pc = 0x1554A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554A4u;
        // 0x1554a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1554A4u, 0x1554ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1554ACu;
label_1554ac:
    // 0x1554ac: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x1554acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1554b0:
    // 0x1554b0: 0x10000048  b           . + 4 + (0x48 << 2)
label_1554b4:
    if (ctx->pc == 0x1554B4u) {
        ctx->pc = 0x1554B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554B0u;
        // 0x1554b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1554B8u;
        goto label_1554b8;
    }
    ctx->pc = 0x1554B0u;
    {
        const bool branch_taken_0x1554b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554B0u;
        // 0x1554b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554b0) {
            ctx->pc = 0x1555D4u;
            goto label_1555d4;
        }
    }
    ctx->pc = 0x1554B8u;
label_1554b8:
    // 0x1554b8: 0x8c8207a0  lw          $v0, 0x7A0($a0)
    ctx->pc = 0x1554b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1952)));
label_1554bc:
    // 0x1554bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1554c0:
    if (ctx->pc == 0x1554C0u) {
        ctx->pc = 0x1554C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554BCu;
        // 0x1554c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1554C4u;
        goto label_1554c4;
    }
    ctx->pc = 0x1554BCu;
    {
        const bool branch_taken_0x1554bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554BCu;
        // 0x1554c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554bc) {
            ctx->pc = 0x1554E4u;
            goto label_1554e4;
        }
    }
    ctx->pc = 0x1554C4u;
label_1554c4:
    // 0x1554c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1554c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1554c8:
    // 0x1554c8: 0xc1073bc  jal         func_41CEF0
label_1554cc:
    if (ctx->pc == 0x1554CCu) {
        ctx->pc = 0x1554CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554C8u;
        // 0x1554cc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1554D0u;
        goto label_1554d0;
    }
    ctx->pc = 0x1554C8u;
    SET_GPR_U32(ctx, 31, 0x1554D0u);
    ctx->pc = 0x1554CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1554C8u;
    // 0x1554cc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x1554C8u, 0x1554D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554D0u;
label_1554d0:
    // 0x1554d0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1554d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1554d4:
    // 0x1554d4: 0xc05835e  jal         func_160D78
label_1554d8:
    if (ctx->pc == 0x1554D8u) {
        ctx->pc = 0x1554D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554D4u;
        // 0x1554d8: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1554DCu;
        goto label_1554dc;
    }
    ctx->pc = 0x1554D4u;
    SET_GPR_U32(ctx, 31, 0x1554DCu);
    ctx->pc = 0x1554D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1554D4u;
    // 0x1554d8: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D78u, 0x1554D4u, 0x1554DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554DCu;
label_1554dc:
    // 0x1554dc: 0x10000054  b           . + 4 + (0x54 << 2)
label_1554e0:
    if (ctx->pc == 0x1554E0u) {
        ctx->pc = 0x1554E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554DCu;
        // 0x1554e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1554E4u;
        goto label_1554e4;
    }
    ctx->pc = 0x1554DCu;
    {
        const bool branch_taken_0x1554dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554DCu;
        // 0x1554e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554dc) {
            ctx->pc = 0x155630u;
            goto label_155630;
        }
    }
    ctx->pc = 0x1554E4u;
label_1554e4:
    // 0x1554e4: 0x8c8207a8  lw          $v0, 0x7A8($a0)
    ctx->pc = 0x1554e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1960)));
label_1554e8:
    // 0x1554e8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_1554ec:
    if (ctx->pc == 0x1554ECu) {
        ctx->pc = 0x1554ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554E8u;
        // 0x1554ec: 0x249207b0  addiu       $s2, $a0, 0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1554F0u;
        goto label_1554f0;
    }
    ctx->pc = 0x1554E8u;
    {
        const bool branch_taken_0x1554e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554E8u;
        // 0x1554ec: 0x249207b0  addiu       $s2, $a0, 0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554e8) {
            ctx->pc = 0x155608u;
            goto label_155608;
        }
    }
    ctx->pc = 0x1554F0u;
label_1554f0:
    // 0x1554f0: 0xc10c3ac  jal         func_430EB0
label_1554f4:
    if (ctx->pc == 0x1554F4u) {
        ctx->pc = 0x1554F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554F0u;
        // 0x1554f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1554F8u;
        goto label_1554f8;
    }
    ctx->pc = 0x1554F0u;
    SET_GPR_U32(ctx, 31, 0x1554F8u);
    ctx->pc = 0x1554F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1554F0u;
    // 0x1554f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1554F0u, 0x1554F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554F8u;
label_1554f8:
    // 0x1554f8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_1554fc:
    if (ctx->pc == 0x1554FCu) {
        ctx->pc = 0x1554FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554F8u;
        // 0x1554fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155500u;
        goto label_155500;
    }
    ctx->pc = 0x1554F8u;
    {
        const bool branch_taken_0x1554f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554F8u;
        // 0x1554fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554f8) {
            ctx->pc = 0x1555F4u;
            goto label_1555f4;
        }
    }
    ctx->pc = 0x155500u;
label_155500:
    // 0x155500: 0xc047e6c  jal         func_11F9B0
label_155504:
    if (ctx->pc == 0x155504u) {
        ctx->pc = 0x155504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155500u;
        // 0x155504: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155508u;
        goto label_155508;
    }
    ctx->pc = 0x155500u;
    SET_GPR_U32(ctx, 31, 0x155508u);
    ctx->pc = 0x155504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155500u;
    // 0x155504: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x155500u, 0x155508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155508u;
label_155508:
    // 0x155508: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_15550c:
    if (ctx->pc == 0x15550Cu) {
        ctx->pc = 0x15550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155508u;
        // 0x15550c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155510u;
        goto label_155510;
    }
    ctx->pc = 0x155508u;
    {
        const bool branch_taken_0x155508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155508) {
            ctx->pc = 0x15550Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155508u;
            // 0x15550c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15558Cu;
            goto label_15558c;
        }
    }
    ctx->pc = 0x155510u;
label_155510:
    // 0x155510: 0xc047e6c  jal         func_11F9B0
label_155514:
    if (ctx->pc == 0x155514u) {
        ctx->pc = 0x155514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155510u;
        // 0x155514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155518u;
        goto label_155518;
    }
    ctx->pc = 0x155510u;
    SET_GPR_U32(ctx, 31, 0x155518u);
    ctx->pc = 0x155514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155510u;
    // 0x155514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x155510u, 0x155518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155518u;
label_155518:
    // 0x155518: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15551c:
    // 0x15551c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x15551cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_155520:
    // 0x155520: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x155520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_155524:
    // 0x155524: 0xa0f809  jalr        $a1
label_155528:
    if (ctx->pc == 0x155528u) {
        ctx->pc = 0x155528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155524u;
        // 0x155528: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15552Cu;
        goto label_15552c;
    }
    ctx->pc = 0x155524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15552Cu);
        ctx->pc = 0x155528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155524u;
        // 0x155528: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155524u, 0x15552Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15552Cu;
label_15552c:
    // 0x15552c: 0x14500017  bne         $v0, $s0, . + 4 + (0x17 << 2)
label_155530:
    if (ctx->pc == 0x155530u) {
        ctx->pc = 0x155530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15552Cu;
        // 0x155530: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155534u;
        goto label_155534;
    }
    ctx->pc = 0x15552Cu;
    {
        const bool branch_taken_0x15552c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x155530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15552Cu;
        // 0x155530: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15552c) {
            ctx->pc = 0x15558Cu;
            goto label_15558c;
        }
    }
    ctx->pc = 0x155534u;
label_155534:
    // 0x155534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155538:
    // 0x155538: 0xc048038  jal         func_1200E0
label_15553c:
    if (ctx->pc == 0x15553Cu) {
        ctx->pc = 0x15553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155538u;
        // 0x15553c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155540u;
        goto label_155540;
    }
    ctx->pc = 0x155538u;
    SET_GPR_U32(ctx, 31, 0x155540u);
    ctx->pc = 0x15553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155538u;
    // 0x15553c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x155538u, 0x155540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155540u;
label_155540:
    // 0x155540: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x155540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_155544:
    // 0x155544: 0x8c4501f8  lw          $a1, 0x1F8($v0)
    ctx->pc = 0x155544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
label_155548:
    // 0x155548: 0x8e04deb8  lw          $a0, -0x2148($s0)
    ctx->pc = 0x155548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958776)));
label_15554c:
    // 0x15554c: 0xc063262  jal         func_18C988
label_155550:
    if (ctx->pc == 0x155550u) {
        ctx->pc = 0x155550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15554Cu;
        // 0x155550: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x155554u;
        goto label_155554;
    }
    ctx->pc = 0x15554Cu;
    SET_GPR_U32(ctx, 31, 0x155554u);
    ctx->pc = 0x155550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15554Cu;
    // 0x155550: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C988u, 0x15554Cu, 0x155554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155554u;
label_155554:
    // 0x155554: 0x8e04deb8  lw          $a0, -0x2148($s0)
    ctx->pc = 0x155554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958776)));
label_155558:
    // 0x155558: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x155558u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15555c:
    // 0x15555c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155560:
    // 0x155560: 0xc063416  jal         func_18D058
label_155564:
    if (ctx->pc == 0x155564u) {
        ctx->pc = 0x155564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155560u;
        // 0x155564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155568u;
        goto label_155568;
    }
    ctx->pc = 0x155560u;
    SET_GPR_U32(ctx, 31, 0x155568u);
    ctx->pc = 0x155564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155560u;
    // 0x155564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D058u, 0x155560u, 0x155568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155568u;
label_155568:
    // 0x155568: 0xc048038  jal         func_1200E0
label_15556c:
    if (ctx->pc == 0x15556Cu) {
        ctx->pc = 0x15556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155568u;
        // 0x15556c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155570u;
        goto label_155570;
    }
    ctx->pc = 0x155568u;
    SET_GPR_U32(ctx, 31, 0x155570u);
    ctx->pc = 0x15556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155568u;
    // 0x15556c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x155568u, 0x155570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155570u;
label_155570:
    // 0x155570: 0x944301fc  lhu         $v1, 0x1FC($v0)
    ctx->pc = 0x155570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 508)));
label_155574:
    // 0x155574: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_155578:
    if (ctx->pc == 0x155578u) {
        ctx->pc = 0x155578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155574u;
        // 0x155578: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15557Cu;
        goto label_15557c;
    }
    ctx->pc = 0x155574u;
    {
        const bool branch_taken_0x155574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155574u;
        // 0x155578: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155574) {
            ctx->pc = 0x15558Cu;
            goto label_15558c;
        }
    }
    ctx->pc = 0x15557Cu;
label_15557c:
    // 0x15557c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15557cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_155580:
    // 0x155580: 0xc06c83e  jal         func_1B20F8
label_155584:
    if (ctx->pc == 0x155584u) {
        ctx->pc = 0x155584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155580u;
        // 0x155584: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155588u;
        goto label_155588;
    }
    ctx->pc = 0x155580u;
    SET_GPR_U32(ctx, 31, 0x155588u);
    ctx->pc = 0x155584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155580u;
    // 0x155584: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B20F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20F8u, 0x155580u, 0x155588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155588u;
label_155588:
    // 0x155588: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x155588u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15558c:
    // 0x15558c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x15558cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_155590:
    // 0x155590: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x155590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_155594:
    // 0x155594: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x155594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_155598:
    // 0x155598: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x155598u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15559c:
    // 0x15559c: 0xc108b40  jal         func_422D00
label_1555a0:
    if (ctx->pc == 0x1555A0u) {
        ctx->pc = 0x1555A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15559Cu;
        // 0x1555a0: 0xac40014c  sw          $zero, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1555A4u;
        goto label_1555a4;
    }
    ctx->pc = 0x15559Cu;
    SET_GPR_U32(ctx, 31, 0x1555A4u);
    ctx->pc = 0x1555A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15559Cu;
    // 0x1555a0: 0xac40014c  sw          $zero, 0x14C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422D00u, 0x15559Cu, 0x1555A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555A4u;
label_1555a4:
    // 0x1555a4: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1555a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_1555a8:
    // 0x1555a8: 0xc10785a  jal         func_41E168
label_1555ac:
    if (ctx->pc == 0x1555ACu) {
        ctx->pc = 0x1555ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555A8u;
        // 0x1555ac: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1555B0u;
        goto label_1555b0;
    }
    ctx->pc = 0x1555A8u;
    SET_GPR_U32(ctx, 31, 0x1555B0u);
    ctx->pc = 0x1555ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555A8u;
    // 0x1555ac: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E168u, 0x1555A8u, 0x1555B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555B0u;
label_1555b0:
    // 0x1555b0: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x1555b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_1555b4:
    // 0x1555b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1555b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1555b8:
    // 0x1555b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1555b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1555bc:
    // 0x1555bc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1555bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1555c0:
    // 0x1555c0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1555c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1555c4:
    // 0x1555c4: 0x40f809  jalr        $v0
label_1555c8:
    if (ctx->pc == 0x1555C8u) {
        ctx->pc = 0x1555C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555C4u;
        // 0x1555c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1555CCu;
        goto label_1555cc;
    }
    ctx->pc = 0x1555C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1555CCu);
        ctx->pc = 0x1555C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555C4u;
        // 0x1555c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1555C4u, 0x1555CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1555CCu;
label_1555cc:
    // 0x1555cc: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x1555ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_1555d0:
    // 0x1555d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1555d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1555d4:
    // 0x1555d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1555d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1555d8:
    // 0x1555d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1555d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1555dc:
    // 0x1555dc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1555dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1555e0:
    // 0x1555e0: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1555e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1555e4:
    // 0x1555e4: 0x60f809  jalr        $v1
label_1555e8:
    if (ctx->pc == 0x1555E8u) {
        ctx->pc = 0x1555E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555E4u;
        // 0x1555e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1555ECu;
        goto label_1555ec;
    }
    ctx->pc = 0x1555E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1555ECu);
        ctx->pc = 0x1555E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555E4u;
        // 0x1555e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1555E4u, 0x1555ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1555ECu;
label_1555ec:
    // 0x1555ec: 0x10000010  b           . + 4 + (0x10 << 2)
label_1555f0:
    if (ctx->pc == 0x1555F0u) {
        ctx->pc = 0x1555F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555ECu;
        // 0x1555f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1555F4u;
        goto label_1555f4;
    }
    ctx->pc = 0x1555ECu;
    {
        const bool branch_taken_0x1555ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555ECu;
        // 0x1555f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555ec) {
            ctx->pc = 0x155630u;
            goto label_155630;
        }
    }
    ctx->pc = 0x1555F4u;
label_1555f4:
    // 0x1555f4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1555f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1555f8:
    // 0x1555f8: 0xc05835e  jal         func_160D78
label_1555fc:
    if (ctx->pc == 0x1555FCu) {
        ctx->pc = 0x1555FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555F8u;
        // 0x1555fc: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155600u;
        goto label_155600;
    }
    ctx->pc = 0x1555F8u;
    SET_GPR_U32(ctx, 31, 0x155600u);
    ctx->pc = 0x1555FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555F8u;
    // 0x1555fc: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D78u, 0x1555F8u, 0x155600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155600u;
label_155600:
    // 0x155600: 0x1000000b  b           . + 4 + (0xB << 2)
label_155604:
    if (ctx->pc == 0x155604u) {
        ctx->pc = 0x155604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155600u;
        // 0x155604: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155608u;
        goto label_155608;
    }
    ctx->pc = 0x155600u;
    {
        const bool branch_taken_0x155600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155600u;
        // 0x155604: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155600) {
            ctx->pc = 0x155630u;
            goto label_155630;
        }
    }
    ctx->pc = 0x155608u;
label_155608:
    // 0x155608: 0x8c8207a4  lw          $v0, 0x7A4($a0)
    ctx->pc = 0x155608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1956)));
label_15560c:
    // 0x15560c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_155610:
    if (ctx->pc == 0x155610u) {
        ctx->pc = 0x155610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15560Cu;
        // 0x155610: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155614u;
        goto label_155614;
    }
    ctx->pc = 0x15560Cu;
    {
        const bool branch_taken_0x15560c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15560Cu;
        // 0x155610: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15560c) {
            ctx->pc = 0x15562Cu;
            goto label_15562c;
        }
    }
    ctx->pc = 0x155614u;
label_155614:
    // 0x155614: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155618:
    // 0x155618: 0xc1073bc  jal         func_41CEF0
label_15561c:
    if (ctx->pc == 0x15561Cu) {
        ctx->pc = 0x15561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155618u;
        // 0x15561c: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155620u;
        goto label_155620;
    }
    ctx->pc = 0x155618u;
    SET_GPR_U32(ctx, 31, 0x155620u);
    ctx->pc = 0x15561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155618u;
    // 0x15561c: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x155618u, 0x155620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155620u;
label_155620:
    // 0x155620: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x155620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_155624:
    // 0x155624: 0xc05835e  jal         func_160D78
label_155628:
    if (ctx->pc == 0x155628u) {
        ctx->pc = 0x155628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155624u;
        // 0x155628: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15562Cu;
        goto label_15562c;
    }
    ctx->pc = 0x155624u;
    SET_GPR_U32(ctx, 31, 0x15562Cu);
    ctx->pc = 0x155628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155624u;
    // 0x155628: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D78u, 0x155624u, 0x15562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15562Cu;
label_15562c:
    // 0x15562c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15562cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_155630:
    // 0x155630: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x155630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_155634:
    // 0x155634: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x155634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155638:
    // 0x155638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15563c:
    // 0x15563c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x15563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_155640:
    // 0x155640: 0x3e00008  jr          $ra
label_155644:
    if (ctx->pc == 0x155644u) {
        ctx->pc = 0x155644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155640u;
        // 0x155644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155648u;
        goto label_fallthrough_0x155640;
    }
    ctx->pc = 0x155640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155640u;
        // 0x155644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x155640:
    ctx->pc = 0x155648u;
}

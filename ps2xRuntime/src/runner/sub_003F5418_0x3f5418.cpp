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

// Function: sub_003F5418
// Address: 0x3f5418 - 0x3f5608
void sub_003F5418_0x3f5418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5418_0x3f5418");
#endif

    switch (ctx->pc) {
        case 0x3f5418u: goto label_3f5418;
        case 0x3f541cu: goto label_3f541c;
        case 0x3f5420u: goto label_3f5420;
        case 0x3f5424u: goto label_3f5424;
        case 0x3f5428u: goto label_3f5428;
        case 0x3f542cu: goto label_3f542c;
        case 0x3f5430u: goto label_3f5430;
        case 0x3f5434u: goto label_3f5434;
        case 0x3f5438u: goto label_3f5438;
        case 0x3f543cu: goto label_3f543c;
        case 0x3f5440u: goto label_3f5440;
        case 0x3f5444u: goto label_3f5444;
        case 0x3f5448u: goto label_3f5448;
        case 0x3f544cu: goto label_3f544c;
        case 0x3f5450u: goto label_3f5450;
        case 0x3f5454u: goto label_3f5454;
        case 0x3f5458u: goto label_3f5458;
        case 0x3f545cu: goto label_3f545c;
        case 0x3f5460u: goto label_3f5460;
        case 0x3f5464u: goto label_3f5464;
        case 0x3f5468u: goto label_3f5468;
        case 0x3f546cu: goto label_3f546c;
        case 0x3f5470u: goto label_3f5470;
        case 0x3f5474u: goto label_3f5474;
        case 0x3f5478u: goto label_3f5478;
        case 0x3f547cu: goto label_3f547c;
        case 0x3f5480u: goto label_3f5480;
        case 0x3f5484u: goto label_3f5484;
        case 0x3f5488u: goto label_3f5488;
        case 0x3f548cu: goto label_3f548c;
        case 0x3f5490u: goto label_3f5490;
        case 0x3f5494u: goto label_3f5494;
        case 0x3f5498u: goto label_3f5498;
        case 0x3f549cu: goto label_3f549c;
        case 0x3f54a0u: goto label_3f54a0;
        case 0x3f54a4u: goto label_3f54a4;
        case 0x3f54a8u: goto label_3f54a8;
        case 0x3f54acu: goto label_3f54ac;
        case 0x3f54b0u: goto label_3f54b0;
        case 0x3f54b4u: goto label_3f54b4;
        case 0x3f54b8u: goto label_3f54b8;
        case 0x3f54bcu: goto label_3f54bc;
        case 0x3f54c0u: goto label_3f54c0;
        case 0x3f54c4u: goto label_3f54c4;
        case 0x3f54c8u: goto label_3f54c8;
        case 0x3f54ccu: goto label_3f54cc;
        case 0x3f54d0u: goto label_3f54d0;
        case 0x3f54d4u: goto label_3f54d4;
        case 0x3f54d8u: goto label_3f54d8;
        case 0x3f54dcu: goto label_3f54dc;
        case 0x3f54e0u: goto label_3f54e0;
        case 0x3f54e4u: goto label_3f54e4;
        case 0x3f54e8u: goto label_3f54e8;
        case 0x3f54ecu: goto label_3f54ec;
        case 0x3f54f0u: goto label_3f54f0;
        case 0x3f54f4u: goto label_3f54f4;
        case 0x3f54f8u: goto label_3f54f8;
        case 0x3f54fcu: goto label_3f54fc;
        case 0x3f5500u: goto label_3f5500;
        case 0x3f5504u: goto label_3f5504;
        case 0x3f5508u: goto label_3f5508;
        case 0x3f550cu: goto label_3f550c;
        case 0x3f5510u: goto label_3f5510;
        case 0x3f5514u: goto label_3f5514;
        case 0x3f5518u: goto label_3f5518;
        case 0x3f551cu: goto label_3f551c;
        case 0x3f5520u: goto label_3f5520;
        case 0x3f5524u: goto label_3f5524;
        case 0x3f5528u: goto label_3f5528;
        case 0x3f552cu: goto label_3f552c;
        case 0x3f5530u: goto label_3f5530;
        case 0x3f5534u: goto label_3f5534;
        case 0x3f5538u: goto label_3f5538;
        case 0x3f553cu: goto label_3f553c;
        case 0x3f5540u: goto label_3f5540;
        case 0x3f5544u: goto label_3f5544;
        case 0x3f5548u: goto label_3f5548;
        case 0x3f554cu: goto label_3f554c;
        case 0x3f5550u: goto label_3f5550;
        case 0x3f5554u: goto label_3f5554;
        case 0x3f5558u: goto label_3f5558;
        case 0x3f555cu: goto label_3f555c;
        case 0x3f5560u: goto label_3f5560;
        case 0x3f5564u: goto label_3f5564;
        case 0x3f5568u: goto label_3f5568;
        case 0x3f556cu: goto label_3f556c;
        case 0x3f5570u: goto label_3f5570;
        case 0x3f5574u: goto label_3f5574;
        case 0x3f5578u: goto label_3f5578;
        case 0x3f557cu: goto label_3f557c;
        case 0x3f5580u: goto label_3f5580;
        case 0x3f5584u: goto label_3f5584;
        case 0x3f5588u: goto label_3f5588;
        case 0x3f558cu: goto label_3f558c;
        case 0x3f5590u: goto label_3f5590;
        case 0x3f5594u: goto label_3f5594;
        case 0x3f5598u: goto label_3f5598;
        case 0x3f559cu: goto label_3f559c;
        case 0x3f55a0u: goto label_3f55a0;
        case 0x3f55a4u: goto label_3f55a4;
        case 0x3f55a8u: goto label_3f55a8;
        case 0x3f55acu: goto label_3f55ac;
        case 0x3f55b0u: goto label_3f55b0;
        case 0x3f55b4u: goto label_3f55b4;
        case 0x3f55b8u: goto label_3f55b8;
        case 0x3f55bcu: goto label_3f55bc;
        case 0x3f55c0u: goto label_3f55c0;
        case 0x3f55c4u: goto label_3f55c4;
        case 0x3f55c8u: goto label_3f55c8;
        case 0x3f55ccu: goto label_3f55cc;
        case 0x3f55d0u: goto label_3f55d0;
        case 0x3f55d4u: goto label_3f55d4;
        case 0x3f55d8u: goto label_3f55d8;
        case 0x3f55dcu: goto label_3f55dc;
        case 0x3f55e0u: goto label_3f55e0;
        case 0x3f55e4u: goto label_3f55e4;
        case 0x3f55e8u: goto label_3f55e8;
        case 0x3f55ecu: goto label_3f55ec;
        case 0x3f55f0u: goto label_3f55f0;
        case 0x3f55f4u: goto label_3f55f4;
        case 0x3f55f8u: goto label_3f55f8;
        case 0x3f55fcu: goto label_3f55fc;
        case 0x3f5600u: goto label_3f5600;
        case 0x3f5604u: goto label_3f5604;
        default: break;
    }

    ctx->pc = 0x3f5418u;

label_3f5418:
    // 0x3f5418: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x3f5418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_3f541c:
    // 0x3f541c: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x3f541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_3f5420:
    // 0x3f5420: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x3f5420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
label_3f5424:
    // 0x3f5424: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f5424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f5428:
    // 0x3f5428: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x3f5428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_3f542c:
    // 0x3f542c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3f542cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f5430:
    // 0x3f5430: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x3f5430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_3f5434:
    // 0x3f5434: 0x10e0005c  beqz        $a3, . + 4 + (0x5C << 2)
label_3f5438:
    if (ctx->pc == 0x3F5438u) {
        ctx->pc = 0x3F5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5434u;
        // 0x3f5438: 0xffbf0470  sd          $ra, 0x470($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F543Cu;
        goto label_3f543c;
    }
    ctx->pc = 0x3F5434u;
    {
        const bool branch_taken_0x3f5434 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5434u;
        // 0x3f5438: 0xffbf0470  sd          $ra, 0x470($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5434) {
            ctx->pc = 0x3F55A8u;
            goto label_3f55a8;
        }
    }
    ctx->pc = 0x3F543Cu;
label_3f543c:
    // 0x3f543c: 0x9263002c  lbu         $v1, 0x2C($s3)
    ctx->pc = 0x3f543cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
label_3f5440:
    // 0x3f5440: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f5440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f5444:
    // 0x3f5444: 0x14620069  bne         $v1, $v0, . + 4 + (0x69 << 2)
label_3f5448:
    if (ctx->pc == 0x3F5448u) {
        ctx->pc = 0x3F5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5444u;
        // 0x3f5448: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F544Cu;
        goto label_3f544c;
    }
    ctx->pc = 0x3F5444u;
    {
        const bool branch_taken_0x3f5444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5444u;
        // 0x3f5448: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5444) {
            ctx->pc = 0x3F55ECu;
            goto label_3f55ec;
        }
    }
    ctx->pc = 0x3F544Cu;
label_3f544c:
    // 0x3f544c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x3f544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_3f5450:
    // 0x3f5450: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_3f5454:
    if (ctx->pc == 0x3F5454u) {
        ctx->pc = 0x3F5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5450u;
        // 0x3f5454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5458u;
        goto label_3f5458;
    }
    ctx->pc = 0x3F5450u;
    {
        const bool branch_taken_0x3f5450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5450u;
        // 0x3f5454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5450) {
            ctx->pc = 0x3F5574u;
            goto label_3f5574;
        }
    }
    ctx->pc = 0x3F5458u;
label_3f5458:
    // 0x3f5458: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x3f5458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_3f545c:
    // 0x3f545c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3f545cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3f5460:
    // 0x3f5460: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f5460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f5464:
    // 0x3f5464: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f5464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f5468:
    // 0x3f5468: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f5468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f546c:
    // 0x3f546c: 0xc136b24  jal         func_4DAC90
label_3f5470:
    if (ctx->pc == 0x3F5470u) {
        ctx->pc = 0x3F5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F546Cu;
        // 0x3f5470: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5474u;
        goto label_3f5474;
    }
    ctx->pc = 0x3F546Cu;
    SET_GPR_U32(ctx, 31, 0x3F5474u);
    ctx->pc = 0x3F5470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F546Cu;
    // 0x3f5470: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3F546Cu, 0x3F5474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5474u;
label_3f5474:
    // 0x3f5474: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f5474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f5478:
    // 0x3f5478: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f5478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f547c:
    // 0x3f547c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f547cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f5480:
    // 0x3f5480: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x3f5480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3f5484:
    // 0x3f5484: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f5484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f5488:
    // 0x3f5488: 0xc136b18  jal         func_4DAC60
label_3f548c:
    if (ctx->pc == 0x3F548Cu) {
        ctx->pc = 0x3F548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5488u;
        // 0x3f548c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5490u;
        goto label_3f5490;
    }
    ctx->pc = 0x3F5488u;
    SET_GPR_U32(ctx, 31, 0x3F5490u);
    ctx->pc = 0x3F548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5488u;
    // 0x3f548c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F5488u, 0x3F5490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5490u;
label_3f5490:
    // 0x3f5490: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f5490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f5494:
    // 0x3f5494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5498:
    // 0x3f5498: 0xc0e9666  jal         func_3A5998
label_3f549c:
    if (ctx->pc == 0x3F549Cu) {
        ctx->pc = 0x3F549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5498u;
        // 0x3f549c: 0x24a564a0  addiu       $a1, $a1, 0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F54A0u;
        goto label_3f54a0;
    }
    ctx->pc = 0x3F5498u;
    SET_GPR_U32(ctx, 31, 0x3F54A0u);
    ctx->pc = 0x3F549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5498u;
    // 0x3f549c: 0x24a564a0  addiu       $a1, $a1, 0x64A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F5498u, 0x3F54A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F54A0u;
label_3f54a0:
    // 0x3f54a0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3f54a4:
    if (ctx->pc == 0x3F54A4u) {
        ctx->pc = 0x3F54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F54A0u;
        // 0x3f54a4: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F54A8u;
        goto label_3f54a8;
    }
    ctx->pc = 0x3F54A0u;
    {
        const bool branch_taken_0x3f54a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F54A0u;
        // 0x3f54a4: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f54a0) {
            ctx->pc = 0x3F5538u;
            goto label_3f5538;
        }
    }
    ctx->pc = 0x3F54A8u;
label_3f54a8:
    // 0x3f54a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f54a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f54ac:
    // 0x3f54ac: 0xc0e8e26  jal         func_3A3898
label_3f54b0:
    if (ctx->pc == 0x3F54B0u) {
        ctx->pc = 0x3F54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F54ACu;
        // 0x3f54b0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F54B4u;
        goto label_3f54b4;
    }
    ctx->pc = 0x3F54ACu;
    SET_GPR_U32(ctx, 31, 0x3F54B4u);
    ctx->pc = 0x3F54B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F54ACu;
    // 0x3f54b0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F54ACu, 0x3F54B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F54B4u;
label_3f54b4:
    // 0x3f54b4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f54b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f54b8:
    // 0x3f54b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3f54b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3f54bc:
    // 0x3f54bc: 0x24a51750  addiu       $a1, $a1, 0x1750
    ctx->pc = 0x3f54bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5968));
label_3f54c0:
    // 0x3f54c0: 0xc136b24  jal         func_4DAC90
label_3f54c4:
    if (ctx->pc == 0x3F54C4u) {
        ctx->pc = 0x3F54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F54C0u;
        // 0x3f54c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F54C8u;
        goto label_3f54c8;
    }
    ctx->pc = 0x3F54C0u;
    SET_GPR_U32(ctx, 31, 0x3F54C8u);
    ctx->pc = 0x3F54C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F54C0u;
    // 0x3f54c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3F54C0u, 0x3F54C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F54C8u;
label_3f54c8:
    // 0x3f54c8: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3f54c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f54cc:
    // 0x3f54cc: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3f54ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3f54d0:
    // 0x3f54d0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3f54d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3f54d4:
    // 0x3f54d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f54d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f54d8:
    // 0x3f54d8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f54d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f54dc:
    // 0x3f54dc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f54dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f54e0:
    // 0x3f54e0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f54e0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f54e4:
    // 0x3f54e4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f54e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f54e8:
    // 0x3f54e8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f54e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f54ec:
    // 0x3f54ec: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f54ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f54f0:
    // 0x3f54f0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f54f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f54f4:
    // 0x3f54f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f54f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f54f8:
    // 0x3f54f8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f54f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f54fc:
    // 0x3f54fc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f54fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f5500:
    // 0x3f5500: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f5500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f5504:
    // 0x3f5504: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f5504u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f5508:
    // 0x3f5508: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f5508u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f550c:
    // 0x3f550c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f550cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f5510:
    // 0x3f5510: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f5510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f5514:
    // 0x3f5514: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f5514u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f5518:
    // 0x3f5518: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f5518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3f551c:
    // 0x3f551c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f551cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f5520:
    // 0x3f5520: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f5520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f5524:
    // 0x3f5524: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f5524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f5528:
    // 0x3f5528: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f5528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3f552c:
    // 0x3f552c: 0xc136b18  jal         func_4DAC60
label_3f5530:
    if (ctx->pc == 0x3F5530u) {
        ctx->pc = 0x3F5530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F552Cu;
        // 0x3f5530: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5534u;
        goto label_3f5534;
    }
    ctx->pc = 0x3F552Cu;
    SET_GPR_U32(ctx, 31, 0x3F5534u);
    ctx->pc = 0x3F5530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F552Cu;
    // 0x3f5530: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F552Cu, 0x3F5534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5534u;
label_3f5534:
    // 0x3f5534: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3f5534u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f5538:
    // 0x3f5538: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x3f5538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f553c:
    // 0x3f553c: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3f553cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3f5540:
    // 0x3f5540: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f5540u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f5544:
    // 0x3f5544: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3f5544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f5548:
    // 0x3f5548: 0x261065a0  addiu       $s0, $s0, 0x65A0
    ctx->pc = 0x3f5548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26016));
label_3f554c:
    // 0x3f554c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3f554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3f5550:
    // 0x3f5550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f5550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f5554:
    // 0x3f5554: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f5554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f5558:
    // 0x3f5558: 0xc0e9f84  jal         func_3A7E10
label_3f555c:
    if (ctx->pc == 0x3F555Cu) {
        ctx->pc = 0x3F555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5558u;
        // 0x3f555c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5560u;
        goto label_3f5560;
    }
    ctx->pc = 0x3F5558u;
    SET_GPR_U32(ctx, 31, 0x3F5560u);
    ctx->pc = 0x3F555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5558u;
    // 0x3f555c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3F5558u, 0x3F5560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5560u;
label_3f5560:
    // 0x3f5560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5564:
    // 0x3f5564: 0xc0f15bc  jal         func_3C56F0
label_3f5568:
    if (ctx->pc == 0x3F5568u) {
        ctx->pc = 0x3F5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5564u;
        // 0x3f5568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F556Cu;
        goto label_3f556c;
    }
    ctx->pc = 0x3F5564u;
    SET_GPR_U32(ctx, 31, 0x3F556Cu);
    ctx->pc = 0x3F5568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5564u;
    // 0x3f5568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3F5564u, 0x3F556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F556Cu;
label_3f556c:
    // 0x3f556c: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x3f556cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
label_3f5570:
    // 0x3f5570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f5570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f5574:
    // 0x3f5574: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3f5574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f5578:
    // 0x3f5578: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x3f5578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_3f557c:
    // 0x3f557c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f5580:
    // 0x3f5580: 0xae430124  sw          $v1, 0x124($s2)
    ctx->pc = 0x3f5580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 3));
label_3f5584:
    // 0x3f5584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f5584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5588:
    // 0x3f5588: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3f5588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f558c:
    // 0x3f558c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f558cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5590:
    // 0x3f5590: 0x84440120  lh          $a0, 0x120($v0)
    ctx->pc = 0x3f5590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
label_3f5594:
    // 0x3f5594: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x3f5594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_3f5598:
    // 0x3f5598: 0x60f809  jalr        $v1
label_3f559c:
    if (ctx->pc == 0x3F559Cu) {
        ctx->pc = 0x3F559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5598u;
        // 0x3f559c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F55A0u;
        goto label_3f55a0;
    }
    ctx->pc = 0x3F5598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F55A0u);
        ctx->pc = 0x3F559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5598u;
        // 0x3f559c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5598u, 0x3F55A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F55A0u;
label_3f55a0:
    // 0x3f55a0: 0x10000012  b           . + 4 + (0x12 << 2)
label_3f55a4:
    if (ctx->pc == 0x3F55A4u) {
        ctx->pc = 0x3F55A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55A0u;
        // 0x3f55a4: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F55A8u;
        goto label_3f55a8;
    }
    ctx->pc = 0x3F55A0u;
    {
        const bool branch_taken_0x3f55a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F55A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55A0u;
        // 0x3f55a4: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f55a0) {
            ctx->pc = 0x3F55ECu;
            goto label_3f55ec;
        }
    }
    ctx->pc = 0x3F55A8u;
label_3f55a8:
    // 0x3f55a8: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x3f55a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_3f55ac:
    // 0x3f55ac: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3f55b0:
    if (ctx->pc == 0x3F55B0u) {
        ctx->pc = 0x3F55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55ACu;
        // 0x3f55b0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F55B4u;
        goto label_3f55b4;
    }
    ctx->pc = 0x3F55ACu;
    {
        const bool branch_taken_0x3f55ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55ACu;
        // 0x3f55b0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f55ac) {
            ctx->pc = 0x3F55CCu;
            goto label_3f55cc;
        }
    }
    ctx->pc = 0x3F55B4u;
label_3f55b4:
    // 0x3f55b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3f55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3f55b8:
    // 0x3f55b8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3f55b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3f55bc:
    // 0x3f55bc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3f55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3f55c0:
    // 0x3f55c0: 0x60f809  jalr        $v1
label_3f55c4:
    if (ctx->pc == 0x3F55C4u) {
        ctx->pc = 0x3F55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55C0u;
        // 0x3f55c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F55C8u;
        goto label_3f55c8;
    }
    ctx->pc = 0x3F55C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F55C8u);
        ctx->pc = 0x3F55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55C0u;
        // 0x3f55c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F55C0u, 0x3F55C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F55C8u;
label_3f55c8:
    // 0x3f55c8: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x3f55c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_3f55cc:
    // 0x3f55cc: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x3f55ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_3f55d0:
    // 0x3f55d0: 0xae400124  sw          $zero, 0x124($s2)
    ctx->pc = 0x3f55d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 0));
label_3f55d4:
    // 0x3f55d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3f55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f55d8:
    // 0x3f55d8: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x3f55d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_3f55dc:
    // 0x3f55dc: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x3f55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_3f55e0:
    // 0x3f55e0: 0x60f809  jalr        $v1
label_3f55e4:
    if (ctx->pc == 0x3F55E4u) {
        ctx->pc = 0x3F55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55E0u;
        // 0x3f55e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F55E8u;
        goto label_3f55e8;
    }
    ctx->pc = 0x3F55E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F55E8u);
        ctx->pc = 0x3F55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55E0u;
        // 0x3f55e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F55E0u, 0x3F55E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F55E8u;
label_3f55e8:
    // 0x3f55e8: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x3f55e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3f55ec:
    // 0x3f55ec: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x3f55ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3f55f0:
    // 0x3f55f0: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x3f55f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3f55f4:
    // 0x3f55f4: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x3f55f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3f55f8:
    // 0x3f55f8: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x3f55f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
label_3f55fc:
    // 0x3f55fc: 0x3e00008  jr          $ra
label_3f5600:
    if (ctx->pc == 0x3F5600u) {
        ctx->pc = 0x3F5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55FCu;
        // 0x3f5600: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5604u;
        goto label_3f5604;
    }
    ctx->pc = 0x3F55FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55FCu;
        // 0x3f5600: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F55FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5604u;
label_3f5604:
    // 0x3f5604: 0x0  nop
    ctx->pc = 0x3f5604u;
    // NOP
    ctx->pc = 0x3f5608u;
}

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

// Function: sub_003DD538
// Address: 0x3dd538 - 0x3dd640
void sub_003DD538_0x3dd538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD538_0x3dd538");
#endif

    switch (ctx->pc) {
        case 0x3dd538u: goto label_3dd538;
        case 0x3dd53cu: goto label_3dd53c;
        case 0x3dd540u: goto label_3dd540;
        case 0x3dd544u: goto label_3dd544;
        case 0x3dd548u: goto label_3dd548;
        case 0x3dd54cu: goto label_3dd54c;
        case 0x3dd550u: goto label_3dd550;
        case 0x3dd554u: goto label_3dd554;
        case 0x3dd558u: goto label_3dd558;
        case 0x3dd55cu: goto label_3dd55c;
        case 0x3dd560u: goto label_3dd560;
        case 0x3dd564u: goto label_3dd564;
        case 0x3dd568u: goto label_3dd568;
        case 0x3dd56cu: goto label_3dd56c;
        case 0x3dd570u: goto label_3dd570;
        case 0x3dd574u: goto label_3dd574;
        case 0x3dd578u: goto label_3dd578;
        case 0x3dd57cu: goto label_3dd57c;
        case 0x3dd580u: goto label_3dd580;
        case 0x3dd584u: goto label_3dd584;
        case 0x3dd588u: goto label_3dd588;
        case 0x3dd58cu: goto label_3dd58c;
        case 0x3dd590u: goto label_3dd590;
        case 0x3dd594u: goto label_3dd594;
        case 0x3dd598u: goto label_3dd598;
        case 0x3dd59cu: goto label_3dd59c;
        case 0x3dd5a0u: goto label_3dd5a0;
        case 0x3dd5a4u: goto label_3dd5a4;
        case 0x3dd5a8u: goto label_3dd5a8;
        case 0x3dd5acu: goto label_3dd5ac;
        case 0x3dd5b0u: goto label_3dd5b0;
        case 0x3dd5b4u: goto label_3dd5b4;
        case 0x3dd5b8u: goto label_3dd5b8;
        case 0x3dd5bcu: goto label_3dd5bc;
        case 0x3dd5c0u: goto label_3dd5c0;
        case 0x3dd5c4u: goto label_3dd5c4;
        case 0x3dd5c8u: goto label_3dd5c8;
        case 0x3dd5ccu: goto label_3dd5cc;
        case 0x3dd5d0u: goto label_3dd5d0;
        case 0x3dd5d4u: goto label_3dd5d4;
        case 0x3dd5d8u: goto label_3dd5d8;
        case 0x3dd5dcu: goto label_3dd5dc;
        case 0x3dd5e0u: goto label_3dd5e0;
        case 0x3dd5e4u: goto label_3dd5e4;
        case 0x3dd5e8u: goto label_3dd5e8;
        case 0x3dd5ecu: goto label_3dd5ec;
        case 0x3dd5f0u: goto label_3dd5f0;
        case 0x3dd5f4u: goto label_3dd5f4;
        case 0x3dd5f8u: goto label_3dd5f8;
        case 0x3dd5fcu: goto label_3dd5fc;
        case 0x3dd600u: goto label_3dd600;
        case 0x3dd604u: goto label_3dd604;
        case 0x3dd608u: goto label_3dd608;
        case 0x3dd60cu: goto label_3dd60c;
        case 0x3dd610u: goto label_3dd610;
        case 0x3dd614u: goto label_3dd614;
        case 0x3dd618u: goto label_3dd618;
        case 0x3dd61cu: goto label_3dd61c;
        case 0x3dd620u: goto label_3dd620;
        case 0x3dd624u: goto label_3dd624;
        case 0x3dd628u: goto label_3dd628;
        case 0x3dd62cu: goto label_3dd62c;
        case 0x3dd630u: goto label_3dd630;
        case 0x3dd634u: goto label_3dd634;
        case 0x3dd638u: goto label_3dd638;
        case 0x3dd63cu: goto label_3dd63c;
        default: break;
    }

    ctx->pc = 0x3dd538u;

label_3dd538:
    // 0x3dd538: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x3dd538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_3dd53c:
    // 0x3dd53c: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x3dd53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
label_3dd540:
    // 0x3dd540: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x3dd540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
label_3dd544:
    // 0x3dd544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dd544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd548:
    // 0x3dd548: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x3dd548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
label_3dd54c:
    // 0x3dd54c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dd54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd550:
    // 0x3dd550: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x3dd550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
label_3dd554:
    // 0x3dd554: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x3dd554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
label_3dd558:
    // 0x3dd558: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dd558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dd55c:
    // 0x3dd55c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dd55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dd560:
    // 0x3dd560: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dd560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dd564:
    // 0x3dd564: 0x40f809  jalr        $v0
label_3dd568:
    if (ctx->pc == 0x3DD568u) {
        ctx->pc = 0x3DD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD564u;
        // 0x3dd568: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD56Cu;
        goto label_3dd56c;
    }
    ctx->pc = 0x3DD564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD56Cu);
        ctx->pc = 0x3DD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD564u;
        // 0x3dd568: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD564u, 0x3DD56Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD56Cu;
label_3dd56c:
    // 0x3dd56c: 0x24030404  addiu       $v1, $zero, 0x404
    ctx->pc = 0x3dd56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3dd570:
    // 0x3dd570: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3dd570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3dd574:
    // 0x3dd574: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dd574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dd578:
    // 0x3dd578: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3dd578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd57c:
    // 0x3dd57c: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3dd57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3dd580:
    // 0x3dd580: 0xc0e858c  jal         func_3A1630
label_3dd584:
    if (ctx->pc == 0x3DD584u) {
        ctx->pc = 0x3DD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD580u;
        // 0x3dd584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD588u;
        goto label_3dd588;
    }
    ctx->pc = 0x3DD580u;
    SET_GPR_U32(ctx, 31, 0x3DD588u);
    ctx->pc = 0x3DD584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD580u;
    // 0x3dd584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DD580u, 0x3DD588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD588u;
label_3dd588:
    // 0x3dd588: 0xc0ea14c  jal         func_3A8530
label_3dd58c:
    if (ctx->pc == 0x3DD58Cu) {
        ctx->pc = 0x3DD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD588u;
        // 0x3dd58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD590u;
        goto label_3dd590;
    }
    ctx->pc = 0x3DD588u;
    SET_GPR_U32(ctx, 31, 0x3DD590u);
    ctx->pc = 0x3DD58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD588u;
    // 0x3dd58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DD588u, 0x3DD590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD590u;
label_3dd590:
    // 0x3dd590: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dd590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dd594:
    // 0x3dd594: 0xc0ea12a  jal         func_3A84A8
label_3dd598:
    if (ctx->pc == 0x3DD598u) {
        ctx->pc = 0x3DD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD594u;
        // 0x3dd598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD59Cu;
        goto label_3dd59c;
    }
    ctx->pc = 0x3DD594u;
    SET_GPR_U32(ctx, 31, 0x3DD59Cu);
    ctx->pc = 0x3DD598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD594u;
    // 0x3dd598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DD594u, 0x3DD59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD59Cu;
label_3dd59c:
    // 0x3dd59c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dd59cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd5a0:
    // 0x3dd5a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dd5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dd5a4:
    // 0x3dd5a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dd5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd5a8:
    // 0x3dd5a8: 0xc0ea12a  jal         func_3A84A8
label_3dd5ac:
    if (ctx->pc == 0x3DD5ACu) {
        ctx->pc = 0x3DD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5A8u;
        // 0x3dd5ac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD5B0u;
        goto label_3dd5b0;
    }
    ctx->pc = 0x3DD5A8u;
    SET_GPR_U32(ctx, 31, 0x3DD5B0u);
    ctx->pc = 0x3DD5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD5A8u;
    // 0x3dd5ac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DD5A8u, 0x3DD5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD5B0u;
label_3dd5b0:
    // 0x3dd5b0: 0x3c0140b3  lui         $at, 0x40B3
    ctx->pc = 0x3dd5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16563 << 16));
label_3dd5b4:
    // 0x3dd5b4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3dd5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3dd5b8:
    // 0x3dd5b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dd5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dd5bc:
    // 0x3dd5bc: 0x3c030f9e  lui         $v1, 0xF9E
    ctx->pc = 0x3dd5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3998 << 16));
label_3dd5c0:
    // 0x3dd5c0: 0x3c0a0f67  lui         $t2, 0xF67
    ctx->pc = 0x3dd5c0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3943 << 16));
label_3dd5c4:
    // 0x3dd5c4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dd5c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd5c8:
    // 0x3dd5c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3dd5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3dd5cc:
    // 0x3dd5cc: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x3dd5ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_3dd5d0:
    // 0x3dd5d0: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x3dd5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3dd5d4:
    // 0x3dd5d4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3dd5d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3dd5d8:
    // 0x3dd5d8: 0xafa30460  sw          $v1, 0x460($sp)
    ctx->pc = 0x3dd5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 3));
label_3dd5dc:
    // 0x3dd5dc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3dd5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3dd5e0:
    // 0x3dd5e0: 0xafaa0470  sw          $t2, 0x470($sp)
    ctx->pc = 0x3dd5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 10));
label_3dd5e4:
    // 0x3dd5e4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3dd5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dd5e8:
    // 0x3dd5e8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3dd5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3dd5ec:
    // 0x3dd5ec: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3dd5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3dd5f0:
    // 0x3dd5f0: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3dd5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3dd5f4:
    // 0x3dd5f4: 0x27a80460  addiu       $t0, $sp, 0x460
    ctx->pc = 0x3dd5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3dd5f8:
    // 0x3dd5f8: 0x27a90470  addiu       $t1, $sp, 0x470
    ctx->pc = 0x3dd5f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3dd5fc:
    // 0x3dd5fc: 0x261051a0  addiu       $s0, $s0, 0x51A0
    ctx->pc = 0x3dd5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20896));
label_3dd600:
    // 0x3dd600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dd600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dd604:
    // 0x3dd604: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3dd604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3dd608:
    // 0x3dd608: 0xc0ea004  jal         func_3A8010
label_3dd60c:
    if (ctx->pc == 0x3DD60Cu) {
        ctx->pc = 0x3DD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD608u;
        // 0x3dd60c: 0xafa00440  sw          $zero, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD610u;
        goto label_3dd610;
    }
    ctx->pc = 0x3DD608u;
    SET_GPR_U32(ctx, 31, 0x3DD610u);
    ctx->pc = 0x3DD60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD608u;
    // 0x3dd60c: 0xafa00440  sw          $zero, 0x440($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3DD608u, 0x3DD610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD610u;
label_3dd610:
    // 0x3dd610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dd610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd614:
    // 0x3dd614: 0xc0f15bc  jal         func_3C56F0
label_3dd618:
    if (ctx->pc == 0x3DD618u) {
        ctx->pc = 0x3DD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD614u;
        // 0x3dd618: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD61Cu;
        goto label_3dd61c;
    }
    ctx->pc = 0x3DD614u;
    SET_GPR_U32(ctx, 31, 0x3DD61Cu);
    ctx->pc = 0x3DD618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD614u;
    // 0x3dd618: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DD614u, 0x3DD61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD61Cu;
label_3dd61c:
    // 0x3dd61c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3dd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3dd620:
    // 0x3dd620: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x3dd620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3dd624:
    // 0x3dd624: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x3dd624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3dd628:
    // 0x3dd628: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x3dd628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3dd62c:
    // 0x3dd62c: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x3dd62cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3dd630:
    // 0x3dd630: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x3dd630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_3dd634:
    // 0x3dd634: 0x3e00008  jr          $ra
label_3dd638:
    if (ctx->pc == 0x3DD638u) {
        ctx->pc = 0x3DD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD634u;
        // 0x3dd638: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD63Cu;
        goto label_3dd63c;
    }
    ctx->pc = 0x3DD634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD634u;
        // 0x3dd638: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD63Cu;
label_3dd63c:
    // 0x3dd63c: 0x0  nop
    ctx->pc = 0x3dd63cu;
    // NOP
    ctx->pc = 0x3dd640u;
}

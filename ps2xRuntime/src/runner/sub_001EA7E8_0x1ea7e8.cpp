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

// Function: sub_001EA7E8
// Address: 0x1ea7e8 - 0x1ea908
void sub_001EA7E8_0x1ea7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA7E8_0x1ea7e8");
#endif

    switch (ctx->pc) {
        case 0x1ea7e8u: goto label_1ea7e8;
        case 0x1ea7ecu: goto label_1ea7ec;
        case 0x1ea7f0u: goto label_1ea7f0;
        case 0x1ea7f4u: goto label_1ea7f4;
        case 0x1ea7f8u: goto label_1ea7f8;
        case 0x1ea7fcu: goto label_1ea7fc;
        case 0x1ea800u: goto label_1ea800;
        case 0x1ea804u: goto label_1ea804;
        case 0x1ea808u: goto label_1ea808;
        case 0x1ea80cu: goto label_1ea80c;
        case 0x1ea810u: goto label_1ea810;
        case 0x1ea814u: goto label_1ea814;
        case 0x1ea818u: goto label_1ea818;
        case 0x1ea81cu: goto label_1ea81c;
        case 0x1ea820u: goto label_1ea820;
        case 0x1ea824u: goto label_1ea824;
        case 0x1ea828u: goto label_1ea828;
        case 0x1ea82cu: goto label_1ea82c;
        case 0x1ea830u: goto label_1ea830;
        case 0x1ea834u: goto label_1ea834;
        case 0x1ea838u: goto label_1ea838;
        case 0x1ea83cu: goto label_1ea83c;
        case 0x1ea840u: goto label_1ea840;
        case 0x1ea844u: goto label_1ea844;
        case 0x1ea848u: goto label_1ea848;
        case 0x1ea84cu: goto label_1ea84c;
        case 0x1ea850u: goto label_1ea850;
        case 0x1ea854u: goto label_1ea854;
        case 0x1ea858u: goto label_1ea858;
        case 0x1ea85cu: goto label_1ea85c;
        case 0x1ea860u: goto label_1ea860;
        case 0x1ea864u: goto label_1ea864;
        case 0x1ea868u: goto label_1ea868;
        case 0x1ea86cu: goto label_1ea86c;
        case 0x1ea870u: goto label_1ea870;
        case 0x1ea874u: goto label_1ea874;
        case 0x1ea878u: goto label_1ea878;
        case 0x1ea87cu: goto label_1ea87c;
        case 0x1ea880u: goto label_1ea880;
        case 0x1ea884u: goto label_1ea884;
        case 0x1ea888u: goto label_1ea888;
        case 0x1ea88cu: goto label_1ea88c;
        case 0x1ea890u: goto label_1ea890;
        case 0x1ea894u: goto label_1ea894;
        case 0x1ea898u: goto label_1ea898;
        case 0x1ea89cu: goto label_1ea89c;
        case 0x1ea8a0u: goto label_1ea8a0;
        case 0x1ea8a4u: goto label_1ea8a4;
        case 0x1ea8a8u: goto label_1ea8a8;
        case 0x1ea8acu: goto label_1ea8ac;
        case 0x1ea8b0u: goto label_1ea8b0;
        case 0x1ea8b4u: goto label_1ea8b4;
        case 0x1ea8b8u: goto label_1ea8b8;
        case 0x1ea8bcu: goto label_1ea8bc;
        case 0x1ea8c0u: goto label_1ea8c0;
        case 0x1ea8c4u: goto label_1ea8c4;
        case 0x1ea8c8u: goto label_1ea8c8;
        case 0x1ea8ccu: goto label_1ea8cc;
        case 0x1ea8d0u: goto label_1ea8d0;
        case 0x1ea8d4u: goto label_1ea8d4;
        case 0x1ea8d8u: goto label_1ea8d8;
        case 0x1ea8dcu: goto label_1ea8dc;
        case 0x1ea8e0u: goto label_1ea8e0;
        case 0x1ea8e4u: goto label_1ea8e4;
        case 0x1ea8e8u: goto label_1ea8e8;
        case 0x1ea8ecu: goto label_1ea8ec;
        case 0x1ea8f0u: goto label_1ea8f0;
        case 0x1ea8f4u: goto label_1ea8f4;
        case 0x1ea8f8u: goto label_1ea8f8;
        case 0x1ea8fcu: goto label_1ea8fc;
        case 0x1ea900u: goto label_1ea900;
        case 0x1ea904u: goto label_1ea904;
        default: break;
    }

    ctx->pc = 0x1ea7e8u;

label_1ea7e8:
    // 0x1ea7e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ea7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ea7ec:
    // 0x1ea7ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ea7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1ea7f0:
    // 0x1ea7f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ea7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ea7f4:
    // 0x1ea7f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ea7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ea7f8:
    // 0x1ea7f8: 0xc06a38c  jal         func_1A8E30
label_1ea7fc:
    if (ctx->pc == 0x1EA7FCu) {
        ctx->pc = 0x1EA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7F8u;
        // 0x1ea7fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA800u;
        goto label_1ea800;
    }
    ctx->pc = 0x1EA7F8u;
    SET_GPR_U32(ctx, 31, 0x1EA800u);
    ctx->pc = 0x1EA7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA7F8u;
    // 0x1ea7fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1EA7F8u, 0x1EA800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA800u;
label_1ea800:
    // 0x1ea800: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x1ea800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_1ea804:
    // 0x1ea804: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ea804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1ea808:
    // 0x1ea808: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ea808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1ea80c:
    // 0x1ea80c: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1ea80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_1ea810:
    // 0x1ea810: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1ea810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1ea814:
    // 0x1ea814: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ea814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ea818:
    // 0x1ea818: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1ea818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1ea81c:
    // 0x1ea81c: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1ea81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_1ea820:
    // 0x1ea820: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ea820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1ea824:
    // 0x1ea824: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1ea824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1ea828:
    // 0x1ea828: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x1ea828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_1ea82c:
    // 0x1ea82c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1ea82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1ea830:
    // 0x1ea830: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ea830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ea834:
    // 0x1ea834: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1ea834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1ea838:
    // 0x1ea838: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ea838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ea83c:
    // 0x1ea83c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ea83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1ea840:
    // 0x1ea840: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1ea840u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1ea844:
    // 0x1ea844: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1ea844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1ea848:
    // 0x1ea848: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1ea848u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1ea84c:
    // 0x1ea84c: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x1ea84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_1ea850:
    // 0x1ea850: 0x24a56c50  addiu       $a1, $a1, 0x6C50
    ctx->pc = 0x1ea850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27728));
label_1ea854:
    // 0x1ea854: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1ea854u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1ea858:
    // 0x1ea858: 0x25086c58  addiu       $t0, $t0, 0x6C58
    ctx->pc = 0x1ea858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27736));
label_1ea85c:
    // 0x1ea85c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1ea85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1ea860:
    // 0x1ea860: 0x254a6c80  addiu       $t2, $t2, 0x6C80
    ctx->pc = 0x1ea860u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27776));
label_1ea864:
    // 0x1ea864: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1ea864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ea868:
    // 0x1ea868: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ea868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ea86c:
    // 0x1ea86c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ea86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ea870:
    // 0x1ea870: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1ea870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1ea874:
    // 0x1ea874: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ea874u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea878:
    // 0x1ea878: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ea878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ea87c:
    // 0x1ea87c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ea87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ea880:
    // 0x1ea880: 0x40f809  jalr        $v0
label_1ea884:
    if (ctx->pc == 0x1EA884u) {
        ctx->pc = 0x1EA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA880u;
        // 0x1ea884: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA888u;
        goto label_1ea888;
    }
    ctx->pc = 0x1EA880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA888u);
        ctx->pc = 0x1EA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA880u;
        // 0x1ea884: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA880u, 0x1EA888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA888u;
label_1ea888:
    // 0x1ea888: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ea888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ea88c:
    // 0x1ea88c: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x1ea88cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
label_1ea890:
    // 0x1ea890: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1ea890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1ea894:
    // 0x1ea894: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x1ea894u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_1ea898:
    // 0x1ea898: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x1ea898u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_1ea89c:
    // 0x1ea89c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1ea89cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1ea8a0:
    // 0x1ea8a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ea8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1ea8a4:
    // 0x1ea8a4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1ea8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_1ea8a8:
    // 0x1ea8a8: 0x2508ccb8  addiu       $t0, $t0, -0x3348
    ctx->pc = 0x1ea8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954168));
label_1ea8ac:
    // 0x1ea8ac: 0x24e7cce0  addiu       $a3, $a3, -0x3320
    ctx->pc = 0x1ea8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954208));
label_1ea8b0:
    // 0x1ea8b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ea8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea8b4:
    // 0x1ea8b4: 0x24a5cd10  addiu       $a1, $a1, -0x32F0
    ctx->pc = 0x1ea8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954256));
label_1ea8b8:
    // 0x1ea8b8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1ea8b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1ea8bc:
    // 0x1ea8bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea8c0:
    // 0x1ea8c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ea8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1ea8c4:
    // 0x1ea8c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ea8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea8c8:
    // 0x1ea8c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1ea8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea8cc:
    // 0x1ea8cc: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x1ea8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_1ea8d0:
    // 0x1ea8d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea8d4:
    // 0x1ea8d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ea8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea8d8:
    // 0x1ea8d8: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x1ea8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_1ea8dc:
    // 0x1ea8dc: 0xae08006c  sw          $t0, 0x6C($s0)
    ctx->pc = 0x1ea8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 8));
label_1ea8e0:
    // 0x1ea8e0: 0xae070088  sw          $a3, 0x88($s0)
    ctx->pc = 0x1ea8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 7));
label_1ea8e4:
    // 0x1ea8e4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1ea8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_1ea8e8:
    // 0x1ea8e8: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x1ea8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_1ea8ec:
    // 0x1ea8ec: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1ea8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_1ea8f0:
    // 0x1ea8f0: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1ea8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_1ea8f4:
    // 0x1ea8f4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1ea8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_1ea8f8:
    // 0x1ea8f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ea8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ea8fc:
    // 0x1ea8fc: 0x3e00008  jr          $ra
label_1ea900:
    if (ctx->pc == 0x1EA900u) {
        ctx->pc = 0x1EA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8FCu;
        // 0x1ea900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA904u;
        goto label_1ea904;
    }
    ctx->pc = 0x1EA8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8FCu;
        // 0x1ea900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA904u;
label_1ea904:
    // 0x1ea904: 0x0  nop
    ctx->pc = 0x1ea904u;
    // NOP
    ctx->pc = 0x1ea908u;
}

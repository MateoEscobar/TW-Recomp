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

// Function: sub_00299778
// Address: 0x299778 - 0x299a08
void sub_00299778_0x299778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299778_0x299778");
#endif

    switch (ctx->pc) {
        case 0x2997d8u: goto label_2997d8;
        case 0x2997f4u: goto label_2997f4;
        case 0x299854u: goto label_299854;
        case 0x299868u: goto label_299868;
        case 0x299878u: goto label_299878;
        case 0x299898u: goto label_299898;
        case 0x2998f8u: goto label_2998f8;
        case 0x299960u: goto label_299960;
        default: break;
    }

    ctx->pc = 0x299778u;

    // 0x299778: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x299778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x29977c: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x29977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x299780: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x299780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x299784: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x299784u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299788: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x299788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x29978c: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x29978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x299790: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x299790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x299794: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x299794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x299798: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x299798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x29979c: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x29979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x2997a0: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x2997a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x2997a4: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2997a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2997a8: 0x92c2008c  lbu         $v0, 0x8C($s6)
    ctx->pc = 0x2997a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x2997ac: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2997ACu;
    {
        const bool branch_taken_0x2997ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2997ACu;
        // 0x2997b0: 0x26c20068  addiu       $v0, $s6, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2997ac) {
            ctx->pc = 0x2999D8u;
            goto label_2999d8;
        }
    }
    ctx->pc = 0x2997B4u;
    // 0x2997b4: 0x26de0080  addiu       $fp, $s6, 0x80
    ctx->pc = 0x2997b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x2997b8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2997b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2997bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2997bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2997c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997c4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2997c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2997c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2997c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997cc: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x2997ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997d0: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x2997d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997d4: 0x0  nop
    ctx->pc = 0x2997d4u;
    // NOP
label_2997d8:
    // 0x2997d8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2997d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2997dc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2997DCu;
    {
        const bool branch_taken_0x2997dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2997dc) {
            ctx->pc = 0x2997ECu;
            goto label_2997ec;
        }
    }
    ctx->pc = 0x2997E4u;
    // 0x2997e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2997E4u;
    {
        const bool branch_taken_0x2997e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2997E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2997E4u;
        // 0x2997e8: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2997e4) {
            ctx->pc = 0x299824u;
            goto label_299824;
        }
    }
    ctx->pc = 0x2997ECu;
label_2997ec:
    // 0x2997ec: 0xc087502  jal         func_21D408
    ctx->pc = 0x2997ECu;
    SET_GPR_U32(ctx, 31, 0x2997F4u);
    ctx->pc = 0x2997F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997ECu;
    // 0x2997f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2997ECu, 0x2997F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2997F4u;
label_2997f4:
    // 0x2997f4: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x2997f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x2997f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2997f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2997fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2997FCu;
    {
        const bool branch_taken_0x2997fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2997fc) {
            ctx->pc = 0x299800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2997FCu;
            // 0x299800: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299814u;
            goto label_299814;
        }
    }
    ctx->pc = 0x299804u;
    // 0x299804: 0x58600003  blezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x299804u;
    {
        const bool branch_taken_0x299804 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x299804) {
            ctx->pc = 0x299808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299804u;
            // 0x299808: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299814u;
            goto label_299814;
        }
    }
    ctx->pc = 0x29980Cu;
    // 0x29980c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29980Cu;
    {
        const bool branch_taken_0x29980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29980Cu;
        // 0x299810: 0xa2370000  sb          $s7, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29980c) {
            ctx->pc = 0x299824u;
            goto label_299824;
        }
    }
    ctx->pc = 0x299814u;
label_299814:
    // 0x299814: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x299814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x299818: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x299818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x29981c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x29981cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x299820: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x299820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_299824:
    // 0x299824: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x299824u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x299828: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x299828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x29982c: 0x2ea20006  sltiu       $v0, $s5, 0x6
    ctx->pc = 0x29982cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x299830: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x299830u;
    {
        const bool branch_taken_0x299830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299830u;
        // 0x299834: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299830) {
            ctx->pc = 0x2997D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2997d8;
        }
    }
    ctx->pc = 0x299838u;
    // 0x299838: 0x8ec20088  lw          $v0, 0x88($s6)
    ctx->pc = 0x299838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x29983c: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x29983cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x299840: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x299840u;
    {
        const bool branch_taken_0x299840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299840u;
        // 0x299844: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299840) {
            ctx->pc = 0x29985Cu;
            goto label_29985c;
        }
    }
    ctx->pc = 0x299848u;
    // 0x299848: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x299848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29984c: 0xc0a6682  jal         func_299A08
    ctx->pc = 0x29984Cu;
    SET_GPR_U32(ctx, 31, 0x299854u);
    ctx->pc = 0x299850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29984Cu;
    // 0x299850: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A08u, 0x29984Cu, 0x299854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299854u;
label_299854:
    // 0x299854: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x299854u;
    {
        const bool branch_taken_0x299854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299854u;
        // 0x299858: 0x8ec30088  lw          $v1, 0x88($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299854) {
            ctx->pc = 0x29986Cu;
            goto label_29986c;
        }
    }
    ctx->pc = 0x29985Cu;
label_29985c:
    // 0x29985c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299860: 0xc0a66d4  jal         func_299B50
    ctx->pc = 0x299860u;
    SET_GPR_U32(ctx, 31, 0x299868u);
    ctx->pc = 0x299864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299860u;
    // 0x299864: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299B50u, 0x299860u, 0x299868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299868u;
label_299868:
    // 0x299868: 0x8ec30088  lw          $v1, 0x88($s6)
    ctx->pc = 0x299868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_29986c:
    // 0x29986c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29986cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299870: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x299870u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299874: 0x0  nop
    ctx->pc = 0x299874u;
    // NOP
label_299878:
    // 0x299878: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x299878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29987c: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x29987Cu;
    {
        const bool branch_taken_0x29987c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29987Cu;
        // 0x299880: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29987c) {
            ctx->pc = 0x2999BCu;
            goto label_2999bc;
        }
    }
    ctx->pc = 0x299884u;
    // 0x299884: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x299884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x299888: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x299888u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29988c: 0x246c4b00  addiu       $t4, $v1, 0x4B00
    ctx->pc = 0x29988cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x299890: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x299890u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299894: 0x0  nop
    ctx->pc = 0x299894u;
    // NOP
label_299898:
    // 0x299898: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x299898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29989c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x29989cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2998a0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2998a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2998a4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2998a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2998a8: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2998A8u;
    {
        const bool branch_taken_0x2998a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998A8u;
        // 0x2998ac: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998a8) {
            ctx->pc = 0x2999A8u;
            goto label_2999a8;
        }
    }
    ctx->pc = 0x2998B0u;
    // 0x2998b0: 0x3d51021  addu        $v0, $fp, $s5
    ctx->pc = 0x2998b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 21)));
    // 0x2998b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2998b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2998b8: 0x106d003b  beq         $v1, $t5, . + 4 + (0x3B << 2)
    ctx->pc = 0x2998B8u;
    {
        const bool branch_taken_0x2998b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x2998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998B8u;
        // 0x2998bc: 0x151100  sll         $v0, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998b8) {
            ctx->pc = 0x2999A8u;
            goto label_2999a8;
        }
    }
    ctx->pc = 0x2998C0u;
    // 0x2998c0: 0x84830092  lh          $v1, 0x92($a0)
    ctx->pc = 0x2998c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x2998c4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2998c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2998c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2998c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2998cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2998ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2998d0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2998d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2998d4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2998d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2998d8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2998d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2998dc: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x2998dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x2998e0: 0x10c00031  beqz        $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x2998E0u;
    {
        const bool branch_taken_0x2998e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2998E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998E0u;
        // 0x2998e4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998e0) {
            ctx->pc = 0x2999A8u;
            goto label_2999a8;
        }
    }
    ctx->pc = 0x2998E8u;
    // 0x2998e8: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x2998e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2998ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2998ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2998f0: 0x25694b00  addiu       $t1, $t3, 0x4B00
    ctx->pc = 0x2998f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 19200));
    // 0x2998f4: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x2998f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2998f8:
    // 0x2998f8: 0x52b10026  beql        $s5, $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2998F8u;
    {
        const bool branch_taken_0x2998f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        if (branch_taken_0x2998f8) {
            ctx->pc = 0x2998FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2998F8u;
            // 0x2998fc: 0x8ec20088  lw          $v0, 0x88($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299994u;
            goto label_299994;
        }
    }
    ctx->pc = 0x299900u;
    // 0x299900: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x299900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299904: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x299904u;
    {
        const bool branch_taken_0x299904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299904u;
        // 0x299908: 0x3d11821  addu        $v1, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299904) {
            ctx->pc = 0x299990u;
            goto label_299990;
        }
    }
    ctx->pc = 0x29990Cu;
    // 0x29990c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29990cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299910: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x299910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299914: 0x1053001e  beq         $v0, $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x299914u;
    {
        const bool branch_taken_0x299914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x299918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299914u;
        // 0x299918: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299914) {
            ctx->pc = 0x299990u;
            goto label_299990;
        }
    }
    ctx->pc = 0x29991Cu;
    // 0x29991c: 0x84820092  lh          $v0, 0x92($a0)
    ctx->pc = 0x29991cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x299920: 0x7a470000  lq          $a3, 0x0($s2)
    ctx->pc = 0x299920u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x299924: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x299924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x299928: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x299928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x29992c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x29992cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x299930: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x299930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    // 0x299934: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x299934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x299938: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x299938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29993c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29993cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299940: 0x7fa80070  sq          $t0, 0x70($sp)
    ctx->pc = 0x299940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    // 0x299944: 0x7fa90080  sq          $t1, 0x80($sp)
    ctx->pc = 0x299944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 9));
    // 0x299948: 0x7faa0090  sq          $t2, 0x90($sp)
    ctx->pc = 0x299948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 10));
    // 0x29994c: 0x7fab00a0  sq          $t3, 0xA0($sp)
    ctx->pc = 0x29994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 11));
    // 0x299950: 0x7fac00b0  sq          $t4, 0xB0($sp)
    ctx->pc = 0x299950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 12));
    // 0x299954: 0x7fad00c0  sq          $t5, 0xC0($sp)
    ctx->pc = 0x299954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 13));
    // 0x299958: 0xc0cdcc2  jal         func_337308
    ctx->pc = 0x299958u;
    SET_GPR_U32(ctx, 31, 0x299960u);
    ctx->pc = 0x29995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299958u;
    // 0x29995c: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337308u, 0x299958u, 0x299960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299960u;
label_299960:
    // 0x299960: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x299960u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x299964: 0x7ba90080  lq          $t1, 0x80($sp)
    ctx->pc = 0x299964u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x299968: 0x7baa0090  lq          $t2, 0x90($sp)
    ctx->pc = 0x299968u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29996c: 0x7bab00a0  lq          $t3, 0xA0($sp)
    ctx->pc = 0x29996cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x299970: 0x7bac00b0  lq          $t4, 0xB0($sp)
    ctx->pc = 0x299970u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x299974: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x299974u;
    {
        const bool branch_taken_0x299974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x299978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299974u;
        // 0x299978: 0x7bad00c0  lq          $t5, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299974) {
            ctx->pc = 0x299990u;
            goto label_299990;
        }
    }
    ctx->pc = 0x29997Cu;
    // 0x29997c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299980: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x299980u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299984: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x299984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x299988: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x299988u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x29998c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29998cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_299990:
    // 0x299990: 0x8ec20088  lw          $v0, 0x88($s6)
    ctx->pc = 0x299990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_299994:
    // 0x299994: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x299994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x299998: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29999c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x29999cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2999a0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2999A0u;
    {
        const bool branch_taken_0x2999a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2999A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999A0u;
        // 0x2999a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2999a0) {
            ctx->pc = 0x2998F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2998f8;
        }
    }
    ctx->pc = 0x2999A8u;
label_2999a8:
    // 0x2999a8: 0x8ec60088  lw          $a2, 0x88($s6)
    ctx->pc = 0x2999a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x2999ac: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2999acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999b0: 0x2a6102b  sltu        $v0, $s5, $a2
    ctx->pc = 0x2999b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2999b4: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x2999B4u;
    {
        const bool branch_taken_0x2999b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2999B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999B4u;
        // 0x2999b8: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2999b4) {
            ctx->pc = 0x299898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299898;
        }
    }
    ctx->pc = 0x2999BCu;
label_2999bc:
    // 0x2999bc: 0x52e00006  beql        $s7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2999BCu;
    {
        const bool branch_taken_0x2999bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2999bc) {
            ctx->pc = 0x2999C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2999BCu;
            // 0x2999c0: 0xa2c0008c  sb          $zero, 0x8C($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 140), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2999D8u;
            goto label_2999d8;
        }
    }
    ctx->pc = 0x2999C4u;
    // 0x2999c4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2999c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2999c8: 0x2d420005  sltiu       $v0, $t2, 0x5
    ctx->pc = 0x2999c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2999cc: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2999CCu;
    {
        const bool branch_taken_0x2999cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2999D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999CCu;
        // 0x2999d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2999cc) {
            ctx->pc = 0x299878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299878;
        }
    }
    ctx->pc = 0x2999D4u;
    // 0x2999d4: 0xa2c0008c  sb          $zero, 0x8C($s6)
    ctx->pc = 0x2999d4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 140), (uint8_t)GPR_U32(ctx, 0));
label_2999d8:
    // 0x2999d8: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x2999d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2999dc: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x2999dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2999e0: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x2999e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2999e4: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x2999e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2999e8: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x2999e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2999ec: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x2999ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2999f0: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x2999f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2999f4: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x2999f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2999f8: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x2999f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2999fc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2999fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x299a00: 0x3e00008  jr          $ra
    ctx->pc = 0x299A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A00u;
        // 0x299a04: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299A08u;
}

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

// Function: sub_004A4858
// Address: 0x4a4858 - 0x4a49e8
void sub_004A4858_0x4a4858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4858_0x4a4858");
#endif

    switch (ctx->pc) {
        case 0x4a4980u: goto label_4a4980;
        case 0x4a498cu: goto label_4a498c;
        case 0x4a49a0u: goto label_4a49a0;
        case 0x4a49c0u: goto label_4a49c0;
        case 0x4a49ccu: goto label_4a49cc;
        default: break;
    }

    ctx->pc = 0x4a4858u;

    // 0x4a4858: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a4858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a485c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a485cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a4860: 0x8f888a80  lw          $t0, -0x7580($gp)
    ctx->pc = 0x4a4860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4864: 0x2449ad18  addiu       $t1, $v0, -0x52E8
    ctx->pc = 0x4a4864u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4868: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a4868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a486c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4a486cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4870: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a4870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a4874: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x4a4874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x4a4878: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4a4878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x4a487c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x4A487Cu;
    {
        const bool branch_taken_0x4a487c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A487Cu;
        // 0x4a4880: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a487c) {
            ctx->pc = 0x4A49B0u;
            goto label_4a49b0;
        }
    }
    ctx->pc = 0x4A4884u;
    // 0x4a4884: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x4a4884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x4a4888: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x4a4888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4a488c: 0x2450004c  addiu       $s0, $v0, 0x4C
    ctx->pc = 0x4a488cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x4a4890: 0x2cc30005  sltiu       $v1, $a2, 0x5
    ctx->pc = 0x4a4890u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4a4894: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x4a4894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x4a4898: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4a4898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4a489c: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x4a489cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x4a48a0: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x4A48A0u;
    {
        const bool branch_taken_0x4a48a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A48A0u;
        // 0x4a48a4: 0xae07002c  sw          $a3, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a48a0) {
            ctx->pc = 0x4A496Cu;
            goto label_4a496c;
        }
    }
    ctx->pc = 0x4A48A8u;
    // 0x4a48a8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4a48ac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4a48acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4a48b0: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x4a48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x4a48b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a48b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a48b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a48bc: 0x800008  jr          $a0
    ctx->pc = 0x4A48BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A48C4u: goto label_4a48c4;
            case 0x4A48F8u: goto label_4a48f8;
            case 0x4A4910u: goto label_4a4910;
            case 0x4A4928u: goto label_4a4928;
            case 0x4A4954u: goto label_4a4954;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A48BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A48C4u;
label_4a48c4:
    // 0x4a48c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4a48c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a48c8: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a48cc: 0xe5001a  div         $zero, $a3, $a1
    ctx->pc = 0x4a48ccu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4a48d0: 0x2543ad18  addiu       $v1, $t2, -0x52E8
    ctx->pc = 0x4a48d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946072));
    // 0x4a48d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a48d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4a48d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4a48dc: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x4a48dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x4a48e0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A48E0u;
    {
        const bool branch_taken_0x4a48e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a48e0) {
            ctx->pc = 0x4A48E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A48E0u;
            // 0x4a48e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A48E8u;
            goto label_4a48e8;
        }
    }
    ctx->pc = 0x4A48E8u;
label_4a48e8:
    // 0x4a48e8: 0x3010  mfhi        $a2
    ctx->pc = 0x4a48e8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x4a48ec: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x4a48ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x4a48f0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x4A48F0u;
    {
        const bool branch_taken_0x4a48f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A48F0u;
        // 0x4a48f4: 0xae06002c  sw          $a2, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a48f0) {
            ctx->pc = 0x4A4990u;
            goto label_4a4990;
        }
    }
    ctx->pc = 0x4A48F8u;
label_4a48f8:
    // 0x4a48f8: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a48fc: 0x2543ad18  addiu       $v1, $t2, -0x52E8
    ctx->pc = 0x4a48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946072));
    // 0x4a4900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a4904: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4a4904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a4908: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4A4908u;
    {
        const bool branch_taken_0x4a4908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4908u;
        // 0x4a490c: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4908) {
            ctx->pc = 0x4A4990u;
            goto label_4a4990;
        }
    }
    ctx->pc = 0x4A4910u;
label_4a4910:
    // 0x4a4910: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a4910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4914: 0x2543ad18  addiu       $v1, $t2, -0x52E8
    ctx->pc = 0x4a4914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946072));
    // 0x4a4918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a491c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4a491cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4a4920: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4A4920u;
    {
        const bool branch_taken_0x4a4920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4920u;
        // 0x4a4924: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4920) {
            ctx->pc = 0x4A4990u;
            goto label_4a4990;
        }
    }
    ctx->pc = 0x4A4928u;
label_4a4928:
    // 0x4a4928: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a4928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a492c: 0x2544ad18  addiu       $a0, $t2, -0x52E8
    ctx->pc = 0x4a492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946072));
    // 0x4a4930: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x4a4930u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x4a4934: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a4934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a4938: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4a4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4a493c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x4a493cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4a4940: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a4940u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a4944: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a4944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a4948: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x4a4948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x4a494c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4A494Cu;
    {
        const bool branch_taken_0x4a494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A494Cu;
        // 0x4a4950: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a494c) {
            ctx->pc = 0x4A4990u;
            goto label_4a4990;
        }
    }
    ctx->pc = 0x4A4954u;
label_4a4954:
    // 0x4a4954: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a4954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4958: 0x2543ad18  addiu       $v1, $t2, -0x52E8
    ctx->pc = 0x4a4958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946072));
    // 0x4a495c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a4960: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x4a4960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4a4964: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4A4964u;
    {
        const bool branch_taken_0x4a4964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4964u;
        // 0x4a4968: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4964) {
            ctx->pc = 0x4A4990u;
            goto label_4a4990;
        }
    }
    ctx->pc = 0x4A496Cu;
label_4a496c:
    // 0x4a496c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a4970: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4a4970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4974: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x4a4974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4a4978: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A4978u;
    SET_GPR_U32(ctx, 31, 0x4A4980u);
    ctx->pc = 0x4A497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4978u;
    // 0x4a497c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A4978u, 0x4A4980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4980u;
label_4a4980:
    // 0x4a4980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a4980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4984: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A4984u;
    SET_GPR_U32(ctx, 31, 0x4A498Cu);
    ctx->pc = 0x4A4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4984u;
    // 0x4a4988: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A4984u, 0x4A498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A498Cu;
label_4a498c:
    // 0x4a498c: 0x0  nop
    ctx->pc = 0x4a498cu;
    // NOP
label_4a4990:
    // 0x4a4990: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x4a4990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4a4994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a4994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4998: 0xc129622  jal         func_4A5888
    ctx->pc = 0x4A4998u;
    SET_GPR_U32(ctx, 31, 0x4A49A0u);
    ctx->pc = 0x4A499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4998u;
    // 0x4a499c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5888u, 0x4A4998u, 0x4A49A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A49A0u;
label_4a49a0:
    // 0x4a49a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A49A0u;
    {
        const bool branch_taken_0x4a49a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A49A0u;
        // 0x4a49a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a49a0) {
            ctx->pc = 0x4A49D0u;
            goto label_4a49d0;
        }
    }
    ctx->pc = 0x4A49A8u;
    // 0x4a49a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A49A8u;
    {
        const bool branch_taken_0x4a49a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A49A8u;
        // 0x4a49ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a49a8) {
            ctx->pc = 0x4A49D8u;
            goto label_4a49d8;
        }
    }
    ctx->pc = 0x4A49B0u;
label_4a49b0:
    // 0x4a49b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a49b4: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x4a49b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x4a49b8: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A49B8u;
    SET_GPR_U32(ctx, 31, 0x4A49C0u);
    ctx->pc = 0x4A49BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A49B8u;
    // 0x4a49bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A49B8u, 0x4A49C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A49C0u;
label_4a49c0:
    // 0x4a49c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a49c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a49c4: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A49C4u;
    SET_GPR_U32(ctx, 31, 0x4A49CCu);
    ctx->pc = 0x4A49C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A49C4u;
    // 0x4a49c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A49C4u, 0x4A49CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A49CCu;
label_4a49cc:
    // 0x4a49cc: 0x0  nop
    ctx->pc = 0x4a49ccu;
    // NOP
label_4a49d0:
    // 0x4a49d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a49d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a49d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a49d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a49d8:
    // 0x4a49d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a49d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a49dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A49DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A49DCu;
        // 0x4a49e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A49DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A49E4u;
    // 0x4a49e4: 0x0  nop
    ctx->pc = 0x4a49e4u;
    // NOP
    ctx->pc = 0x4a49e8u;
}

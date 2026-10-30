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

// Function: sub_004C4898
// Address: 0x4c4898 - 0x4c4a78
void sub_004C4898_0x4c4898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4898_0x4c4898");
#endif

    switch (ctx->pc) {
        case 0x4c4898u: goto label_4c4898;
        case 0x4c489cu: goto label_4c489c;
        case 0x4c48a0u: goto label_4c48a0;
        case 0x4c48a4u: goto label_4c48a4;
        case 0x4c48a8u: goto label_4c48a8;
        case 0x4c48acu: goto label_4c48ac;
        case 0x4c48b0u: goto label_4c48b0;
        case 0x4c48b4u: goto label_4c48b4;
        case 0x4c48b8u: goto label_4c48b8;
        case 0x4c48bcu: goto label_4c48bc;
        case 0x4c48c0u: goto label_4c48c0;
        case 0x4c48c4u: goto label_4c48c4;
        case 0x4c48c8u: goto label_4c48c8;
        case 0x4c48ccu: goto label_4c48cc;
        case 0x4c48d0u: goto label_4c48d0;
        case 0x4c48d4u: goto label_4c48d4;
        case 0x4c48d8u: goto label_4c48d8;
        case 0x4c48dcu: goto label_4c48dc;
        case 0x4c48e0u: goto label_4c48e0;
        case 0x4c48e4u: goto label_4c48e4;
        case 0x4c48e8u: goto label_4c48e8;
        case 0x4c48ecu: goto label_4c48ec;
        case 0x4c48f0u: goto label_4c48f0;
        case 0x4c48f4u: goto label_4c48f4;
        case 0x4c48f8u: goto label_4c48f8;
        case 0x4c48fcu: goto label_4c48fc;
        case 0x4c4900u: goto label_4c4900;
        case 0x4c4904u: goto label_4c4904;
        case 0x4c4908u: goto label_4c4908;
        case 0x4c490cu: goto label_4c490c;
        case 0x4c4910u: goto label_4c4910;
        case 0x4c4914u: goto label_4c4914;
        case 0x4c4918u: goto label_4c4918;
        case 0x4c491cu: goto label_4c491c;
        case 0x4c4920u: goto label_4c4920;
        case 0x4c4924u: goto label_4c4924;
        case 0x4c4928u: goto label_4c4928;
        case 0x4c492cu: goto label_4c492c;
        case 0x4c4930u: goto label_4c4930;
        case 0x4c4934u: goto label_4c4934;
        case 0x4c4938u: goto label_4c4938;
        case 0x4c493cu: goto label_4c493c;
        case 0x4c4940u: goto label_4c4940;
        case 0x4c4944u: goto label_4c4944;
        case 0x4c4948u: goto label_4c4948;
        case 0x4c494cu: goto label_4c494c;
        case 0x4c4950u: goto label_4c4950;
        case 0x4c4954u: goto label_4c4954;
        case 0x4c4958u: goto label_4c4958;
        case 0x4c495cu: goto label_4c495c;
        case 0x4c4960u: goto label_4c4960;
        case 0x4c4964u: goto label_4c4964;
        case 0x4c4968u: goto label_4c4968;
        case 0x4c496cu: goto label_4c496c;
        case 0x4c4970u: goto label_4c4970;
        case 0x4c4974u: goto label_4c4974;
        case 0x4c4978u: goto label_4c4978;
        case 0x4c497cu: goto label_4c497c;
        case 0x4c4980u: goto label_4c4980;
        case 0x4c4984u: goto label_4c4984;
        case 0x4c4988u: goto label_4c4988;
        case 0x4c498cu: goto label_4c498c;
        case 0x4c4990u: goto label_4c4990;
        case 0x4c4994u: goto label_4c4994;
        case 0x4c4998u: goto label_4c4998;
        case 0x4c499cu: goto label_4c499c;
        case 0x4c49a0u: goto label_4c49a0;
        case 0x4c49a4u: goto label_4c49a4;
        case 0x4c49a8u: goto label_4c49a8;
        case 0x4c49acu: goto label_4c49ac;
        case 0x4c49b0u: goto label_4c49b0;
        case 0x4c49b4u: goto label_4c49b4;
        case 0x4c49b8u: goto label_4c49b8;
        case 0x4c49bcu: goto label_4c49bc;
        case 0x4c49c0u: goto label_4c49c0;
        case 0x4c49c4u: goto label_4c49c4;
        case 0x4c49c8u: goto label_4c49c8;
        case 0x4c49ccu: goto label_4c49cc;
        case 0x4c49d0u: goto label_4c49d0;
        case 0x4c49d4u: goto label_4c49d4;
        case 0x4c49d8u: goto label_4c49d8;
        case 0x4c49dcu: goto label_4c49dc;
        case 0x4c49e0u: goto label_4c49e0;
        case 0x4c49e4u: goto label_4c49e4;
        case 0x4c49e8u: goto label_4c49e8;
        case 0x4c49ecu: goto label_4c49ec;
        case 0x4c49f0u: goto label_4c49f0;
        case 0x4c49f4u: goto label_4c49f4;
        case 0x4c49f8u: goto label_4c49f8;
        case 0x4c49fcu: goto label_4c49fc;
        case 0x4c4a00u: goto label_4c4a00;
        case 0x4c4a04u: goto label_4c4a04;
        case 0x4c4a08u: goto label_4c4a08;
        case 0x4c4a0cu: goto label_4c4a0c;
        case 0x4c4a10u: goto label_4c4a10;
        case 0x4c4a14u: goto label_4c4a14;
        case 0x4c4a18u: goto label_4c4a18;
        case 0x4c4a1cu: goto label_4c4a1c;
        case 0x4c4a20u: goto label_4c4a20;
        case 0x4c4a24u: goto label_4c4a24;
        case 0x4c4a28u: goto label_4c4a28;
        case 0x4c4a2cu: goto label_4c4a2c;
        case 0x4c4a30u: goto label_4c4a30;
        case 0x4c4a34u: goto label_4c4a34;
        case 0x4c4a38u: goto label_4c4a38;
        case 0x4c4a3cu: goto label_4c4a3c;
        case 0x4c4a40u: goto label_4c4a40;
        case 0x4c4a44u: goto label_4c4a44;
        case 0x4c4a48u: goto label_4c4a48;
        case 0x4c4a4cu: goto label_4c4a4c;
        case 0x4c4a50u: goto label_4c4a50;
        case 0x4c4a54u: goto label_4c4a54;
        case 0x4c4a58u: goto label_4c4a58;
        case 0x4c4a5cu: goto label_4c4a5c;
        case 0x4c4a60u: goto label_4c4a60;
        case 0x4c4a64u: goto label_4c4a64;
        case 0x4c4a68u: goto label_4c4a68;
        case 0x4c4a6cu: goto label_4c4a6c;
        case 0x4c4a70u: goto label_4c4a70;
        case 0x4c4a74u: goto label_4c4a74;
        default: break;
    }

    ctx->pc = 0x4c4898u;

label_4c4898:
    // 0x4c4898: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c4898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4c489c:
    // 0x4c489c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4c48a0:
    // 0x4c48a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c48a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4c48a4:
    // 0x4c48a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4c48a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c48a8:
    // 0x4c48a8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c48a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4c48ac:
    // 0x4c48ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4c48acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c48b0:
    // 0x4c48b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c48b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4c48b4:
    // 0x4c48b4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4c48b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c48b8:
    // 0x4c48b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c48b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4c48bc:
    // 0x4c48bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c48bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4c48c0:
    // 0x4c48c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c48c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4c48c4:
    // 0x4c48c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c48c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4c48c8:
    // 0x4c48c8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4c48c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4c48cc:
    // 0x4c48cc: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
label_4c48d0:
    if (ctx->pc == 0x4C48D0u) {
        ctx->pc = 0x4C48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C48CCu;
        // 0x4c48d0: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C48D4u;
        goto label_4c48d4;
    }
    ctx->pc = 0x4C48CCu;
    {
        const bool branch_taken_0x4c48cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C48CCu;
        // 0x4c48d0: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c48cc) {
            ctx->pc = 0x4C4A34u;
            goto label_4c4a34;
        }
    }
    ctx->pc = 0x4C48D4u;
label_4c48d4:
    // 0x4c48d4: 0x8e420300  lw          $v0, 0x300($s2)
    ctx->pc = 0x4c48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 768)));
label_4c48d8:
    // 0x4c48d8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4c48d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c48dc:
    // 0x4c48dc: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_4c48e0:
    if (ctx->pc == 0x4C48E0u) {
        ctx->pc = 0x4C48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C48DCu;
        // 0x4c48e0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C48E4u;
        goto label_4c48e4;
    }
    ctx->pc = 0x4C48DCu;
    {
        const bool branch_taken_0x4c48dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C48DCu;
        // 0x4c48e0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c48dc) {
            ctx->pc = 0x4C4A20u;
            goto label_4c4a20;
        }
    }
    ctx->pc = 0x4C48E4u;
label_4c48e4:
    // 0x4c48e4: 0x3c1e0053  lui         $fp, 0x53
    ctx->pc = 0x4c48e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)83 << 16));
label_4c48e8:
    // 0x4c48e8: 0x2403017c  addiu       $v1, $zero, 0x17C
    ctx->pc = 0x4c48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_4c48ec:
    // 0x4c48ec: 0x0  nop
    ctx->pc = 0x4c48ecu;
    // NOP
label_4c48f0:
    // 0x4c48f0: 0x8e420308  lw          $v0, 0x308($s2)
    ctx->pc = 0x4c48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
label_4c48f4:
    // 0x4c48f4: 0x2838018  mult        $s0, $s4, $v1
    ctx->pc = 0x4c48f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_4c48f8:
    // 0x4c48f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4c48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4c48fc:
    // 0x4c48fc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x4c48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4c4900:
    // 0x4c4900: 0x50600043  beql        $v1, $zero, . + 4 + (0x43 << 2)
label_4c4904:
    if (ctx->pc == 0x4C4904u) {
        ctx->pc = 0x4C4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4900u;
        // 0x4c4904: 0x8e420300  lw          $v0, 0x300($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4908u;
        goto label_4c4908;
    }
    ctx->pc = 0x4C4900u;
    {
        const bool branch_taken_0x4c4900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4900) {
            ctx->pc = 0x4C4904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4900u;
            // 0x4c4904: 0x8e420300  lw          $v0, 0x300($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4A10u;
            goto label_4c4a10;
        }
    }
    ctx->pc = 0x4C4908u;
label_4c4908:
    // 0x4c4908: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
label_4c490c:
    if (ctx->pc == 0x4C490Cu) {
        ctx->pc = 0x4C490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4908u;
        // 0x4c490c: 0x8e440308  lw          $a0, 0x308($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4910u;
        goto label_4c4910;
    }
    ctx->pc = 0x4C4908u;
    {
        const bool branch_taken_0x4c4908 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c4908) {
            ctx->pc = 0x4C490Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4908u;
            // 0x4c490c: 0x8e440308  lw          $a0, 0x308($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4924u;
            goto label_4c4924;
        }
    }
    ctx->pc = 0x4C4910u;
label_4c4910:
    // 0x4c4910: 0x8fc42790  lw          $a0, 0x2790($fp)
    ctx->pc = 0x4c4910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10128)));
label_4c4914:
    // 0x4c4914: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x4c4914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c4918:
    // 0x4c4918: 0xc132382  jal         func_4C8E08
label_4c491c:
    if (ctx->pc == 0x4C491Cu) {
        ctx->pc = 0x4C491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4918u;
        // 0x4c491c: 0x26450358  addiu       $a1, $s2, 0x358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4920u;
        goto label_4c4920;
    }
    ctx->pc = 0x4C4918u;
    SET_GPR_U32(ctx, 31, 0x4C4920u);
    ctx->pc = 0x4C491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4918u;
    // 0x4c491c: 0x26450358  addiu       $a1, $s2, 0x358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E08u, 0x4C4918u, 0x4C4920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4920u;
label_4c4920:
    // 0x4c4920: 0x8e440308  lw          $a0, 0x308($s2)
    ctx->pc = 0x4c4920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
label_4c4924:
    // 0x4c4924: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x4c4924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_4c4928:
    // 0x4c4928: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4c4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_4c492c:
    // 0x4c492c: 0x40f809  jalr        $v0
label_4c4930:
    if (ctx->pc == 0x4C4930u) {
        ctx->pc = 0x4C4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C492Cu;
        // 0x4c4930: 0x17282b  sltu        $a1, $zero, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4934u;
        goto label_4c4934;
    }
    ctx->pc = 0x4C492Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C4934u);
        ctx->pc = 0x4C4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C492Cu;
        // 0x4c4930: 0x17282b  sltu        $a1, $zero, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C492Cu, 0x4C4934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C4934u;
label_4c4934:
    // 0x4c4934: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4c4934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c4938:
    // 0x4c4938: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c4938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c493c:
    // 0x4c493c: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_4c4940:
    if (ctx->pc == 0x4C4940u) {
        ctx->pc = 0x4C4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C493Cu;
        // 0x4c4940: 0xa3b00b  movn        $s6, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4944u;
        goto label_4c4944;
    }
    ctx->pc = 0x4C493Cu;
    {
        const bool branch_taken_0x4c493c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C493Cu;
        // 0x4c4940: 0xa3b00b  movn        $s6, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c493c) {
            ctx->pc = 0x4C49F0u;
            goto label_4c49f0;
        }
    }
    ctx->pc = 0x4C4944u;
label_4c4944:
    // 0x4c4944: 0x8e4202a0  lw          $v0, 0x2A0($s2)
    ctx->pc = 0x4c4944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 672)));
label_4c4948:
    // 0x4c4948: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_4c494c:
    if (ctx->pc == 0x4C494Cu) {
        ctx->pc = 0x4C494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4948u;
        // 0x4c494c: 0x8e420300  lw          $v0, 0x300($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4950u;
        goto label_4c4950;
    }
    ctx->pc = 0x4C4948u;
    {
        const bool branch_taken_0x4c4948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4948) {
            ctx->pc = 0x4C494Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4948u;
            // 0x4c494c: 0x8e420300  lw          $v0, 0x300($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4A10u;
            goto label_4c4a10;
        }
    }
    ctx->pc = 0x4C4950u;
label_4c4950:
    // 0x4c4950: 0x8e420308  lw          $v0, 0x308($s2)
    ctx->pc = 0x4c4950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
label_4c4954:
    // 0x4c4954: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x4c4954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4c4958:
    // 0x4c4958: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x4c4958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_4c495c:
    // 0x4c495c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x4c495cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_4c4960:
    // 0x4c4960: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4c4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4c4964:
    // 0x4c4964: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x4c4964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
label_4c4968:
    // 0x4c4968: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
label_4c496c:
    if (ctx->pc == 0x4C496Cu) {
        ctx->pc = 0x4C496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4968u;
        // 0x4c496c: 0xae240038  sw          $a0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4970u;
        goto label_4c4970;
    }
    ctx->pc = 0x4C4968u;
    {
        const bool branch_taken_0x4c4968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4C496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4968u;
        // 0x4c496c: 0xae240038  sw          $a0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4968) {
            ctx->pc = 0x4C497Cu;
            goto label_4c497c;
        }
    }
    ctx->pc = 0x4C4970u;
label_4c4970:
    // 0x4c4970: 0x8e4202ec  lw          $v0, 0x2EC($s2)
    ctx->pc = 0x4c4970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 748)));
label_4c4974:
    // 0x4c4974: 0x54450025  bnel        $v0, $a1, . + 4 + (0x25 << 2)
label_4c4978:
    if (ctx->pc == 0x4C4978u) {
        ctx->pc = 0x4C4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4974u;
        // 0x4c4978: 0xae4002a0  sw          $zero, 0x2A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C497Cu;
        goto label_4c497c;
    }
    ctx->pc = 0x4C4974u;
    {
        const bool branch_taken_0x4c4974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4c4974) {
            ctx->pc = 0x4C4978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4974u;
            // 0x4c4978: 0xae4002a0  sw          $zero, 0x2A0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4A0Cu;
            goto label_4c4a0c;
        }
    }
    ctx->pc = 0x4C497Cu;
label_4c497c:
    // 0x4c497c: 0x8e33004c  lw          $s3, 0x4C($s1)
    ctx->pc = 0x4c497cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_4c4980:
    // 0x4c4980: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x4c4980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4c4984:
    // 0x4c4984: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_4c4988:
    if (ctx->pc == 0x4C4988u) {
        ctx->pc = 0x4C4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4984u;
        // 0x4c4988: 0x931823  subu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C498Cu;
        goto label_4c498c;
    }
    ctx->pc = 0x4C4984u;
    {
        const bool branch_taken_0x4c4984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4984u;
        // 0x4c4988: 0x931823  subu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4984) {
            ctx->pc = 0x4C49E8u;
            goto label_4c49e8;
        }
    }
    ctx->pc = 0x4C498Cu;
label_4c498c:
    // 0x4c498c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x4c498cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c4990:
    // 0x4c4990: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4c4994:
    if (ctx->pc == 0x4C4994u) {
        ctx->pc = 0x4C4994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4990u;
        // 0x4c4994: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4998u;
        goto label_4c4998;
    }
    ctx->pc = 0x4C4990u;
    {
        const bool branch_taken_0x4c4990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4990u;
        // 0x4c4994: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4990) {
            ctx->pc = 0x4C49CCu;
            goto label_4c49cc;
        }
    }
    ctx->pc = 0x4C4998u;
label_4c4998:
    // 0x4c4998: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x4c4998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_4c499c:
    // 0x4c499c: 0x838023  subu        $s0, $a0, $v1
    ctx->pc = 0x4c499cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4c49a0:
    // 0x4c49a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c49a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c49a4:
    // 0x4c49a4: 0x2703023  subu        $a2, $s3, $s0
    ctx->pc = 0x4c49a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_4c49a8:
    // 0x4c49a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4c49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c49ac:
    // 0x4c49ac: 0xc13372a  jal         func_4CDCA8
label_4c49b0:
    if (ctx->pc == 0x4C49B0u) {
        ctx->pc = 0x4C49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C49ACu;
        // 0x4c49b0: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C49B4u;
        goto label_4c49b4;
    }
    ctx->pc = 0x4C49ACu;
    SET_GPR_U32(ctx, 31, 0x4C49B4u);
    ctx->pc = 0x4C49B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C49ACu;
    // 0x4c49b0: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C49ACu, 0x4C49B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C49B4u;
label_4c49b4:
    // 0x4c49b4: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x4c49b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_4c49b8:
    // 0x4c49b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c49b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c49bc:
    // 0x4c49bc: 0xc13372a  jal         func_4CDCA8
label_4c49c0:
    if (ctx->pc == 0x4C49C0u) {
        ctx->pc = 0x4C49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C49BCu;
        // 0x4c49c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C49C4u;
        goto label_4c49c4;
    }
    ctx->pc = 0x4C49BCu;
    SET_GPR_U32(ctx, 31, 0x4C49C4u);
    ctx->pc = 0x4C49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C49BCu;
    // 0x4c49c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C49BCu, 0x4C49C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C49C4u;
label_4c49c4:
    // 0x4c49c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c49c8:
    if (ctx->pc == 0x4C49C8u) {
        ctx->pc = 0x4C49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C49C4u;
        // 0x4c49c8: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C49CCu;
        goto label_4c49cc;
    }
    ctx->pc = 0x4C49C4u;
    {
        const bool branch_taken_0x4c49c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C49C4u;
        // 0x4c49c8: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c49c4) {
            ctx->pc = 0x4C49E0u;
            goto label_4c49e0;
        }
    }
    ctx->pc = 0x4C49CCu;
label_4c49cc:
    // 0x4c49cc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4c49ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c49d0:
    // 0x4c49d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c49d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c49d4:
    // 0x4c49d4: 0xc13372a  jal         func_4CDCA8
label_4c49d8:
    if (ctx->pc == 0x4C49D8u) {
        ctx->pc = 0x4C49D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C49D4u;
        // 0x4c49d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C49DCu;
        goto label_4c49dc;
    }
    ctx->pc = 0x4C49D4u;
    SET_GPR_U32(ctx, 31, 0x4C49DCu);
    ctx->pc = 0x4C49D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C49D4u;
    // 0x4c49d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C49D4u, 0x4C49DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C49DCu;
label_4c49dc:
    // 0x4c49dc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x4c49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_4c49e0:
    // 0x4c49e0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4c49e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4c49e4:
    // 0x4c49e4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x4c49e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_4c49e8:
    // 0x4c49e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_4c49ec:
    if (ctx->pc == 0x4C49ECu) {
        ctx->pc = 0x4C49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C49E8u;
        // 0x4c49ec: 0xae4002a0  sw          $zero, 0x2A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C49F0u;
        goto label_4c49f0;
    }
    ctx->pc = 0x4C49E8u;
    {
        const bool branch_taken_0x4c49e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C49E8u;
        // 0x4c49ec: 0xae4002a0  sw          $zero, 0x2A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c49e8) {
            ctx->pc = 0x4C4A0Cu;
            goto label_4c4a0c;
        }
    }
    ctx->pc = 0x4C49F0u;
label_4c49f0:
    // 0x4c49f0: 0x8e4202a0  lw          $v0, 0x2A0($s2)
    ctx->pc = 0x4c49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 672)));
label_4c49f4:
    // 0x4c49f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_4c49f8:
    if (ctx->pc == 0x4C49F8u) {
        ctx->pc = 0x4C49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C49F4u;
        // 0x4c49f8: 0x8e420300  lw          $v0, 0x300($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C49FCu;
        goto label_4c49fc;
    }
    ctx->pc = 0x4C49F4u;
    {
        const bool branch_taken_0x4c49f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c49f4) {
            ctx->pc = 0x4C49F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C49F4u;
            // 0x4c49f8: 0x8e420300  lw          $v0, 0x300($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4A10u;
            goto label_4c4a10;
        }
    }
    ctx->pc = 0x4C49FCu;
label_4c49fc:
    // 0x4c49fc: 0xae4502a0  sw          $a1, 0x2A0($s2)
    ctx->pc = 0x4c49fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 5));
label_4c4a00:
    // 0x4c4a00: 0xae400280  sw          $zero, 0x280($s2)
    ctx->pc = 0x4c4a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 640), GPR_U32(ctx, 0));
label_4c4a04:
    // 0x4c4a04: 0xae400340  sw          $zero, 0x340($s2)
    ctx->pc = 0x4c4a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 832), GPR_U32(ctx, 0));
label_4c4a08:
    // 0x4c4a08: 0xae400348  sw          $zero, 0x348($s2)
    ctx->pc = 0x4c4a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 840), GPR_U32(ctx, 0));
label_4c4a0c:
    // 0x4c4a0c: 0x8e420300  lw          $v0, 0x300($s2)
    ctx->pc = 0x4c4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 768)));
label_4c4a10:
    // 0x4c4a10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4c4a10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4c4a14:
    // 0x4c4a14: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x4c4a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c4a18:
    // 0x4c4a18: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_4c4a1c:
    if (ctx->pc == 0x4C4A1Cu) {
        ctx->pc = 0x4C4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4A18u;
        // 0x4c4a1c: 0x2403017c  addiu       $v1, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4A20u;
        goto label_4c4a20;
    }
    ctx->pc = 0x4C4A18u;
    {
        const bool branch_taken_0x4c4a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4A18u;
        // 0x4c4a1c: 0x2403017c  addiu       $v1, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4a18) {
            ctx->pc = 0x4C48F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c48f0;
        }
    }
    ctx->pc = 0x4C4A20u;
label_4c4a20:
    // 0x4c4a20: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_4c4a24:
    if (ctx->pc == 0x4C4A24u) {
        ctx->pc = 0x4C4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4A20u;
        // 0x4c4a24: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4A28u;
        goto label_4c4a28;
    }
    ctx->pc = 0x4C4A20u;
    {
        const bool branch_taken_0x4c4a20 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4A20u;
        // 0x4c4a24: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4a20) {
            ctx->pc = 0x4C4A34u;
            goto label_4c4a34;
        }
    }
    ctx->pc = 0x4C4A28u;
label_4c4a28:
    // 0x4c4a28: 0x26450358  addiu       $a1, $s2, 0x358
    ctx->pc = 0x4c4a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 856));
label_4c4a2c:
    // 0x4c4a2c: 0xc132386  jal         func_4C8E18
label_4c4a30:
    if (ctx->pc == 0x4C4A30u) {
        ctx->pc = 0x4C4A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4A2Cu;
        // 0x4c4a30: 0x8c442790  lw          $a0, 0x2790($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4A34u;
        goto label_4c4a34;
    }
    ctx->pc = 0x4C4A2Cu;
    SET_GPR_U32(ctx, 31, 0x4C4A34u);
    ctx->pc = 0x4C4A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4A2Cu;
    // 0x4c4a30: 0x8c442790  lw          $a0, 0x2790($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E18u, 0x4C4A2Cu, 0x4C4A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4A34u;
label_4c4a34:
    // 0x4c4a34: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x4c4a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c4a38:
    // 0x4c4a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c4a3c:
    // 0x4c4a3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4c4a40:
    // 0x4c4a40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c4a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c4a44:
    // 0x4c4a44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c4a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4c4a48:
    // 0x4c4a48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c4a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c4a4c:
    // 0x4c4a4c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c4a4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4c4a50:
    // 0x4c4a50: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c4a50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4c4a54:
    // 0x4c4a54: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c4a54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4c4a58:
    // 0x4c4a58: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c4a58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c4a5c:
    // 0x4c4a5c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c4a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4c4a60:
    // 0x4c4a60: 0x3e00008  jr          $ra
label_4c4a64:
    if (ctx->pc == 0x4C4A64u) {
        ctx->pc = 0x4C4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4A60u;
        // 0x4c4a64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4A68u;
        goto label_4c4a68;
    }
    ctx->pc = 0x4C4A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4A60u;
        // 0x4c4a64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4A68u;
label_4c4a68:
    // 0x4c4a68: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x4c4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_4c4a6c:
    // 0x4c4a6c: 0x0  nop
    ctx->pc = 0x4c4a6cu;
    // NOP
label_4c4a70:
    // 0x4c4a70: 0x0  nop
    ctx->pc = 0x4c4a70u;
    // NOP
label_4c4a74:
    // 0x4c4a74: 0x0  nop
    ctx->pc = 0x4c4a74u;
    // NOP
    ctx->pc = 0x4c4a78u;
}

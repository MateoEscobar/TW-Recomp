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

// Function: sub_001DAD88
// Address: 0x1dad88 - 0x1db248
void sub_001DAD88_0x1dad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAD88_0x1dad88");
#endif

    switch (ctx->pc) {
        case 0x1dae08u: goto label_1dae08;
        case 0x1dae38u: goto label_1dae38;
        case 0x1dae4cu: goto label_1dae4c;
        case 0x1dae6cu: goto label_1dae6c;
        case 0x1dae74u: goto label_1dae74;
        case 0x1dae80u: goto label_1dae80;
        case 0x1daeacu: goto label_1daeac;
        case 0x1daec4u: goto label_1daec4;
        case 0x1daef0u: goto label_1daef0;
        case 0x1daf24u: goto label_1daf24;
        case 0x1daf34u: goto label_1daf34;
        case 0x1daf58u: goto label_1daf58;
        case 0x1daf60u: goto label_1daf60;
        case 0x1daf6cu: goto label_1daf6c;
        case 0x1daf78u: goto label_1daf78;
        case 0x1daf84u: goto label_1daf84;
        case 0x1daf90u: goto label_1daf90;
        case 0x1dafa0u: goto label_1dafa0;
        case 0x1db008u: goto label_1db008;
        case 0x1db024u: goto label_1db024;
        case 0x1db054u: goto label_1db054;
        case 0x1db064u: goto label_1db064;
        case 0x1db088u: goto label_1db088;
        case 0x1db090u: goto label_1db090;
        case 0x1db09cu: goto label_1db09c;
        case 0x1db0a4u: goto label_1db0a4;
        case 0x1db0b0u: goto label_1db0b0;
        case 0x1db0bcu: goto label_1db0bc;
        case 0x1db0f0u: goto label_1db0f0;
        case 0x1db104u: goto label_1db104;
        case 0x1db124u: goto label_1db124;
        case 0x1db12cu: goto label_1db12c;
        case 0x1db138u: goto label_1db138;
        case 0x1db140u: goto label_1db140;
        case 0x1db14cu: goto label_1db14c;
        case 0x1db158u: goto label_1db158;
        case 0x1db174u: goto label_1db174;
        case 0x1db180u: goto label_1db180;
        case 0x1db194u: goto label_1db194;
        case 0x1db1b0u: goto label_1db1b0;
        case 0x1db1bcu: goto label_1db1bc;
        case 0x1db1e0u: goto label_1db1e0;
        case 0x1db214u: goto label_1db214;
        case 0x1db224u: goto label_1db224;
        default: break;
    }

    ctx->pc = 0x1dad88u;

    // 0x1dad88: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1dad88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x1dad8c: 0x7fb00270  sq          $s0, 0x270($sp)
    ctx->pc = 0x1dad8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 16));
    // 0x1dad90: 0x7fb10260  sq          $s1, 0x260($sp)
    ctx->pc = 0x1dad90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 17));
    // 0x1dad94: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1dad94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dad98: 0x7fb20250  sq          $s2, 0x250($sp)
    ctx->pc = 0x1dad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 18));
    // 0x1dad9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dad9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dada0: 0x7fb30240  sq          $s3, 0x240($sp)
    ctx->pc = 0x1dada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 19));
    // 0x1dada4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1dada4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dada8: 0x7fb40230  sq          $s4, 0x230($sp)
    ctx->pc = 0x1dada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 20));
    // 0x1dadac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1dadacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadb0: 0x7fb50220  sq          $s5, 0x220($sp)
    ctx->pc = 0x1dadb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 21));
    // 0x1dadb4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1dadb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadb8: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x1dadb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x1dadbc: 0x10d00094  beq         $a2, $s0, . + 4 + (0x94 << 2)
    ctx->pc = 0x1DADBCu;
    {
        const bool branch_taken_0x1dadbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        ctx->pc = 0x1DADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADBCu;
        // 0x1dadc0: 0xa3a00010  sb          $zero, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dadbc) {
            ctx->pc = 0x1DB010u;
            goto label_1db010;
        }
    }
    ctx->pc = 0x1DADC4u;
    // 0x1dadc4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1dadc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dadc8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DADC8u;
    {
        const bool branch_taken_0x1dadc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dadc8) {
            ctx->pc = 0x1DADCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DADC8u;
            // 0x1dadcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DADE0u;
            goto label_1dade0;
        }
    }
    ctx->pc = 0x1DADD0u;
    // 0x1dadd0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DADD0u;
    {
        const bool branch_taken_0x1dadd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADD0u;
        // 0x1dadd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dadd0) {
            ctx->pc = 0x1DADF8u;
            goto label_1dadf8;
        }
    }
    ctx->pc = 0x1DADD8u;
    // 0x1dadd8: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x1DADD8u;
    {
        const bool branch_taken_0x1dadd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADD8u;
        // 0x1daddc: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dadd8) {
            ctx->pc = 0x1DB228u;
            goto label_1db228;
        }
    }
    ctx->pc = 0x1DADE0u;
label_1dade0:
    // 0x1dade0: 0x10c20092  beq         $a2, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x1DADE0u;
    {
        const bool branch_taken_0x1dade0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADE0u;
        // 0x1dade4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dade0) {
            ctx->pc = 0x1DB02Cu;
            goto label_1db02c;
        }
    }
    ctx->pc = 0x1DADE8u;
    // 0x1dade8: 0x10c20105  beq         $a2, $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x1DADE8u;
    {
        const bool branch_taken_0x1dade8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADE8u;
        // 0x1dadec: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dade8) {
            ctx->pc = 0x1DB200u;
            goto label_1db200;
        }
    }
    ctx->pc = 0x1DADF0u;
    // 0x1dadf0: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x1DADF0u;
    {
        const bool branch_taken_0x1dadf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADF0u;
        // 0x1dadf4: 0x7bb10260  lq          $s1, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dadf0) {
            ctx->pc = 0x1DB22Cu;
            goto label_1db22c;
        }
    }
    ctx->pc = 0x1DADF8u;
label_1dadf8:
    // 0x1dadf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dadf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadfc: 0x8c44eddc  lw          $a0, -0x1224($v0)
    ctx->pc = 0x1dadfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
    // 0x1dae00: 0xc07742e  jal         func_1DD0B8
    ctx->pc = 0x1DAE00u;
    SET_GPR_U32(ctx, 31, 0x1DAE08u);
    ctx->pc = 0x1DAE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE00u;
    // 0x1dae04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0B8u, 0x1DAE00u, 0x1DAE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE08u;
label_1dae08:
    // 0x1dae08: 0x52500107  beql        $s2, $s0, . + 4 + (0x107 << 2)
    ctx->pc = 0x1DAE08u;
    {
        const bool branch_taken_0x1dae08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x1dae08) {
            ctx->pc = 0x1DAE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAE08u;
            // 0x1dae0c: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB228u;
            goto label_1db228;
        }
    }
    ctx->pc = 0x1DAE10u;
    // 0x1dae10: 0x1660001d  bnez        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DAE10u;
    {
        const bool branch_taken_0x1dae10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE10u;
        // 0x1dae14: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae10) {
            ctx->pc = 0x1DAE88u;
            goto label_1dae88;
        }
    }
    ctx->pc = 0x1DAE18u;
    // 0x1dae18: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1dae18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dae1c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DAE1Cu;
    {
        const bool branch_taken_0x1dae1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE1Cu;
        // 0x1dae20: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae1c) {
            ctx->pc = 0x1DAE54u;
            goto label_1dae54;
        }
    }
    ctx->pc = 0x1DAE24u;
    // 0x1dae24: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dae24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dae28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae2c: 0x24a56418  addiu       $a1, $a1, 0x6418
    ctx->pc = 0x1dae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25624));
    // 0x1dae30: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DAE30u;
    SET_GPR_U32(ctx, 31, 0x1DAE38u);
    ctx->pc = 0x1DAE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE30u;
    // 0x1dae34: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DAE30u, 0x1DAE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE38u;
label_1dae38:
    // 0x1dae38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DAE38u;
    {
        const bool branch_taken_0x1dae38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE38u;
        // 0x1dae3c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae38) {
            ctx->pc = 0x1DAE54u;
            goto label_1dae54;
        }
    }
    ctx->pc = 0x1DAE40u;
    // 0x1dae40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dae40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae44: 0xc076acc  jal         func_1DAB30
    ctx->pc = 0x1DAE44u;
    SET_GPR_U32(ctx, 31, 0x1DAE4Cu);
    ctx->pc = 0x1DAE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE44u;
    // 0x1dae48: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAB30u, 0x1DAE44u, 0x1DAE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE4Cu;
label_1dae4c:
    // 0x1dae4c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1DAE4Cu;
    {
        const bool branch_taken_0x1dae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE4Cu;
        // 0x1dae50: 0x240400e5  addiu       $a0, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae4c) {
            ctx->pc = 0x1DAF70u;
            goto label_1daf70;
        }
    }
    ctx->pc = 0x1DAE54u;
label_1dae54:
    // 0x1dae54: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dae54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dae58: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x1dae58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
    // 0x1dae5c: 0xa3a0003f  sb          $zero, 0x3F($sp)
    ctx->pc = 0x1dae5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dae60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae64: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DAE64u;
    SET_GPR_U32(ctx, 31, 0x1DAE6Cu);
    ctx->pc = 0x1DAE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE64u;
    // 0x1dae68: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DAE64u, 0x1DAE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE6Cu;
label_1dae6c:
    // 0x1dae6c: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1DAE6Cu;
    SET_GPR_U32(ctx, 31, 0x1DAE74u);
    ctx->pc = 0x1DAE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE6Cu;
    // 0x1dae70: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1DAE6Cu, 0x1DAE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE74u;
label_1dae74:
    // 0x1dae74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae78: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DAE78u;
    SET_GPR_U32(ctx, 31, 0x1DAE80u);
    ctx->pc = 0x1DAE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE78u;
    // 0x1dae7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DAE78u, 0x1DAE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE80u;
label_1dae80:
    // 0x1dae80: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1DAE80u;
    {
        const bool branch_taken_0x1dae80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE80u;
        // 0x1dae84: 0x240400e5  addiu       $a0, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae80) {
            ctx->pc = 0x1DAF70u;
            goto label_1daf70;
        }
    }
    ctx->pc = 0x1DAE88u;
label_1dae88:
    // 0x1dae88: 0x167000e7  bne         $s3, $s0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x1DAE88u;
    {
        const bool branch_taken_0x1dae88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE88u;
        // 0x1dae8c: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae88) {
            ctx->pc = 0x1DB228u;
            goto label_1db228;
        }
    }
    ctx->pc = 0x1DAE90u;
    // 0x1dae90: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1dae90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1dae94: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1dae94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1dae98: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x1dae98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
    // 0x1dae9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAE9Cu;
    {
        const bool branch_taken_0x1dae9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE9Cu;
        // 0x1daea0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae9c) {
            ctx->pc = 0x1DAEB4u;
            goto label_1daeb4;
        }
    }
    ctx->pc = 0x1DAEA4u;
    // 0x1daea4: 0xc107444  jal         func_41D110
    ctx->pc = 0x1DAEA4u;
    SET_GPR_U32(ctx, 31, 0x1DAEACu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1DAEA4u, 0x1DAEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEACu;
label_1daeac:
    // 0x1daeac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1daeacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daeb0: 0x262180a  movz        $v1, $s3, $v0
    ctx->pc = 0x1daeb0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
label_1daeb4:
    // 0x1daeb4: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DAEB4u;
    {
        const bool branch_taken_0x1daeb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daeb4) {
            ctx->pc = 0x1DAEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAEB4u;
            // 0x1daeb8: 0x82230000  lb          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAF04u;
            goto label_1daf04;
        }
    }
    ctx->pc = 0x1DAEBCu;
    // 0x1daebc: 0xc073a8e  jal         func_1CEA38
    ctx->pc = 0x1DAEBCu;
    SET_GPR_U32(ctx, 31, 0x1DAEC4u);
    ctx->pc = 0x1DAEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAEBCu;
    // 0x1daec0: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x1DAEBCu, 0x1DAEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEC4u;
label_1daec4:
    // 0x1daec4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DAEC4u;
    {
        const bool branch_taken_0x1daec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEC4u;
        // 0x1daec8: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daec4) {
            ctx->pc = 0x1DAF00u;
            goto label_1daf00;
        }
    }
    ctx->pc = 0x1DAECCu;
    // 0x1daecc: 0x3c120004  lui         $s2, 0x4
    ctx->pc = 0x1daeccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4 << 16));
    // 0x1daed0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1daed0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1daed4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1daed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x1daed8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1DAED8u;
    {
        const bool branch_taken_0x1daed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daed8) {
            ctx->pc = 0x1DAEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAED8u;
            // 0x1daedc: 0x82230000  lb          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAF04u;
            goto label_1daf04;
        }
    }
    ctx->pc = 0x1DAEE0u;
    // 0x1daee0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1daee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x1daee4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1daee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1daee8: 0xc07387a  jal         func_1CE1E8
    ctx->pc = 0x1DAEE8u;
    SET_GPR_U32(ctx, 31, 0x1DAEF0u);
    ctx->pc = 0x1DAEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAEE8u;
    // 0x1daeec: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x1DAEE8u, 0x1DAEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEF0u;
label_1daef0:
    // 0x1daef0: 0x8e03489c  lw          $v1, 0x489C($s0)
    ctx->pc = 0x1daef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1daef4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1daef4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1daef8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1daef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1daefc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1daefcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1daf00:
    // 0x1daf00: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1daf00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1daf04:
    // 0x1daf04: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1daf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1daf08: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DAF08u;
    {
        const bool branch_taken_0x1daf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF08u;
        // 0x1daf0c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf08) {
            ctx->pc = 0x1DAF40u;
            goto label_1daf40;
        }
    }
    ctx->pc = 0x1DAF10u;
    // 0x1daf10: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1daf10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1daf14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1daf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf18: 0x24a56418  addiu       $a1, $a1, 0x6418
    ctx->pc = 0x1daf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25624));
    // 0x1daf1c: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DAF1Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF24u);
    ctx->pc = 0x1DAF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF1Cu;
    // 0x1daf20: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DAF1Cu, 0x1DAF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF24u;
label_1daf24:
    // 0x1daf24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAF24u;
    {
        const bool branch_taken_0x1daf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF24u;
        // 0x1daf28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf24) {
            ctx->pc = 0x1DAF3Cu;
            goto label_1daf3c;
        }
    }
    ctx->pc = 0x1DAF2Cu;
    // 0x1daf2c: 0xc076acc  jal         func_1DAB30
    ctx->pc = 0x1DAF2Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF34u);
    ctx->pc = 0x1DAF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF2Cu;
    // 0x1daf30: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAB30u, 0x1DAF2Cu, 0x1DAF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF34u;
label_1daf34:
    // 0x1daf34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DAF34u;
    {
        const bool branch_taken_0x1daf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF34u;
        // 0x1daf38: 0x240400e6  addiu       $a0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf34) {
            ctx->pc = 0x1DAF70u;
            goto label_1daf70;
        }
    }
    ctx->pc = 0x1DAF3Cu;
label_1daf3c:
    // 0x1daf3c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1daf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1daf40:
    // 0x1daf40: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1daf40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1daf44: 0x24a562a0  addiu       $a1, $a1, 0x62A0
    ctx->pc = 0x1daf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25248));
    // 0x1daf48: 0xa3a0002e  sb          $zero, 0x2E($sp)
    ctx->pc = 0x1daf48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x1daf4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf50: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DAF50u;
    SET_GPR_U32(ctx, 31, 0x1DAF58u);
    ctx->pc = 0x1DAF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF50u;
    // 0x1daf54: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DAF50u, 0x1DAF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF58u;
label_1daf58:
    // 0x1daf58: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1DAF58u;
    SET_GPR_U32(ctx, 31, 0x1DAF60u);
    ctx->pc = 0x1DAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF58u;
    // 0x1daf5c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1DAF58u, 0x1DAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF60u;
label_1daf60:
    // 0x1daf60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf64: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DAF64u;
    SET_GPR_U32(ctx, 31, 0x1DAF6Cu);
    ctx->pc = 0x1DAF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF64u;
    // 0x1daf68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DAF64u, 0x1DAF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF6Cu;
label_1daf6c:
    // 0x1daf6c: 0x240400e6  addiu       $a0, $zero, 0xE6
    ctx->pc = 0x1daf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
label_1daf70:
    // 0x1daf70: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1DAF70u;
    SET_GPR_U32(ctx, 31, 0x1DAF78u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DAF70u, 0x1DAF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF78u;
label_1daf78:
    // 0x1daf78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1daf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1daf7c: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DAF7Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF84u);
    ctx->pc = 0x1DAF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF7Cu;
    // 0x1daf80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DAF7Cu, 0x1DAF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF84u;
label_1daf84:
    // 0x1daf84: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1daf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1daf88: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DAF88u;
    SET_GPR_U32(ctx, 31, 0x1DAF90u);
    ctx->pc = 0x1DAF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF88u;
    // 0x1daf8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DAF88u, 0x1DAF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF90u;
label_1daf90:
    // 0x1daf90: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1daf90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1daf94: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1daf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1daf98: 0xc04444c  jal         func_111130
    ctx->pc = 0x1DAF98u;
    SET_GPR_U32(ctx, 31, 0x1DAFA0u);
    ctx->pc = 0x1DAF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF98u;
    // 0x1daf9c: 0x8c64aa84  lw          $a0, -0x557C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1DAF98u, 0x1DAFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAFA0u;
label_1dafa0:
    // 0x1dafa0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1dafa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1dafa4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1dafa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1dafa8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1dafa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1dafac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dafacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dafb0: 0xc48fede0  lwc1        $f15, -0x1220($a0)
    ctx->pc = 0x1dafb0u;
    { uint32_t bits = FAST_READ32(0x50EDE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1dafb4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1dafb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1dafb8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1dafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1dafbc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dafbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dafc0: 0x46007bc1  sub.s       $f15, $f15, $f0
    ctx->pc = 0x1dafc0u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
    // 0x1dafc4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1dafc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1dafc8: 0xc46eede4  lwc1        $f14, -0x121C($v1)
    ctx->pc = 0x1dafc8u;
    { uint32_t bits = FAST_READ32(0x50EDE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dafcc: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1dafccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1dafd0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1dafd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1dafd4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1dafd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1dafd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dafd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dafdc: 0x24a56410  addiu       $a1, $a1, 0x6410
    ctx->pc = 0x1dafdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25616));
    // 0x1dafe0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dafe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dafe4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1dafe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1dafe8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1dafe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dafec: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1dafecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x1daff0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1daff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1daff4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1daff4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1daff8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1daff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daffc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1daffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db000: 0xc06ce46  jal         func_1B3918
    ctx->pc = 0x1DB000u;
    SET_GPR_U32(ctx, 31, 0x1DB008u);
    ctx->pc = 0x1DB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB000u;
    // 0x1db004: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3918u, 0x1DB000u, 0x1DB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB008u;
label_1db008:
    // 0x1db008: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1DB008u;
    {
        const bool branch_taken_0x1db008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB008u;
        // 0x1db00c: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db008) {
            ctx->pc = 0x1DB228u;
            goto label_1db228;
        }
    }
    ctx->pc = 0x1DB010u;
label_1db010:
    // 0x1db010: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1db010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1db014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db018: 0x8c44eddc  lw          $a0, -0x1224($v0)
    ctx->pc = 0x1db018u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50EDDCu));
    // 0x1db01c: 0xc07745e  jal         func_1DD178
    ctx->pc = 0x1DB01Cu;
    SET_GPR_U32(ctx, 31, 0x1DB024u);
    ctx->pc = 0x1DB020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB01Cu;
    // 0x1db020: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD178u, 0x1DB01Cu, 0x1DB024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB024u;
label_1db024:
    // 0x1db024: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1DB024u;
    {
        const bool branch_taken_0x1db024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB024u;
        // 0x1db028: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db024) {
            ctx->pc = 0x1DB228u;
            goto label_1db228;
        }
    }
    ctx->pc = 0x1DB02Cu;
label_1db02c:
    // 0x1db02c: 0x16600025  bnez        $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x1DB02Cu;
    {
        const bool branch_taken_0x1db02c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB02Cu;
        // 0x1db030: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db02c) {
            ctx->pc = 0x1DB0C4u;
            goto label_1db0c4;
        }
    }
    ctx->pc = 0x1DB034u;
    // 0x1db034: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1db034u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1db038: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DB038u;
    {
        const bool branch_taken_0x1db038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB038u;
        // 0x1db03c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db038) {
            ctx->pc = 0x1DB070u;
            goto label_1db070;
        }
    }
    ctx->pc = 0x1DB040u;
    // 0x1db040: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1db040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1db044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db048: 0x24a56418  addiu       $a1, $a1, 0x6418
    ctx->pc = 0x1db048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25624));
    // 0x1db04c: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DB04Cu;
    SET_GPR_U32(ctx, 31, 0x1DB054u);
    ctx->pc = 0x1DB050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB04Cu;
    // 0x1db050: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DB04Cu, 0x1DB054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB054u;
label_1db054:
    // 0x1db054: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB054u;
    {
        const bool branch_taken_0x1db054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB054u;
        // 0x1db058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db054) {
            ctx->pc = 0x1DB06Cu;
            goto label_1db06c;
        }
    }
    ctx->pc = 0x1DB05Cu;
    // 0x1db05c: 0xc076acc  jal         func_1DAB30
    ctx->pc = 0x1DB05Cu;
    SET_GPR_U32(ctx, 31, 0x1DB064u);
    ctx->pc = 0x1DB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB05Cu;
    // 0x1db060: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAB30u, 0x1DB05Cu, 0x1DB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB064u;
label_1db064:
    // 0x1db064: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DB064u;
    {
        const bool branch_taken_0x1db064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db064) {
            ctx->pc = 0x1DB09Cu;
            goto label_1db09c;
        }
    }
    ctx->pc = 0x1DB06Cu;
label_1db06c:
    // 0x1db06c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1db06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1db070:
    // 0x1db070: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1db070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1db074: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x1db074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
    // 0x1db078: 0xa3a0003f  sb          $zero, 0x3F($sp)
    ctx->pc = 0x1db078u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x1db07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db080: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DB080u;
    SET_GPR_U32(ctx, 31, 0x1DB088u);
    ctx->pc = 0x1DB084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB080u;
    // 0x1db084: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DB080u, 0x1DB088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB088u;
label_1db088:
    // 0x1db088: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1DB088u;
    SET_GPR_U32(ctx, 31, 0x1DB090u);
    ctx->pc = 0x1DB08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB088u;
    // 0x1db08c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1DB088u, 0x1DB090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB090u;
label_1db090:
    // 0x1db090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db094: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DB094u;
    SET_GPR_U32(ctx, 31, 0x1DB09Cu);
    ctx->pc = 0x1DB098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB094u;
    // 0x1db098: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DB094u, 0x1DB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB09Cu;
label_1db09c:
    // 0x1db09c: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1DB09Cu;
    SET_GPR_U32(ctx, 31, 0x1DB0A4u);
    ctx->pc = 0x1DB0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB09Cu;
    // 0x1db0a0: 0x240400e5  addiu       $a0, $zero, 0xE5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DB09Cu, 0x1DB0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB0A4u;
label_1db0a4:
    // 0x1db0a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0a8: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DB0A8u;
    SET_GPR_U32(ctx, 31, 0x1DB0B0u);
    ctx->pc = 0x1DB0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB0A8u;
    // 0x1db0ac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DB0A8u, 0x1DB0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB0B0u;
label_1db0b0:
    // 0x1db0b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1db0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1db0b4: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DB0B4u;
    SET_GPR_U32(ctx, 31, 0x1DB0BCu);
    ctx->pc = 0x1DB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB0B4u;
    // 0x1db0b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DB0B4u, 0x1DB0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB0BCu;
label_1db0bc:
    // 0x1db0bc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1DB0BCu;
    {
        const bool branch_taken_0x1db0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0BCu;
        // 0x1db0c0: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0bc) {
            ctx->pc = 0x1DB15Cu;
            goto label_1db15c;
        }
    }
    ctx->pc = 0x1DB0C4u;
label_1db0c4:
    // 0x1db0c4: 0x56700025  bnel        $s3, $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1DB0C4u;
    {
        const bool branch_taken_0x1db0c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x1db0c4) {
            ctx->pc = 0x1DB0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB0C4u;
            // 0x1db0c8: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB15Cu;
            goto label_1db15c;
        }
    }
    ctx->pc = 0x1DB0CCu;
    // 0x1db0cc: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1db0ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1db0d0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1db0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1db0d4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DB0D4u;
    {
        const bool branch_taken_0x1db0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0D4u;
        // 0x1db0d8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0d4) {
            ctx->pc = 0x1DB10Cu;
            goto label_1db10c;
        }
    }
    ctx->pc = 0x1DB0DCu;
    // 0x1db0dc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1db0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0e4: 0x24a56418  addiu       $a1, $a1, 0x6418
    ctx->pc = 0x1db0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25624));
    // 0x1db0e8: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DB0E8u;
    SET_GPR_U32(ctx, 31, 0x1DB0F0u);
    ctx->pc = 0x1DB0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB0E8u;
    // 0x1db0ec: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DB0E8u, 0x1DB0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB0F0u;
label_1db0f0:
    // 0x1db0f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB0F0u;
    {
        const bool branch_taken_0x1db0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0F0u;
        // 0x1db0f4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0f0) {
            ctx->pc = 0x1DB10Cu;
            goto label_1db10c;
        }
    }
    ctx->pc = 0x1DB0F8u;
    // 0x1db0f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0fc: 0xc076acc  jal         func_1DAB30
    ctx->pc = 0x1DB0FCu;
    SET_GPR_U32(ctx, 31, 0x1DB104u);
    ctx->pc = 0x1DB100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB0FCu;
    // 0x1db100: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAB30u, 0x1DB0FCu, 0x1DB104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB104u;
label_1db104:
    // 0x1db104: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DB104u;
    {
        const bool branch_taken_0x1db104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db104) {
            ctx->pc = 0x1DB138u;
            goto label_1db138;
        }
    }
    ctx->pc = 0x1DB10Cu;
label_1db10c:
    // 0x1db10c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1db10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1db110: 0x24a562a0  addiu       $a1, $a1, 0x62A0
    ctx->pc = 0x1db110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25248));
    // 0x1db114: 0xa3a0002e  sb          $zero, 0x2E($sp)
    ctx->pc = 0x1db114u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x1db118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db11c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DB11Cu;
    SET_GPR_U32(ctx, 31, 0x1DB124u);
    ctx->pc = 0x1DB120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB11Cu;
    // 0x1db120: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DB11Cu, 0x1DB124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB124u;
label_1db124:
    // 0x1db124: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1DB124u;
    SET_GPR_U32(ctx, 31, 0x1DB12Cu);
    ctx->pc = 0x1DB128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB124u;
    // 0x1db128: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1DB124u, 0x1DB12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB12Cu;
label_1db12c:
    // 0x1db12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db130: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DB130u;
    SET_GPR_U32(ctx, 31, 0x1DB138u);
    ctx->pc = 0x1DB134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB130u;
    // 0x1db134: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DB130u, 0x1DB138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB138u;
label_1db138:
    // 0x1db138: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1DB138u;
    SET_GPR_U32(ctx, 31, 0x1DB140u);
    ctx->pc = 0x1DB13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB138u;
    // 0x1db13c: 0x240400e6  addiu       $a0, $zero, 0xE6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DB138u, 0x1DB140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB140u;
label_1db140:
    // 0x1db140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db144: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DB144u;
    SET_GPR_U32(ctx, 31, 0x1DB14Cu);
    ctx->pc = 0x1DB148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB144u;
    // 0x1db148: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DB144u, 0x1DB14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB14Cu;
label_1db14c:
    // 0x1db14c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1db14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1db150: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DB150u;
    SET_GPR_U32(ctx, 31, 0x1DB158u);
    ctx->pc = 0x1DB154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB150u;
    // 0x1db154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DB150u, 0x1DB158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB158u;
label_1db158:
    // 0x1db158: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1db158u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1db15c:
    // 0x1db15c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1db15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1db160: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1db160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db164: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1db164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db168: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x1db168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x1db16c: 0xc06ce50  jal         func_1B3940
    ctx->pc = 0x1DB16Cu;
    SET_GPR_U32(ctx, 31, 0x1DB174u);
    ctx->pc = 0x1DB170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB16Cu;
    // 0x1db170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3940u, 0x1DB16Cu, 0x1DB174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB174u;
label_1db174:
    // 0x1db174: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db178: 0xc06ce50  jal         func_1B3940
    ctx->pc = 0x1DB178u;
    SET_GPR_U32(ctx, 31, 0x1DB180u);
    ctx->pc = 0x1DB17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB178u;
    // 0x1db17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3940u, 0x1DB178u, 0x1DB180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB180u;
label_1db180:
    // 0x1db180: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1db180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1db184: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db188: 0x8c44eddc  lw          $a0, -0x1224($v0)
    ctx->pc = 0x1db188u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50EDDCu));
    // 0x1db18c: 0xc077468  jal         func_1DD1A0
    ctx->pc = 0x1DB18Cu;
    SET_GPR_U32(ctx, 31, 0x1DB194u);
    ctx->pc = 0x1DB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB18Cu;
    // 0x1db190: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1A0u, 0x1DB18Cu, 0x1DB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB194u;
label_1db194:
    // 0x1db194: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1db194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1db198: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x1db198u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1db19c: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x1db19cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x1db1a0: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DB1A0u;
    {
        const bool branch_taken_0x1db1a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1DB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1A0u;
        // 0x1db1a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1a0) {
            ctx->pc = 0x1DB224u;
            goto label_1db224;
        }
    }
    ctx->pc = 0x1DB1A8u;
    // 0x1db1a8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1db1a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1ac: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x1db1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_1db1b0:
    // 0x1db1b0: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x1db1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x1db1b4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1DB1B4u;
    SET_GPR_U32(ctx, 31, 0x1DB1BCu);
    ctx->pc = 0x1DB1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1B4u;
    // 0x1db1b8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1DB1B4u, 0x1DB1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1BCu;
label_1db1bc:
    // 0x1db1bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB1BCu;
    {
        const bool branch_taken_0x1db1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1BCu;
        // 0x1db1c0: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1bc) {
            ctx->pc = 0x1DB1E4u;
            goto label_1db1e4;
        }
    }
    ctx->pc = 0x1DB1C4u;
    // 0x1db1c4: 0x52600008  beql        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB1C4u;
    {
        const bool branch_taken_0x1db1c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db1c4) {
            ctx->pc = 0x1DB1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB1C4u;
            // 0x1db1c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB1E8u;
            goto label_1db1e8;
        }
    }
    ctx->pc = 0x1DB1CCu;
    // 0x1db1cc: 0x56740006  bnel        $s3, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB1CCu;
    {
        const bool branch_taken_0x1db1cc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x1db1cc) {
            ctx->pc = 0x1DB1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB1CCu;
            // 0x1db1d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB1E8u;
            goto label_1db1e8;
        }
    }
    ctx->pc = 0x1DB1D4u;
    // 0x1db1d4: 0x26a40840  addiu       $a0, $s5, 0x840
    ctx->pc = 0x1db1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2112));
    // 0x1db1d8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x1DB1D8u;
    SET_GPR_U32(ctx, 31, 0x1DB1E0u);
    ctx->pc = 0x1DB1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1D8u;
    // 0x1db1dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CB0u, 0x1DB1D8u, 0x1DB1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1E0u;
label_1db1e0:
    // 0x1db1e0: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x1db1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_1db1e4:
    // 0x1db1e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1db1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1db1e8:
    // 0x1db1e8: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1db1e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1db1ec: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1db1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1db1f0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1DB1F0u;
    {
        const bool branch_taken_0x1db1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1F0u;
        // 0x1db1f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1f0) {
            ctx->pc = 0x1DB1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db1b0;
        }
    }
    ctx->pc = 0x1DB1F8u;
    // 0x1db1f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DB1F8u;
    {
        const bool branch_taken_0x1db1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1F8u;
        // 0x1db1fc: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1f8) {
            ctx->pc = 0x1DB228u;
            goto label_1db228;
        }
    }
    ctx->pc = 0x1DB200u;
label_1db200:
    // 0x1db200: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1db200u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1db204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db208: 0x8e04eddc  lw          $a0, -0x1224($s0)
    ctx->pc = 0x1db208u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50EDDCu));
    // 0x1db20c: 0xc07742e  jal         func_1DD0B8
    ctx->pc = 0x1DB20Cu;
    SET_GPR_U32(ctx, 31, 0x1DB214u);
    ctx->pc = 0x1DB210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB20Cu;
    // 0x1db210: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0B8u, 0x1DB20Cu, 0x1DB214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB214u;
label_1db214:
    // 0x1db214: 0x8e04eddc  lw          $a0, -0x1224($s0)
    ctx->pc = 0x1db214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
    // 0x1db218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db21c: 0xc077468  jal         func_1DD1A0
    ctx->pc = 0x1DB21Cu;
    SET_GPR_U32(ctx, 31, 0x1DB224u);
    ctx->pc = 0x1DB220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB21Cu;
    // 0x1db220: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1A0u, 0x1DB21Cu, 0x1DB224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB224u;
label_1db224:
    // 0x1db224: 0x7bb00270  lq          $s0, 0x270($sp)
    ctx->pc = 0x1db224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_1db228:
    // 0x1db228: 0x7bb10260  lq          $s1, 0x260($sp)
    ctx->pc = 0x1db228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_1db22c:
    // 0x1db22c: 0x7bb20250  lq          $s2, 0x250($sp)
    ctx->pc = 0x1db22cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1db230: 0x7bb30240  lq          $s3, 0x240($sp)
    ctx->pc = 0x1db230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1db234: 0x7bb40230  lq          $s4, 0x230($sp)
    ctx->pc = 0x1db234u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1db238: 0x7bb50220  lq          $s5, 0x220($sp)
    ctx->pc = 0x1db238u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1db23c: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x1db23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1db240: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB240u;
        // 0x1db244: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB248u;
}

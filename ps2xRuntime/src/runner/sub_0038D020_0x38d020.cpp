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

// Function: sub_0038D020
// Address: 0x38d020 - 0x38d188
void sub_0038D020_0x38d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D020_0x38d020");
#endif

    switch (ctx->pc) {
        case 0x38d128u: goto label_38d128;
        case 0x38d14cu: goto label_38d14c;
        default: break;
    }

    ctx->pc = 0x38d020u;

    // 0x38d020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38d024: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x38d024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x38d028: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38d028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d02c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38d02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x38d030: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x38d030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x38d034: 0x2602fffc  addiu       $v0, $s0, -0x4
    ctx->pc = 0x38d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x38d038: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x38d038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x38d03c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38d03cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d040: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x38d040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x38d044: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38d044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d048: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x38d048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38d04c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38D04Cu;
    {
        const bool branch_taken_0x38d04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D04Cu;
        // 0x38d050: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d04c) {
            ctx->pc = 0x38D078u;
            goto label_38d078;
        }
    }
    ctx->pc = 0x38D054u;
    // 0x38d054: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x38d054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x38d058: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38D058u;
    {
        const bool branch_taken_0x38d058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x38D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D058u;
        // 0x38d05c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d058) {
            ctx->pc = 0x38D078u;
            goto label_38d078;
        }
    }
    ctx->pc = 0x38D060u;
    // 0x38d060: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38D060u;
    {
        const bool branch_taken_0x38d060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x38D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D060u;
        // 0x38d064: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d060) {
            ctx->pc = 0x38D078u;
            goto label_38d078;
        }
    }
    ctx->pc = 0x38D068u;
    // 0x38d068: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38D068u;
    {
        const bool branch_taken_0x38d068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x38D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D068u;
        // 0x38d06c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d068) {
            ctx->pc = 0x38D078u;
            goto label_38d078;
        }
    }
    ctx->pc = 0x38D070u;
    // 0x38d070: 0x5602003e  bnel        $s0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x38D070u;
    {
        const bool branch_taken_0x38d070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x38d070) {
            ctx->pc = 0x38D074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D070u;
            // 0x38d074: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D16Cu;
            goto label_38d16c;
        }
    }
    ctx->pc = 0x38D078u;
label_38d078:
    // 0x38d078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38d078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d07c: 0x8e4211f0  lw          $v0, 0x11F0($s2)
    ctx->pc = 0x38d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4592)));
    // 0x38d080: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x38d080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x38d084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38d084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x38d088: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x38D088u;
    {
        const bool branch_taken_0x38d088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d088) {
            ctx->pc = 0x38D08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D088u;
            // 0x38d08c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D16Cu;
            goto label_38d16c;
        }
    }
    ctx->pc = 0x38D090u;
    // 0x38d090: 0x8e4211f4  lw          $v0, 0x11F4($s2)
    ctx->pc = 0x38d090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4596)));
    // 0x38d094: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38d094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x38d098: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x38D098u;
    {
        const bool branch_taken_0x38d098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d098) {
            ctx->pc = 0x38D09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D098u;
            // 0x38d09c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D16Cu;
            goto label_38d16c;
        }
    }
    ctx->pc = 0x38D0A0u;
    // 0x38d0a0: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x38d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x38d0a4: 0x8e4411e0  lw          $a0, 0x11E0($s2)
    ctx->pc = 0x38d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    // 0x38d0a8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x38d0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38d0ac: 0x240205f0  addiu       $v0, $zero, 0x5F0
    ctx->pc = 0x38d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x38d0b0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x38d0b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38d0b4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x38d0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x38d0b8: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x38d0b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38d0bc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x38d0c0: 0x2442e5b0  addiu       $v0, $v0, -0x1A50
    ctx->pc = 0x38d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960560));
    // 0x38d0c4: 0x246301a0  addiu       $v1, $v1, 0x1A0
    ctx->pc = 0x38d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x38d0c8: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x38d0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x38d0cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38d0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38d0d0: 0x92230096  lbu         $v1, 0x96($s1)
    ctx->pc = 0x38d0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x38d0d4: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x38d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x38d0d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38d0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38d0dc: 0x10530022  beq         $v0, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x38D0DCu;
    {
        const bool branch_taken_0x38d0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x38D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0DCu;
        // 0x38d0e0: 0x85a021  addu        $s4, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d0dc) {
            ctx->pc = 0x38D168u;
            goto label_38d168;
        }
    }
    ctx->pc = 0x38D0E4u;
    // 0x38d0e4: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x38D0E4u;
    {
        const bool branch_taken_0x38d0e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0E4u;
        // 0x38d0e8: 0x34620004  ori         $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d0e4) {
            ctx->pc = 0x38D0F0u;
            goto label_38d0f0;
        }
    }
    ctx->pc = 0x38D0ECu;
    // 0x38d0ec: 0x306200fb  andi        $v0, $v1, 0xFB
    ctx->pc = 0x38d0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
label_38d0f0:
    // 0x38d0f0: 0xa2220096  sb          $v0, 0x96($s1)
    ctx->pc = 0x38d0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 150), (uint8_t)GPR_U32(ctx, 2));
    // 0x38d0f4: 0x8e421300  lw          $v0, 0x1300($s2)
    ctx->pc = 0x38d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
    // 0x38d0f8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x38D0F8u;
    {
        const bool branch_taken_0x38d0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d0f8) {
            ctx->pc = 0x38D0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D0F8u;
            // 0x38d0fc: 0x92220096  lbu         $v0, 0x96($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 150)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D158u;
            goto label_38d158;
        }
    }
    ctx->pc = 0x38D100u;
    // 0x38d100: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x38d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x38d104: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38D104u;
    {
        const bool branch_taken_0x38d104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D104u;
        // 0x38d108: 0x2e02001a  sltiu       $v0, $s0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d104) {
            ctx->pc = 0x38D154u;
            goto label_38d154;
        }
    }
    ctx->pc = 0x38D10Cu;
    // 0x38d10c: 0x2607ffe7  addiu       $a3, $s0, -0x19
    ctx->pc = 0x38d10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967271));
    // 0x38d110: 0x202380b  movn        $a3, $s0, $v0
    ctx->pc = 0x38d110u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 16));
    // 0x38d114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38d114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d118: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38d118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d11c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x38d11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d120: 0xc0e32dc  jal         func_38CB70
    ctx->pc = 0x38D120u;
    SET_GPR_U32(ctx, 31, 0x38D128u);
    ctx->pc = 0x38D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D120u;
    // 0x38d124: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CB70u, 0x38D120u, 0x38D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D128u;
label_38d128:
    // 0x38d128: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x38d128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x38d12c: 0x26070019  addiu       $a3, $s0, 0x19
    ctx->pc = 0x38d12cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 25));
    // 0x38d130: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x38d130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x38d134: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38d134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d138: 0x202380b  movn        $a3, $s0, $v0
    ctx->pc = 0x38d138u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 16));
    // 0x38d13c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x38d13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d140: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x38d140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d144: 0xc0e32dc  jal         func_38CB70
    ctx->pc = 0x38D144u;
    SET_GPR_U32(ctx, 31, 0x38D14Cu);
    ctx->pc = 0x38D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D144u;
    // 0x38d148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CB70u, 0x38D144u, 0x38D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D14Cu;
label_38d14c:
    // 0x38d14c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38D14Cu;
    {
        const bool branch_taken_0x38d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D14Cu;
        // 0x38d150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d14c) {
            ctx->pc = 0x38D164u;
            goto label_38d164;
        }
    }
    ctx->pc = 0x38D154u;
label_38d154:
    // 0x38d154: 0x92220096  lbu         $v0, 0x96($s1)
    ctx->pc = 0x38d154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 150)));
label_38d158:
    // 0x38d158: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x38d158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x38d15c: 0xa2220096  sb          $v0, 0x96($s1)
    ctx->pc = 0x38d15cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 150), (uint8_t)GPR_U32(ctx, 2));
    // 0x38d160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d164:
    // 0x38d164: 0xa2421308  sb          $v0, 0x1308($s2)
    ctx->pc = 0x38d164u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4872), (uint8_t)GPR_U32(ctx, 2));
label_38d168:
    // 0x38d168: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x38d168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38d16c:
    // 0x38d16c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38d16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38d170: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38d170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38d174: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x38d174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38d178: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x38d178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d180: 0x3e00008  jr          $ra
    ctx->pc = 0x38D180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D180u;
        // 0x38d184: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D188u;
}

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

// Function: sub_004CCF58
// Address: 0x4ccf58 - 0x4cd0f0
void sub_004CCF58_0x4ccf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CCF58_0x4ccf58");
#endif

    switch (ctx->pc) {
        case 0x4ccf58u: goto label_4ccf58;
        case 0x4ccf5cu: goto label_4ccf5c;
        case 0x4ccf60u: goto label_4ccf60;
        case 0x4ccf64u: goto label_4ccf64;
        case 0x4ccf68u: goto label_4ccf68;
        case 0x4ccf6cu: goto label_4ccf6c;
        case 0x4ccf70u: goto label_4ccf70;
        case 0x4ccf74u: goto label_4ccf74;
        case 0x4ccf78u: goto label_4ccf78;
        case 0x4ccf7cu: goto label_4ccf7c;
        case 0x4ccf80u: goto label_4ccf80;
        case 0x4ccf84u: goto label_4ccf84;
        case 0x4ccf88u: goto label_4ccf88;
        case 0x4ccf8cu: goto label_4ccf8c;
        case 0x4ccf90u: goto label_4ccf90;
        case 0x4ccf94u: goto label_4ccf94;
        case 0x4ccf98u: goto label_4ccf98;
        case 0x4ccf9cu: goto label_4ccf9c;
        case 0x4ccfa0u: goto label_4ccfa0;
        case 0x4ccfa4u: goto label_4ccfa4;
        case 0x4ccfa8u: goto label_4ccfa8;
        case 0x4ccfacu: goto label_4ccfac;
        case 0x4ccfb0u: goto label_4ccfb0;
        case 0x4ccfb4u: goto label_4ccfb4;
        case 0x4ccfb8u: goto label_4ccfb8;
        case 0x4ccfbcu: goto label_4ccfbc;
        case 0x4ccfc0u: goto label_4ccfc0;
        case 0x4ccfc4u: goto label_4ccfc4;
        case 0x4ccfc8u: goto label_4ccfc8;
        case 0x4ccfccu: goto label_4ccfcc;
        case 0x4ccfd0u: goto label_4ccfd0;
        case 0x4ccfd4u: goto label_4ccfd4;
        case 0x4ccfd8u: goto label_4ccfd8;
        case 0x4ccfdcu: goto label_4ccfdc;
        case 0x4ccfe0u: goto label_4ccfe0;
        case 0x4ccfe4u: goto label_4ccfe4;
        case 0x4ccfe8u: goto label_4ccfe8;
        case 0x4ccfecu: goto label_4ccfec;
        case 0x4ccff0u: goto label_4ccff0;
        case 0x4ccff4u: goto label_4ccff4;
        case 0x4ccff8u: goto label_4ccff8;
        case 0x4ccffcu: goto label_4ccffc;
        case 0x4cd000u: goto label_4cd000;
        case 0x4cd004u: goto label_4cd004;
        case 0x4cd008u: goto label_4cd008;
        case 0x4cd00cu: goto label_4cd00c;
        case 0x4cd010u: goto label_4cd010;
        case 0x4cd014u: goto label_4cd014;
        case 0x4cd018u: goto label_4cd018;
        case 0x4cd01cu: goto label_4cd01c;
        case 0x4cd020u: goto label_4cd020;
        case 0x4cd024u: goto label_4cd024;
        case 0x4cd028u: goto label_4cd028;
        case 0x4cd02cu: goto label_4cd02c;
        case 0x4cd030u: goto label_4cd030;
        case 0x4cd034u: goto label_4cd034;
        case 0x4cd038u: goto label_4cd038;
        case 0x4cd03cu: goto label_4cd03c;
        case 0x4cd040u: goto label_4cd040;
        case 0x4cd044u: goto label_4cd044;
        case 0x4cd048u: goto label_4cd048;
        case 0x4cd04cu: goto label_4cd04c;
        case 0x4cd050u: goto label_4cd050;
        case 0x4cd054u: goto label_4cd054;
        case 0x4cd058u: goto label_4cd058;
        case 0x4cd05cu: goto label_4cd05c;
        case 0x4cd060u: goto label_4cd060;
        case 0x4cd064u: goto label_4cd064;
        case 0x4cd068u: goto label_4cd068;
        case 0x4cd06cu: goto label_4cd06c;
        case 0x4cd070u: goto label_4cd070;
        case 0x4cd074u: goto label_4cd074;
        case 0x4cd078u: goto label_4cd078;
        case 0x4cd07cu: goto label_4cd07c;
        case 0x4cd080u: goto label_4cd080;
        case 0x4cd084u: goto label_4cd084;
        case 0x4cd088u: goto label_4cd088;
        case 0x4cd08cu: goto label_4cd08c;
        case 0x4cd090u: goto label_4cd090;
        case 0x4cd094u: goto label_4cd094;
        case 0x4cd098u: goto label_4cd098;
        case 0x4cd09cu: goto label_4cd09c;
        case 0x4cd0a0u: goto label_4cd0a0;
        case 0x4cd0a4u: goto label_4cd0a4;
        case 0x4cd0a8u: goto label_4cd0a8;
        case 0x4cd0acu: goto label_4cd0ac;
        case 0x4cd0b0u: goto label_4cd0b0;
        case 0x4cd0b4u: goto label_4cd0b4;
        case 0x4cd0b8u: goto label_4cd0b8;
        case 0x4cd0bcu: goto label_4cd0bc;
        case 0x4cd0c0u: goto label_4cd0c0;
        case 0x4cd0c4u: goto label_4cd0c4;
        case 0x4cd0c8u: goto label_4cd0c8;
        case 0x4cd0ccu: goto label_4cd0cc;
        case 0x4cd0d0u: goto label_4cd0d0;
        case 0x4cd0d4u: goto label_4cd0d4;
        case 0x4cd0d8u: goto label_4cd0d8;
        case 0x4cd0dcu: goto label_4cd0dc;
        case 0x4cd0e0u: goto label_4cd0e0;
        case 0x4cd0e4u: goto label_4cd0e4;
        case 0x4cd0e8u: goto label_4cd0e8;
        case 0x4cd0ecu: goto label_4cd0ec;
        default: break;
    }

    ctx->pc = 0x4ccf58u;

label_4ccf58:
    // 0x4ccf58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ccf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4ccf5c:
    // 0x4ccf5c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4ccf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4ccf60:
    // 0x4ccf60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ccf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ccf64:
    // 0x4ccf64: 0x8c623960  lw          $v0, 0x3960($v1)
    ctx->pc = 0x4ccf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14688)));
label_4ccf68:
    // 0x4ccf68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ccf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ccf6c:
    // 0x4ccf6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ccf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4ccf70:
    // 0x4ccf70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ccf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4ccf74:
    // 0x4ccf74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ccf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4ccf78:
    // 0x4ccf78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ccf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4ccf7c:
    // 0x4ccf7c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ccf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4ccf80:
    // 0x4ccf80: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ccf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4ccf84:
    // 0x4ccf84: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ccf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4ccf88:
    // 0x4ccf88: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4ccf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4ccf8c:
    // 0x4ccf8c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_4ccf90:
    if (ctx->pc == 0x4CCF90u) {
        ctx->pc = 0x4CCF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF8Cu;
        // 0x4ccf90: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCF94u;
        goto label_4ccf94;
    }
    ctx->pc = 0x4CCF8Cu;
    {
        const bool branch_taken_0x4ccf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF8Cu;
        // 0x4ccf90: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccf8c) {
            ctx->pc = 0x4CD0BCu;
            goto label_4cd0bc;
        }
    }
    ctx->pc = 0x4CCF94u;
label_4ccf94:
    // 0x4ccf94: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
label_4ccf98:
    if (ctx->pc == 0x4CCF98u) {
        ctx->pc = 0x4CCF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF94u;
        // 0x4ccf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCF9Cu;
        goto label_4ccf9c;
    }
    ctx->pc = 0x4CCF94u;
    {
        const bool branch_taken_0x4ccf94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF94u;
        // 0x4ccf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccf94) {
            ctx->pc = 0x4CD0C0u;
            goto label_4cd0c0;
        }
    }
    ctx->pc = 0x4CCF9Cu;
label_4ccf9c:
    // 0x4ccf9c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4ccf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4ccfa0:
    // 0x4ccfa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ccfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ccfa4:
    // 0x4ccfa4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_4ccfa8:
    if (ctx->pc == 0x4CCFA8u) {
        ctx->pc = 0x4CCFACu;
        goto label_4ccfac;
    }
    ctx->pc = 0x4CCFA4u;
    {
        const bool branch_taken_0x4ccfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ccfa4) {
            ctx->pc = 0x4CCFBCu;
            goto label_4ccfbc;
        }
    }
    ctx->pc = 0x4CCFACu;
label_4ccfac:
    // 0x4ccfac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4ccfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4ccfb0:
    // 0x4ccfb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ccfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ccfb4:
    // 0x4ccfb4: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
label_4ccfb8:
    if (ctx->pc == 0x4CCFB8u) {
        ctx->pc = 0x4CCFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCFB4u;
        // 0x4ccfb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCFBCu;
        goto label_4ccfbc;
    }
    ctx->pc = 0x4CCFB4u;
    {
        const bool branch_taken_0x4ccfb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CCFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCFB4u;
        // 0x4ccfb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccfb4) {
            ctx->pc = 0x4CD0C0u;
            goto label_4cd0c0;
        }
    }
    ctx->pc = 0x4CCFBCu;
label_4ccfbc:
    // 0x4ccfbc: 0xc110cb0  jal         func_4432C0
label_4ccfc0:
    if (ctx->pc == 0x4CCFC0u) {
        ctx->pc = 0x4CCFC4u;
        goto label_4ccfc4;
    }
    ctx->pc = 0x4CCFBCu;
    SET_GPR_U32(ctx, 31, 0x4CCFC4u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CCFBCu, 0x4CCFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCFC4u;
label_4ccfc4:
    // 0x4ccfc4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4ccfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4ccfc8:
    // 0x4ccfc8: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x4ccfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_4ccfcc:
    // 0x4ccfcc: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x4ccfccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4ccfd0:
    // 0x4ccfd0: 0x24a54748  addiu       $a1, $a1, 0x4748
    ctx->pc = 0x4ccfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18248));
label_4ccfd4:
    // 0x4ccfd4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x4ccfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4ccfd8:
    // 0x4ccfd8: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x4ccfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_4ccfdc:
    // 0x4ccfdc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x4ccfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4ccfe0:
    // 0x4ccfe0: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x4ccfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_4ccfe4:
    // 0x4ccfe4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4ccfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4ccfe8:
    // 0x4ccfe8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x4ccfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_4ccfec:
    // 0x4ccfec: 0xacc4001c  sw          $a0, 0x1C($a2)
    ctx->pc = 0x4ccfecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 4));
label_4ccff0:
    // 0x4ccff0: 0x24634788  addiu       $v1, $v1, 0x4788
    ctx->pc = 0x4ccff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18312));
label_4ccff4:
    // 0x4ccff4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4ccff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_4ccff8:
    // 0x4ccff8: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x4ccff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4ccffc:
    // 0x4ccffc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x4ccffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4cd000:
    // 0x4cd000: 0xacc40018  sw          $a0, 0x18($a2)
    ctx->pc = 0x4cd000u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 4));
label_4cd004:
    // 0x4cd004: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4cd004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4cd008:
    // 0x4cd008: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x4cd008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
label_4cd00c:
    // 0x4cd00c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4cd010:
    if (ctx->pc == 0x4CD010u) {
        ctx->pc = 0x4CD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD00Cu;
        // 0x4cd010: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD014u;
        goto label_4cd014;
    }
    ctx->pc = 0x4CD00Cu;
    {
        const bool branch_taken_0x4cd00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD00Cu;
        // 0x4cd010: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd00c) {
            ctx->pc = 0x4CD01Cu;
            goto label_4cd01c;
        }
    }
    ctx->pc = 0x4CD014u;
label_4cd014:
    // 0x4cd014: 0xc110cc4  jal         func_443310
label_4cd018:
    if (ctx->pc == 0x4CD018u) {
        ctx->pc = 0x4CD01Cu;
        goto label_4cd01c;
    }
    ctx->pc = 0x4CD014u;
    SET_GPR_U32(ctx, 31, 0x4CD01Cu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CD014u, 0x4CD01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD01Cu;
label_4cd01c:
    // 0x4cd01c: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_4cd020:
    if (ctx->pc == 0x4CD020u) {
        ctx->pc = 0x4CD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD01Cu;
        // 0x4cd020: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD024u;
        goto label_4cd024;
    }
    ctx->pc = 0x4CD01Cu;
    {
        const bool branch_taken_0x4cd01c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD01Cu;
        // 0x4cd020: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd01c) {
            ctx->pc = 0x4CD0B4u;
            goto label_4cd0b4;
        }
    }
    ctx->pc = 0x4CD024u;
label_4cd024:
    // 0x4cd024: 0x3c1e0071  lui         $fp, 0x71
    ctx->pc = 0x4cd024u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
label_4cd028:
    // 0x4cd028: 0x26514500  addiu       $s1, $s2, 0x4500
    ctx->pc = 0x4cd028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 17664));
label_4cd02c:
    // 0x4cd02c: 0x3c170053  lui         $s7, 0x53
    ctx->pc = 0x4cd02cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)83 << 16));
label_4cd030:
    // 0x4cd030: 0x3c160071  lui         $s6, 0x71
    ctx->pc = 0x4cd030u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
label_4cd034:
    // 0x4cd034: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x4cd034u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cd038:
    // 0x4cd038: 0x3c140044  lui         $s4, 0x44
    ctx->pc = 0x4cd038u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)68 << 16));
label_4cd03c:
    // 0x4cd03c: 0x3c130044  lui         $s3, 0x44
    ctx->pc = 0x4cd03cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)68 << 16));
label_4cd040:
    // 0x4cd040: 0x8fc246ac  lw          $v0, 0x46AC($fp)
    ctx->pc = 0x4cd040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18092)));
label_4cd044:
    // 0x4cd044: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4cd048:
    if (ctx->pc == 0x4CD048u) {
        ctx->pc = 0x4CD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD044u;
        // 0x4cd048: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD04Cu;
        goto label_4cd04c;
    }
    ctx->pc = 0x4CD044u;
    {
        const bool branch_taken_0x4cd044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD044u;
        // 0x4cd048: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd044) {
            ctx->pc = 0x4CD06Cu;
            goto label_4cd06c;
        }
    }
    ctx->pc = 0x4CD04Cu;
label_4cd04c:
    // 0x4cd04c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cd04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cd050:
    // 0x4cd050: 0x8c6246ac  lw          $v0, 0x46AC($v1)
    ctx->pc = 0x4cd050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18092)));
label_4cd054:
    // 0x4cd054: 0x0  nop
    ctx->pc = 0x4cd054u;
    // NOP
label_4cd058:
    // 0x4cd058: 0x0  nop
    ctx->pc = 0x4cd058u;
    // NOP
label_4cd05c:
    // 0x4cd05c: 0x0  nop
    ctx->pc = 0x4cd05cu;
    // NOP
label_4cd060:
    // 0x4cd060: 0x0  nop
    ctx->pc = 0x4cd060u;
    // NOP
label_4cd064:
    // 0x4cd064: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_4cd068:
    if (ctx->pc == 0x4CD068u) {
        ctx->pc = 0x4CD06Cu;
        goto label_4cd06c;
    }
    ctx->pc = 0x4CD064u;
    {
        const bool branch_taken_0x4cd064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd064) {
            ctx->pc = 0x4CD050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cd050;
        }
    }
    ctx->pc = 0x4CD06Cu;
label_4cd06c:
    // 0x4cd06c: 0x8ee23968  lw          $v0, 0x3968($s7)
    ctx->pc = 0x4cd06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 14696)));
label_4cd070:
    // 0x4cd070: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x4cd070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_4cd074:
    // 0x4cd074: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x4cd074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
label_4cd078:
    // 0x4cd078: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x4cd078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_4cd07c:
    // 0x4cd07c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4cd080:
    if (ctx->pc == 0x4CD080u) {
        ctx->pc = 0x4CD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD07Cu;
        // 0x4cd080: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD084u;
        goto label_4cd084;
    }
    ctx->pc = 0x4CD07Cu;
    {
        const bool branch_taken_0x4cd07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD07Cu;
        // 0x4cd080: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd07c) {
            ctx->pc = 0x4CD08Cu;
            goto label_4cd08c;
        }
    }
    ctx->pc = 0x4CD084u;
label_4cd084:
    // 0x4cd084: 0x10000002  b           . + 4 + (0x2 << 2)
label_4cd088:
    if (ctx->pc == 0x4CD088u) {
        ctx->pc = 0x4CD088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD084u;
        // 0x4cd088: 0x2682fed8  addiu       $v0, $s4, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD08Cu;
        goto label_4cd08c;
    }
    ctx->pc = 0x4CD084u;
    {
        const bool branch_taken_0x4cd084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD084u;
        // 0x4cd088: 0x2682fed8  addiu       $v0, $s4, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd084) {
            ctx->pc = 0x4CD090u;
            goto label_4cd090;
        }
    }
    ctx->pc = 0x4CD08Cu;
label_4cd08c:
    // 0x4cd08c: 0x2662fe98  addiu       $v0, $s3, -0x168
    ctx->pc = 0x4cd08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966936));
label_4cd090:
    // 0x4cd090: 0x8ec446a0  lw          $a0, 0x46A0($s6)
    ctx->pc = 0x4cd090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18080)));
label_4cd094:
    // 0x4cd094: 0x26454500  addiu       $a1, $s2, 0x4500
    ctx->pc = 0x4cd094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 17664));
label_4cd098:
    // 0x4cd098: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x4cd098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4cd09c:
    // 0x4cd09c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4cd09cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cd0a0:
    // 0x4cd0a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4cd0a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cd0a4:
    // 0x4cd0a4: 0x40f809  jalr        $v0
label_4cd0a8:
    if (ctx->pc == 0x4CD0A8u) {
        ctx->pc = 0x4CD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD0A4u;
        // 0x4cd0a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD0ACu;
        goto label_4cd0ac;
    }
    ctx->pc = 0x4CD0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4CD0ACu);
        ctx->pc = 0x4CD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD0A4u;
        // 0x4cd0a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD0A4u, 0x4CD0ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CD0ACu;
label_4cd0ac:
    // 0x4cd0ac: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
label_4cd0b0:
    if (ctx->pc == 0x4CD0B0u) {
        ctx->pc = 0x4CD0B4u;
        goto label_4cd0b4;
    }
    ctx->pc = 0x4CD0ACu;
    {
        const bool branch_taken_0x4cd0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd0ac) {
            ctx->pc = 0x4CD040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cd040;
        }
    }
    ctx->pc = 0x4CD0B4u;
label_4cd0b4:
    // 0x4cd0b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4cd0b8:
    if (ctx->pc == 0x4CD0B8u) {
        ctx->pc = 0x4CD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD0B4u;
        // 0x4cd0b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD0BCu;
        goto label_4cd0bc;
    }
    ctx->pc = 0x4CD0B4u;
    {
        const bool branch_taken_0x4cd0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD0B4u;
        // 0x4cd0b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd0b4) {
            ctx->pc = 0x4CD0C0u;
            goto label_4cd0c0;
        }
    }
    ctx->pc = 0x4CD0BCu;
label_4cd0bc:
    // 0x4cd0bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4cd0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cd0c0:
    // 0x4cd0c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd0c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cd0c4:
    // 0x4cd0c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cd0c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4cd0c8:
    // 0x4cd0c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cd0c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cd0cc:
    // 0x4cd0cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cd0ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4cd0d0:
    // 0x4cd0d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cd0d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cd0d4:
    // 0x4cd0d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cd0d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4cd0d8:
    // 0x4cd0d8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cd0d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4cd0dc:
    // 0x4cd0dc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cd0dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4cd0e0:
    // 0x4cd0e0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cd0e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4cd0e4:
    // 0x4cd0e4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4cd0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4cd0e8:
    // 0x4cd0e8: 0x3e00008  jr          $ra
label_4cd0ec:
    if (ctx->pc == 0x4CD0ECu) {
        ctx->pc = 0x4CD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD0E8u;
        // 0x4cd0ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD0F0u;
        goto label_fallthrough_0x4cd0e8;
    }
    ctx->pc = 0x4CD0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD0E8u;
        // 0x4cd0ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4cd0e8:
    ctx->pc = 0x4CD0F0u;
}

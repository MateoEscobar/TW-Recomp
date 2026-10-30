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

// Function: sub_0047DF38
// Address: 0x47df38 - 0x47e0c0
void sub_0047DF38_0x47df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047DF38_0x47df38");
#endif

    switch (ctx->pc) {
        case 0x47df38u: goto label_47df38;
        case 0x47df3cu: goto label_47df3c;
        case 0x47df40u: goto label_47df40;
        case 0x47df44u: goto label_47df44;
        case 0x47df48u: goto label_47df48;
        case 0x47df4cu: goto label_47df4c;
        case 0x47df50u: goto label_47df50;
        case 0x47df54u: goto label_47df54;
        case 0x47df58u: goto label_47df58;
        case 0x47df5cu: goto label_47df5c;
        case 0x47df60u: goto label_47df60;
        case 0x47df64u: goto label_47df64;
        case 0x47df68u: goto label_47df68;
        case 0x47df6cu: goto label_47df6c;
        case 0x47df70u: goto label_47df70;
        case 0x47df74u: goto label_47df74;
        case 0x47df78u: goto label_47df78;
        case 0x47df7cu: goto label_47df7c;
        case 0x47df80u: goto label_47df80;
        case 0x47df84u: goto label_47df84;
        case 0x47df88u: goto label_47df88;
        case 0x47df8cu: goto label_47df8c;
        case 0x47df90u: goto label_47df90;
        case 0x47df94u: goto label_47df94;
        case 0x47df98u: goto label_47df98;
        case 0x47df9cu: goto label_47df9c;
        case 0x47dfa0u: goto label_47dfa0;
        case 0x47dfa4u: goto label_47dfa4;
        case 0x47dfa8u: goto label_47dfa8;
        case 0x47dfacu: goto label_47dfac;
        case 0x47dfb0u: goto label_47dfb0;
        case 0x47dfb4u: goto label_47dfb4;
        case 0x47dfb8u: goto label_47dfb8;
        case 0x47dfbcu: goto label_47dfbc;
        case 0x47dfc0u: goto label_47dfc0;
        case 0x47dfc4u: goto label_47dfc4;
        case 0x47dfc8u: goto label_47dfc8;
        case 0x47dfccu: goto label_47dfcc;
        case 0x47dfd0u: goto label_47dfd0;
        case 0x47dfd4u: goto label_47dfd4;
        case 0x47dfd8u: goto label_47dfd8;
        case 0x47dfdcu: goto label_47dfdc;
        case 0x47dfe0u: goto label_47dfe0;
        case 0x47dfe4u: goto label_47dfe4;
        case 0x47dfe8u: goto label_47dfe8;
        case 0x47dfecu: goto label_47dfec;
        case 0x47dff0u: goto label_47dff0;
        case 0x47dff4u: goto label_47dff4;
        case 0x47dff8u: goto label_47dff8;
        case 0x47dffcu: goto label_47dffc;
        case 0x47e000u: goto label_47e000;
        case 0x47e004u: goto label_47e004;
        case 0x47e008u: goto label_47e008;
        case 0x47e00cu: goto label_47e00c;
        case 0x47e010u: goto label_47e010;
        case 0x47e014u: goto label_47e014;
        case 0x47e018u: goto label_47e018;
        case 0x47e01cu: goto label_47e01c;
        case 0x47e020u: goto label_47e020;
        case 0x47e024u: goto label_47e024;
        case 0x47e028u: goto label_47e028;
        case 0x47e02cu: goto label_47e02c;
        case 0x47e030u: goto label_47e030;
        case 0x47e034u: goto label_47e034;
        case 0x47e038u: goto label_47e038;
        case 0x47e03cu: goto label_47e03c;
        case 0x47e040u: goto label_47e040;
        case 0x47e044u: goto label_47e044;
        case 0x47e048u: goto label_47e048;
        case 0x47e04cu: goto label_47e04c;
        case 0x47e050u: goto label_47e050;
        case 0x47e054u: goto label_47e054;
        case 0x47e058u: goto label_47e058;
        case 0x47e05cu: goto label_47e05c;
        case 0x47e060u: goto label_47e060;
        case 0x47e064u: goto label_47e064;
        case 0x47e068u: goto label_47e068;
        case 0x47e06cu: goto label_47e06c;
        case 0x47e070u: goto label_47e070;
        case 0x47e074u: goto label_47e074;
        case 0x47e078u: goto label_47e078;
        case 0x47e07cu: goto label_47e07c;
        case 0x47e080u: goto label_47e080;
        case 0x47e084u: goto label_47e084;
        case 0x47e088u: goto label_47e088;
        case 0x47e08cu: goto label_47e08c;
        case 0x47e090u: goto label_47e090;
        case 0x47e094u: goto label_47e094;
        case 0x47e098u: goto label_47e098;
        case 0x47e09cu: goto label_47e09c;
        case 0x47e0a0u: goto label_47e0a0;
        case 0x47e0a4u: goto label_47e0a4;
        case 0x47e0a8u: goto label_47e0a8;
        case 0x47e0acu: goto label_47e0ac;
        case 0x47e0b0u: goto label_47e0b0;
        case 0x47e0b4u: goto label_47e0b4;
        case 0x47e0b8u: goto label_47e0b8;
        case 0x47e0bcu: goto label_47e0bc;
        default: break;
    }

    ctx->pc = 0x47df38u;

label_47df38:
    // 0x47df38: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x47df38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_47df3c:
    // 0x47df3c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x47df3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_47df40:
    // 0x47df40: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x47df40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_47df44:
    // 0x47df44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x47df44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47df48:
    // 0x47df48: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x47df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_47df4c:
    // 0x47df4c: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x47df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_47df50:
    // 0x47df50: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x47df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_47df54:
    // 0x47df54: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x47df54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_47df58:
    // 0x47df58: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x47df58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_47df5c:
    // 0x47df5c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x47df5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_47df60:
    // 0x47df60: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x47df60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_47df64:
    // 0x47df64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x47df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_47df68:
    // 0x47df68: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x47df68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_47df6c:
    // 0x47df6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47df6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_47df70:
    // 0x47df70: 0x8eb60008  lw          $s6, 0x8($s5)
    ctx->pc = 0x47df70u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_47df74:
    // 0x47df74: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x47df74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_47df78:
    // 0x47df78: 0x8eb30010  lw          $s3, 0x10($s5)
    ctx->pc = 0x47df78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_47df7c:
    // 0x47df7c: 0x12620043  beq         $s3, $v0, . + 4 + (0x43 << 2)
label_47df80:
    if (ctx->pc == 0x47DF80u) {
        ctx->pc = 0x47DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF7Cu;
        // 0x47df80: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DF84u;
        goto label_47df84;
    }
    ctx->pc = 0x47DF7Cu;
    {
        const bool branch_taken_0x47df7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x47DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF7Cu;
        // 0x47df80: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47df7c) {
            ctx->pc = 0x47E08Cu;
            goto label_47e08c;
        }
    }
    ctx->pc = 0x47DF84u;
label_47df84:
    // 0x47df84: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47df84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47df88:
    // 0x47df88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x47df88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_47df8c:
    // 0x47df8c: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x47df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_47df90:
    // 0x47df90: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x47df90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_47df94:
    // 0x47df94: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x47df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_47df98:
    // 0x47df98: 0x40f809  jalr        $v0
label_47df9c:
    if (ctx->pc == 0x47DF9Cu) {
        ctx->pc = 0x47DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF98u;
        // 0x47df9c: 0x26700008  addiu       $s0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DFA0u;
        goto label_47dfa0;
    }
    ctx->pc = 0x47DF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47DFA0u);
        ctx->pc = 0x47DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF98u;
        // 0x47df9c: 0x26700008  addiu       $s0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DF98u, 0x47DFA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47DFA0u;
label_47dfa0:
    // 0x47dfa0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47dfa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47dfa4:
    // 0x47dfa4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_47dfa8:
    if (ctx->pc == 0x47DFA8u) {
        ctx->pc = 0x47DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DFA4u;
        // 0x47dfa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DFACu;
        goto label_47dfac;
    }
    ctx->pc = 0x47DFA4u;
    {
        const bool branch_taken_0x47dfa4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DFA4u;
        // 0x47dfa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dfa4) {
            ctx->pc = 0x47DFB4u;
            goto label_47dfb4;
        }
    }
    ctx->pc = 0x47DFACu;
label_47dfac:
    // 0x47dfac: 0x10000038  b           . + 4 + (0x38 << 2)
label_47dfb0:
    if (ctx->pc == 0x47DFB0u) {
        ctx->pc = 0x47DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DFACu;
        // 0x47dfb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DFB4u;
        goto label_47dfb4;
    }
    ctx->pc = 0x47DFACu;
    {
        const bool branch_taken_0x47dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DFACu;
        // 0x47dfb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dfac) {
            ctx->pc = 0x47E090u;
            goto label_47e090;
        }
    }
    ctx->pc = 0x47DFB4u;
label_47dfb4:
    // 0x47dfb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47dfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47dfb8:
    // 0x47dfb8: 0xc10c190  jal         func_430640
label_47dfbc:
    if (ctx->pc == 0x47DFBCu) {
        ctx->pc = 0x47DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DFB8u;
        // 0x47dfbc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DFC0u;
        goto label_47dfc0;
    }
    ctx->pc = 0x47DFB8u;
    SET_GPR_U32(ctx, 31, 0x47DFC0u);
    ctx->pc = 0x47DFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47DFB8u;
    // 0x47dfbc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x47DFB8u, 0x47DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DFC0u;
label_47dfc0:
    // 0x47dfc0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x47dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47dfc4:
    // 0x47dfc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x47dfc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47dfc8:
    // 0x47dfc8: 0x12c00027  beqz        $s6, . + 4 + (0x27 << 2)
label_47dfcc:
    if (ctx->pc == 0x47DFCCu) {
        ctx->pc = 0x47DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DFC8u;
        // 0x47dfcc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DFD0u;
        goto label_47dfd0;
    }
    ctx->pc = 0x47DFC8u;
    {
        const bool branch_taken_0x47dfc8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DFC8u;
        // 0x47dfcc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dfc8) {
            ctx->pc = 0x47E068u;
            goto label_47e068;
        }
    }
    ctx->pc = 0x47DFD0u;
label_47dfd0:
    // 0x47dfd0: 0x26c70008  addiu       $a3, $s6, 0x8
    ctx->pc = 0x47dfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_47dfd4:
    // 0x47dfd4: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x47dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_47dfd8:
    // 0x47dfd8: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x47dfd8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47dfdc:
    // 0x47dfdc: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_47dfe0:
    if (ctx->pc == 0x47DFE0u) {
        ctx->pc = 0x47DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DFDCu;
        // 0x47dfe0: 0x247e0001  addiu       $fp, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DFE4u;
        goto label_47dfe4;
    }
    ctx->pc = 0x47DFDCu;
    {
        const bool branch_taken_0x47dfdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DFDCu;
        // 0x47dfe0: 0x247e0001  addiu       $fp, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dfdc) {
            ctx->pc = 0x47E058u;
            goto label_47e058;
        }
    }
    ctx->pc = 0x47DFE4u;
label_47dfe4:
    // 0x47dfe4: 0x3b8c0  sll         $s7, $v1, 3
    ctx->pc = 0x47dfe4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47dfe8:
    // 0x47dfe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47dfe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47dfec:
    // 0x47dfec: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x47dfecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_47dff0:
    // 0x47dff0: 0x267a021  addu        $s4, $s3, $a3
    ctx->pc = 0x47dff0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_47dff4:
    // 0x47dff4: 0x2061007  srav        $v0, $a2, $s0
    ctx->pc = 0x47dff4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
label_47dff8:
    // 0x47dff8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47dffc:
    // 0x47dffc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x47dffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_47e000:
    // 0x47e000: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_47e004:
    if (ctx->pc == 0x47E004u) {
        ctx->pc = 0x47E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E000u;
        // 0x47e004: 0x2f01821  addu        $v1, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E008u;
        goto label_47e008;
    }
    ctx->pc = 0x47E000u;
    {
        const bool branch_taken_0x47e000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E000u;
        // 0x47e004: 0x2f01821  addu        $v1, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e000) {
            ctx->pc = 0x47E048u;
            goto label_47e048;
        }
    }
    ctx->pc = 0x47E008u;
label_47e008:
    // 0x47e008: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x47e008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_47e00c:
    // 0x47e00c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x47e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_47e010:
    // 0x47e010: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x47e010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_47e014:
    // 0x47e014: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x47e014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_47e018:
    // 0x47e018: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x47e018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_47e01c:
    // 0x47e01c: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x47e01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_47e020:
    // 0x47e020: 0x21023  negu        $v0, $v0
    ctx->pc = 0x47e020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_47e024:
    // 0x47e024: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x47e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_47e028:
    // 0x47e028: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x47e028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_47e02c:
    // 0x47e02c: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x47e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_47e030:
    // 0x47e030: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x47e030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_47e034:
    // 0x47e034: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x47e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_47e038:
    // 0x47e038: 0x60f809  jalr        $v1
label_47e03c:
    if (ctx->pc == 0x47E03Cu) {
        ctx->pc = 0x47E040u;
        goto label_47e040;
    }
    ctx->pc = 0x47E038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x47E040u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E038u, 0x47E040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E040u;
label_47e040:
    // 0x47e040: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x47e040u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47e044:
    // 0x47e044: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x47e044u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47e048:
    // 0x47e048: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x47e048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47e04c:
    // 0x47e04c: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x47e04cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_47e050:
    // 0x47e050: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_47e054:
    if (ctx->pc == 0x47E054u) {
        ctx->pc = 0x47E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E050u;
        // 0x47e054: 0x2061007  srav        $v0, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E058u;
        goto label_47e058;
    }
    ctx->pc = 0x47E050u;
    {
        const bool branch_taken_0x47e050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E050u;
        // 0x47e054: 0x2061007  srav        $v0, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e050) {
            ctx->pc = 0x47DFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47dff8;
        }
    }
    ctx->pc = 0x47E058u;
label_47e058:
    // 0x47e058: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x47e058u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_47e05c:
    // 0x47e05c: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x47e05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_47e060:
    // 0x47e060: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_47e064:
    if (ctx->pc == 0x47E064u) {
        ctx->pc = 0x47E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E060u;
        // 0x47e064: 0x2431021  addu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E068u;
        goto label_47e068;
    }
    ctx->pc = 0x47E060u;
    {
        const bool branch_taken_0x47e060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E060u;
        // 0x47e064: 0x2431021  addu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e060) {
            ctx->pc = 0x47DFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47dfd8;
        }
    }
    ctx->pc = 0x47E068u;
label_47e068:
    // 0x47e068: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47e068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47e06c:
    // 0x47e06c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47e070:
    // 0x47e070: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x47e070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_47e074:
    // 0x47e074: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x47e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_47e078:
    // 0x47e078: 0x40f809  jalr        $v0
label_47e07c:
    if (ctx->pc == 0x47E07Cu) {
        ctx->pc = 0x47E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E078u;
        // 0x47e07c: 0x8fb3000c  lw          $s3, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E080u;
        goto label_47e080;
    }
    ctx->pc = 0x47E078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E080u);
        ctx->pc = 0x47E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E078u;
        // 0x47e07c: 0x8fb3000c  lw          $s3, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E078u, 0x47E080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E080u;
label_47e080:
    // 0x47e080: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x47e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_47e084:
    // 0x47e084: 0x1662ffc0  bne         $s3, $v0, . + 4 + (-0x40 << 2)
label_47e088:
    if (ctx->pc == 0x47E088u) {
        ctx->pc = 0x47E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E084u;
        // 0x47e088: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E08Cu;
        goto label_47e08c;
    }
    ctx->pc = 0x47E084u;
    {
        const bool branch_taken_0x47e084 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x47E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E084u;
        // 0x47e088: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e084) {
            ctx->pc = 0x47DF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47df88;
        }
    }
    ctx->pc = 0x47E08Cu;
label_47e08c:
    // 0x47e08c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x47e08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_47e090:
    // 0x47e090: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x47e090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_47e094:
    // 0x47e094: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x47e094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_47e098:
    // 0x47e098: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x47e098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_47e09c:
    // 0x47e09c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x47e09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_47e0a0:
    // 0x47e0a0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x47e0a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47e0a4:
    // 0x47e0a4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x47e0a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47e0a8:
    // 0x47e0a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47e0a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47e0ac:
    // 0x47e0ac: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x47e0acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47e0b0:
    // 0x47e0b0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x47e0b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47e0b4:
    // 0x47e0b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47e0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_47e0b8:
    // 0x47e0b8: 0x3e00008  jr          $ra
label_47e0bc:
    if (ctx->pc == 0x47E0BCu) {
        ctx->pc = 0x47E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E0B8u;
        // 0x47e0bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E0C0u;
        goto label_fallthrough_0x47e0b8;
    }
    ctx->pc = 0x47E0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E0B8u;
        // 0x47e0bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47e0b8:
    ctx->pc = 0x47E0C0u;
}

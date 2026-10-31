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

// Function: sub_0016DF68
// Address: 0x16df68 - 0x16e0f0
void sub_0016DF68_0x16df68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DF68_0x16df68");
#endif

    switch (ctx->pc) {
        case 0x16dfe0u: goto label_16dfe0;
        case 0x16dfe8u: goto label_16dfe8;
        case 0x16e010u: goto label_16e010;
        case 0x16e048u: goto label_16e048;
        case 0x16e0acu: goto label_16e0ac;
        default: break;
    }

    ctx->pc = 0x16df68u;

    // 0x16df68: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x16df68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x16df6c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x16df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x16df70: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x16df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x16df74: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x16df74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x16df78: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x16df78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x16df7c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x16df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x16df80: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x16df80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x16df84: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x16df84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x16df88: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x16df88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x16df8c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x16df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x16df90: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x16df90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x16df94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16df94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16df98: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x16df98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x16df9c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16dfa0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x16dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x16dfa4: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x16dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x16dfa8: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x16dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x16dfac: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x16dfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x16dfb0: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x16dfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x16dfb4: 0x10c00040  beqz        $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x16DFB4u;
    {
        const bool branch_taken_0x16dfb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFB4u;
        // 0x16dfb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfb4) {
            ctx->pc = 0x16E0B8u;
            goto label_16e0b8;
        }
    }
    ctx->pc = 0x16DFBCu;
    // 0x16dfbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x16dfc0: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x16dfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x16dfc4: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x16dfc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x16dfc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16dfc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16dfcc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x16dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x16dfd0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x16dfd0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16dfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfd8: 0x24750270  addiu       $s5, $v1, 0x270
    ctx->pc = 0x16dfd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 624));
    // 0x16dfdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16dfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16dfe0:
    // 0x16dfe0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16DFE0u;
    SET_GPR_U32(ctx, 31, 0x16DFE8u);
    ctx->pc = 0x16DFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFE0u;
    // 0x16dfe4: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16DFE0u, 0x16DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFE8u;
label_16dfe8:
    // 0x16dfe8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16dfe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfec: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x16dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16dff0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x16DFF0u;
    {
        const bool branch_taken_0x16dff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFF0u;
        // 0x16dff4: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dff0) {
            ctx->pc = 0x16E074u;
            goto label_16e074;
        }
    }
    ctx->pc = 0x16DFF8u;
    // 0x16dff8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16dff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dffc: 0x24170130  addiu       $s7, $zero, 0x130
    ctx->pc = 0x16dffcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x16e000: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x16e000u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16e004: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x16e004u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16e008: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x16e008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x16e00c: 0x0  nop
    ctx->pc = 0x16e00cu;
    // NOP
label_16e010:
    // 0x16e010: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16e010u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16e014: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x16e014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16e018: 0x24420640  addiu       $v0, $v0, 0x640
    ctx->pc = 0x16e018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x16e01c: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x16e01cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16e020: 0x86020052  lh          $v0, 0x52($s0)
    ctx->pc = 0x16e020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x16e024: 0x50560004  beql        $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E024u;
    {
        const bool branch_taken_0x16e024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x16e024) {
            ctx->pc = 0x16E028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E024u;
            // 0x16e028: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E038u;
            goto label_16e038;
        }
    }
    ctx->pc = 0x16E02Cu;
    // 0x16e02c: 0x5452000d  bnel        $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x16E02Cu;
    {
        const bool branch_taken_0x16e02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x16e02c) {
            ctx->pc = 0x16E030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E02Cu;
            // 0x16e030: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E064u;
            goto label_16e064;
        }
    }
    ctx->pc = 0x16E034u;
    // 0x16e034: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x16e034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_16e038:
    // 0x16e038: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x16E038u;
    {
        const bool branch_taken_0x16e038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x16E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E038u;
        // 0x16e03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e038) {
            ctx->pc = 0x16E060u;
            goto label_16e060;
        }
    }
    ctx->pc = 0x16E040u;
    // 0x16e040: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x16E040u;
    SET_GPR_U32(ctx, 31, 0x16E048u);
    ctx->pc = 0x16E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E040u;
    // 0x16e044: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x16E040u, 0x16E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E048u;
label_16e048:
    // 0x16e048: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x16e048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e04c: 0x0  nop
    ctx->pc = 0x16e04cu;
    // NOP
    // 0x16e050: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x16E050u;
    {
        const bool branch_taken_0x16e050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e050) {
            ctx->pc = 0x16E054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E050u;
            // 0x16e054: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E064u;
            goto label_16e064;
        }
    }
    ctx->pc = 0x16E058u;
    // 0x16e058: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x16e058u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e05c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16e05cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16e060:
    // 0x16e060: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16e060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16e064:
    // 0x16e064: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x16e064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x16e068: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x16E068u;
    {
        const bool branch_taken_0x16e068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E068u;
        // 0x16e06c: 0x111400  sll         $v0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e068) {
            ctx->pc = 0x16E010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e010;
        }
    }
    ctx->pc = 0x16E070u;
    // 0x16e070: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x16e070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
label_16e074:
    // 0x16e074: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x16e074u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16e078: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x16e078u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16e07c: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x16E07Cu;
    {
        const bool branch_taken_0x16e07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E07Cu;
        // 0x16e080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e07c) {
            ctx->pc = 0x16DFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dfe0;
        }
    }
    ctx->pc = 0x16E084u;
    // 0x16e084: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x16E084u;
    {
        const bool branch_taken_0x16e084 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E084u;
        // 0x16e088: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e084) {
            ctx->pc = 0x16E0B4u;
            goto label_16e0b4;
        }
    }
    ctx->pc = 0x16E08Cu;
    // 0x16e08c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x16e08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e090: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x16e090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16e094: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x16e094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e098: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x16e098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16e09c: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x16e09cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e0a0: 0x8faa0014  lw          $t2, 0x14($sp)
    ctx->pc = 0x16e0a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16e0a4: 0xc05b71c  jal         func_16DC70
    ctx->pc = 0x16E0A4u;
    SET_GPR_U32(ctx, 31, 0x16E0ACu);
    ctx->pc = 0x16E0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0A4u;
    // 0x16e0a8: 0x8fab0018  lw          $t3, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DC70u, 0x16E0A4u, 0x16E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0ACu;
label_16e0ac:
    // 0x16e0ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E0ACu;
    {
        const bool branch_taken_0x16e0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0ACu;
        // 0x16e0b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0ac) {
            ctx->pc = 0x16E0B8u;
            goto label_16e0b8;
        }
    }
    ctx->pc = 0x16E0B4u;
label_16e0b4:
    // 0x16e0b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16e0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e0b8:
    // 0x16e0b8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x16e0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16e0bc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x16e0bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16e0c0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x16e0c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16e0c4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x16e0c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16e0c8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x16e0c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16e0cc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16e0ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16e0d0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x16e0d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16e0d4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x16e0d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e0d8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x16e0d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e0dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16e0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e0e0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x16e0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16e0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x16E0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0E4u;
        // 0x16e0e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E0ECu;
    // 0x16e0ec: 0x0  nop
    ctx->pc = 0x16e0ecu;
    // NOP
    ctx->pc = 0x16e0f0u;
}

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

// Function: sub_002B7C18
// Address: 0x2b7c18 - 0x2b7d80
void sub_002B7C18_0x2b7c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7C18_0x2b7c18");
#endif

    switch (ctx->pc) {
        case 0x2b7c88u: goto label_2b7c88;
        case 0x2b7ca0u: goto label_2b7ca0;
        case 0x2b7cbcu: goto label_2b7cbc;
        case 0x2b7cecu: goto label_2b7cec;
        case 0x2b7d28u: goto label_2b7d28;
        case 0x2b7d44u: goto label_2b7d44;
        case 0x2b7d5cu: goto label_2b7d5c;
        default: break;
    }

    ctx->pc = 0x2b7c18u;

    // 0x2b7c18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b7c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b7c1c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b7c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b7c20: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b7c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b7c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b7c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b7c2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b7c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b7c30: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2b7c30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b7c34: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2b7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b7c38: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b7c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b7c3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b7c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b7c40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7C40u;
    {
        const bool branch_taken_0x2b7c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C40u;
        // 0x2b7c44: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c40) {
            ctx->pc = 0x2B7C50u;
            goto label_2b7c50;
        }
    }
    ctx->pc = 0x2B7C48u;
    // 0x2b7c48: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2B7C48u;
    {
        const bool branch_taken_0x2b7c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C48u;
        // 0x2b7c4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c48) {
            ctx->pc = 0x2B7D60u;
            goto label_2b7d60;
        }
    }
    ctx->pc = 0x2B7C50u;
label_2b7c50:
    // 0x2b7c50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7c54: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2b7c54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2b7c58: 0x1c400041  bgtz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2B7C58u;
    {
        const bool branch_taken_0x2b7c58 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B7C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C58u;
        // 0x2b7c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c58) {
            ctx->pc = 0x2B7D60u;
            goto label_2b7d60;
        }
    }
    ctx->pc = 0x2B7C60u;
    // 0x2b7c60: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2b7c60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b7c64: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2b7c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2b7c68: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2b7c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x2b7c6c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b7c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c70: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2b7c70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2b7c74: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b7c78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b7c7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b7c7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7c80: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2B7C80u;
    SET_GPR_U32(ctx, 31, 0x2B7C88u);
    ctx->pc = 0x2B7C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C80u;
    // 0x2b7c84: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2B7C80u, 0x2B7C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C88u;
label_2b7c88:
    // 0x2b7c88: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b7c88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7c8c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2b7c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b7c90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b7c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c98: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2B7C98u;
    SET_GPR_U32(ctx, 31, 0x2B7CA0u);
    ctx->pc = 0x2B7C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C98u;
    // 0x2b7c9c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B7C98u, 0x2B7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CA0u;
label_2b7ca0:
    // 0x2b7ca0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2b7ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7ca4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b7ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7ca8: 0x0  nop
    ctx->pc = 0x2b7ca8u;
    // NOP
    // 0x2b7cac: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x2B7CACu;
    {
        const bool branch_taken_0x2b7cac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b7cac) {
            ctx->pc = 0x2B7CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7CACu;
            // 0x2b7cb0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7CF4u;
            goto label_2b7cf4;
        }
    }
    ctx->pc = 0x2B7CB4u;
    // 0x2b7cb4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B7CB4u;
    SET_GPR_U32(ctx, 31, 0x2B7CBCu);
    ctx->pc = 0x2B7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7CB4u;
    // 0x2b7cb8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B7CB4u, 0x2B7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CBCu;
label_2b7cbc:
    // 0x2b7cbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b7cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7cc0: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B7CC0u;
    {
        const bool branch_taken_0x2b7cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CC0u;
        // 0x2b7cc4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cc0) {
            ctx->pc = 0x2B7D5Cu;
            goto label_2b7d5c;
        }
    }
    ctx->pc = 0x2B7CC8u;
    // 0x2b7cc8: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x2b7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b7ccc: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b7cccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2b7cd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b7cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7cd4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b7cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7cd8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2b7cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7cdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b7cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ce0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b7ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b7ce4: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2B7CE4u;
    SET_GPR_U32(ctx, 31, 0x2B7CECu);
    ctx->pc = 0x2B7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7CE4u;
    // 0x2b7ce8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B7CE4u, 0x2B7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CECu;
label_2b7cec:
    // 0x2b7cec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B7CECu;
    {
        const bool branch_taken_0x2b7cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CECu;
        // 0x2b7cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cec) {
            ctx->pc = 0x2B7D60u;
            goto label_2b7d60;
        }
    }
    ctx->pc = 0x2B7CF4u;
label_2b7cf4:
    // 0x2b7cf4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b7cf8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B7CF8u;
    {
        const bool branch_taken_0x2b7cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7cf8) {
            ctx->pc = 0x2B7CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7CF8u;
            // 0x2b7cfc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7D00u;
            goto label_2b7d00;
        }
    }
    ctx->pc = 0x2B7D00u;
label_2b7d00:
    // 0x2b7d00: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2b7d00u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b7d04: 0x1810  mfhi        $v1
    ctx->pc = 0x2b7d04u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b7d08: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B7D08u;
    {
        const bool branch_taken_0x2b7d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D08u;
        // 0x2b7d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d08) {
            ctx->pc = 0x2B7D60u;
            goto label_2b7d60;
        }
    }
    ctx->pc = 0x2B7D10u;
    // 0x2b7d10: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2b7d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b7d14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b7d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b7d18: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B7D18u;
    {
        const bool branch_taken_0x2b7d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D18u;
        // 0x2b7d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d18) {
            ctx->pc = 0x2B7D60u;
            goto label_2b7d60;
        }
    }
    ctx->pc = 0x2B7D20u;
    // 0x2b7d20: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B7D20u;
    SET_GPR_U32(ctx, 31, 0x2B7D28u);
    ctx->pc = 0x2B7D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D20u;
    // 0x2b7d24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B7D20u, 0x2B7D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D28u;
label_2b7d28:
    // 0x2b7d28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b7d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d2c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B7D2Cu;
    {
        const bool branch_taken_0x2b7d2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D2Cu;
        // 0x2b7d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d2c) {
            ctx->pc = 0x2B7D60u;
            goto label_2b7d60;
        }
    }
    ctx->pc = 0x2B7D34u;
    // 0x2b7d34: 0xc614001c  lwc1        $f20, 0x1C($s0)
    ctx->pc = 0x2b7d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b7d38: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b7d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b7d3c: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2B7D3Cu;
    SET_GPR_U32(ctx, 31, 0x2B7D44u);
    ctx->pc = 0x2B7D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D3Cu;
    // 0x2b7d40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2B7D3Cu, 0x2B7D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D44u;
label_2b7d44:
    // 0x2b7d44: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b7d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b7d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b7d4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b7d50: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2b7d50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2b7d54: 0xc0bf70a  jal         func_2FDC28
    ctx->pc = 0x2B7D54u;
    SET_GPR_U32(ctx, 31, 0x2B7D5Cu);
    ctx->pc = 0x2B7D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D54u;
    // 0x2b7d58: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2B7D54u, 0x2B7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D5Cu;
label_2b7d5c:
    // 0x2b7d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d60:
    // 0x2b7d60: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b7d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7d64: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b7d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7d68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b7d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7d6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b7d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7d70: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2b7d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b7d74: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D74u;
        // 0x2b7d78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7D7Cu;
    // 0x2b7d7c: 0x0  nop
    ctx->pc = 0x2b7d7cu;
    // NOP
    ctx->pc = 0x2b7d80u;
}

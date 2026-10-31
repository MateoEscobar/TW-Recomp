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

// Function: sub_00299B50
// Address: 0x299b50 - 0x299c98
void sub_00299B50_0x299b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299B50_0x299b50");
#endif

    switch (ctx->pc) {
        case 0x299ba0u: goto label_299ba0;
        case 0x299bf0u: goto label_299bf0;
        case 0x299c08u: goto label_299c08;
        default: break;
    }

    ctx->pc = 0x299b50u;

    // 0x299b50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x299b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x299b54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x299b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b58: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x299b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x299b5c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x299b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x299b60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x299b60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b64: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x299b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x299b68: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x299b68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b6c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x299b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x299b70: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x299b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x299b74: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x299b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x299b78: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x299b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x299b7c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x299b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x299b80: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x299b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x299b84: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x299b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x299b88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x299b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x299b8c: 0x10c00035  beqz        $a2, . + 4 + (0x35 << 2)
    ctx->pc = 0x299B8Cu;
    {
        const bool branch_taken_0x299b8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x299B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B8Cu;
        // 0x299b90: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b8c) {
            ctx->pc = 0x299C64u;
            goto label_299c64;
        }
    }
    ctx->pc = 0x299B94u;
    // 0x299b94: 0x26820068  addiu       $v0, $s4, 0x68
    ctx->pc = 0x299b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
    // 0x299b98: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x299b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x299b9c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x299b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_299ba0:
    // 0x299ba0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x299ba0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ba4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x299ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x299ba8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x299ba8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299bac: 0x12600028  beqz        $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x299BACu;
    {
        const bool branch_taken_0x299bac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x299BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BACu;
        // 0x299bb0: 0x24770001  addiu       $s7, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299bac) {
            ctx->pc = 0x299C50u;
            goto label_299c50;
        }
    }
    ctx->pc = 0x299BB4u;
    // 0x299bb4: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x299bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
    // 0x299bb8: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x299bb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x299bbc: 0xc4741810  lwc1        $f20, 0x1810($v1)
    ctx->pc = 0x299bbcu;
    { uint32_t bits = FAST_READ32(0x561810u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x299bc0: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x299bc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x299bc4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x299bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x299bc8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x299bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x299bcc: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x299bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x299bd0: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x299bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x299bd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x299bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299bd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x299bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bdc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x299bdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299be0: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x299BE0u;
    {
        const bool branch_taken_0x299be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BE0u;
        // 0x299be4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299be0) {
            ctx->pc = 0x299C34u;
            goto label_299c34;
        }
    }
    ctx->pc = 0x299BE8u;
    // 0x299be8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x299be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bec: 0x26900068  addiu       $s0, $s4, 0x68
    ctx->pc = 0x299becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
label_299bf0:
    // 0x299bf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x299bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299bf4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x299BF4u;
    {
        const bool branch_taken_0x299bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299bf4) {
            ctx->pc = 0x299BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299BF4u;
            // 0x299bf8: 0x8e820088  lw          $v0, 0x88($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299C20u;
            goto label_299c20;
        }
    }
    ctx->pc = 0x299BFCu;
    // 0x299bfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c00: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x299C00u;
    SET_GPR_U32(ctx, 31, 0x299C08u);
    ctx->pc = 0x299C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299C00u;
    // 0x299c04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x299C00u, 0x299C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299C08u;
label_299c08:
    // 0x299c08: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x299c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299c0c: 0x0  nop
    ctx->pc = 0x299c0cu;
    // NOP
    // 0x299c10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x299C10u;
    {
        const bool branch_taken_0x299c10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C10u;
        // 0x299c14: 0x8e820088  lw          $v0, 0x88($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c10) {
            ctx->pc = 0x299C20u;
            goto label_299c20;
        }
    }
    ctx->pc = 0x299C18u;
    // 0x299c18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x299c18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x299c1c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x299c1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_299c20:
    // 0x299c20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x299c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x299c24: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x299c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x299c28: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x299c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x299c2c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x299C2Cu;
    {
        const bool branch_taken_0x299c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C2Cu;
        // 0x299c30: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c2c) {
            ctx->pc = 0x299BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299bf0;
        }
    }
    ctx->pc = 0x299C34u;
label_299c34:
    // 0x299c34: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x299C34u;
    {
        const bool branch_taken_0x299c34 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x299C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C34u;
        // 0x299c38: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c34) {
            ctx->pc = 0x299C50u;
            goto label_299c50;
        }
    }
    ctx->pc = 0x299C3Cu;
    // 0x299c3c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x299c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x299c40: 0x2de1821  addu        $v1, $s6, $fp
    ctx->pc = 0x299c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x299c44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x299c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x299c48: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x299c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x299c4c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x299c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_299c50:
    // 0x299c50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c54: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x299c54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c58: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x299c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x299c5c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x299C5Cu;
    {
        const bool branch_taken_0x299c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C5Cu;
        // 0x299c60: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c5c) {
            ctx->pc = 0x299BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299ba0;
        }
    }
    ctx->pc = 0x299C64u;
label_299c64:
    // 0x299c64: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x299c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x299c68: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x299c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x299c6c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x299c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299c70: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x299c70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x299c74: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x299c74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x299c78: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x299c78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299c7c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x299c7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299c80: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x299c80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299c84: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x299c84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299c88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x299c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299c8c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x299c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x299c90: 0x3e00008  jr          $ra
    ctx->pc = 0x299C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C90u;
        // 0x299c94: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299C98u;
}

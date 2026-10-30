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

// Function: sub_002D4A80
// Address: 0x2d4a80 - 0x2d4c38
void sub_002D4A80_0x2d4a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4A80_0x2d4a80");
#endif

    switch (ctx->pc) {
        case 0x2d4a80u: goto label_2d4a80;
        case 0x2d4a84u: goto label_2d4a84;
        case 0x2d4a88u: goto label_2d4a88;
        case 0x2d4a8cu: goto label_2d4a8c;
        case 0x2d4a90u: goto label_2d4a90;
        case 0x2d4a94u: goto label_2d4a94;
        case 0x2d4a98u: goto label_2d4a98;
        case 0x2d4a9cu: goto label_2d4a9c;
        case 0x2d4aa0u: goto label_2d4aa0;
        case 0x2d4aa4u: goto label_2d4aa4;
        case 0x2d4aa8u: goto label_2d4aa8;
        case 0x2d4aacu: goto label_2d4aac;
        case 0x2d4ab0u: goto label_2d4ab0;
        case 0x2d4ab4u: goto label_2d4ab4;
        case 0x2d4ab8u: goto label_2d4ab8;
        case 0x2d4abcu: goto label_2d4abc;
        case 0x2d4ac0u: goto label_2d4ac0;
        case 0x2d4ac4u: goto label_2d4ac4;
        case 0x2d4ac8u: goto label_2d4ac8;
        case 0x2d4accu: goto label_2d4acc;
        case 0x2d4ad0u: goto label_2d4ad0;
        case 0x2d4ad4u: goto label_2d4ad4;
        case 0x2d4ad8u: goto label_2d4ad8;
        case 0x2d4adcu: goto label_2d4adc;
        case 0x2d4ae0u: goto label_2d4ae0;
        case 0x2d4ae4u: goto label_2d4ae4;
        case 0x2d4ae8u: goto label_2d4ae8;
        case 0x2d4aecu: goto label_2d4aec;
        case 0x2d4af0u: goto label_2d4af0;
        case 0x2d4af4u: goto label_2d4af4;
        case 0x2d4af8u: goto label_2d4af8;
        case 0x2d4afcu: goto label_2d4afc;
        case 0x2d4b00u: goto label_2d4b00;
        case 0x2d4b04u: goto label_2d4b04;
        case 0x2d4b08u: goto label_2d4b08;
        case 0x2d4b0cu: goto label_2d4b0c;
        case 0x2d4b10u: goto label_2d4b10;
        case 0x2d4b14u: goto label_2d4b14;
        case 0x2d4b18u: goto label_2d4b18;
        case 0x2d4b1cu: goto label_2d4b1c;
        case 0x2d4b20u: goto label_2d4b20;
        case 0x2d4b24u: goto label_2d4b24;
        case 0x2d4b28u: goto label_2d4b28;
        case 0x2d4b2cu: goto label_2d4b2c;
        case 0x2d4b30u: goto label_2d4b30;
        case 0x2d4b34u: goto label_2d4b34;
        case 0x2d4b38u: goto label_2d4b38;
        case 0x2d4b3cu: goto label_2d4b3c;
        case 0x2d4b40u: goto label_2d4b40;
        case 0x2d4b44u: goto label_2d4b44;
        case 0x2d4b48u: goto label_2d4b48;
        case 0x2d4b4cu: goto label_2d4b4c;
        case 0x2d4b50u: goto label_2d4b50;
        case 0x2d4b54u: goto label_2d4b54;
        case 0x2d4b58u: goto label_2d4b58;
        case 0x2d4b5cu: goto label_2d4b5c;
        case 0x2d4b60u: goto label_2d4b60;
        case 0x2d4b64u: goto label_2d4b64;
        case 0x2d4b68u: goto label_2d4b68;
        case 0x2d4b6cu: goto label_2d4b6c;
        case 0x2d4b70u: goto label_2d4b70;
        case 0x2d4b74u: goto label_2d4b74;
        case 0x2d4b78u: goto label_2d4b78;
        case 0x2d4b7cu: goto label_2d4b7c;
        case 0x2d4b80u: goto label_2d4b80;
        case 0x2d4b84u: goto label_2d4b84;
        case 0x2d4b88u: goto label_2d4b88;
        case 0x2d4b8cu: goto label_2d4b8c;
        case 0x2d4b90u: goto label_2d4b90;
        case 0x2d4b94u: goto label_2d4b94;
        case 0x2d4b98u: goto label_2d4b98;
        case 0x2d4b9cu: goto label_2d4b9c;
        case 0x2d4ba0u: goto label_2d4ba0;
        case 0x2d4ba4u: goto label_2d4ba4;
        case 0x2d4ba8u: goto label_2d4ba8;
        case 0x2d4bacu: goto label_2d4bac;
        case 0x2d4bb0u: goto label_2d4bb0;
        case 0x2d4bb4u: goto label_2d4bb4;
        case 0x2d4bb8u: goto label_2d4bb8;
        case 0x2d4bbcu: goto label_2d4bbc;
        case 0x2d4bc0u: goto label_2d4bc0;
        case 0x2d4bc4u: goto label_2d4bc4;
        case 0x2d4bc8u: goto label_2d4bc8;
        case 0x2d4bccu: goto label_2d4bcc;
        case 0x2d4bd0u: goto label_2d4bd0;
        case 0x2d4bd4u: goto label_2d4bd4;
        case 0x2d4bd8u: goto label_2d4bd8;
        case 0x2d4bdcu: goto label_2d4bdc;
        case 0x2d4be0u: goto label_2d4be0;
        case 0x2d4be4u: goto label_2d4be4;
        case 0x2d4be8u: goto label_2d4be8;
        case 0x2d4becu: goto label_2d4bec;
        case 0x2d4bf0u: goto label_2d4bf0;
        case 0x2d4bf4u: goto label_2d4bf4;
        case 0x2d4bf8u: goto label_2d4bf8;
        case 0x2d4bfcu: goto label_2d4bfc;
        case 0x2d4c00u: goto label_2d4c00;
        case 0x2d4c04u: goto label_2d4c04;
        case 0x2d4c08u: goto label_2d4c08;
        case 0x2d4c0cu: goto label_2d4c0c;
        case 0x2d4c10u: goto label_2d4c10;
        case 0x2d4c14u: goto label_2d4c14;
        case 0x2d4c18u: goto label_2d4c18;
        case 0x2d4c1cu: goto label_2d4c1c;
        case 0x2d4c20u: goto label_2d4c20;
        case 0x2d4c24u: goto label_2d4c24;
        case 0x2d4c28u: goto label_2d4c28;
        case 0x2d4c2cu: goto label_2d4c2c;
        case 0x2d4c30u: goto label_2d4c30;
        case 0x2d4c34u: goto label_2d4c34;
        default: break;
    }

    ctx->pc = 0x2d4a80u;

label_2d4a80:
    // 0x2d4a80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d4a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2d4a84:
    // 0x2d4a84: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d4a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2d4a88:
    // 0x2d4a88: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2d4a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2d4a8c:
    // 0x2d4a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d4a90:
    // 0x2d4a90: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d4a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2d4a94:
    // 0x2d4a94: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d4a94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d4a98:
    // 0x2d4a98: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d4a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2d4a9c:
    // 0x2d4a9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d4a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2d4aa0:
    // 0x2d4aa0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d4aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2d4aa4:
    // 0x2d4aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d4aa8:
    // 0x2d4aa8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2d4aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2d4aac:
    // 0x2d4aac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d4ab0:
    // 0x2d4ab0: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d4ab0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2d4ab4:
    // 0x2d4ab4: 0x1c400055  bgtz        $v0, . + 4 + (0x55 << 2)
label_2d4ab8:
    if (ctx->pc == 0x2D4AB8u) {
        ctx->pc = 0x2D4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4AB4u;
        // 0x2d4ab8: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4ABCu;
        goto label_2d4abc;
    }
    ctx->pc = 0x2D4AB4u;
    {
        const bool branch_taken_0x2d4ab4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4AB4u;
        // 0x2d4ab8: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ab4) {
            ctx->pc = 0x2D4C0Cu;
            goto label_2d4c0c;
        }
    }
    ctx->pc = 0x2D4ABCu;
label_2d4abc:
    // 0x2d4abc: 0xc08a08a  jal         func_228228
label_2d4ac0:
    if (ctx->pc == 0x2D4AC0u) {
        ctx->pc = 0x2D4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4ABCu;
        // 0x2d4ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4AC4u;
        goto label_2d4ac4;
    }
    ctx->pc = 0x2D4ABCu;
    SET_GPR_U32(ctx, 31, 0x2D4AC4u);
    ctx->pc = 0x2D4AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4ABCu;
    // 0x2d4ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2D4ABCu, 0x2D4AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AC4u;
label_2d4ac4:
    // 0x2d4ac4: 0x10550051  beq         $v0, $s5, . + 4 + (0x51 << 2)
label_2d4ac8:
    if (ctx->pc == 0x2D4AC8u) {
        ctx->pc = 0x2D4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4AC4u;
        // 0x2d4ac8: 0x26510090  addiu       $s1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4ACCu;
        goto label_2d4acc;
    }
    ctx->pc = 0x2D4AC4u;
    {
        const bool branch_taken_0x2d4ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2D4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4AC4u;
        // 0x2d4ac8: 0x26510090  addiu       $s1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ac4) {
            ctx->pc = 0x2D4C0Cu;
            goto label_2d4c0c;
        }
    }
    ctx->pc = 0x2D4ACCu;
label_2d4acc:
    // 0x2d4acc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d4accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2d4ad0:
    // 0x2d4ad0: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2d4ad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2d4ad4:
    // 0x2d4ad4: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2d4ad4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2d4ad8:
    // 0x2d4ad8: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x2d4ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2d4adc:
    // 0x2d4adc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d4adcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d4ae0:
    // 0x2d4ae0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d4ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d4ae4:
    // 0x2d4ae4: 0xc0cdb38  jal         func_336CE0
label_2d4ae8:
    if (ctx->pc == 0x2D4AE8u) {
        ctx->pc = 0x2D4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4AE4u;
        // 0x2d4ae8: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4AECu;
        goto label_2d4aec;
    }
    ctx->pc = 0x2D4AE4u;
    SET_GPR_U32(ctx, 31, 0x2D4AECu);
    ctx->pc = 0x2D4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4AE4u;
    // 0x2d4ae8: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D4AE4u, 0x2D4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AECu;
label_2d4aec:
    // 0x2d4aec: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x2d4aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
label_2d4af0:
    // 0x2d4af0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d4af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d4af4:
    // 0x2d4af4: 0x0  nop
    ctx->pc = 0x2d4af4u;
    // NOP
label_2d4af8:
    // 0x2d4af8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d4af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d4afc:
    // 0x2d4afc: 0x0  nop
    ctx->pc = 0x2d4afcu;
    // NOP
label_2d4b00:
    // 0x2d4b00: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_2d4b04:
    if (ctx->pc == 0x2D4B04u) {
        ctx->pc = 0x2D4B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B00u;
        // 0x2d4b04: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4B08u;
        goto label_2d4b08;
    }
    ctx->pc = 0x2D4B00u;
    {
        const bool branch_taken_0x2d4b00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4b00) {
            ctx->pc = 0x2D4B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4B00u;
            // 0x2d4b04: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4B4Cu;
            goto label_2d4b4c;
        }
    }
    ctx->pc = 0x2D4B08u;
label_2d4b08:
    // 0x2d4b08: 0xc0a367c  jal         func_28D9F0
label_2d4b0c:
    if (ctx->pc == 0x2D4B0Cu) {
        ctx->pc = 0x2D4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B08u;
        // 0x2d4b0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4B10u;
        goto label_2d4b10;
    }
    ctx->pc = 0x2D4B08u;
    SET_GPR_U32(ctx, 31, 0x2D4B10u);
    ctx->pc = 0x2D4B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4B08u;
    // 0x2d4b0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D4B08u, 0x2D4B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B10u;
label_2d4b10:
    // 0x2d4b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d4b14:
    // 0x2d4b14: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
label_2d4b18:
    if (ctx->pc == 0x2D4B18u) {
        ctx->pc = 0x2D4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B14u;
        // 0x2d4b18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4B1Cu;
        goto label_2d4b1c;
    }
    ctx->pc = 0x2D4B14u;
    {
        const bool branch_taken_0x2d4b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B14u;
        // 0x2d4b18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4b14) {
            ctx->pc = 0x2D4C0Cu;
            goto label_2d4c0c;
        }
    }
    ctx->pc = 0x2D4B1Cu;
label_2d4b1c:
    // 0x2d4b1c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d4b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d4b20:
    // 0x2d4b20: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d4b20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d4b24:
    // 0x2d4b24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d4b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d4b28:
    // 0x2d4b28: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2d4b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2d4b2c:
    // 0x2d4b2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d4b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d4b30:
    // 0x2d4b30: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2d4b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d4b34:
    // 0x2d4b34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d4b34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4b38:
    // 0x2d4b38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d4b38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4b3c:
    // 0x2d4b3c: 0xc0bee7a  jal         func_2FB9E8
label_2d4b40:
    if (ctx->pc == 0x2D4B40u) {
        ctx->pc = 0x2D4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B3Cu;
        // 0x2d4b40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4B44u;
        goto label_2d4b44;
    }
    ctx->pc = 0x2D4B3Cu;
    SET_GPR_U32(ctx, 31, 0x2D4B44u);
    ctx->pc = 0x2D4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4B3Cu;
    // 0x2d4b40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D4B3Cu, 0x2D4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B44u;
label_2d4b44:
    // 0x2d4b44: 0x10000032  b           . + 4 + (0x32 << 2)
label_2d4b48:
    if (ctx->pc == 0x2D4B48u) {
        ctx->pc = 0x2D4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B44u;
        // 0x2d4b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4B4Cu;
        goto label_2d4b4c;
    }
    ctx->pc = 0x2D4B44u;
    {
        const bool branch_taken_0x2d4b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B44u;
        // 0x2d4b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4b44) {
            ctx->pc = 0x2D4C10u;
            goto label_2d4c10;
        }
    }
    ctx->pc = 0x2D4B4Cu;
label_2d4b4c:
    // 0x2d4b4c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d4b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d4b50:
    // 0x2d4b50: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2d4b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2d4b54:
    // 0x2d4b54: 0xc0cd7d2  jal         func_335F48
label_2d4b58:
    if (ctx->pc == 0x2D4B58u) {
        ctx->pc = 0x2D4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B54u;
        // 0x2d4b58: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4B5Cu;
        goto label_2d4b5c;
    }
    ctx->pc = 0x2D4B54u;
    SET_GPR_U32(ctx, 31, 0x2D4B5Cu);
    ctx->pc = 0x2D4B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4B54u;
    // 0x2d4b58: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2D4B54u, 0x2D4B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B5Cu;
label_2d4b5c:
    // 0x2d4b5c: 0xc0cd742  jal         func_335D08
label_2d4b60:
    if (ctx->pc == 0x2D4B60u) {
        ctx->pc = 0x2D4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B5Cu;
        // 0x2d4b60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4B64u;
        goto label_2d4b64;
    }
    ctx->pc = 0x2D4B5Cu;
    SET_GPR_U32(ctx, 31, 0x2D4B64u);
    ctx->pc = 0x2D4B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4B5Cu;
    // 0x2d4b60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2D4B5Cu, 0x2D4B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B64u;
label_2d4b64:
    // 0x2d4b64: 0xc60d0020  lwc1        $f13, 0x20($s0)
    ctx->pc = 0x2d4b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2d4b68:
    // 0x2d4b68: 0xc0cdd2e  jal         func_3374B8
label_2d4b6c:
    if (ctx->pc == 0x2D4B6Cu) {
        ctx->pc = 0x2D4B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B68u;
        // 0x2d4b6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4B70u;
        goto label_2d4b70;
    }
    ctx->pc = 0x2D4B68u;
    SET_GPR_U32(ctx, 31, 0x2D4B70u);
    ctx->pc = 0x2D4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4B68u;
    // 0x2d4b6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2D4B68u, 0x2D4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B70u;
label_2d4b70:
    // 0x2d4b70: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2d4b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2d4b74:
    // 0x2d4b74: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d4b74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2d4b78:
    // 0x2d4b78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d4b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d4b7c:
    // 0x2d4b7c: 0x0  nop
    ctx->pc = 0x2d4b7cu;
    // NOP
label_2d4b80:
    // 0x2d4b80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d4b80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d4b84:
    // 0x2d4b84: 0x0  nop
    ctx->pc = 0x2d4b84u;
    // NOP
label_2d4b88:
    // 0x2d4b88: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_2d4b8c:
    if (ctx->pc == 0x2D4B8Cu) {
        ctx->pc = 0x2D4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B88u;
        // 0x2d4b8c: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4B90u;
        goto label_2d4b90;
    }
    ctx->pc = 0x2D4B88u;
    {
        const bool branch_taken_0x2d4b88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4b88) {
            ctx->pc = 0x2D4B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4B88u;
            // 0x2d4b8c: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4BDCu;
            goto label_2d4bdc;
        }
    }
    ctx->pc = 0x2D4B90u;
label_2d4b90:
    // 0x2d4b90: 0xc0a367c  jal         func_28D9F0
label_2d4b94:
    if (ctx->pc == 0x2D4B94u) {
        ctx->pc = 0x2D4B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B90u;
        // 0x2d4b94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4B98u;
        goto label_2d4b98;
    }
    ctx->pc = 0x2D4B90u;
    SET_GPR_U32(ctx, 31, 0x2D4B98u);
    ctx->pc = 0x2D4B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4B90u;
    // 0x2d4b94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D4B90u, 0x2D4B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B98u;
label_2d4b98:
    // 0x2d4b98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d4b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d4b9c:
    // 0x2d4b9c: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_2d4ba0:
    if (ctx->pc == 0x2D4BA0u) {
        ctx->pc = 0x2D4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B9Cu;
        // 0x2d4ba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4BA4u;
        goto label_2d4ba4;
    }
    ctx->pc = 0x2D4B9Cu;
    {
        const bool branch_taken_0x2d4b9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B9Cu;
        // 0x2d4ba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4b9c) {
            ctx->pc = 0x2D4C0Cu;
            goto label_2d4c0c;
        }
    }
    ctx->pc = 0x2D4BA4u;
label_2d4ba4:
    // 0x2d4ba4: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x2d4ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d4ba8:
    // 0x2d4ba8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2d4ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2d4bac:
    // 0x2d4bac: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2d4bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2d4bb0:
    // 0x2d4bb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d4bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d4bb4:
    // 0x2d4bb4: 0xc0884f6  jal         func_2213D8
label_2d4bb8:
    if (ctx->pc == 0x2D4BB8u) {
        ctx->pc = 0x2D4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BB4u;
        // 0x2d4bb8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4BBCu;
        goto label_2d4bbc;
    }
    ctx->pc = 0x2D4BB4u;
    SET_GPR_U32(ctx, 31, 0x2D4BBCu);
    ctx->pc = 0x2D4BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4BB4u;
    // 0x2d4bb8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D4BB4u, 0x2D4BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4BBCu;
label_2d4bbc:
    // 0x2d4bbc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d4bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d4bc0:
    // 0x2d4bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d4bc4:
    // 0x2d4bc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d4bc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d4bc8:
    // 0x2d4bc8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2d4bc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2d4bcc:
    // 0x2d4bcc: 0xc0bf70a  jal         func_2FDC28
label_2d4bd0:
    if (ctx->pc == 0x2D4BD0u) {
        ctx->pc = 0x2D4BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BCCu;
        // 0x2d4bd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4BD4u;
        goto label_2d4bd4;
    }
    ctx->pc = 0x2D4BCCu;
    SET_GPR_U32(ctx, 31, 0x2D4BD4u);
    ctx->pc = 0x2D4BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4BCCu;
    // 0x2d4bd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2D4BCCu, 0x2D4BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4BD4u;
label_2d4bd4:
    // 0x2d4bd4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2d4bd8:
    if (ctx->pc == 0x2D4BD8u) {
        ctx->pc = 0x2D4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BD4u;
        // 0x2d4bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4BDCu;
        goto label_2d4bdc;
    }
    ctx->pc = 0x2D4BD4u;
    {
        const bool branch_taken_0x2d4bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BD4u;
        // 0x2d4bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4bd4) {
            ctx->pc = 0x2D4C10u;
            goto label_2d4c10;
        }
    }
    ctx->pc = 0x2D4BDCu;
label_2d4bdc:
    // 0x2d4bdc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2d4be0:
    if (ctx->pc == 0x2D4BE0u) {
        ctx->pc = 0x2D4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BDCu;
        // 0x2d4be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4BE4u;
        goto label_2d4be4;
    }
    ctx->pc = 0x2D4BDCu;
    {
        const bool branch_taken_0x2d4bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BDCu;
        // 0x2d4be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4bdc) {
            ctx->pc = 0x2D4C10u;
            goto label_2d4c10;
        }
    }
    ctx->pc = 0x2D4BE4u;
label_2d4be4:
    // 0x2d4be4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d4be8:
    // 0x2d4be8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d4be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d4bec:
    // 0x2d4bec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d4becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d4bf0:
    // 0x2d4bf0: 0x40f809  jalr        $v0
label_2d4bf4:
    if (ctx->pc == 0x2D4BF4u) {
        ctx->pc = 0x2D4BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BF0u;
        // 0x2d4bf4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4BF8u;
        goto label_2d4bf8;
    }
    ctx->pc = 0x2D4BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D4BF8u);
        ctx->pc = 0x2D4BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BF0u;
        // 0x2d4bf4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4BF0u, 0x2D4BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D4BF8u;
label_2d4bf8:
    // 0x2d4bf8: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x2d4bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2d4bfc:
    // 0x2d4bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d4c00:
    // 0x2d4c00: 0xc08e1a4  jal         func_238690
label_2d4c04:
    if (ctx->pc == 0x2D4C04u) {
        ctx->pc = 0x2D4C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C00u;
        // 0x2d4c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4C08u;
        goto label_2d4c08;
    }
    ctx->pc = 0x2D4C00u;
    SET_GPR_U32(ctx, 31, 0x2D4C08u);
    ctx->pc = 0x2D4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C00u;
    // 0x2d4c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2D4C00u, 0x2D4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C08u;
label_2d4c08:
    // 0x2d4c08: 0xa2150028  sb          $s5, 0x28($s0)
    ctx->pc = 0x2d4c08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 21));
label_2d4c0c:
    // 0x2d4c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4c10:
    // 0x2d4c10: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d4c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d4c14:
    // 0x2d4c14: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d4c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d4c18:
    // 0x2d4c18: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d4c18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d4c1c:
    // 0x2d4c1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d4c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d4c20:
    // 0x2d4c20: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d4c20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d4c24:
    // 0x2d4c24: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2d4c24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d4c28:
    // 0x2d4c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4c2c:
    // 0x2d4c2c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2d4c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d4c30:
    // 0x2d4c30: 0x3e00008  jr          $ra
label_2d4c34:
    if (ctx->pc == 0x2D4C34u) {
        ctx->pc = 0x2D4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C30u;
        // 0x2d4c34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4C38u;
        goto label_fallthrough_0x2d4c30;
    }
    ctx->pc = 0x2D4C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C30u;
        // 0x2d4c34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d4c30:
    ctx->pc = 0x2D4C38u;
}

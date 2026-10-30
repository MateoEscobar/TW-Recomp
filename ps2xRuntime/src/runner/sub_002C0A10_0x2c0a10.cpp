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

// Function: sub_002C0A10
// Address: 0x2c0a10 - 0x2c0bc8
void sub_002C0A10_0x2c0a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0A10_0x2c0a10");
#endif

    switch (ctx->pc) {
        case 0x2c0a10u: goto label_2c0a10;
        case 0x2c0a14u: goto label_2c0a14;
        case 0x2c0a18u: goto label_2c0a18;
        case 0x2c0a1cu: goto label_2c0a1c;
        case 0x2c0a20u: goto label_2c0a20;
        case 0x2c0a24u: goto label_2c0a24;
        case 0x2c0a28u: goto label_2c0a28;
        case 0x2c0a2cu: goto label_2c0a2c;
        case 0x2c0a30u: goto label_2c0a30;
        case 0x2c0a34u: goto label_2c0a34;
        case 0x2c0a38u: goto label_2c0a38;
        case 0x2c0a3cu: goto label_2c0a3c;
        case 0x2c0a40u: goto label_2c0a40;
        case 0x2c0a44u: goto label_2c0a44;
        case 0x2c0a48u: goto label_2c0a48;
        case 0x2c0a4cu: goto label_2c0a4c;
        case 0x2c0a50u: goto label_2c0a50;
        case 0x2c0a54u: goto label_2c0a54;
        case 0x2c0a58u: goto label_2c0a58;
        case 0x2c0a5cu: goto label_2c0a5c;
        case 0x2c0a60u: goto label_2c0a60;
        case 0x2c0a64u: goto label_2c0a64;
        case 0x2c0a68u: goto label_2c0a68;
        case 0x2c0a6cu: goto label_2c0a6c;
        case 0x2c0a70u: goto label_2c0a70;
        case 0x2c0a74u: goto label_2c0a74;
        case 0x2c0a78u: goto label_2c0a78;
        case 0x2c0a7cu: goto label_2c0a7c;
        case 0x2c0a80u: goto label_2c0a80;
        case 0x2c0a84u: goto label_2c0a84;
        case 0x2c0a88u: goto label_2c0a88;
        case 0x2c0a8cu: goto label_2c0a8c;
        case 0x2c0a90u: goto label_2c0a90;
        case 0x2c0a94u: goto label_2c0a94;
        case 0x2c0a98u: goto label_2c0a98;
        case 0x2c0a9cu: goto label_2c0a9c;
        case 0x2c0aa0u: goto label_2c0aa0;
        case 0x2c0aa4u: goto label_2c0aa4;
        case 0x2c0aa8u: goto label_2c0aa8;
        case 0x2c0aacu: goto label_2c0aac;
        case 0x2c0ab0u: goto label_2c0ab0;
        case 0x2c0ab4u: goto label_2c0ab4;
        case 0x2c0ab8u: goto label_2c0ab8;
        case 0x2c0abcu: goto label_2c0abc;
        case 0x2c0ac0u: goto label_2c0ac0;
        case 0x2c0ac4u: goto label_2c0ac4;
        case 0x2c0ac8u: goto label_2c0ac8;
        case 0x2c0accu: goto label_2c0acc;
        case 0x2c0ad0u: goto label_2c0ad0;
        case 0x2c0ad4u: goto label_2c0ad4;
        case 0x2c0ad8u: goto label_2c0ad8;
        case 0x2c0adcu: goto label_2c0adc;
        case 0x2c0ae0u: goto label_2c0ae0;
        case 0x2c0ae4u: goto label_2c0ae4;
        case 0x2c0ae8u: goto label_2c0ae8;
        case 0x2c0aecu: goto label_2c0aec;
        case 0x2c0af0u: goto label_2c0af0;
        case 0x2c0af4u: goto label_2c0af4;
        case 0x2c0af8u: goto label_2c0af8;
        case 0x2c0afcu: goto label_2c0afc;
        case 0x2c0b00u: goto label_2c0b00;
        case 0x2c0b04u: goto label_2c0b04;
        case 0x2c0b08u: goto label_2c0b08;
        case 0x2c0b0cu: goto label_2c0b0c;
        case 0x2c0b10u: goto label_2c0b10;
        case 0x2c0b14u: goto label_2c0b14;
        case 0x2c0b18u: goto label_2c0b18;
        case 0x2c0b1cu: goto label_2c0b1c;
        case 0x2c0b20u: goto label_2c0b20;
        case 0x2c0b24u: goto label_2c0b24;
        case 0x2c0b28u: goto label_2c0b28;
        case 0x2c0b2cu: goto label_2c0b2c;
        case 0x2c0b30u: goto label_2c0b30;
        case 0x2c0b34u: goto label_2c0b34;
        case 0x2c0b38u: goto label_2c0b38;
        case 0x2c0b3cu: goto label_2c0b3c;
        case 0x2c0b40u: goto label_2c0b40;
        case 0x2c0b44u: goto label_2c0b44;
        case 0x2c0b48u: goto label_2c0b48;
        case 0x2c0b4cu: goto label_2c0b4c;
        case 0x2c0b50u: goto label_2c0b50;
        case 0x2c0b54u: goto label_2c0b54;
        case 0x2c0b58u: goto label_2c0b58;
        case 0x2c0b5cu: goto label_2c0b5c;
        case 0x2c0b60u: goto label_2c0b60;
        case 0x2c0b64u: goto label_2c0b64;
        case 0x2c0b68u: goto label_2c0b68;
        case 0x2c0b6cu: goto label_2c0b6c;
        case 0x2c0b70u: goto label_2c0b70;
        case 0x2c0b74u: goto label_2c0b74;
        case 0x2c0b78u: goto label_2c0b78;
        case 0x2c0b7cu: goto label_2c0b7c;
        case 0x2c0b80u: goto label_2c0b80;
        case 0x2c0b84u: goto label_2c0b84;
        case 0x2c0b88u: goto label_2c0b88;
        case 0x2c0b8cu: goto label_2c0b8c;
        case 0x2c0b90u: goto label_2c0b90;
        case 0x2c0b94u: goto label_2c0b94;
        case 0x2c0b98u: goto label_2c0b98;
        case 0x2c0b9cu: goto label_2c0b9c;
        case 0x2c0ba0u: goto label_2c0ba0;
        case 0x2c0ba4u: goto label_2c0ba4;
        case 0x2c0ba8u: goto label_2c0ba8;
        case 0x2c0bacu: goto label_2c0bac;
        case 0x2c0bb0u: goto label_2c0bb0;
        case 0x2c0bb4u: goto label_2c0bb4;
        case 0x2c0bb8u: goto label_2c0bb8;
        case 0x2c0bbcu: goto label_2c0bbc;
        case 0x2c0bc0u: goto label_2c0bc0;
        case 0x2c0bc4u: goto label_2c0bc4;
        default: break;
    }

    ctx->pc = 0x2c0a10u;

label_2c0a10:
    // 0x2c0a10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c0a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2c0a14:
    // 0x2c0a14: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2c0a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2c0a18:
    // 0x2c0a18: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2c0a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2c0a1c:
    // 0x2c0a1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c0a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0a20:
    // 0x2c0a20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2c0a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2c0a24:
    // 0x2c0a24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c0a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c0a28:
    // 0x2c0a28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c0a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c0a2c:
    // 0x2c0a2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c0a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0a30:
    // 0x2c0a30: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2c0a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c0a34:
    // 0x2c0a34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c0a38:
    // 0x2c0a38: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2c0a38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2c0a3c:
    // 0x2c0a3c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2c0a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2c0a40:
    // 0x2c0a40: 0x60f809  jalr        $v1
label_2c0a44:
    if (ctx->pc == 0x2C0A44u) {
        ctx->pc = 0x2C0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A40u;
        // 0x2c0a44: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A48u;
        goto label_2c0a48;
    }
    ctx->pc = 0x2C0A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C0A48u);
        ctx->pc = 0x2C0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A40u;
        // 0x2c0a44: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0A40u, 0x2C0A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C0A48u;
label_2c0a48:
    // 0x2c0a48: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2c0a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2c0a4c:
    // 0x2c0a4c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2c0a4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0a50:
    // 0x2c0a50: 0x8ca4489c  lw          $a0, 0x489C($a1)
    ctx->pc = 0x2c0a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_2c0a54:
    // 0x2c0a54: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2c0a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2c0a58:
    // 0x2c0a58: 0xc0e409a  jal         func_390268
label_2c0a5c:
    if (ctx->pc == 0x2C0A5Cu) {
        ctx->pc = 0x2C0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A58u;
        // 0x2c0a5c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A60u;
        goto label_2c0a60;
    }
    ctx->pc = 0x2C0A58u;
    SET_GPR_U32(ctx, 31, 0x2C0A60u);
    ctx->pc = 0x2C0A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0A58u;
    // 0x2c0a5c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C0A58u, 0x2C0A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0A60u;
label_2c0a60:
    // 0x2c0a60: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_2c0a64:
    if (ctx->pc == 0x2C0A64u) {
        ctx->pc = 0x2C0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A60u;
        // 0x2c0a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A68u;
        goto label_2c0a68;
    }
    ctx->pc = 0x2C0A60u;
    {
        const bool branch_taken_0x2c0a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A60u;
        // 0x2c0a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a60) {
            ctx->pc = 0x2C0BACu;
            goto label_2c0bac;
        }
    }
    ctx->pc = 0x2C0A68u;
label_2c0a68:
    // 0x2c0a68: 0xc10587a  jal         func_4161E8
label_2c0a6c:
    if (ctx->pc == 0x2C0A6Cu) {
        ctx->pc = 0x2C0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A68u;
        // 0x2c0a6c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A70u;
        goto label_2c0a70;
    }
    ctx->pc = 0x2C0A68u;
    SET_GPR_U32(ctx, 31, 0x2C0A70u);
    ctx->pc = 0x2C0A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0A68u;
    // 0x2c0a6c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C0A68u, 0x2C0A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0A70u;
label_2c0a70:
    // 0x2c0a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c0a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0a74:
    // 0x2c0a74: 0xc0cdb38  jal         func_336CE0
label_2c0a78:
    if (ctx->pc == 0x2C0A78u) {
        ctx->pc = 0x2C0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A74u;
        // 0x2c0a78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A7Cu;
        goto label_2c0a7c;
    }
    ctx->pc = 0x2C0A74u;
    SET_GPR_U32(ctx, 31, 0x2C0A7Cu);
    ctx->pc = 0x2C0A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0A74u;
    // 0x2c0a78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C0A74u, 0x2C0A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0A7Cu;
label_2c0a7c:
    // 0x2c0a7c: 0x86220034  lh          $v0, 0x34($s1)
    ctx->pc = 0x2c0a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
label_2c0a80:
    // 0x2c0a80: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_2c0a84:
    if (ctx->pc == 0x2C0A84u) {
        ctx->pc = 0x2C0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A80u;
        // 0x2c0a84: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A88u;
        goto label_2c0a88;
    }
    ctx->pc = 0x2C0A80u;
    {
        const bool branch_taken_0x2c0a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A80u;
        // 0x2c0a84: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a80) {
            ctx->pc = 0x2C0BA8u;
            goto label_2c0ba8;
        }
    }
    ctx->pc = 0x2C0A88u;
label_2c0a88:
    // 0x2c0a88: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2c0a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2c0a8c:
    // 0x2c0a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c0a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c0a90:
    // 0x2c0a90: 0x0  nop
    ctx->pc = 0x2c0a90u;
    // NOP
label_2c0a94:
    // 0x2c0a94: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c0a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c0a98:
    // 0x2c0a98: 0x0  nop
    ctx->pc = 0x2c0a98u;
    // NOP
label_2c0a9c:
    // 0x2c0a9c: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
label_2c0aa0:
    if (ctx->pc == 0x2C0AA0u) {
        ctx->pc = 0x2C0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A9Cu;
        // 0x2c0aa0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0AA4u;
        goto label_2c0aa4;
    }
    ctx->pc = 0x2C0A9Cu;
    {
        const bool branch_taken_0x2c0a9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0a9c) {
            ctx->pc = 0x2C0AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0A9Cu;
            // 0x2c0aa0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0B30u;
            goto label_2c0b30;
        }
    }
    ctx->pc = 0x2C0AA4u;
label_2c0aa4:
    // 0x2c0aa4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2c0aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2c0aa8:
    // 0x2c0aa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c0aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c0aac:
    // 0x2c0aac: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2c0aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_2c0ab0:
    // 0x2c0ab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c0ab4:
    // 0x2c0ab4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2c0ab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2c0ab8:
    // 0x2c0ab8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c0abc:
    // 0x2c0abc: 0x0  nop
    ctx->pc = 0x2c0abcu;
    // NOP
label_2c0ac0:
    // 0x2c0ac0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2c0ac4:
    if (ctx->pc == 0x2C0AC4u) {
        ctx->pc = 0x2C0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AC0u;
        // 0x2c0ac4: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0AC8u;
        goto label_2c0ac8;
    }
    ctx->pc = 0x2C0AC0u;
    {
        const bool branch_taken_0x2c0ac0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AC0u;
        // 0x2c0ac4: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ac0) {
            ctx->pc = 0x2C0ACCu;
            goto label_2c0acc;
        }
    }
    ctx->pc = 0x2C0AC8u;
label_2c0ac8:
    // 0x2c0ac8: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2c0ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c0acc:
    // 0x2c0acc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c0accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c0ad0:
    // 0x2c0ad0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c0ad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c0ad4:
    // 0x2c0ad4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c0ad8:
    // 0x2c0ad8: 0x40f809  jalr        $v0
label_2c0adc:
    if (ctx->pc == 0x2C0ADCu) {
        ctx->pc = 0x2C0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AD8u;
        // 0x2c0adc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0AE0u;
        goto label_2c0ae0;
    }
    ctx->pc = 0x2C0AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C0AE0u);
        ctx->pc = 0x2C0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AD8u;
        // 0x2c0adc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0AD8u, 0x2C0AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C0AE0u;
label_2c0ae0:
    // 0x2c0ae0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2c0ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2c0ae4:
    // 0x2c0ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0ae8:
    // 0x2c0ae8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c0ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c0aec:
    // 0x2c0aec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c0aecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c0af0:
    // 0x2c0af0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c0af4:
    // 0x2c0af4: 0x40f809  jalr        $v0
label_2c0af8:
    if (ctx->pc == 0x2C0AF8u) {
        ctx->pc = 0x2C0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AF4u;
        // 0x2c0af8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0AFCu;
        goto label_2c0afc;
    }
    ctx->pc = 0x2C0AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C0AFCu);
        ctx->pc = 0x2C0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AF4u;
        // 0x2c0af8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0AF4u, 0x2C0AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C0AFCu;
label_2c0afc:
    // 0x2c0afc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c0afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c0b00:
    // 0x2c0b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b04:
    // 0x2c0b04: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2c0b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2c0b08:
    // 0x2c0b08: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2c0b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2c0b0c:
    // 0x2c0b0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c0b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b10:
    // 0x2c0b10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c0b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b14:
    // 0x2c0b14: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c0b14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c0b18:
    // 0x2c0b18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b1c:
    // 0x2c0b1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c0b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b20:
    // 0x2c0b20: 0xc0b68b0  jal         func_2DA2C0
label_2c0b24:
    if (ctx->pc == 0x2C0B24u) {
        ctx->pc = 0x2C0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B20u;
        // 0x2c0b24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B28u;
        goto label_2c0b28;
    }
    ctx->pc = 0x2C0B20u;
    SET_GPR_U32(ctx, 31, 0x2C0B28u);
    ctx->pc = 0x2C0B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0B20u;
    // 0x2c0b24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x2C0B20u, 0x2C0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0B28u;
label_2c0b28:
    // 0x2c0b28: 0x10000020  b           . + 4 + (0x20 << 2)
label_2c0b2c:
    if (ctx->pc == 0x2C0B2Cu) {
        ctx->pc = 0x2C0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B28u;
        // 0x2c0b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B30u;
        goto label_2c0b30;
    }
    ctx->pc = 0x2C0B28u;
    {
        const bool branch_taken_0x2c0b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B28u;
        // 0x2c0b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b28) {
            ctx->pc = 0x2C0BACu;
            goto label_2c0bac;
        }
    }
    ctx->pc = 0x2C0B30u;
label_2c0b30:
    // 0x2c0b30: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2c0b30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2c0b34:
    // 0x2c0b34: 0x1c60001d  bgtz        $v1, . + 4 + (0x1D << 2)
label_2c0b38:
    if (ctx->pc == 0x2C0B38u) {
        ctx->pc = 0x2C0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B34u;
        // 0x2c0b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B3Cu;
        goto label_2c0b3c;
    }
    ctx->pc = 0x2C0B34u;
    {
        const bool branch_taken_0x2c0b34 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2C0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B34u;
        // 0x2c0b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b34) {
            ctx->pc = 0x2C0BACu;
            goto label_2c0bac;
        }
    }
    ctx->pc = 0x2C0B3Cu;
label_2c0b3c:
    // 0x2c0b3c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2c0b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2c0b40:
    // 0x2c0b40: 0xc0cd4e4  jal         func_335390
label_2c0b44:
    if (ctx->pc == 0x2C0B44u) {
        ctx->pc = 0x2C0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B40u;
        // 0x2c0b44: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B48u;
        goto label_2c0b48;
    }
    ctx->pc = 0x2C0B40u;
    SET_GPR_U32(ctx, 31, 0x2C0B48u);
    ctx->pc = 0x2C0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0B40u;
    // 0x2c0b44: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2C0B40u, 0x2C0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0B48u;
label_2c0b48:
    // 0x2c0b48: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2c0b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c0b4c:
    // 0x2c0b4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2c0b50:
    if (ctx->pc == 0x2C0B50u) {
        ctx->pc = 0x2C0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B4Cu;
        // 0x2c0b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B54u;
        goto label_2c0b54;
    }
    ctx->pc = 0x2C0B4Cu;
    {
        const bool branch_taken_0x2c0b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B4Cu;
        // 0x2c0b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b4c) {
            ctx->pc = 0x2C0B64u;
            goto label_2c0b64;
        }
    }
    ctx->pc = 0x2C0B54u;
label_2c0b54:
    // 0x2c0b54: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_2c0b58:
    if (ctx->pc == 0x2C0B58u) {
        ctx->pc = 0x2C0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B54u;
        // 0x2c0b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B5Cu;
        goto label_2c0b5c;
    }
    ctx->pc = 0x2C0B54u;
    {
        const bool branch_taken_0x2c0b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B54u;
        // 0x2c0b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b54) {
            ctx->pc = 0x2C0B98u;
            goto label_2c0b98;
        }
    }
    ctx->pc = 0x2C0B5Cu;
label_2c0b5c:
    // 0x2c0b5c: 0x10000014  b           . + 4 + (0x14 << 2)
label_2c0b60:
    if (ctx->pc == 0x2C0B60u) {
        ctx->pc = 0x2C0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B5Cu;
        // 0x2c0b60: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B64u;
        goto label_2c0b64;
    }
    ctx->pc = 0x2C0B5Cu;
    {
        const bool branch_taken_0x2c0b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B5Cu;
        // 0x2c0b60: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b5c) {
            ctx->pc = 0x2C0BB0u;
            goto label_2c0bb0;
        }
    }
    ctx->pc = 0x2C0B64u;
label_2c0b64:
    // 0x2c0b64: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2c0b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2c0b68:
    // 0x2c0b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b6c:
    // 0x2c0b6c: 0xc089998  jal         func_226660
label_2c0b70:
    if (ctx->pc == 0x2C0B70u) {
        ctx->pc = 0x2C0B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B6Cu;
        // 0x2c0b70: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B74u;
        goto label_2c0b74;
    }
    ctx->pc = 0x2C0B6Cu;
    SET_GPR_U32(ctx, 31, 0x2C0B74u);
    ctx->pc = 0x2C0B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0B6Cu;
    // 0x2c0b70: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2C0B6Cu, 0x2C0B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0B74u;
label_2c0b74:
    // 0x2c0b74: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2c0b78:
    if (ctx->pc == 0x2C0B78u) {
        ctx->pc = 0x2C0B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B74u;
        // 0x2c0b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B7Cu;
        goto label_2c0b7c;
    }
    ctx->pc = 0x2C0B74u;
    {
        const bool branch_taken_0x2c0b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B74u;
        // 0x2c0b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b74) {
            ctx->pc = 0x2C0BACu;
            goto label_2c0bac;
        }
    }
    ctx->pc = 0x2C0B7Cu;
label_2c0b7c:
    // 0x2c0b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b80:
    // 0x2c0b80: 0x2405029e  addiu       $a1, $zero, 0x29E
    ctx->pc = 0x2c0b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
label_2c0b84:
    // 0x2c0b84: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2c0b84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
label_2c0b88:
    // 0x2c0b88: 0xc096b7a  jal         func_25ADE8
label_2c0b8c:
    if (ctx->pc == 0x2C0B8Cu) {
        ctx->pc = 0x2C0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B88u;
        // 0x2c0b8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B90u;
        goto label_2c0b90;
    }
    ctx->pc = 0x2C0B88u;
    SET_GPR_U32(ctx, 31, 0x2C0B90u);
    ctx->pc = 0x2C0B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0B88u;
    // 0x2c0b8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADE8u, 0x2C0B88u, 0x2C0B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0B90u;
label_2c0b90:
    // 0x2c0b90: 0x10000006  b           . + 4 + (0x6 << 2)
label_2c0b94:
    if (ctx->pc == 0x2C0B94u) {
        ctx->pc = 0x2C0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B90u;
        // 0x2c0b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B98u;
        goto label_2c0b98;
    }
    ctx->pc = 0x2C0B90u;
    {
        const bool branch_taken_0x2c0b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B90u;
        // 0x2c0b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b90) {
            ctx->pc = 0x2C0BACu;
            goto label_2c0bac;
        }
    }
    ctx->pc = 0x2C0B98u;
label_2c0b98:
    // 0x2c0b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b9c:
    // 0x2c0b9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0ba0:
    // 0x2c0ba0: 0xc08c6b2  jal         func_231AC8
label_2c0ba4:
    if (ctx->pc == 0x2C0BA4u) {
        ctx->pc = 0x2C0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BA0u;
        // 0x2c0ba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0BA8u;
        goto label_2c0ba8;
    }
    ctx->pc = 0x2C0BA0u;
    SET_GPR_U32(ctx, 31, 0x2C0BA8u);
    ctx->pc = 0x2C0BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0BA0u;
    // 0x2c0ba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AC8u, 0x2C0BA0u, 0x2C0BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0BA8u;
label_2c0ba8:
    // 0x2c0ba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0bac:
    // 0x2c0bac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2c0bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c0bb0:
    // 0x2c0bb0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2c0bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c0bb4:
    // 0x2c0bb4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2c0bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c0bb8:
    // 0x2c0bb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c0bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c0bbc:
    // 0x2c0bbc: 0x3e00008  jr          $ra
label_2c0bc0:
    if (ctx->pc == 0x2C0BC0u) {
        ctx->pc = 0x2C0BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BBCu;
        // 0x2c0bc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0BC4u;
        goto label_2c0bc4;
    }
    ctx->pc = 0x2C0BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BBCu;
        // 0x2c0bc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0BC4u;
label_2c0bc4:
    // 0x2c0bc4: 0x0  nop
    ctx->pc = 0x2c0bc4u;
    // NOP
    ctx->pc = 0x2c0bc8u;
}

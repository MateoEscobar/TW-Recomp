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

// Function: sub_00261A08
// Address: 0x261a08 - 0x261c78
void sub_00261A08_0x261a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261A08_0x261a08");
#endif

    switch (ctx->pc) {
        case 0x261a08u: goto label_261a08;
        case 0x261a0cu: goto label_261a0c;
        case 0x261a10u: goto label_261a10;
        case 0x261a14u: goto label_261a14;
        case 0x261a18u: goto label_261a18;
        case 0x261a1cu: goto label_261a1c;
        case 0x261a20u: goto label_261a20;
        case 0x261a24u: goto label_261a24;
        case 0x261a28u: goto label_261a28;
        case 0x261a2cu: goto label_261a2c;
        case 0x261a30u: goto label_261a30;
        case 0x261a34u: goto label_261a34;
        case 0x261a38u: goto label_261a38;
        case 0x261a3cu: goto label_261a3c;
        case 0x261a40u: goto label_261a40;
        case 0x261a44u: goto label_261a44;
        case 0x261a48u: goto label_261a48;
        case 0x261a4cu: goto label_261a4c;
        case 0x261a50u: goto label_261a50;
        case 0x261a54u: goto label_261a54;
        case 0x261a58u: goto label_261a58;
        case 0x261a5cu: goto label_261a5c;
        case 0x261a60u: goto label_261a60;
        case 0x261a64u: goto label_261a64;
        case 0x261a68u: goto label_261a68;
        case 0x261a6cu: goto label_261a6c;
        case 0x261a70u: goto label_261a70;
        case 0x261a74u: goto label_261a74;
        case 0x261a78u: goto label_261a78;
        case 0x261a7cu: goto label_261a7c;
        case 0x261a80u: goto label_261a80;
        case 0x261a84u: goto label_261a84;
        case 0x261a88u: goto label_261a88;
        case 0x261a8cu: goto label_261a8c;
        case 0x261a90u: goto label_261a90;
        case 0x261a94u: goto label_261a94;
        case 0x261a98u: goto label_261a98;
        case 0x261a9cu: goto label_261a9c;
        case 0x261aa0u: goto label_261aa0;
        case 0x261aa4u: goto label_261aa4;
        case 0x261aa8u: goto label_261aa8;
        case 0x261aacu: goto label_261aac;
        case 0x261ab0u: goto label_261ab0;
        case 0x261ab4u: goto label_261ab4;
        case 0x261ab8u: goto label_261ab8;
        case 0x261abcu: goto label_261abc;
        case 0x261ac0u: goto label_261ac0;
        case 0x261ac4u: goto label_261ac4;
        case 0x261ac8u: goto label_261ac8;
        case 0x261accu: goto label_261acc;
        case 0x261ad0u: goto label_261ad0;
        case 0x261ad4u: goto label_261ad4;
        case 0x261ad8u: goto label_261ad8;
        case 0x261adcu: goto label_261adc;
        case 0x261ae0u: goto label_261ae0;
        case 0x261ae4u: goto label_261ae4;
        case 0x261ae8u: goto label_261ae8;
        case 0x261aecu: goto label_261aec;
        case 0x261af0u: goto label_261af0;
        case 0x261af4u: goto label_261af4;
        case 0x261af8u: goto label_261af8;
        case 0x261afcu: goto label_261afc;
        case 0x261b00u: goto label_261b00;
        case 0x261b04u: goto label_261b04;
        case 0x261b08u: goto label_261b08;
        case 0x261b0cu: goto label_261b0c;
        case 0x261b10u: goto label_261b10;
        case 0x261b14u: goto label_261b14;
        case 0x261b18u: goto label_261b18;
        case 0x261b1cu: goto label_261b1c;
        case 0x261b20u: goto label_261b20;
        case 0x261b24u: goto label_261b24;
        case 0x261b28u: goto label_261b28;
        case 0x261b2cu: goto label_261b2c;
        case 0x261b30u: goto label_261b30;
        case 0x261b34u: goto label_261b34;
        case 0x261b38u: goto label_261b38;
        case 0x261b3cu: goto label_261b3c;
        case 0x261b40u: goto label_261b40;
        case 0x261b44u: goto label_261b44;
        case 0x261b48u: goto label_261b48;
        case 0x261b4cu: goto label_261b4c;
        case 0x261b50u: goto label_261b50;
        case 0x261b54u: goto label_261b54;
        case 0x261b58u: goto label_261b58;
        case 0x261b5cu: goto label_261b5c;
        case 0x261b60u: goto label_261b60;
        case 0x261b64u: goto label_261b64;
        case 0x261b68u: goto label_261b68;
        case 0x261b6cu: goto label_261b6c;
        case 0x261b70u: goto label_261b70;
        case 0x261b74u: goto label_261b74;
        case 0x261b78u: goto label_261b78;
        case 0x261b7cu: goto label_261b7c;
        case 0x261b80u: goto label_261b80;
        case 0x261b84u: goto label_261b84;
        case 0x261b88u: goto label_261b88;
        case 0x261b8cu: goto label_261b8c;
        case 0x261b90u: goto label_261b90;
        case 0x261b94u: goto label_261b94;
        case 0x261b98u: goto label_261b98;
        case 0x261b9cu: goto label_261b9c;
        case 0x261ba0u: goto label_261ba0;
        case 0x261ba4u: goto label_261ba4;
        case 0x261ba8u: goto label_261ba8;
        case 0x261bacu: goto label_261bac;
        case 0x261bb0u: goto label_261bb0;
        case 0x261bb4u: goto label_261bb4;
        case 0x261bb8u: goto label_261bb8;
        case 0x261bbcu: goto label_261bbc;
        case 0x261bc0u: goto label_261bc0;
        case 0x261bc4u: goto label_261bc4;
        case 0x261bc8u: goto label_261bc8;
        case 0x261bccu: goto label_261bcc;
        case 0x261bd0u: goto label_261bd0;
        case 0x261bd4u: goto label_261bd4;
        case 0x261bd8u: goto label_261bd8;
        case 0x261bdcu: goto label_261bdc;
        case 0x261be0u: goto label_261be0;
        case 0x261be4u: goto label_261be4;
        case 0x261be8u: goto label_261be8;
        case 0x261becu: goto label_261bec;
        case 0x261bf0u: goto label_261bf0;
        case 0x261bf4u: goto label_261bf4;
        case 0x261bf8u: goto label_261bf8;
        case 0x261bfcu: goto label_261bfc;
        case 0x261c00u: goto label_261c00;
        case 0x261c04u: goto label_261c04;
        case 0x261c08u: goto label_261c08;
        case 0x261c0cu: goto label_261c0c;
        case 0x261c10u: goto label_261c10;
        case 0x261c14u: goto label_261c14;
        case 0x261c18u: goto label_261c18;
        case 0x261c1cu: goto label_261c1c;
        case 0x261c20u: goto label_261c20;
        case 0x261c24u: goto label_261c24;
        case 0x261c28u: goto label_261c28;
        case 0x261c2cu: goto label_261c2c;
        case 0x261c30u: goto label_261c30;
        case 0x261c34u: goto label_261c34;
        case 0x261c38u: goto label_261c38;
        case 0x261c3cu: goto label_261c3c;
        case 0x261c40u: goto label_261c40;
        case 0x261c44u: goto label_261c44;
        case 0x261c48u: goto label_261c48;
        case 0x261c4cu: goto label_261c4c;
        case 0x261c50u: goto label_261c50;
        case 0x261c54u: goto label_261c54;
        case 0x261c58u: goto label_261c58;
        case 0x261c5cu: goto label_261c5c;
        case 0x261c60u: goto label_261c60;
        case 0x261c64u: goto label_261c64;
        case 0x261c68u: goto label_261c68;
        case 0x261c6cu: goto label_261c6c;
        case 0x261c70u: goto label_261c70;
        case 0x261c74u: goto label_261c74;
        default: break;
    }

    ctx->pc = 0x261a08u;

label_261a08:
    // 0x261a08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x261a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_261a0c:
    // 0x261a0c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x261a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_261a10:
    // 0x261a10: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x261a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_261a14:
    // 0x261a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x261a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261a18:
    // 0x261a18: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x261a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_261a1c:
    // 0x261a1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x261a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_261a20:
    // 0x261a20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x261a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_261a24:
    // 0x261a24: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x261a24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_261a28:
    // 0x261a28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x261a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_261a2c:
    // 0x261a2c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x261a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_261a30:
    // 0x261a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_261a34:
    // 0x261a34: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x261a34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_261a38:
    // 0x261a38: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x261a38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_261a3c:
    // 0x261a3c: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
label_261a40:
    if (ctx->pc == 0x261A40u) {
        ctx->pc = 0x261A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A3Cu;
        // 0x261a40: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A44u;
        goto label_261a44;
    }
    ctx->pc = 0x261A3Cu;
    {
        const bool branch_taken_0x261a3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A3Cu;
        // 0x261a40: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a3c) {
            ctx->pc = 0x261B20u;
            goto label_261b20;
        }
    }
    ctx->pc = 0x261A44u;
label_261a44:
    // 0x261a44: 0xc08a62e  jal         func_2298B8
label_261a48:
    if (ctx->pc == 0x261A48u) {
        ctx->pc = 0x261A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A44u;
        // 0x261a48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A4Cu;
        goto label_261a4c;
    }
    ctx->pc = 0x261A44u;
    SET_GPR_U32(ctx, 31, 0x261A4Cu);
    ctx->pc = 0x261A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A44u;
    // 0x261a48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2298B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2298B8u, 0x261A44u, 0x261A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A4Cu;
label_261a4c:
    // 0x261a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261a50:
    // 0x261a50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x261a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261a54:
    // 0x261a54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x261a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_261a58:
    // 0x261a58: 0xc08a6aa  jal         func_229AA8
label_261a5c:
    if (ctx->pc == 0x261A5Cu) {
        ctx->pc = 0x261A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A58u;
        // 0x261a5c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A60u;
        goto label_261a60;
    }
    ctx->pc = 0x261A58u;
    SET_GPR_U32(ctx, 31, 0x261A60u);
    ctx->pc = 0x261A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A58u;
    // 0x261a5c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x229AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229AA8u, 0x261A58u, 0x261A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A60u;
label_261a60:
    // 0x261a60: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x261a60u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_261a64:
    // 0x261a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261a68:
    // 0x261a68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x261a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261a6c:
    // 0x261a6c: 0xc08a6aa  jal         func_229AA8
label_261a70:
    if (ctx->pc == 0x261A70u) {
        ctx->pc = 0x261A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A6Cu;
        // 0x261a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A74u;
        goto label_261a74;
    }
    ctx->pc = 0x261A6Cu;
    SET_GPR_U32(ctx, 31, 0x261A74u);
    ctx->pc = 0x261A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A6Cu;
    // 0x261a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229AA8u, 0x261A6Cu, 0x261A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A74u;
label_261a74:
    // 0x261a74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x261a74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_261a78:
    // 0x261a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261a7c:
    // 0x261a7c: 0xc095142  jal         func_254508
label_261a80:
    if (ctx->pc == 0x261A80u) {
        ctx->pc = 0x261A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A7Cu;
        // 0x261a80: 0x240500c1  addiu       $a1, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A84u;
        goto label_261a84;
    }
    ctx->pc = 0x261A7Cu;
    SET_GPR_U32(ctx, 31, 0x261A84u);
    ctx->pc = 0x261A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A7Cu;
    // 0x261a80: 0x240500c1  addiu       $a1, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x261A7Cu, 0x261A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A84u;
label_261a84:
    // 0x261a84: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x261a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_261a88:
    // 0x261a88: 0x0  nop
    ctx->pc = 0x261a88u;
    // NOP
label_261a8c:
    // 0x261a8c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_261a90:
    if (ctx->pc == 0x261A90u) {
        ctx->pc = 0x261A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A8Cu;
        // 0x261a90: 0x46000042  mul.s       $f1, $f0, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A94u;
        goto label_261a94;
    }
    ctx->pc = 0x261A8Cu;
    {
        const bool branch_taken_0x261a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x261A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A8Cu;
        // 0x261a90: 0x46000042  mul.s       $f1, $f0, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a8c) {
            ctx->pc = 0x261AACu;
            goto label_261aac;
        }
    }
    ctx->pc = 0x261A94u;
label_261a94:
    // 0x261a94: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x261a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_261a98:
    // 0x261a98: 0x0  nop
    ctx->pc = 0x261a98u;
    // NOP
label_261a9c:
    // 0x261a9c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_261aa0:
    if (ctx->pc == 0x261AA0u) {
        ctx->pc = 0x261AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A9Cu;
        // 0x261aa0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x261AA4u;
        goto label_261aa4;
    }
    ctx->pc = 0x261A9Cu;
    {
        const bool branch_taken_0x261a9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x261AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A9Cu;
        // 0x261aa0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a9c) {
            ctx->pc = 0x261ACCu;
            goto label_261acc;
        }
    }
    ctx->pc = 0x261AA4u;
label_261aa4:
    // 0x261aa4: 0x10000008  b           . + 4 + (0x8 << 2)
label_261aa8:
    if (ctx->pc == 0x261AA8u) {
        ctx->pc = 0x261AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AA4u;
        // 0x261aa8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x261AACu;
        goto label_261aac;
    }
    ctx->pc = 0x261AA4u;
    {
        const bool branch_taken_0x261aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AA4u;
        // 0x261aa8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261aa4) {
            ctx->pc = 0x261AC8u;
            goto label_261ac8;
        }
    }
    ctx->pc = 0x261AACu;
label_261aac:
    // 0x261aac: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x261aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_261ab0:
    // 0x261ab0: 0x0  nop
    ctx->pc = 0x261ab0u;
    // NOP
label_261ab4:
    // 0x261ab4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_261ab8:
    if (ctx->pc == 0x261AB8u) {
        ctx->pc = 0x261AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AB4u;
        // 0x261ab8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x261ABCu;
        goto label_261abc;
    }
    ctx->pc = 0x261AB4u;
    {
        const bool branch_taken_0x261ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x261AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AB4u;
        // 0x261ab8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ab4) {
            ctx->pc = 0x261AC4u;
            goto label_261ac4;
        }
    }
    ctx->pc = 0x261ABCu;
label_261abc:
    // 0x261abc: 0x10000003  b           . + 4 + (0x3 << 2)
label_261ac0:
    if (ctx->pc == 0x261AC0u) {
        ctx->pc = 0x261AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ABCu;
        // 0x261ac0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261AC4u;
        goto label_261ac4;
    }
    ctx->pc = 0x261ABCu;
    {
        const bool branch_taken_0x261abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ABCu;
        // 0x261ac0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261abc) {
            ctx->pc = 0x261ACCu;
            goto label_261acc;
        }
    }
    ctx->pc = 0x261AC4u;
label_261ac4:
    // 0x261ac4: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x261ac4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_261ac8:
    // 0x261ac8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x261ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_261acc:
    // 0x261acc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_261ad0:
    // 0x261ad0: 0x0  nop
    ctx->pc = 0x261ad0u;
    // NOP
label_261ad4:
    // 0x261ad4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_261ad8:
    if (ctx->pc == 0x261AD8u) {
        ctx->pc = 0x261AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AD4u;
        // 0x261ad8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261ADCu;
        goto label_261adc;
    }
    ctx->pc = 0x261AD4u;
    {
        const bool branch_taken_0x261ad4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x261AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AD4u;
        // 0x261ad8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ad4) {
            ctx->pc = 0x261B00u;
            goto label_261b00;
        }
    }
    ctx->pc = 0x261ADCu;
label_261adc:
    // 0x261adc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x261adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_261ae0:
    // 0x261ae0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x261ae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_261ae4:
    // 0x261ae4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261ae8:
    // 0x261ae8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x261ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261aec:
    // 0x261aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261af0:
    // 0x261af0: 0xc09d59e  jal         func_275678
label_261af4:
    if (ctx->pc == 0x261AF4u) {
        ctx->pc = 0x261AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AF0u;
        // 0x261af4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261AF8u;
        goto label_261af8;
    }
    ctx->pc = 0x261AF0u;
    SET_GPR_U32(ctx, 31, 0x261AF8u);
    ctx->pc = 0x261AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AF0u;
    // 0x261af4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275678u, 0x261AF0u, 0x261AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261AF8u;
label_261af8:
    // 0x261af8: 0x1000000a  b           . + 4 + (0xA << 2)
label_261afc:
    if (ctx->pc == 0x261AFCu) {
        ctx->pc = 0x261AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AF8u;
        // 0x261afc: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B00u;
        goto label_261b00;
    }
    ctx->pc = 0x261AF8u;
    {
        const bool branch_taken_0x261af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AF8u;
        // 0x261afc: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261af8) {
            ctx->pc = 0x261B24u;
            goto label_261b24;
        }
    }
    ctx->pc = 0x261B00u;
label_261b00:
    // 0x261b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261b04:
    // 0x261b04: 0xc040596  jal         func_101658
label_261b08:
    if (ctx->pc == 0x261B08u) {
        ctx->pc = 0x261B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B04u;
        // 0x261b08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B0Cu;
        goto label_261b0c;
    }
    ctx->pc = 0x261B04u;
    SET_GPR_U32(ctx, 31, 0x261B0Cu);
    ctx->pc = 0x261B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B04u;
    // 0x261b08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x261B04u, 0x261B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B0Cu;
label_261b0c:
    // 0x261b0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x261b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261b10:
    // 0x261b10: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x261b10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_261b14:
    // 0x261b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261b18:
    // 0x261b18: 0xc088736  jal         func_221CD8
label_261b1c:
    if (ctx->pc == 0x261B1Cu) {
        ctx->pc = 0x261B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B18u;
        // 0x261b1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B20u;
        goto label_261b20;
    }
    ctx->pc = 0x261B18u;
    SET_GPR_U32(ctx, 31, 0x261B20u);
    ctx->pc = 0x261B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B18u;
    // 0x261b1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221CD8u, 0x261B18u, 0x261B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B20u;
label_261b20:
    // 0x261b20: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x261b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_261b24:
    // 0x261b24: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x261b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_261b28:
    // 0x261b28: 0x2472dd30  addiu       $s2, $v1, -0x22D0
    ctx->pc = 0x261b28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958384));
label_261b2c:
    // 0x261b2c: 0xa44000bc  sh          $zero, 0xBC($v0)
    ctx->pc = 0x261b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
label_261b30:
    // 0x261b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261b34:
    // 0x261b34: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x261b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_261b38:
    // 0x261b38: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x261b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
label_261b3c:
    // 0x261b3c: 0xc041532  jal         func_1054C8
label_261b40:
    if (ctx->pc == 0x261B40u) {
        ctx->pc = 0x261B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B3Cu;
        // 0x261b40: 0x8e1400d8  lw          $s4, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B44u;
        goto label_261b44;
    }
    ctx->pc = 0x261B3Cu;
    SET_GPR_U32(ctx, 31, 0x261B44u);
    ctx->pc = 0x261B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B3Cu;
    // 0x261b40: 0x8e1400d8  lw          $s4, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261B3Cu, 0x261B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B44u;
label_261b44:
    // 0x261b44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x261b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261b48:
    // 0x261b48: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_261b4c:
    if (ctx->pc == 0x261B4Cu) {
        ctx->pc = 0x261B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B48u;
        // 0x261b4c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B50u;
        goto label_261b50;
    }
    ctx->pc = 0x261B48u;
    {
        const bool branch_taken_0x261b48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B48u;
        // 0x261b4c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b48) {
            ctx->pc = 0x261B68u;
            goto label_261b68;
        }
    }
    ctx->pc = 0x261B50u;
label_261b50:
    // 0x261b50: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x261b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_261b54:
    // 0x261b54: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x261b54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_261b58:
    // 0x261b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x261b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261b5c:
    // 0x261b5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261b60:
    // 0x261b60: 0xc041b20  jal         func_106C80
label_261b64:
    if (ctx->pc == 0x261B64u) {
        ctx->pc = 0x261B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B60u;
        // 0x261b64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B68u;
        goto label_261b68;
    }
    ctx->pc = 0x261B60u;
    SET_GPR_U32(ctx, 31, 0x261B68u);
    ctx->pc = 0x261B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B60u;
    // 0x261b64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x261B60u, 0x261B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B68u;
label_261b68:
    // 0x261b68: 0xc05d484  jal         func_175210
label_261b6c:
    if (ctx->pc == 0x261B6Cu) {
        ctx->pc = 0x261B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B68u;
        // 0x261b6c: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B70u;
        goto label_261b70;
    }
    ctx->pc = 0x261B68u;
    SET_GPR_U32(ctx, 31, 0x261B70u);
    ctx->pc = 0x261B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B68u;
    // 0x261b6c: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x261B68u, 0x261B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B70u;
label_261b70:
    // 0x261b70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261b74:
    // 0x261b74: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x261b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_261b78:
    // 0x261b78: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x261b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_261b7c:
    // 0x261b7c: 0xa0f809  jalr        $a1
label_261b80:
    if (ctx->pc == 0x261B80u) {
        ctx->pc = 0x261B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B7Cu;
        // 0x261b80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B84u;
        goto label_261b84;
    }
    ctx->pc = 0x261B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x261B84u);
        ctx->pc = 0x261B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B7Cu;
        // 0x261b80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261B7Cu, 0x261B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261B84u;
label_261b84:
    // 0x261b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261b88:
    // 0x261b88: 0xc087016  jal         func_21C058
label_261b8c:
    if (ctx->pc == 0x261B8Cu) {
        ctx->pc = 0x261B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B88u;
        // 0x261b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B90u;
        goto label_261b90;
    }
    ctx->pc = 0x261B88u;
    SET_GPR_U32(ctx, 31, 0x261B90u);
    ctx->pc = 0x261B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B88u;
    // 0x261b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x261B88u, 0x261B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B90u;
label_261b90:
    // 0x261b90: 0xc041532  jal         func_1054C8
label_261b94:
    if (ctx->pc == 0x261B94u) {
        ctx->pc = 0x261B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B90u;
        // 0x261b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B98u;
        goto label_261b98;
    }
    ctx->pc = 0x261B90u;
    SET_GPR_U32(ctx, 31, 0x261B98u);
    ctx->pc = 0x261B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B90u;
    // 0x261b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261B90u, 0x261B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B98u;
label_261b98:
    // 0x261b98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x261b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261b9c:
    // 0x261b9c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_261ba0:
    if (ctx->pc == 0x261BA0u) {
        ctx->pc = 0x261BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B9Cu;
        // 0x261ba0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BA4u;
        goto label_261ba4;
    }
    ctx->pc = 0x261B9Cu;
    {
        const bool branch_taken_0x261b9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x261BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B9Cu;
        // 0x261ba0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b9c) {
            ctx->pc = 0x261BC0u;
            goto label_261bc0;
        }
    }
    ctx->pc = 0x261BA4u;
label_261ba4:
    // 0x261ba4: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x261ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_261ba8:
    // 0x261ba8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x261ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_261bac:
    // 0x261bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261bb0:
    // 0x261bb0: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x261bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_261bb4:
    // 0x261bb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x261bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261bb8:
    // 0x261bb8: 0xc04159e  jal         func_105678
label_261bbc:
    if (ctx->pc == 0x261BBCu) {
        ctx->pc = 0x261BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BB8u;
        // 0x261bbc: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BC0u;
        goto label_261bc0;
    }
    ctx->pc = 0x261BB8u;
    SET_GPR_U32(ctx, 31, 0x261BC0u);
    ctx->pc = 0x261BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BB8u;
    // 0x261bbc: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x261BB8u, 0x261BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BC0u;
label_261bc0:
    // 0x261bc0: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x261bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_261bc4:
    // 0x261bc4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x261bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_261bc8:
    // 0x261bc8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x261bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_261bcc:
    // 0x261bcc: 0xc041532  jal         func_1054C8
label_261bd0:
    if (ctx->pc == 0x261BD0u) {
        ctx->pc = 0x261BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BCCu;
        // 0x261bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BD4u;
        goto label_261bd4;
    }
    ctx->pc = 0x261BCCu;
    SET_GPR_U32(ctx, 31, 0x261BD4u);
    ctx->pc = 0x261BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BCCu;
    // 0x261bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261BCCu, 0x261BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BD4u;
label_261bd4:
    // 0x261bd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x261bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261bd8:
    // 0x261bd8: 0x52400012  beql        $s2, $zero, . + 4 + (0x12 << 2)
label_261bdc:
    if (ctx->pc == 0x261BDCu) {
        ctx->pc = 0x261BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BD8u;
        // 0x261bdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BE0u;
        goto label_261be0;
    }
    ctx->pc = 0x261BD8u;
    {
        const bool branch_taken_0x261bd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x261bd8) {
            ctx->pc = 0x261BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261BD8u;
            // 0x261bdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261C24u;
            goto label_261c24;
        }
    }
    ctx->pc = 0x261BE0u;
label_261be0:
    // 0x261be0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x261be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_261be4:
    // 0x261be4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x261be4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_261be8:
    // 0x261be8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x261be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_261bec:
    // 0x261bec: 0x40f809  jalr        $v0
label_261bf0:
    if (ctx->pc == 0x261BF0u) {
        ctx->pc = 0x261BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BECu;
        // 0x261bf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BF4u;
        goto label_261bf4;
    }
    ctx->pc = 0x261BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261BF4u);
        ctx->pc = 0x261BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BECu;
        // 0x261bf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261BECu, 0x261BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261BF4u;
label_261bf4:
    // 0x261bf4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x261bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_261bf8:
    // 0x261bf8: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x261bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_261bfc:
    // 0x261bfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261c00:
    // 0x261c00: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x261c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_261c04:
    // 0x261c04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x261c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261c08:
    // 0x261c08: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x261c08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261c0c:
    // 0x261c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261c10:
    // 0x261c10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x261c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261c14:
    // 0x261c14: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x261c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_261c18:
    // 0x261c18: 0xc041664  jal         func_105990
label_261c1c:
    if (ctx->pc == 0x261C1Cu) {
        ctx->pc = 0x261C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C18u;
        // 0x261c1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C20u;
        goto label_261c20;
    }
    ctx->pc = 0x261C18u;
    SET_GPR_U32(ctx, 31, 0x261C20u);
    ctx->pc = 0x261C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C18u;
    // 0x261c1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x261C18u, 0x261C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C20u;
label_261c20:
    // 0x261c20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x261c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261c24:
    // 0x261c24: 0xc05d4f6  jal         func_1753D8
label_261c28:
    if (ctx->pc == 0x261C28u) {
        ctx->pc = 0x261C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C24u;
        // 0x261c28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C2Cu;
        goto label_261c2c;
    }
    ctx->pc = 0x261C24u;
    SET_GPR_U32(ctx, 31, 0x261C2Cu);
    ctx->pc = 0x261C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C24u;
    // 0x261c28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x261C24u, 0x261C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C2Cu;
label_261c2c:
    // 0x261c2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x261c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261c30:
    // 0x261c30: 0xc05d53a  jal         func_1754E8
label_261c34:
    if (ctx->pc == 0x261C34u) {
        ctx->pc = 0x261C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C30u;
        // 0x261c34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C38u;
        goto label_261c38;
    }
    ctx->pc = 0x261C30u;
    SET_GPR_U32(ctx, 31, 0x261C38u);
    ctx->pc = 0x261C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C30u;
    // 0x261c34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x261C30u, 0x261C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C38u;
label_261c38:
    // 0x261c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261c3c:
    // 0x261c3c: 0xc089990  jal         func_226640
label_261c40:
    if (ctx->pc == 0x261C40u) {
        ctx->pc = 0x261C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C3Cu;
        // 0x261c40: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C44u;
        goto label_261c44;
    }
    ctx->pc = 0x261C3Cu;
    SET_GPR_U32(ctx, 31, 0x261C44u);
    ctx->pc = 0x261C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C3Cu;
    // 0x261c40: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x261C3Cu, 0x261C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C44u;
label_261c44:
    // 0x261c44: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x261c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_261c48:
    // 0x261c48: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x261c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_261c4c:
    // 0x261c4c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x261c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_261c50:
    // 0x261c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x261c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_261c54:
    // 0x261c54: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x261c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_261c58:
    // 0x261c58: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x261c58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_261c5c:
    // 0x261c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261c60:
    // 0x261c60: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x261c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_261c64:
    // 0x261c64: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x261c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_261c68:
    // 0x261c68: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x261c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_261c6c:
    // 0x261c6c: 0x3e00008  jr          $ra
label_261c70:
    if (ctx->pc == 0x261C70u) {
        ctx->pc = 0x261C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C6Cu;
        // 0x261c70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C74u;
        goto label_261c74;
    }
    ctx->pc = 0x261C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C6Cu;
        // 0x261c70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261C74u;
label_261c74:
    // 0x261c74: 0x0  nop
    ctx->pc = 0x261c74u;
    // NOP
    ctx->pc = 0x261c78u;
}

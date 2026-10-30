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

// Function: sub_00395A10
// Address: 0x395a10 - 0x395b70
void sub_00395A10_0x395a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395A10_0x395a10");
#endif

    switch (ctx->pc) {
        case 0x395a10u: goto label_395a10;
        case 0x395a14u: goto label_395a14;
        case 0x395a18u: goto label_395a18;
        case 0x395a1cu: goto label_395a1c;
        case 0x395a20u: goto label_395a20;
        case 0x395a24u: goto label_395a24;
        case 0x395a28u: goto label_395a28;
        case 0x395a2cu: goto label_395a2c;
        case 0x395a30u: goto label_395a30;
        case 0x395a34u: goto label_395a34;
        case 0x395a38u: goto label_395a38;
        case 0x395a3cu: goto label_395a3c;
        case 0x395a40u: goto label_395a40;
        case 0x395a44u: goto label_395a44;
        case 0x395a48u: goto label_395a48;
        case 0x395a4cu: goto label_395a4c;
        case 0x395a50u: goto label_395a50;
        case 0x395a54u: goto label_395a54;
        case 0x395a58u: goto label_395a58;
        case 0x395a5cu: goto label_395a5c;
        case 0x395a60u: goto label_395a60;
        case 0x395a64u: goto label_395a64;
        case 0x395a68u: goto label_395a68;
        case 0x395a6cu: goto label_395a6c;
        case 0x395a70u: goto label_395a70;
        case 0x395a74u: goto label_395a74;
        case 0x395a78u: goto label_395a78;
        case 0x395a7cu: goto label_395a7c;
        case 0x395a80u: goto label_395a80;
        case 0x395a84u: goto label_395a84;
        case 0x395a88u: goto label_395a88;
        case 0x395a8cu: goto label_395a8c;
        case 0x395a90u: goto label_395a90;
        case 0x395a94u: goto label_395a94;
        case 0x395a98u: goto label_395a98;
        case 0x395a9cu: goto label_395a9c;
        case 0x395aa0u: goto label_395aa0;
        case 0x395aa4u: goto label_395aa4;
        case 0x395aa8u: goto label_395aa8;
        case 0x395aacu: goto label_395aac;
        case 0x395ab0u: goto label_395ab0;
        case 0x395ab4u: goto label_395ab4;
        case 0x395ab8u: goto label_395ab8;
        case 0x395abcu: goto label_395abc;
        case 0x395ac0u: goto label_395ac0;
        case 0x395ac4u: goto label_395ac4;
        case 0x395ac8u: goto label_395ac8;
        case 0x395accu: goto label_395acc;
        case 0x395ad0u: goto label_395ad0;
        case 0x395ad4u: goto label_395ad4;
        case 0x395ad8u: goto label_395ad8;
        case 0x395adcu: goto label_395adc;
        case 0x395ae0u: goto label_395ae0;
        case 0x395ae4u: goto label_395ae4;
        case 0x395ae8u: goto label_395ae8;
        case 0x395aecu: goto label_395aec;
        case 0x395af0u: goto label_395af0;
        case 0x395af4u: goto label_395af4;
        case 0x395af8u: goto label_395af8;
        case 0x395afcu: goto label_395afc;
        case 0x395b00u: goto label_395b00;
        case 0x395b04u: goto label_395b04;
        case 0x395b08u: goto label_395b08;
        case 0x395b0cu: goto label_395b0c;
        case 0x395b10u: goto label_395b10;
        case 0x395b14u: goto label_395b14;
        case 0x395b18u: goto label_395b18;
        case 0x395b1cu: goto label_395b1c;
        case 0x395b20u: goto label_395b20;
        case 0x395b24u: goto label_395b24;
        case 0x395b28u: goto label_395b28;
        case 0x395b2cu: goto label_395b2c;
        case 0x395b30u: goto label_395b30;
        case 0x395b34u: goto label_395b34;
        case 0x395b38u: goto label_395b38;
        case 0x395b3cu: goto label_395b3c;
        case 0x395b40u: goto label_395b40;
        case 0x395b44u: goto label_395b44;
        case 0x395b48u: goto label_395b48;
        case 0x395b4cu: goto label_395b4c;
        case 0x395b50u: goto label_395b50;
        case 0x395b54u: goto label_395b54;
        case 0x395b58u: goto label_395b58;
        case 0x395b5cu: goto label_395b5c;
        case 0x395b60u: goto label_395b60;
        case 0x395b64u: goto label_395b64;
        case 0x395b68u: goto label_395b68;
        case 0x395b6cu: goto label_395b6c;
        default: break;
    }

    ctx->pc = 0x395a10u;

label_395a10:
    // 0x395a10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x395a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_395a14:
    // 0x395a14: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x395a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_395a18:
    // 0x395a18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x395a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_395a1c:
    // 0x395a1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x395a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_395a20:
    // 0x395a20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x395a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_395a24:
    // 0x395a24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x395a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_395a28:
    // 0x395a28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x395a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_395a2c:
    // 0x395a2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x395a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_395a30:
    // 0x395a30: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x395a30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_395a34:
    // 0x395a34: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x395a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_395a38:
    // 0x395a38: 0x8e440118  lw          $a0, 0x118($s2)
    ctx->pc = 0x395a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_395a3c:
    // 0x395a3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x395a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_395a40:
    // 0x395a40: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
label_395a44:
    if (ctx->pc == 0x395A44u) {
        ctx->pc = 0x395A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A40u;
        // 0x395a44: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A48u;
        goto label_395a48;
    }
    ctx->pc = 0x395A40u;
    {
        const bool branch_taken_0x395a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x395A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A40u;
        // 0x395a44: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a40) {
            ctx->pc = 0x395B4Cu;
            goto label_395b4c;
        }
    }
    ctx->pc = 0x395A48u;
label_395a48:
    // 0x395a48: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x395a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_395a4c:
    // 0x395a4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x395a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_395a50:
    // 0x395a50: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_395a54:
    if (ctx->pc == 0x395A54u) {
        ctx->pc = 0x395A58u;
        goto label_395a58;
    }
    ctx->pc = 0x395A50u;
    {
        const bool branch_taken_0x395a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395a50) {
            ctx->pc = 0x395B4Cu;
            goto label_395b4c;
        }
    }
    ctx->pc = 0x395A58u;
label_395a58:
    // 0x395a58: 0xc0e85a2  jal         func_3A1688
label_395a5c:
    if (ctx->pc == 0x395A5Cu) {
        ctx->pc = 0x395A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A58u;
        // 0x395a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A60u;
        goto label_395a60;
    }
    ctx->pc = 0x395A58u;
    SET_GPR_U32(ctx, 31, 0x395A60u);
    ctx->pc = 0x395A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395A58u;
    // 0x395a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x395A58u, 0x395A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395A60u;
label_395a60:
    // 0x395a60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x395a60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_395a64:
    // 0x395a64: 0xc0e87c0  jal         func_3A1F00
label_395a68:
    if (ctx->pc == 0x395A68u) {
        ctx->pc = 0x395A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A64u;
        // 0x395a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A6Cu;
        goto label_395a6c;
    }
    ctx->pc = 0x395A64u;
    SET_GPR_U32(ctx, 31, 0x395A6Cu);
    ctx->pc = 0x395A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395A64u;
    // 0x395a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x395A64u, 0x395A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395A6Cu;
label_395a6c:
    // 0x395a6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x395a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395a70:
    // 0x395a70: 0xc0e87c0  jal         func_3A1F00
label_395a74:
    if (ctx->pc == 0x395A74u) {
        ctx->pc = 0x395A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A70u;
        // 0x395a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A78u;
        goto label_395a78;
    }
    ctx->pc = 0x395A70u;
    SET_GPR_U32(ctx, 31, 0x395A78u);
    ctx->pc = 0x395A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395A70u;
    // 0x395a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x395A70u, 0x395A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395A78u;
label_395a78:
    // 0x395a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x395a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395a7c:
    // 0x395a7c: 0xc0e87c0  jal         func_3A1F00
label_395a80:
    if (ctx->pc == 0x395A80u) {
        ctx->pc = 0x395A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A7Cu;
        // 0x395a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A84u;
        goto label_395a84;
    }
    ctx->pc = 0x395A7Cu;
    SET_GPR_U32(ctx, 31, 0x395A84u);
    ctx->pc = 0x395A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395A7Cu;
    // 0x395a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x395A7Cu, 0x395A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395A84u;
label_395a84:
    // 0x395a84: 0x3c01c17a  lui         $at, 0xC17A
    ctx->pc = 0x395a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49530 << 16));
label_395a88:
    // 0x395a88: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x395a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_395a8c:
    // 0x395a8c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x395a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_395a90:
    // 0x395a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x395a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_395a94:
    // 0x395a94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x395a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395a98:
    // 0x395a98: 0x460ea382  mul.s       $f14, $f20, $f14
    ctx->pc = 0x395a98u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
label_395a9c:
    // 0x395a9c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x395a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_395aa0:
    // 0x395aa0: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x395aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_395aa4:
    // 0x395aa4: 0xc0e496c  jal         func_3925B0
label_395aa8:
    if (ctx->pc == 0x395AA8u) {
        ctx->pc = 0x395AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AA4u;
        // 0x395aa8: 0x460e0380  add.s       $f14, $f0, $f14 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395AACu;
        goto label_395aac;
    }
    ctx->pc = 0x395AA4u;
    SET_GPR_U32(ctx, 31, 0x395AACu);
    ctx->pc = 0x395AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395AA4u;
    // 0x395aa8: 0x460e0380  add.s       $f14, $f0, $f14 (Delay Slot)
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3925B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3925B0u, 0x395AA4u, 0x395AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395AACu;
label_395aac:
    // 0x395aac: 0x8e45011c  lw          $a1, 0x11C($s2)
    ctx->pc = 0x395aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_395ab0:
    // 0x395ab0: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_395ab4:
    if (ctx->pc == 0x395AB4u) {
        ctx->pc = 0x395AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AB0u;
        // 0x395ab4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395AB8u;
        goto label_395ab8;
    }
    ctx->pc = 0x395AB0u;
    {
        const bool branch_taken_0x395ab0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x395AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AB0u;
        // 0x395ab4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ab0) {
            ctx->pc = 0x395AF8u;
            goto label_395af8;
        }
    }
    ctx->pc = 0x395AB8u;
label_395ab8:
    // 0x395ab8: 0x9242010c  lbu         $v0, 0x10C($s2)
    ctx->pc = 0x395ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_395abc:
    // 0x395abc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_395ac0:
    if (ctx->pc == 0x395AC0u) {
        ctx->pc = 0x395AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395ABCu;
        // 0x395ac0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395AC4u;
        goto label_395ac4;
    }
    ctx->pc = 0x395ABCu;
    {
        const bool branch_taken_0x395abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395ABCu;
        // 0x395ac0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395abc) {
            ctx->pc = 0x395AF8u;
            goto label_395af8;
        }
    }
    ctx->pc = 0x395AC4u;
label_395ac4:
    // 0x395ac4: 0x78a205f0  lq          $v0, 0x5F0($a1)
    ctx->pc = 0x395ac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 1520)));
label_395ac8:
    // 0x395ac8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x395ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_395acc:
    // 0x395acc: 0x24a50600  addiu       $a1, $a1, 0x600
    ctx->pc = 0x395accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1536));
label_395ad0:
    // 0x395ad0: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x395ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_395ad4:
    // 0x395ad4: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x395ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_395ad8:
    // 0x395ad8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x395ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_395adc:
    // 0x395adc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x395adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_395ae0:
    // 0x395ae0: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x395ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_395ae4:
    // 0x395ae4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x395ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_395ae8:
    // 0x395ae8: 0x40f809  jalr        $v0
label_395aec:
    if (ctx->pc == 0x395AECu) {
        ctx->pc = 0x395AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AE8u;
        // 0x395aec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395AF0u;
        goto label_395af0;
    }
    ctx->pc = 0x395AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395AF0u);
        ctx->pc = 0x395AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AE8u;
        // 0x395aec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395AE8u, 0x395AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395AF0u;
label_395af0:
    // 0x395af0: 0xa240010c  sb          $zero, 0x10C($s2)
    ctx->pc = 0x395af0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 268), (uint8_t)GPR_U32(ctx, 0));
label_395af4:
    // 0x395af4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x395af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_395af8:
    // 0x395af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x395af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_395afc:
    // 0x395afc: 0xc0e87c0  jal         func_3A1F00
label_395b00:
    if (ctx->pc == 0x395B00u) {
        ctx->pc = 0x395B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AFCu;
        // 0x395b00: 0x8c507198  lw          $s0, 0x7198($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B04u;
        goto label_395b04;
    }
    ctx->pc = 0x395AFCu;
    SET_GPR_U32(ctx, 31, 0x395B04u);
    ctx->pc = 0x395B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395AFCu;
    // 0x395b00: 0x8c507198  lw          $s0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x395AFCu, 0x395B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395B04u;
label_395b04:
    // 0x395b04: 0x8e450118  lw          $a1, 0x118($s2)
    ctx->pc = 0x395b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_395b08:
    // 0x395b08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x395b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395b0c:
    // 0x395b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x395b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395b10:
    // 0x395b10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x395b10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_395b14:
    // 0x395b14: 0xc0cf89e  jal         func_33E278
label_395b18:
    if (ctx->pc == 0x395B18u) {
        ctx->pc = 0x395B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B14u;
        // 0x395b18: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B1Cu;
        goto label_395b1c;
    }
    ctx->pc = 0x395B14u;
    SET_GPR_U32(ctx, 31, 0x395B1Cu);
    ctx->pc = 0x395B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395B14u;
    // 0x395b18: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E278u, 0x395B14u, 0x395B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395B1Cu;
label_395b1c:
    // 0x395b1c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x395b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_395b20:
    // 0x395b20: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x395b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_395b24:
    // 0x395b24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x395b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_395b28:
    // 0x395b28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_395b2c:
    if (ctx->pc == 0x395B2Cu) {
        ctx->pc = 0x395B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B28u;
        // 0x395b2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B30u;
        goto label_395b30;
    }
    ctx->pc = 0x395B28u;
    {
        const bool branch_taken_0x395b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B28u;
        // 0x395b2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b28) {
            ctx->pc = 0x395B3Cu;
            goto label_395b3c;
        }
    }
    ctx->pc = 0x395B30u;
label_395b30:
    // 0x395b30: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x395b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_395b34:
    // 0x395b34: 0xc0cd6c2  jal         func_335B08
label_395b38:
    if (ctx->pc == 0x395B38u) {
        ctx->pc = 0x395B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B34u;
        // 0x395b38: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B3Cu;
        goto label_395b3c;
    }
    ctx->pc = 0x395B34u;
    SET_GPR_U32(ctx, 31, 0x395B3Cu);
    ctx->pc = 0x395B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395B34u;
    // 0x395b38: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B08u, 0x395B34u, 0x395B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395B3Cu;
label_395b3c:
    // 0x395b3c: 0xc0e8568  jal         func_3A15A0
label_395b40:
    if (ctx->pc == 0x395B40u) {
        ctx->pc = 0x395B44u;
        goto label_395b44;
    }
    ctx->pc = 0x395B3Cu;
    SET_GPR_U32(ctx, 31, 0x395B44u);
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x395B3Cu, 0x395B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395B44u;
label_395b44:
    // 0x395b44: 0x10000003  b           . + 4 + (0x3 << 2)
label_395b48:
    if (ctx->pc == 0x395B48u) {
        ctx->pc = 0x395B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B44u;
        // 0x395b48: 0xe6400050  swc1        $f0, 0x50($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B4Cu;
        goto label_395b4c;
    }
    ctx->pc = 0x395B44u;
    {
        const bool branch_taken_0x395b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B44u;
        // 0x395b48: 0xe6400050  swc1        $f0, 0x50($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b44) {
            ctx->pc = 0x395B54u;
            goto label_395b54;
        }
    }
    ctx->pc = 0x395B4Cu;
label_395b4c:
    // 0x395b4c: 0xc0e88c4  jal         func_3A2310
label_395b50:
    if (ctx->pc == 0x395B50u) {
        ctx->pc = 0x395B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B4Cu;
        // 0x395b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B54u;
        goto label_395b54;
    }
    ctx->pc = 0x395B4Cu;
    SET_GPR_U32(ctx, 31, 0x395B54u);
    ctx->pc = 0x395B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395B4Cu;
    // 0x395b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2310u, 0x395B4Cu, 0x395B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395B54u;
label_395b54:
    // 0x395b54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x395b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_395b58:
    // 0x395b58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x395b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_395b5c:
    // 0x395b5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x395b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_395b60:
    // 0x395b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_395b64:
    // 0x395b64: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x395b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_395b68:
    // 0x395b68: 0x3e00008  jr          $ra
label_395b6c:
    if (ctx->pc == 0x395B6Cu) {
        ctx->pc = 0x395B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B68u;
        // 0x395b6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B70u;
        goto label_fallthrough_0x395b68;
    }
    ctx->pc = 0x395B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B68u;
        // 0x395b6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x395b68:
    ctx->pc = 0x395B70u;
}

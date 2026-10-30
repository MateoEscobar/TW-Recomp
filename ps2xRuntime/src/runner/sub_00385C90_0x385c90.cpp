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

// Function: sub_00385C90
// Address: 0x385c90 - 0x385db0
void sub_00385C90_0x385c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385C90_0x385c90");
#endif

    switch (ctx->pc) {
        case 0x385c90u: goto label_385c90;
        case 0x385c94u: goto label_385c94;
        case 0x385c98u: goto label_385c98;
        case 0x385c9cu: goto label_385c9c;
        case 0x385ca0u: goto label_385ca0;
        case 0x385ca4u: goto label_385ca4;
        case 0x385ca8u: goto label_385ca8;
        case 0x385cacu: goto label_385cac;
        case 0x385cb0u: goto label_385cb0;
        case 0x385cb4u: goto label_385cb4;
        case 0x385cb8u: goto label_385cb8;
        case 0x385cbcu: goto label_385cbc;
        case 0x385cc0u: goto label_385cc0;
        case 0x385cc4u: goto label_385cc4;
        case 0x385cc8u: goto label_385cc8;
        case 0x385cccu: goto label_385ccc;
        case 0x385cd0u: goto label_385cd0;
        case 0x385cd4u: goto label_385cd4;
        case 0x385cd8u: goto label_385cd8;
        case 0x385cdcu: goto label_385cdc;
        case 0x385ce0u: goto label_385ce0;
        case 0x385ce4u: goto label_385ce4;
        case 0x385ce8u: goto label_385ce8;
        case 0x385cecu: goto label_385cec;
        case 0x385cf0u: goto label_385cf0;
        case 0x385cf4u: goto label_385cf4;
        case 0x385cf8u: goto label_385cf8;
        case 0x385cfcu: goto label_385cfc;
        case 0x385d00u: goto label_385d00;
        case 0x385d04u: goto label_385d04;
        case 0x385d08u: goto label_385d08;
        case 0x385d0cu: goto label_385d0c;
        case 0x385d10u: goto label_385d10;
        case 0x385d14u: goto label_385d14;
        case 0x385d18u: goto label_385d18;
        case 0x385d1cu: goto label_385d1c;
        case 0x385d20u: goto label_385d20;
        case 0x385d24u: goto label_385d24;
        case 0x385d28u: goto label_385d28;
        case 0x385d2cu: goto label_385d2c;
        case 0x385d30u: goto label_385d30;
        case 0x385d34u: goto label_385d34;
        case 0x385d38u: goto label_385d38;
        case 0x385d3cu: goto label_385d3c;
        case 0x385d40u: goto label_385d40;
        case 0x385d44u: goto label_385d44;
        case 0x385d48u: goto label_385d48;
        case 0x385d4cu: goto label_385d4c;
        case 0x385d50u: goto label_385d50;
        case 0x385d54u: goto label_385d54;
        case 0x385d58u: goto label_385d58;
        case 0x385d5cu: goto label_385d5c;
        case 0x385d60u: goto label_385d60;
        case 0x385d64u: goto label_385d64;
        case 0x385d68u: goto label_385d68;
        case 0x385d6cu: goto label_385d6c;
        case 0x385d70u: goto label_385d70;
        case 0x385d74u: goto label_385d74;
        case 0x385d78u: goto label_385d78;
        case 0x385d7cu: goto label_385d7c;
        case 0x385d80u: goto label_385d80;
        case 0x385d84u: goto label_385d84;
        case 0x385d88u: goto label_385d88;
        case 0x385d8cu: goto label_385d8c;
        case 0x385d90u: goto label_385d90;
        case 0x385d94u: goto label_385d94;
        case 0x385d98u: goto label_385d98;
        case 0x385d9cu: goto label_385d9c;
        case 0x385da0u: goto label_385da0;
        case 0x385da4u: goto label_385da4;
        case 0x385da8u: goto label_385da8;
        case 0x385dacu: goto label_385dac;
        default: break;
    }

    ctx->pc = 0x385c90u;

label_385c90:
    // 0x385c90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x385c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_385c94:
    // 0x385c94: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x385c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_385c98:
    // 0x385c98: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x385c98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_385c9c:
    // 0x385c9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x385c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_385ca0:
    // 0x385ca0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x385ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_385ca4:
    // 0x385ca4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x385ca4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_385ca8:
    // 0x385ca8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x385ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_385cac:
    // 0x385cac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x385cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_385cb0:
    // 0x385cb0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x385cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_385cb4:
    // 0x385cb4: 0xc0e4060  jal         func_390180
label_385cb8:
    if (ctx->pc == 0x385CB8u) {
        ctx->pc = 0x385CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CB4u;
        // 0x385cb8: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CBCu;
        goto label_385cbc;
    }
    ctx->pc = 0x385CB4u;
    SET_GPR_U32(ctx, 31, 0x385CBCu);
    ctx->pc = 0x385CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385CB4u;
    // 0x385cb8: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x385CB4u, 0x385CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385CBCu;
label_385cbc:
    // 0x385cbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x385cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385cc0:
    // 0x385cc0: 0x52200034  beql        $s1, $zero, . + 4 + (0x34 << 2)
label_385cc4:
    if (ctx->pc == 0x385CC4u) {
        ctx->pc = 0x385CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CC0u;
        // 0x385cc4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CC8u;
        goto label_385cc8;
    }
    ctx->pc = 0x385CC0u;
    {
        const bool branch_taken_0x385cc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x385cc0) {
            ctx->pc = 0x385CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385CC0u;
            // 0x385cc4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385D94u;
            goto label_385d94;
        }
    }
    ctx->pc = 0x385CC8u;
label_385cc8:
    // 0x385cc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x385cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_385ccc:
    // 0x385ccc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x385cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_385cd0:
    // 0x385cd0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x385cd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_385cd4:
    // 0x385cd4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x385cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_385cd8:
    // 0x385cd8: 0x60f809  jalr        $v1
label_385cdc:
    if (ctx->pc == 0x385CDCu) {
        ctx->pc = 0x385CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CD8u;
        // 0x385cdc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CE0u;
        goto label_385ce0;
    }
    ctx->pc = 0x385CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385CE0u);
        ctx->pc = 0x385CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CD8u;
        // 0x385cdc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385CD8u, 0x385CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385CE0u;
label_385ce0:
    // 0x385ce0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x385ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_385ce4:
    // 0x385ce4: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x385ce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_385ce8:
    // 0x385ce8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x385ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_385cec:
    // 0x385cec: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x385cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_385cf0:
    // 0x385cf0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x385cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_385cf4:
    // 0x385cf4: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x385cf4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_385cf8:
    // 0x385cf8: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x385cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_385cfc:
    // 0x385cfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x385cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_385d00:
    // 0x385d00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x385d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_385d04:
    // 0x385d04: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x385d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_385d08:
    // 0x385d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x385d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_385d0c:
    // 0x385d0c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x385d0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_385d10:
    // 0x385d10: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x385d10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_385d14:
    // 0x385d14: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x385d14u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_385d18:
    // 0x385d18: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x385d18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_385d1c:
    // 0x385d1c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x385d1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_385d20:
    // 0x385d20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x385d20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_385d24:
    // 0x385d24: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x385d24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_385d28:
    // 0x385d28: 0xc12e310  jal         func_4B8C40
label_385d2c:
    if (ctx->pc == 0x385D2Cu) {
        ctx->pc = 0x385D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D28u;
        // 0x385d2c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D30u;
        goto label_385d30;
    }
    ctx->pc = 0x385D28u;
    SET_GPR_U32(ctx, 31, 0x385D30u);
    ctx->pc = 0x385D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D28u;
    // 0x385d2c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x385D28u, 0x385D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D30u;
label_385d30:
    // 0x385d30: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x385d30u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_385d34:
    // 0x385d34: 0xc12e29c  jal         func_4B8A70
label_385d38:
    if (ctx->pc == 0x385D38u) {
        ctx->pc = 0x385D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D34u;
        // 0x385d38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D3Cu;
        goto label_385d3c;
    }
    ctx->pc = 0x385D34u;
    SET_GPR_U32(ctx, 31, 0x385D3Cu);
    ctx->pc = 0x385D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D34u;
    // 0x385d38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x385D34u, 0x385D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D3Cu;
label_385d3c:
    // 0x385d3c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x385d3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_385d40:
    // 0x385d40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x385d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_385d44:
    // 0x385d44: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x385d44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_385d48:
    // 0x385d48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x385d48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_385d4c:
    // 0x385d4c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x385d4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_385d50:
    // 0x385d50: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x385d50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_385d54:
    // 0x385d54: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x385d54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_385d58:
    // 0x385d58: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x385d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_385d5c:
    // 0x385d5c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x385d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_385d60:
    // 0x385d60: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x385d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_385d64:
    // 0x385d64: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x385d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_385d68:
    // 0x385d68: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x385d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_385d6c:
    // 0x385d6c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x385d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_385d70:
    // 0x385d70: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x385d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_385d74:
    // 0x385d74: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x385d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_385d78:
    // 0x385d78: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x385d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_385d7c:
    // 0x385d7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x385d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_385d80:
    // 0x385d80: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x385d80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_385d84:
    // 0x385d84: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x385d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_385d88:
    // 0x385d88: 0x60f809  jalr        $v1
label_385d8c:
    if (ctx->pc == 0x385D8Cu) {
        ctx->pc = 0x385D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D88u;
        // 0x385d8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D90u;
        goto label_385d90;
    }
    ctx->pc = 0x385D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385D90u);
        ctx->pc = 0x385D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D88u;
        // 0x385d8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385D88u, 0x385D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385D90u;
label_385d90:
    // 0x385d90: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x385d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_385d94:
    // 0x385d94: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x385d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_385d98:
    // 0x385d98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x385d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_385d9c:
    // 0x385d9c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x385d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_385da0:
    // 0x385da0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x385da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_385da4:
    // 0x385da4: 0x3e00008  jr          $ra
label_385da8:
    if (ctx->pc == 0x385DA8u) {
        ctx->pc = 0x385DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DA4u;
        // 0x385da8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385DACu;
        goto label_385dac;
    }
    ctx->pc = 0x385DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DA4u;
        // 0x385da8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385DACu;
label_385dac:
    // 0x385dac: 0x0  nop
    ctx->pc = 0x385dacu;
    // NOP
    ctx->pc = 0x385db0u;
}

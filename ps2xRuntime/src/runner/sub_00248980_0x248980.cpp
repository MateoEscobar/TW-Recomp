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

// Function: sub_00248980
// Address: 0x248980 - 0x248df0
void sub_00248980_0x248980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248980_0x248980");
#endif

    switch (ctx->pc) {
        case 0x2489bcu: goto label_2489bc;
        case 0x2489d0u: goto label_2489d0;
        case 0x248aa4u: goto label_248aa4;
        case 0x248ab0u: goto label_248ab0;
        case 0x248b38u: goto label_248b38;
        case 0x248b48u: goto label_248b48;
        case 0x248b60u: goto label_248b60;
        case 0x248b88u: goto label_248b88;
        case 0x248b94u: goto label_248b94;
        case 0x248bfcu: goto label_248bfc;
        case 0x248c0cu: goto label_248c0c;
        case 0x248c20u: goto label_248c20;
        case 0x248c38u: goto label_248c38;
        case 0x248c4cu: goto label_248c4c;
        case 0x248cc8u: goto label_248cc8;
        case 0x248d90u: goto label_248d90;
        default: break;
    }

    ctx->pc = 0x248980u;

    // 0x248980: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x248980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x248984: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x248984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x248988: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x248988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x24898c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24898cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248990: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x248990u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248994: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x248994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x248998: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x248998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x24899c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24899cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489a0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2489a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2489a4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2489a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2489a8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2489a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2489ac: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2489acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2489b0: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2489b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2489b4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2489B4u;
    SET_GPR_U32(ctx, 31, 0x2489BCu);
    ctx->pc = 0x2489B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489B4u;
    // 0x2489b8: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2489B4u, 0x2489BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489BCu;
label_2489bc:
    // 0x2489bc: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2489bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2489c0: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2489C0u;
    {
        const bool branch_taken_0x2489c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2489C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489C0u;
        // 0x2489c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489c0) {
            ctx->pc = 0x248B58u;
            goto label_248b58;
        }
    }
    ctx->pc = 0x2489C8u;
    // 0x2489c8: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2489C8u;
    SET_GPR_U32(ctx, 31, 0x2489D0u);
    ctx->pc = 0x2489CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489C8u;
    // 0x2489cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2489C8u, 0x2489D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489D0u;
label_2489d0:
    // 0x2489d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2489d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489d4: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x2489d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x2489d8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2489d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2489dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2489dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2489e0: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x2489e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2489e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2489e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2489e8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2489e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2489ec: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2489ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2489f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2489f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2489f4: 0x0  nop
    ctx->pc = 0x2489f4u;
    // NOP
    // 0x2489f8: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x2489F8u;
    {
        const bool branch_taken_0x2489f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2489FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489F8u;
        // 0x2489fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489f8) {
            ctx->pc = 0x248AF0u;
            goto label_248af0;
        }
    }
    ctx->pc = 0x248A00u;
    // 0x248a00: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x248a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x248a04: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248a04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x248a08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x248a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x248a0c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x248a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248a10: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x248a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x248a14: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x248a18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248a1c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x248a1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x248a20: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x248a20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248a24: 0x0  nop
    ctx->pc = 0x248a24u;
    // NOP
    // 0x248a28: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x248A28u;
    {
        const bool branch_taken_0x248a28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248a28) {
            ctx->pc = 0x248A44u;
            goto label_248a44;
        }
    }
    ctx->pc = 0x248A30u;
    // 0x248a30: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x248a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x248a34: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x248a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248a3c: 0x0  nop
    ctx->pc = 0x248a3cu;
    // NOP
    // 0x248a40: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x248a40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_248a44:
    // 0x248a44: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x248a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x248a48: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x248a4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248a50: 0x0  nop
    ctx->pc = 0x248a50u;
    // NOP
    // 0x248a54: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x248a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248a58: 0x0  nop
    ctx->pc = 0x248a58u;
    // NOP
    // 0x248a5c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x248A5Cu;
    {
        const bool branch_taken_0x248a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248a5c) {
            ctx->pc = 0x248A78u;
            goto label_248a78;
        }
    }
    ctx->pc = 0x248A64u;
    // 0x248a64: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x248a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x248a68: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x248a6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248a70: 0x0  nop
    ctx->pc = 0x248a70u;
    // NOP
    // 0x248a74: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x248a74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_248a78:
    // 0x248a78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x248a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x248a7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x248a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x248a80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x248a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x248a84: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x248a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x248a88: 0x26740090  addiu       $s4, $s3, 0x90
    ctx->pc = 0x248a88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x248a8c: 0x46141502  mul.s       $f20, $f2, $f20
    ctx->pc = 0x248a8cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x248a90: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x248a90u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511740u));
    // 0x248a94: 0x3c160071  lui         $s6, 0x71
    ctx->pc = 0x248a94u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
    // 0x248a98: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x248a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x248a9c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x248A9Cu;
    SET_GPR_U32(ctx, 31, 0x248AA4u);
    ctx->pc = 0x248AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A9Cu;
    // 0x248aa0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x248A9Cu, 0x248AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AA4u;
label_248aa4:
    // 0x248aa4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x248aa4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x248aa8: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x248AA8u;
    SET_GPR_U32(ctx, 31, 0x248AB0u);
    ctx->pc = 0x248AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248AA8u;
    // 0x248aac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x248AA8u, 0x248AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AB0u;
label_248ab0:
    // 0x248ab0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x248ab0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248ab4: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x248ab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x248ab8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x248ab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x248abc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x248abcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x248ac0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x248ac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x248ac4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x248ac4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x248ac8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x248ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x248acc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x248accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x248ad0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x248ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x248ad4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x248ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248ad8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x248ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248adc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x248adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x248ae0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x248ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x248ae4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x248ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x248ae8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x248AE8u;
    {
        const bool branch_taken_0x248ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248AE8u;
        // 0x248aec: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ae8) {
            ctx->pc = 0x248B18u;
            goto label_248b18;
        }
    }
    ctx->pc = 0x248AF0u;
label_248af0:
    // 0x248af0: 0x26620090  addiu       $v0, $s3, 0x90
    ctx->pc = 0x248af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x248af4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x248af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x248af8: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x248af8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x248afc: 0x24854b00  addiu       $a1, $a0, 0x4B00
    ctx->pc = 0x248afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x248b00: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x248b00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b04: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x248b04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b08: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x248b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x248b0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x248b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x248b10: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x248b10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x248b14: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x248b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_248b18:
    // 0x248b18: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x248b18u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x248b1c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x248b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x248b20: 0x26c24b00  addiu       $v0, $s6, 0x4B00
    ctx->pc = 0x248b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
    // 0x248b24: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x248b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x248b28: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x248b28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x248b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b30: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x248B30u;
    SET_GPR_U32(ctx, 31, 0x248B38u);
    ctx->pc = 0x248B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B30u;
    // 0x248b34: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x248B30u, 0x248B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B38u;
label_248b38:
    // 0x248b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x248b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b40: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x248B40u;
    SET_GPR_U32(ctx, 31, 0x248B48u);
    ctx->pc = 0x248B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B40u;
    // 0x248b44: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x248B40u, 0x248B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B48u;
label_248b48:
    // 0x248b48: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x248b48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248b4c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x248b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x248b50: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x248B50u;
    {
        const bool branch_taken_0x248b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B50u;
        // 0x248b54: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b50) {
            ctx->pc = 0x248C18u;
            goto label_248c18;
        }
    }
    ctx->pc = 0x248B58u;
label_248b58:
    // 0x248b58: 0xc087502  jal         func_21D408
    ctx->pc = 0x248B58u;
    SET_GPR_U32(ctx, 31, 0x248B60u);
    ctx->pc = 0x248B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B58u;
    // 0x248b5c: 0x26700090  addiu       $s0, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x248B58u, 0x248B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B60u;
label_248b60:
    // 0x248b60: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x248b60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b64: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x248b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x248b68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x248b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b6c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x248b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x248b70: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x248b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x248b74: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x248b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x248b78: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x248b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x248b7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x248b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x248b80: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x248B80u;
    SET_GPR_U32(ctx, 31, 0x248B88u);
    ctx->pc = 0x248B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B80u;
    // 0x248b84: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x248B80u, 0x248B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B88u;
label_248b88:
    // 0x248b88: 0xc64c0110  lwc1        $f12, 0x110($s2)
    ctx->pc = 0x248b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x248b8c: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x248B8Cu;
    SET_GPR_U32(ctx, 31, 0x248B94u);
    ctx->pc = 0x248B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B8Cu;
    // 0x248b90: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x248B8Cu, 0x248B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B94u;
label_248b94:
    // 0x248b94: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x248b94u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x248b98: 0xc6410114  lwc1        $f1, 0x114($s2)
    ctx->pc = 0x248b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248b9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248ba0: 0x0  nop
    ctx->pc = 0x248ba0u;
    // NOP
    // 0x248ba4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x248ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248ba8: 0x0  nop
    ctx->pc = 0x248ba8u;
    // NOP
    // 0x248bac: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x248BACu;
    {
        const bool branch_taken_0x248bac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248bac) {
            ctx->pc = 0x248BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248BACu;
            // 0x248bb0: 0x86900002  lh          $s0, 0x2($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248BE0u;
            goto label_248be0;
        }
    }
    ctx->pc = 0x248BB4u;
    // 0x248bb4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x248bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x248bb8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248bb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x248bbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248bc0: 0x0  nop
    ctx->pc = 0x248bc0u;
    // NOP
    // 0x248bc4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x248bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248bc8: 0x0  nop
    ctx->pc = 0x248bc8u;
    // NOP
    // 0x248bcc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x248BCCu;
    {
        const bool branch_taken_0x248bcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248bcc) {
            ctx->pc = 0x248BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248BCCu;
            // 0x248bd0: 0x86900002  lh          $s0, 0x2($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248BE0u;
            goto label_248be0;
        }
    }
    ctx->pc = 0x248BD4u;
    // 0x248bd4: 0x7a420090  lq          $v0, 0x90($s2)
    ctx->pc = 0x248bd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x248bd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x248BD8u;
    {
        const bool branch_taken_0x248bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BD8u;
        // 0x248bdc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bd8) {
            ctx->pc = 0x248C18u;
            goto label_248c18;
        }
    }
    ctx->pc = 0x248BE0u;
label_248be0:
    // 0x248be0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x248be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x248be4: 0x26c24b00  addiu       $v0, $s6, 0x4B00
    ctx->pc = 0x248be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
    // 0x248be8: 0xc64c0110  lwc1        $f12, 0x110($s2)
    ctx->pc = 0x248be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x248bec: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x248becu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x248bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248bf4: 0xc0cd790  jal         func_335E40
    ctx->pc = 0x248BF4u;
    SET_GPR_U32(ctx, 31, 0x248BFCu);
    ctx->pc = 0x248BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248BF4u;
    // 0x248bf8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x248BF4u, 0x248BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BFCu;
label_248bfc:
    // 0x248bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248c00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x248c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248c04: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x248C04u;
    SET_GPR_U32(ctx, 31, 0x248C0Cu);
    ctx->pc = 0x248C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248C04u;
    // 0x248c08: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x248C04u, 0x248C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C0Cu;
label_248c0c:
    // 0x248c0c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x248c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248c10: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x248c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x248c14: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x248c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_248c18:
    // 0x248c18: 0xc087408  jal         func_21D020
    ctx->pc = 0x248C18u;
    SET_GPR_U32(ctx, 31, 0x248C20u);
    ctx->pc = 0x248C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248C18u;
    // 0x248c1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x248C18u, 0x248C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C20u;
label_248c20:
    // 0x248c20: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x248c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x248c24: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x248c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x248c28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248c2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x248c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248c30: 0xc08a05a  jal         func_228168
    ctx->pc = 0x248C30u;
    SET_GPR_U32(ctx, 31, 0x248C38u);
    ctx->pc = 0x248C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248C30u;
    // 0x248c34: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x248C30u, 0x248C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C38u;
label_248c38:
    // 0x248c38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248c3c: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x248C3Cu;
    {
        const bool branch_taken_0x248c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x248c3c) {
            ctx->pc = 0x248C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248C3Cu;
            // 0x248c40: 0x92620333  lbu         $v0, 0x333($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 819)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248C64u;
            goto label_248c64;
        }
    }
    ctx->pc = 0x248C44u;
    // 0x248c44: 0xc087408  jal         func_21D020
    ctx->pc = 0x248C44u;
    SET_GPR_U32(ctx, 31, 0x248C4Cu);
    ctx->pc = 0x248C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248C44u;
    // 0x248c48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x248C44u, 0x248C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C4Cu;
label_248c4c:
    // 0x248c4c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x248c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x248c50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248c54: 0x0  nop
    ctx->pc = 0x248c54u;
    // NOP
    // 0x248c58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x248c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x248c5c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x248c5cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x248c60: 0x92620333  lbu         $v0, 0x333($s3)
    ctx->pc = 0x248c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 819)));
label_248c64:
    // 0x248c64: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x248C64u;
    {
        const bool branch_taken_0x248c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C64u;
        // 0x248c68: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c64) {
            ctx->pc = 0x248DACu;
            goto label_248dac;
        }
    }
    ctx->pc = 0x248C6Cu;
    // 0x248c6c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x248c6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248c70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x248c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x248c74: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x248c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x248c78: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x248c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x248c7c: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x248c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x248c80: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x248c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x248c84: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x248c84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x248c88: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x248c88u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511770u));
    // 0x248c8c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x248c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x248c90: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x248c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248c94: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x248c94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x248c98: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x248c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x248c9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248ca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x248ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ca4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x248ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x248ca8: 0x8e0447c4  lw          $a0, 0x47C4($s0)
    ctx->pc = 0x248ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x248cac: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x248cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x248cb0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x248cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248cb4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x248cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x248cb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x248cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248cbc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x248cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x248cc0: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x248CC0u;
    SET_GPR_U32(ctx, 31, 0x248CC8u);
    ctx->pc = 0x248CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248CC0u;
    // 0x248cc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x248CC0u, 0x248CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248CC8u;
label_248cc8:
    // 0x248cc8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x248cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x248ccc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x248CCCu;
    {
        const bool branch_taken_0x248ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CCCu;
        // 0x248cd0: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ccc) {
            ctx->pc = 0x248DA8u;
            goto label_248da8;
        }
    }
    ctx->pc = 0x248CD4u;
    // 0x248cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248cd8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x248cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x248cdc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x248cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x248ce0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x248ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x248ce4: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x248ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x248ce8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x248ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x248cec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x248cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x248cf0: 0x4602a080  add.s       $f2, $f20, $f2
    ctx->pc = 0x248cf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x248cf4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x248cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x248cf8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x248cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x248cfc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x248cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248d00: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x248d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x248d04: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x248d04u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x248d08: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x248d08u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x248d0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x248d0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248d10: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x248d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248d14: 0x0  nop
    ctx->pc = 0x248d14u;
    // NOP
    // 0x248d18: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x248D18u;
    {
        const bool branch_taken_0x248d18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D18u;
        // 0x248d1c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d18) {
            ctx->pc = 0x248DA0u;
            goto label_248da0;
        }
    }
    ctx->pc = 0x248D20u;
    // 0x248d20: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x248d20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248d24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x248d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x248d28: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x248d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x248d2c: 0x26c94b00  addiu       $t1, $s6, 0x4B00
    ctx->pc = 0x248d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
    // 0x248d30: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x248d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x248d34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x248d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d38: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x248d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x248d3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x248d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x248d40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x248d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d48: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x248d48u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x511740u));
    // 0x248d4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x248d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d50: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x248d50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x248d54: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x248d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x248d58: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x248d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x248d5c: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x248d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
    // 0x248d60: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x248d60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x248d64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248d68: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x248d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x248d6c: 0x8e0447c4  lw          $a0, 0x47C4($s0)
    ctx->pc = 0x248d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18372)));
    // 0x248d70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x248d70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x248d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d78: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x248d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x248d7c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x248d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x248d80: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x248d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248d84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x248d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x248d88: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x248D88u;
    SET_GPR_U32(ctx, 31, 0x248D90u);
    ctx->pc = 0x248D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D88u;
    // 0x248d8c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x248D88u, 0x248D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D90u;
label_248d90:
    // 0x248d90: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x248d90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248d94: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x248d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x248d98: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x248d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x248d9c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x248d9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_248da0:
    // 0x248da0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x248DA0u;
    {
        const bool branch_taken_0x248da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x248DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DA0u;
        // 0x248da4: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248da0) {
            ctx->pc = 0x248DB8u;
            goto label_248db8;
        }
    }
    ctx->pc = 0x248DA8u;
label_248da8:
    // 0x248da8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x248da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248dac:
    // 0x248dac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x248dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x248db0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x248db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x248db4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x248db4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_248db8:
    // 0x248db8: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x248db8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x248dbc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x248dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248dc0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x248dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x248dc4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x248dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x248dc8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x248dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x248dcc: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x248dccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x248dd0: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x248dd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x248dd4: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x248dd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x248dd8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x248dd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x248ddc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x248ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x248de0: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x248de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x248de4: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x248de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x248de8: 0x3e00008  jr          $ra
    ctx->pc = 0x248DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DE8u;
        // 0x248dec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248DF0u;
}

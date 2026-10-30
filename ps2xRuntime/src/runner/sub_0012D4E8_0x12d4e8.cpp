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

// Function: sub_0012D4E8
// Address: 0x12d4e8 - 0x12d688
void sub_0012D4E8_0x12d4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D4E8_0x12d4e8");
#endif

    switch (ctx->pc) {
        case 0x12d5ccu: goto label_12d5cc;
        case 0x12d5d8u: goto label_12d5d8;
        case 0x12d624u: goto label_12d624;
        case 0x12d640u: goto label_12d640;
        case 0x12d65cu: goto label_12d65c;
        default: break;
    }

    ctx->pc = 0x12d4e8u;

    // 0x12d4e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12d4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12d4ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x12d4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x12d4f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x12d4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x12d4f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12d4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12d4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12d4fc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x12d4fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x12d500: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x12d500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12d504: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x12d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d508: 0xc48003ac  lwc1        $f0, 0x3AC($a0)
    ctx->pc = 0x12d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d50c: 0x460c0880  add.s       $f2, $f1, $f12
    ctx->pc = 0x12d50cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x12d510: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12d510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d514: 0x0  nop
    ctx->pc = 0x12d514u;
    // NOP
    // 0x12d518: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x12D518u;
    {
        const bool branch_taken_0x12d518 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D518u;
        // 0x12d51c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d518) {
            ctx->pc = 0x12D534u;
            goto label_12d534;
        }
    }
    ctx->pc = 0x12D520u;
    // 0x12d520: 0xc48003b0  lwc1        $f0, 0x3B0($a0)
    ctx->pc = 0x12d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d524: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12d524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d528: 0x0  nop
    ctx->pc = 0x12d528u;
    // NOP
    // 0x12d52c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12D52Cu;
    {
        const bool branch_taken_0x12d52c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d52c) {
            ctx->pc = 0x12D538u;
            goto label_12d538;
        }
    }
    ctx->pc = 0x12D534u;
label_12d534:
    // 0x12d534: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x12d534u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12d538:
    // 0x12d538: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12d538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x12d53c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12d53cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x12d540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12d540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d544: 0x0  nop
    ctx->pc = 0x12d544u;
    // NOP
    // 0x12d548: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x12d548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d54c: 0x0  nop
    ctx->pc = 0x12d54cu;
    // NOP
    // 0x12d550: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x12D550u;
    {
        const bool branch_taken_0x12d550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d550) {
            ctx->pc = 0x12D554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D550u;
            // 0x12d554: 0xc4c00000  lwc1        $f0, 0x0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D57Cu;
            goto label_12d57c;
        }
    }
    ctx->pc = 0x12D558u;
    // 0x12d558: 0x3c01b727  lui         $at, 0xB727
    ctx->pc = 0x12d558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46887 << 16));
    // 0x12d55c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12d55cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x12d560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12d560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d564: 0x0  nop
    ctx->pc = 0x12d564u;
    // NOP
    // 0x12d568: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x12d568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d56c: 0x0  nop
    ctx->pc = 0x12d56cu;
    // NOP
    // 0x12d570: 0x4503003e  bc1tl       . + 4 + (0x3E << 2)
    ctx->pc = 0x12D570u;
    {
        const bool branch_taken_0x12d570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d570) {
            ctx->pc = 0x12D574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D570u;
            // 0x12d574: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D66Cu;
            goto label_12d66c;
        }
    }
    ctx->pc = 0x12D578u;
    // 0x12d578: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x12d578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12d57c:
    // 0x12d57c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12d57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12d580: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12d580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12d584: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x12d584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x12d588: 0x46146502  mul.s       $f20, $f12, $f20
    ctx->pc = 0x12d588u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x12d58c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x12d58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x12d590: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12d590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12d594: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x12d594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d598: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x12d598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d59c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x12d59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d5a0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x12d5a0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x12d5a4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x12d5a4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x12d5a8: 0xc503000c  lwc1        $f3, 0xC($t0)
    ctx->pc = 0x12d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12d5ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12d5acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12d5b0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12d5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x12d5b4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x12d5b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x12d5b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12d5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12d5bc: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x12d5bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x12d5c0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12d5c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d5c4: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x12D5C4u;
    SET_GPR_U32(ctx, 31, 0x12D5CCu);
    ctx->pc = 0x12D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5C4u;
    // 0x12d5c8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x12D5C4u, 0x12D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5CCu;
label_12d5cc:
    // 0x12d5cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12d5ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12d5d0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x12D5D0u;
    SET_GPR_U32(ctx, 31, 0x12D5D8u);
    ctx->pc = 0x12D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5D0u;
    // 0x12d5d4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12D5D0u, 0x12D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5D8u;
label_12d5d8:
    // 0x12d5d8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12d5d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d5dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d5e0: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x12d5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d5e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12d5e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12d5ec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12d5ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12d5f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12d5f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12d5f4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12d5f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12d5f8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x12d5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x12d5fc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12d5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12d600: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12d600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d604: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x12d604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x12d608: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x12d608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d60c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x12d60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d610: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x12d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d614: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x12d614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12d618: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x12d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12d61c: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x12D61Cu;
    SET_GPR_U32(ctx, 31, 0x12D624u);
    ctx->pc = 0x12D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D61Cu;
    // 0x12d620: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12D61Cu, 0x12D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D624u;
label_12d624:
    // 0x12d624: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12d624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d628: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d62c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12d62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d630: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12d630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d634: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12d634u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12d638: 0xc136b30  jal         func_4DACC0
    ctx->pc = 0x12D638u;
    SET_GPR_U32(ctx, 31, 0x12D640u);
    ctx->pc = 0x12D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D638u;
    // 0x12d63c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x12D638u, 0x12D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D640u;
label_12d640:
    // 0x12d640: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12d640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d644: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12d644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d648: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d64c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d650: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12d650u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12d654: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x12D654u;
    SET_GPR_U32(ctx, 31, 0x12D65Cu);
    ctx->pc = 0x12D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D654u;
    // 0x12d658: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12D654u, 0x12D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D65Cu;
label_12d65c:
    // 0x12d65c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12d65cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d660: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12d660u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12d664: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12d664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12d668: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x12d668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12d66c:
    // 0x12d66c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x12d66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12d670: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12d670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d674: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x12d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12d678: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x12d678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12d67c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D67Cu;
        // 0x12d680: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D684u;
    // 0x12d684: 0x0  nop
    ctx->pc = 0x12d684u;
    // NOP
    ctx->pc = 0x12d688u;
}

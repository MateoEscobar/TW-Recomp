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

// Function: sub_00296488
// Address: 0x296488 - 0x296908
void sub_00296488_0x296488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296488_0x296488");
#endif

    switch (ctx->pc) {
        case 0x296570u: goto label_296570;
        case 0x296584u: goto label_296584;
        case 0x296590u: goto label_296590;
        case 0x2965dcu: goto label_2965dc;
        case 0x2965f4u: goto label_2965f4;
        case 0x296610u: goto label_296610;
        case 0x296640u: goto label_296640;
        case 0x296694u: goto label_296694;
        case 0x2966acu: goto label_2966ac;
        case 0x2966ccu: goto label_2966cc;
        case 0x2966e8u: goto label_2966e8;
        case 0x296764u: goto label_296764;
        case 0x296774u: goto label_296774;
        case 0x2967c4u: goto label_2967c4;
        case 0x2967dcu: goto label_2967dc;
        case 0x296800u: goto label_296800;
        case 0x296814u: goto label_296814;
        case 0x296820u: goto label_296820;
        case 0x29686cu: goto label_29686c;
        case 0x296884u: goto label_296884;
        case 0x29689cu: goto label_29689c;
        case 0x2968b8u: goto label_2968b8;
        default: break;
    }

    ctx->pc = 0x296488u;

    // 0x296488: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x296488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x29648c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296490: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x296490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x296494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296498: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x296498u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x29649c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29649cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964a0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2964a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2964a4: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2964a4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2964a8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2964a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2964ac: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2964acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2964b0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2964b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2964b4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2964b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2964b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2964b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2964bc: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x2964bcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2964c0: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x2964c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2964c4: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2964c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2964c8: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2964c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2964cc: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2964ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2964d0: 0x10a2008b  beq         $a1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x2964D0u;
    {
        const bool branch_taken_0x2964d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2964D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964D0u;
        // 0x2964d4: 0xa2630274  sb          $v1, 0x274($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 628), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964d0) {
            ctx->pc = 0x296700u;
            goto label_296700;
        }
    }
    ctx->pc = 0x2964D8u;
    // 0x2964d8: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2964d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2964dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2964DCu;
    {
        const bool branch_taken_0x2964dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2964dc) {
            ctx->pc = 0x2964E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2964DCu;
            // 0x2964e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2964F4u;
            goto label_2964f4;
        }
    }
    ctx->pc = 0x2964E4u;
    // 0x2964e4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2964E4u;
    {
        const bool branch_taken_0x2964e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2964E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964E4u;
        // 0x2964e8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964e4) {
            ctx->pc = 0x296504u;
            goto label_296504;
        }
    }
    ctx->pc = 0x2964ECu;
    // 0x2964ec: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2964ECu;
    {
        const bool branch_taken_0x2964ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2964F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964ECu;
        // 0x2964f0: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964ec) {
            ctx->pc = 0x2968D0u;
            goto label_2968d0;
        }
    }
    ctx->pc = 0x2964F4u;
label_2964f4:
    // 0x2964f4: 0x10a2004c  beq         $a1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2964F4u;
    {
        const bool branch_taken_0x2964f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2964F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964F4u;
        // 0x2964f8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964f4) {
            ctx->pc = 0x296628u;
            goto label_296628;
        }
    }
    ctx->pc = 0x2964FCu;
    // 0x2964fc: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x2964FCu;
    {
        const bool branch_taken_0x2964fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964FCu;
        // 0x296500: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964fc) {
            ctx->pc = 0x2968D0u;
            goto label_2968d0;
        }
    }
    ctx->pc = 0x296504u;
label_296504:
    // 0x296504: 0x92630271  lbu         $v1, 0x271($s3)
    ctx->pc = 0x296504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
    // 0x296508: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x296508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x29650c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x29650cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x296510: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x296510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x296514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296518: 0x0  nop
    ctx->pc = 0x296518u;
    // NOP
    // 0x29651c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29651cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x296520: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x296520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x296524: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x296524u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x296528: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x296528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x29652c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x29652cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x296530: 0x0  nop
    ctx->pc = 0x296530u;
    // NOP
    // 0x296534: 0x0  nop
    ctx->pc = 0x296534u;
    // NOP
    // 0x296538: 0x46000e03  div.s       $f24, $f1, $f0
    ctx->pc = 0x296538u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29653c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29653Cu;
    {
        const bool branch_taken_0x29653c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29653c) {
            ctx->pc = 0x296550u;
            goto label_296550;
        }
    }
    ctx->pc = 0x296544u;
    // 0x296544: 0x3c01c016  lui         $at, 0xC016
    ctx->pc = 0x296544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49174 << 16));
    // 0x296548: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x296548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x29654c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x29654cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_296550:
    // 0x296550: 0x106000dd  beqz        $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x296550u;
    {
        const bool branch_taken_0x296550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296550u;
        // 0x296554: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296550) {
            ctx->pc = 0x2968C8u;
            goto label_2968c8;
        }
    }
    ctx->pc = 0x296558u;
    // 0x296558: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x296558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29655c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29655cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x296560: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x296560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x296564: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x296564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x296568: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x296568u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x29656c: 0x4619b502  mul.s       $f20, $f22, $f25
    ctx->pc = 0x29656cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
label_296570:
    // 0x296570: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x296570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x296574: 0x4618b580  add.s       $f22, $f22, $f24
    ctx->pc = 0x296574u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[24]);
    // 0x296578: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x296578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x29657c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x29657Cu;
    SET_GPR_U32(ctx, 31, 0x296584u);
    ctx->pc = 0x296580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29657Cu;
    // 0x296580: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x29657Cu, 0x296584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296584u;
label_296584:
    // 0x296584: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x296584u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x296588: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x296588u;
    SET_GPR_U32(ctx, 31, 0x296590u);
    ctx->pc = 0x29658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296588u;
    // 0x29658c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x296588u, 0x296590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296590u;
label_296590:
    // 0x296590: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x296590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296594: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x296594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x296598: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x296598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29659c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x29659cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2965a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2965a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2965a4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2965a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2965a8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2965a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2965ac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2965acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2965b0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2965b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2965b4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2965b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2965b8: 0x26251730  addiu       $a1, $s1, 0x1730
    ctx->pc = 0x2965b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5936));
    // 0x2965bc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2965bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2965c0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2965c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2965c4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2965c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2965c8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2965c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2965cc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2965ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2965d0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2965d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2965d4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x2965D4u;
    SET_GPR_U32(ctx, 31, 0x2965DCu);
    ctx->pc = 0x2965D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2965D4u;
    // 0x2965d8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2965D4u, 0x2965DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2965DCu;
label_2965dc:
    // 0x2965dc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2965dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2965e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2965e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2965e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2965e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2965e8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2965e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2965ec: 0xc136b30  jal         func_4DACC0
    ctx->pc = 0x2965ECu;
    SET_GPR_U32(ctx, 31, 0x2965F4u);
    ctx->pc = 0x2965F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2965ECu;
    // 0x2965f0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x2965ECu, 0x2965F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2965F4u;
label_2965f4:
    // 0x2965f4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2965f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2965f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2965f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2965fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2965fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296600: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x296600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x296604: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x296604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x296608: 0xc0a57b2  jal         func_295EC8
    ctx->pc = 0x296608u;
    SET_GPR_U32(ctx, 31, 0x296610u);
    ctx->pc = 0x29660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296608u;
    // 0x29660c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EC8u, 0x296608u, 0x296610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296610u;
label_296610:
    // 0x296610: 0x92620271  lbu         $v0, 0x271($s3)
    ctx->pc = 0x296610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
    // 0x296614: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x296614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x296618: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x296618u;
    {
        const bool branch_taken_0x296618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296618) {
            ctx->pc = 0x29661Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296618u;
            // 0x29661c: 0x4619b502  mul.s       $f20, $f22, $f25 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x296570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296570;
        }
    }
    ctx->pc = 0x296620u;
    // 0x296620: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x296620u;
    {
        const bool branch_taken_0x296620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296620u;
        // 0x296624: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296620) {
            ctx->pc = 0x2968CCu;
            goto label_2968cc;
        }
    }
    ctx->pc = 0x296628u;
label_296628:
    // 0x296628: 0x92620271  lbu         $v0, 0x271($s3)
    ctx->pc = 0x296628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
    // 0x29662c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29662cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296630: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x296630u;
    {
        const bool branch_taken_0x296630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296630u;
        // 0x296634: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296630) {
            ctx->pc = 0x2968C8u;
            goto label_2968c8;
        }
    }
    ctx->pc = 0x296638u;
    // 0x296638: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x296638u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x29663c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x29663cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_296640:
    // 0x296640: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x296640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296644: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x296644u;
    {
        const bool branch_taken_0x296644 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x296648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296644u;
        // 0x296648: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296644) {
            ctx->pc = 0x296660u;
            goto label_296660;
        }
    }
    ctx->pc = 0x29664Cu;
    // 0x29664c: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x29664cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x296650: 0x0  nop
    ctx->pc = 0x296650u;
    // NOP
    // 0x296654: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x296654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x296658: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296658u;
    {
        const bool branch_taken_0x296658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296658u;
        // 0x29665c: 0x460cbd02  mul.s       $f20, $f23, $f12 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296658) {
            ctx->pc = 0x29667Cu;
            goto label_29667c;
        }
    }
    ctx->pc = 0x296660u;
label_296660:
    // 0x296660: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x296660u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x296664: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x296668: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x296668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29666c: 0x0  nop
    ctx->pc = 0x29666cu;
    // NOP
    // 0x296670: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x296670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x296674: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x296674u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x296678: 0x460cbd02  mul.s       $f20, $f23, $f12
    ctx->pc = 0x296678u;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[12]);
label_29667c:
    // 0x29667c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29667cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x296680: 0x26a51720  addiu       $a1, $s5, 0x1720
    ctx->pc = 0x296680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 5920));
    // 0x296684: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x296684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296688: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x296688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29668c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x29668Cu;
    SET_GPR_U32(ctx, 31, 0x296694u);
    ctx->pc = 0x296690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29668Cu;
    // 0x296690: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x29668Cu, 0x296694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296694u;
label_296694:
    // 0x296694: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x296694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29669c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2966a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966a4: 0xc0a57b2  jal         func_295EC8
    ctx->pc = 0x2966A4u;
    SET_GPR_U32(ctx, 31, 0x2966ACu);
    ctx->pc = 0x2966A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2966A4u;
    // 0x2966a8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EC8u, 0x2966A4u, 0x2966ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966ACu;
label_2966ac:
    // 0x2966ac: 0x92620271  lbu         $v0, 0x271($s3)
    ctx->pc = 0x2966acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
    // 0x2966b0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2966b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2966b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2966B4u;
    {
        const bool branch_taken_0x2966b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2966B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2966B4u;
        // 0x2966b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2966b4) {
            ctx->pc = 0x2966E8u;
            goto label_2966e8;
        }
    }
    ctx->pc = 0x2966BCu;
    // 0x2966bc: 0x26851750  addiu       $a1, $s4, 0x1750
    ctx->pc = 0x2966bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 5968));
    // 0x2966c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2966c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2966c4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x2966C4u;
    SET_GPR_U32(ctx, 31, 0x2966CCu);
    ctx->pc = 0x2966C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2966C4u;
    // 0x2966c8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2966C4u, 0x2966CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966CCu;
label_2966cc:
    // 0x2966cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2966ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2966d0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2966d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2966d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2966d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2966d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2966dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966e0: 0xc0a57b2  jal         func_295EC8
    ctx->pc = 0x2966E0u;
    SET_GPR_U32(ctx, 31, 0x2966E8u);
    ctx->pc = 0x2966E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2966E0u;
    // 0x2966e4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EC8u, 0x2966E0u, 0x2966E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966E8u;
label_2966e8:
    // 0x2966e8: 0x92620271  lbu         $v0, 0x271($s3)
    ctx->pc = 0x2966e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
    // 0x2966ec: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2966ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2966f0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2966F0u;
    {
        const bool branch_taken_0x2966f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2966F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2966F0u;
        // 0x2966f4: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2966f0) {
            ctx->pc = 0x296640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296640;
        }
    }
    ctx->pc = 0x2966F8u;
    // 0x2966f8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2966F8u;
    {
        const bool branch_taken_0x2966f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2966FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2966F8u;
        // 0x2966fc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2966f8) {
            ctx->pc = 0x2968CCu;
            goto label_2968cc;
        }
    }
    ctx->pc = 0x296700u;
label_296700:
    // 0x296700: 0x92630271  lbu         $v1, 0x271($s3)
    ctx->pc = 0x296700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
    // 0x296704: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x296704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x296708: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x296708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x29670c: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x29670cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x296710: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x296710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x296714: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x296714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x296718: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29671c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x29671cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x296720: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x296720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296724: 0x0  nop
    ctx->pc = 0x296724u;
    // NOP
    // 0x296728: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x296728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29672c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x29672cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x296730: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x296730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x296734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296738: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x296738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x29673c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29673cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x296740: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x296740u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x296744: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x296744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x296748: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x296748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x29674c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x29674cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x296750: 0x0  nop
    ctx->pc = 0x296750u;
    // NOP
    // 0x296754: 0x0  nop
    ctx->pc = 0x296754u;
    // NOP
    // 0x296758: 0x46010603  div.s       $f24, $f0, $f1
    ctx->pc = 0x296758u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x29675c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x29675Cu;
    SET_GPR_U32(ctx, 31, 0x296764u);
    ctx->pc = 0x296760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29675Cu;
    // 0x296760: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x29675Cu, 0x296764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296764u;
label_296764:
    // 0x296764: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x296764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296768: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x296768u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29676c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x29676Cu;
    SET_GPR_U32(ctx, 31, 0x296774u);
    ctx->pc = 0x296770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29676Cu;
    // 0x296770: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x29676Cu, 0x296774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296774u;
label_296774:
    // 0x296774: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x296774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296778: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x296778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29677c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x29677cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x296780: 0x26051730  addiu       $a1, $s0, 0x1730
    ctx->pc = 0x296780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5936));
    // 0x296784: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x296784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x296788: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x296788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29678c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29678cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x296790: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x296790u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x296794: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x296794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x296798: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x296798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x29679c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x29679cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2967a0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2967a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2967a4: 0x4616c580  add.s       $f22, $f24, $f22
    ctx->pc = 0x2967a4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    // 0x2967a8: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2967a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2967ac: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2967acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2967b0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2967b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2967b4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2967b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2967b8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2967b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2967bc: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x2967BCu;
    SET_GPR_U32(ctx, 31, 0x2967C4u);
    ctx->pc = 0x2967C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2967BCu;
    // 0x2967c0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2967BCu, 0x2967C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967C4u;
label_2967c4:
    // 0x2967c4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2967c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2967c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2967c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2967cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2967ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967d0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2967d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2967d4: 0xc136b30  jal         func_4DACC0
    ctx->pc = 0x2967D4u;
    SET_GPR_U32(ctx, 31, 0x2967DCu);
    ctx->pc = 0x2967D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2967D4u;
    // 0x2967d8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x2967D4u, 0x2967DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967DCu;
label_2967dc:
    // 0x2967dc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2967dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2967e0: 0x92630271  lbu         $v1, 0x271($s3)
    ctx->pc = 0x2967e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
    // 0x2967e4: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2967E4u;
    {
        const bool branch_taken_0x2967e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2967E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967E4u;
        // 0x2967e8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967e4) {
            ctx->pc = 0x2968C8u;
            goto label_2968c8;
        }
    }
    ctx->pc = 0x2967ECu;
    // 0x2967ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2967ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2967f0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x2967f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2967f4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2967f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967f8: 0x4619b502  mul.s       $f20, $f22, $f25
    ctx->pc = 0x2967f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x2967fc: 0x0  nop
    ctx->pc = 0x2967fcu;
    // NOP
label_296800:
    // 0x296800: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x296800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296804: 0x4618b580  add.s       $f22, $f22, $f24
    ctx->pc = 0x296804u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[24]);
    // 0x296808: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x296808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x29680c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x29680Cu;
    SET_GPR_U32(ctx, 31, 0x296814u);
    ctx->pc = 0x296810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29680Cu;
    // 0x296810: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x29680Cu, 0x296814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296814u;
label_296814:
    // 0x296814: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x296814u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x296818: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x296818u;
    SET_GPR_U32(ctx, 31, 0x296820u);
    ctx->pc = 0x29681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296818u;
    // 0x29681c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x296818u, 0x296820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296820u;
label_296820:
    // 0x296820: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x296820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296824: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x296824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x296828: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x296828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29682c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x29682cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x296830: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x296830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x296834: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x296834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x296838: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x296838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29683c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x29683cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x296840: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x296840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x296844: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x296844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x296848: 0x26851730  addiu       $a1, $s4, 0x1730
    ctx->pc = 0x296848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 5936));
    // 0x29684c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x29684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x296850: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x296850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x296854: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x296854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296858: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x296858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29685c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x29685cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x296860: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x296860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x296864: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x296864u;
    SET_GPR_U32(ctx, 31, 0x29686Cu);
    ctx->pc = 0x296868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296864u;
    // 0x296868: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x296864u, 0x29686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29686Cu;
label_29686c:
    // 0x29686c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x29686cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296870: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x296870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x296874: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x296874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296878: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x296878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29687c: 0xc136b30  jal         func_4DACC0
    ctx->pc = 0x29687Cu;
    SET_GPR_U32(ctx, 31, 0x296884u);
    ctx->pc = 0x296880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29687Cu;
    // 0x296880: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x29687Cu, 0x296884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296884u;
label_296884:
    // 0x296884: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x296884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296888: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x296888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29688c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x29688cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x296890: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x296890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x296894: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x296894u;
    SET_GPR_U32(ctx, 31, 0x29689Cu);
    ctx->pc = 0x296898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296894u;
    // 0x296898: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x296894u, 0x29689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29689Cu;
label_29689c:
    // 0x29689c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x29689cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2968a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2968a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2968a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2968a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2968ac: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2968acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2968b0: 0xc0a57b2  jal         func_295EC8
    ctx->pc = 0x2968B0u;
    SET_GPR_U32(ctx, 31, 0x2968B8u);
    ctx->pc = 0x2968B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2968B0u;
    // 0x2968b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EC8u, 0x2968B0u, 0x2968B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2968B8u;
label_2968b8:
    // 0x2968b8: 0x92620271  lbu         $v0, 0x271($s3)
    ctx->pc = 0x2968b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
    // 0x2968bc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2968bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2968c0: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2968C0u;
    {
        const bool branch_taken_0x2968c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2968c0) {
            ctx->pc = 0x2968C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2968C0u;
            // 0x2968c4: 0x4619b502  mul.s       $f20, $f22, $f25 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x296800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296800;
        }
    }
    ctx->pc = 0x2968C8u;
label_2968c8:
    // 0x2968c8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2968c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2968cc:
    // 0x2968cc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2968ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2968d0:
    // 0x2968d0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2968d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2968d4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2968d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2968d8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2968d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2968dc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2968dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2968e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2968e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2968e4: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x2968e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2968e8: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x2968e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2968ec: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x2968ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2968f0: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2968f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2968f4: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2968f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2968f8: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2968f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2968fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2968FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968FCu;
        // 0x296900: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2968FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296904u;
    // 0x296904: 0x0  nop
    ctx->pc = 0x296904u;
    // NOP
    ctx->pc = 0x296908u;
}

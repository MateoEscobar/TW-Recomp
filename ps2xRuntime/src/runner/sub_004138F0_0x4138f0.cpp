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

// Function: sub_004138F0
// Address: 0x4138f0 - 0x413a90
void sub_004138F0_0x4138f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004138F0_0x4138f0");
#endif

    switch (ctx->pc) {
        case 0x413938u: goto label_413938;
        case 0x413978u: goto label_413978;
        case 0x413998u: goto label_413998;
        case 0x4139a4u: goto label_4139a4;
        case 0x4139f0u: goto label_4139f0;
        default: break;
    }

    ctx->pc = 0x4138f0u;

    // 0x4138f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4138f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x4138f4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4138f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4138f8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4138f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4138fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4138fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413900: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x413900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x413904: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x413904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413908: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x413908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x41390c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x41390cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413910: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x413910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x413914: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x413914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x413918: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x413918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x41391c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x41391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x413920: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x413920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x413924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x413924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x413928: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x413928u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x41392c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x41392cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x413930: 0xc0ce012  jal         func_338048
    ctx->pc = 0x413930u;
    SET_GPR_U32(ctx, 31, 0x413938u);
    ctx->pc = 0x413934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413930u;
    // 0x413934: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x338048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338048u, 0x413930u, 0x413938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413938u;
label_413938:
    // 0x413938: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x413938u;
    {
        const bool branch_taken_0x413938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413938u;
        // 0x41393c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413938) {
            ctx->pc = 0x413A54u;
            goto label_413a54;
        }
    }
    ctx->pc = 0x413940u;
    // 0x413940: 0xc6000144  lwc1        $f0, 0x144($s0)
    ctx->pc = 0x413940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413944: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x413944u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x413948: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x413948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x41394c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x413950: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x413950u;
    {
        const bool branch_taken_0x413950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413950u;
        // 0x413954: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x413950) {
            ctx->pc = 0x413A54u;
            goto label_413a54;
        }
    }
    ctx->pc = 0x413958u;
    // 0x413958: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x413958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x41395c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x41395cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x413960: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x413960u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x413964: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x413964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x413968: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x413968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x41396c: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x41396cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x413970: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x413970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413974: 0x26110110  addiu       $s1, $s0, 0x110
    ctx->pc = 0x413974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_413978:
    // 0x413978: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x413978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x41397c: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x41397Cu;
    {
        const bool branch_taken_0x41397c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41397c) {
            ctx->pc = 0x413980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41397Cu;
            // 0x413980: 0x8e020140  lw          $v0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413A38u;
            goto label_413a38;
        }
    }
    ctx->pc = 0x413984u;
    // 0x413984: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x413984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413988: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x413988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41398c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x41398cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413990: 0xc0cdbb8  jal         func_336EE0
    ctx->pc = 0x413990u;
    SET_GPR_U32(ctx, 31, 0x413998u);
    ctx->pc = 0x413994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413990u;
    // 0x413994: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EE0u, 0x413990u, 0x413998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413998u;
label_413998:
    // 0x413998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x413998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41399c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x41399Cu;
    SET_GPR_U32(ctx, 31, 0x4139A4u);
    ctx->pc = 0x4139A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41399Cu;
    // 0x4139a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x41399Cu, 0x4139A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4139A4u;
label_4139a4:
    // 0x4139a4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x4139a4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x4139a8: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x4139a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4139ac: 0x0  nop
    ctx->pc = 0x4139acu;
    // NOP
    // 0x4139b0: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x4139B0u;
    {
        const bool branch_taken_0x4139b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4139b0) {
            ctx->pc = 0x4139B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4139B0u;
            // 0x4139b4: 0x8e020140  lw          $v0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413A38u;
            goto label_413a38;
        }
    }
    ctx->pc = 0x4139B8u;
    // 0x4139b8: 0xc6000144  lwc1        $f0, 0x144($s0)
    ctx->pc = 0x4139b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4139bc: 0x0  nop
    ctx->pc = 0x4139bcu;
    // NOP
    // 0x4139c0: 0x0  nop
    ctx->pc = 0x4139c0u;
    // NOP
    // 0x4139c4: 0x46010044  c1          0x10044
    ctx->pc = 0x4139c4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x4139c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4139c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4139cc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x4139ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4139d0: 0x0  nop
    ctx->pc = 0x4139d0u;
    // NOP
    // 0x4139d4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x4139D4u;
    {
        const bool branch_taken_0x4139d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4139D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4139D4u;
        // 0x4139d8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4139d4) {
            ctx->pc = 0x413A30u;
            goto label_413a30;
        }
    }
    ctx->pc = 0x4139DCu;
    // 0x4139dc: 0x92060149  lbu         $a2, 0x149($s0)
    ctx->pc = 0x4139dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 329)));
    // 0x4139e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4139e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4139e4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4139e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4139e8: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x4139E8u;
    SET_GPR_U32(ctx, 31, 0x4139F0u);
    ctx->pc = 0x4139ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4139E8u;
    // 0x4139ec: 0x2063021  addu        $a2, $s0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4139E8u, 0x4139F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4139F0u;
label_4139f0:
    // 0x4139f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x4139f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4139f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4139f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4139f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4139f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x4139fc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x4139fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x413a00: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x413a00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x413a04: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x413a04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x413a08: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x413a08u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x413a0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x413a0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x413a10: 0x0  nop
    ctx->pc = 0x413a10u;
    // NOP
    // 0x413a14: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x413a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x413a18: 0x0  nop
    ctx->pc = 0x413a18u;
    // NOP
    // 0x413a1c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x413A1Cu;
    {
        const bool branch_taken_0x413a1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x413A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413A1Cu;
        // 0x413a20: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413a1c) {
            ctx->pc = 0x413A28u;
            goto label_413a28;
        }
    }
    ctx->pc = 0x413A24u;
    // 0x413a24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x413a24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413a28:
    // 0x413a28: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x413A28u;
    {
        const bool branch_taken_0x413a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x413a28) {
            ctx->pc = 0x413A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413A28u;
            // 0x413a2c: 0xa2d70000  sb          $s7, 0x0($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413A30u;
            goto label_413a30;
        }
    }
    ctx->pc = 0x413A30u;
label_413a30:
    // 0x413a30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x413A30u;
    {
        const bool branch_taken_0x413a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413A30u;
        // 0x413a34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413a30) {
            ctx->pc = 0x413A58u;
            goto label_413a58;
        }
    }
    ctx->pc = 0x413A38u;
label_413a38:
    // 0x413a38: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x413a38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x413a3c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x413a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x413a40: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x413a40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x413a44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x413a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x413a48: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x413a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x413a4c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x413A4Cu;
    {
        const bool branch_taken_0x413a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x413A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413A4Cu;
        // 0x413a50: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413a4c) {
            ctx->pc = 0x413978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413978;
        }
    }
    ctx->pc = 0x413A54u;
label_413a54:
    // 0x413a54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x413a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413a58:
    // 0x413a58: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x413a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x413a5c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x413a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x413a60: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x413a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x413a64: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x413a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x413a68: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x413a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x413a6c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x413a6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x413a70: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x413a70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x413a74: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x413a74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x413a78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x413a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x413a7c: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x413a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x413a80: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x413a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x413a84: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x413a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x413a88: 0x3e00008  jr          $ra
    ctx->pc = 0x413A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413A88u;
        // 0x413a8c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413A90u;
}

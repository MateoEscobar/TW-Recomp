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

// Function: sub_002278A8
// Address: 0x2278a8 - 0x227a38
void sub_002278A8_0x2278a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002278A8_0x2278a8");
#endif

    switch (ctx->pc) {
        case 0x227930u: goto label_227930;
        case 0x227960u: goto label_227960;
        default: break;
    }

    ctx->pc = 0x2278a8u;

    // 0x2278a8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2278a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2278ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2278acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2278b0: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2278b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x2278b4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2278b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2278b8: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2278b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2278bc: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2278bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2278c0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2278c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2278c4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2278c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2278c8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2278c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2278cc: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2278ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2278d0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2278d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2278d4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2278d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2278d8: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2278d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2278dc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2278dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2278e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2278e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2278e4: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2278e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2278e8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2278e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2278ec: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x2278ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
    // 0x2278f0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2278F0u;
    {
        const bool branch_taken_0x2278f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278F0u;
        // 0x2278f4: 0xafa80058  sw          $t0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278f0) {
            ctx->pc = 0x227900u;
            goto label_227900;
        }
    }
    ctx->pc = 0x2278F8u;
    // 0x2278f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2278F8u;
    {
        const bool branch_taken_0x2278f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278F8u;
        // 0x2278fc: 0x84d30092  lh          $s3, 0x92($a2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278f8) {
            ctx->pc = 0x227908u;
            goto label_227908;
        }
    }
    ctx->pc = 0x227900u;
label_227900:
    // 0x227900: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x227900u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x227904: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x227904u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_227908:
    // 0x227908: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x227908u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x22790c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x22790cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x227910: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x227910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x227914: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x227914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x227918: 0x24560c80  addiu       $s6, $v0, 0xC80
    ctx->pc = 0x227918u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x22791c: 0x24754b00  addiu       $s5, $v1, 0x4B00
    ctx->pc = 0x22791cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x227920: 0x24945390  addiu       $s4, $a0, 0x5390
    ctx->pc = 0x227920u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 21392));
    // 0x227924: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227928: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x227928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22792c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22792cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227930:
    // 0x227930: 0x5233002c  beql        $s1, $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x227930u;
    {
        const bool branch_taken_0x227930 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x227930) {
            ctx->pc = 0x227934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227930u;
            // 0x227934: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2279E4u;
            goto label_2279e4;
        }
    }
    ctx->pc = 0x227938u;
    // 0x227938: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x227938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22793c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x22793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x227940: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x227940u;
    {
        const bool branch_taken_0x227940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227940u;
        // 0x227944: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227940) {
            ctx->pc = 0x2279E0u;
            goto label_2279e0;
        }
    }
    ctx->pc = 0x227948u;
    // 0x227948: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x227948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x22794c: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x22794cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x227950: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x227950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227954: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x227954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x227958: 0xc0cdbb8  jal         func_336EE0
    ctx->pc = 0x227958u;
    SET_GPR_U32(ctx, 31, 0x227960u);
    ctx->pc = 0x22795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227958u;
    // 0x22795c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EE0u, 0x227958u, 0x227960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227960u;
label_227960:
    // 0x227960: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x227960u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227964: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x227964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227968: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x227968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x22796c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x22796cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x227970: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x227970u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x227974: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x227974u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x227978: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x227978u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x22797c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x22797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x227980: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x227980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x227984: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x227984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227988: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x227988u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22798c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x22798cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227990: 0x0  nop
    ctx->pc = 0x227990u;
    // NOP
    // 0x227994: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x227994u;
    {
        const bool branch_taken_0x227994 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227994u;
        // 0x227998: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227994) {
            ctx->pc = 0x2279E0u;
            goto label_2279e0;
        }
    }
    ctx->pc = 0x22799Cu;
    // 0x22799c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x22799cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2279a0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2279a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2279a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2279a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2279a8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2279a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2279ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2279acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2279b0: 0x0  nop
    ctx->pc = 0x2279b0u;
    // NOP
    // 0x2279b4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2279b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2279b8: 0x0  nop
    ctx->pc = 0x2279b8u;
    // NOP
    // 0x2279bc: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2279BCu;
    {
        const bool branch_taken_0x2279bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2279bc) {
            ctx->pc = 0x2279C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2279BCu;
            // 0x2279c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2279E4u;
            goto label_2279e4;
        }
    }
    ctx->pc = 0x2279C4u;
    // 0x2279c4: 0xae560000  sw          $s6, 0x0($s2)
    ctx->pc = 0x2279c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
    // 0x2279c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2279c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2279cc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2279ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2279d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2279d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2279d4: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x2279d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2279d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2279D8u;
    {
        const bool branch_taken_0x2279d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2279DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279D8u;
        // 0x2279dc: 0x2e29021  addu        $s2, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279d8) {
            ctx->pc = 0x2279F8u;
            goto label_2279f8;
        }
    }
    ctx->pc = 0x2279E0u;
label_2279e0:
    // 0x2279e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2279e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2279e4:
    // 0x2279e4: 0x26d606d0  addiu       $s6, $s6, 0x6D0
    ctx->pc = 0x2279e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1744));
    // 0x2279e8: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x2279e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2279ec: 0x2e22003c  sltiu       $v0, $s1, 0x3C
    ctx->pc = 0x2279ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x2279f0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2279F0u;
    {
        const bool branch_taken_0x2279f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2279F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279F0u;
        // 0x2279f4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279f0) {
            ctx->pc = 0x227930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227930;
        }
    }
    ctx->pc = 0x2279F8u;
label_2279f8:
    // 0x2279f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2279f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2279fc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2279fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x227a00: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x227a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x227a04: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x227a04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x227a08: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x227a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x227a0c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x227a0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x227a10: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x227a10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x227a14: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x227a14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x227a18: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x227a18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x227a1c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x227a1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x227a20: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x227a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x227a24: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x227a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x227a28: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x227a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x227a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x227A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A2Cu;
        // 0x227a30: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227A34u;
    // 0x227a34: 0x0  nop
    ctx->pc = 0x227a34u;
    // NOP
    ctx->pc = 0x227a38u;
}

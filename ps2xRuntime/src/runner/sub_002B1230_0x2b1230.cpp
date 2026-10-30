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

// Function: sub_002B1230
// Address: 0x2b1230 - 0x2b1478
void sub_002B1230_0x2b1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1230_0x2b1230");
#endif

    switch (ctx->pc) {
        case 0x2b1268u: goto label_2b1268;
        case 0x2b1274u: goto label_2b1274;
        case 0x2b1340u: goto label_2b1340;
        case 0x2b13c0u: goto label_2b13c0;
        case 0x2b13d4u: goto label_2b13d4;
        case 0x2b140cu: goto label_2b140c;
        case 0x2b141cu: goto label_2b141c;
        case 0x2b1454u: goto label_2b1454;
        default: break;
    }

    ctx->pc = 0x2b1230u;

    // 0x2b1230: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2b1230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2b1234: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2b1234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2b1238: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2b1238u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2b123c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b123cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1240: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2b1240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2b1244: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b1244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b1248: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2b1248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2b124c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2b1250: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2b1250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2b1254: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2b1254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b1258: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2b1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2b125c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2b125cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b1260: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B1260u;
    SET_GPR_U32(ctx, 31, 0x2B1268u);
    ctx->pc = 0x2B1264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1260u;
    // 0x2b1264: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B1260u, 0x2B1268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1268u;
label_2b1268:
    // 0x2b1268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b126c: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2B126Cu;
    SET_GPR_U32(ctx, 31, 0x2B1274u);
    ctx->pc = 0x2B1270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B126Cu;
    // 0x2b1270: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B126Cu, 0x2B1274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1274u;
label_2b1274:
    // 0x2b1274: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b1274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1278: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2b1278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2b127c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2b127cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2b1280: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2b1280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2b1284: 0xc655003c  lwc1        $f21, 0x3C($s2)
    ctx->pc = 0x2b1284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b1288: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b1288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b128c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b128cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1294: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b1294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b1298: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2b1298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2b129c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b129cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b12a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b12a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b12a4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2b12a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2b12a8: 0x84c20092  lh          $v0, 0x92($a2)
    ctx->pc = 0x2b12a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x2b12ac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b12acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b12b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b12b4: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2b12b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b12b8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2b12b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2b12bc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2b12bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b12c0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b12c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b12c4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b12c4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b12c8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2b12c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2b12cc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b12ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b12d0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2b12d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b12d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2b12d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b12d8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2b12d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b12dc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2b12dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2b12e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b12e0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2b12e4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2b12e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b12e8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2b12e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2b12ec: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2b12ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2b12f0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2b12f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b12f4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2b12f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2b12f8: 0x0  nop
    ctx->pc = 0x2b12f8u;
    // NOP
    // 0x2b12fc: 0x0  nop
    ctx->pc = 0x2b12fcu;
    // NOP
    // 0x2b1300: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2b1300u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x2b1304: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x2b1304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x2b1308: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x2b1308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b130c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2b130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2b1310: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2b1310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b1314: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b1314u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b1318: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2b1318u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2b131c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b131cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b1320: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b1320u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b1324: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b1324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2b1328: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2b1328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2b132c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2b132cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2b1330: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2B1330u;
    {
        const bool branch_taken_0x2b1330 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1330u;
        // 0x2b1334: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1330) {
            ctx->pc = 0x2B1368u;
            goto label_2b1368;
        }
    }
    ctx->pc = 0x2B1338u;
    // 0x2b1338: 0xc088f14  jal         func_223C50
    ctx->pc = 0x2B1338u;
    SET_GPR_U32(ctx, 31, 0x2B1340u);
    ctx->pc = 0x2B133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1338u;
    // 0x2b133c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C50u, 0x2B1338u, 0x2B1340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1340u;
label_2b1340:
    // 0x2b1340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b1340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1344: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B1344u;
    {
        const bool branch_taken_0x2b1344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1344u;
        // 0x2b1348: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1344) {
            ctx->pc = 0x2B13A8u;
            goto label_2b13a8;
        }
    }
    ctx->pc = 0x2B134Cu;
    // 0x2b134c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2b134cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2b1350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1354: 0x0  nop
    ctx->pc = 0x2b1354u;
    // NOP
    // 0x2b1358: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2b1358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b135c: 0x0  nop
    ctx->pc = 0x2b135cu;
    // NOP
    // 0x2b1360: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2B1360u;
    {
        const bool branch_taken_0x2b1360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1360u;
        // 0x2b1364: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1360) {
            ctx->pc = 0x2B13ACu;
            goto label_2b13ac;
        }
    }
    ctx->pc = 0x2B1368u;
label_2b1368:
    // 0x2b1368: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b1368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b136c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b136cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1370: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2b1370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2b1374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1378: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2b1378u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b137c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b137cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b1380: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b1380u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b1384: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2b1384u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b1388: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b1388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b138c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b138cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b1390: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2b1390u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2b1394: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b1394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2b1398: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2b1398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2b139c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2b139cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2b13a0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2b13a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2b13a4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2b13a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b13a8:
    // 0x2b13a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b13a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b13ac:
    // 0x2b13ac: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b13acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b13b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b13b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b13b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13b8: 0xc0ac3f4  jal         func_2B0FD0
    ctx->pc = 0x2B13B8u;
    SET_GPR_U32(ctx, 31, 0x2B13C0u);
    ctx->pc = 0x2B13BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B13B8u;
    // 0x2b13bc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0FD0u, 0x2B13B8u, 0x2B13C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B13C0u;
label_2b13c0:
    // 0x2b13c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b13c4: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B13C4u;
    {
        const bool branch_taken_0x2b13c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b13c4) {
            ctx->pc = 0x2B13C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B13C4u;
            // 0x2b13c8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1434u;
            goto label_2b1434;
        }
    }
    ctx->pc = 0x2B13CCu;
    // 0x2b13cc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B13CCu;
    SET_GPR_U32(ctx, 31, 0x2B13D4u);
    ctx->pc = 0x2B13D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B13CCu;
    // 0x2b13d0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B13CCu, 0x2B13D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B13D4u;
label_2b13d4:
    // 0x2b13d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b13d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13d8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B13D8u;
    {
        const bool branch_taken_0x2b13d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B13D8u;
        // 0x2b13dc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13d8) {
            ctx->pc = 0x2B140Cu;
            goto label_2b140c;
        }
    }
    ctx->pc = 0x2B13E0u;
    // 0x2b13e0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b13e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b13e4: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b13e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2b13e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b13e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13ec: 0x8e470034  lw          $a3, 0x34($s2)
    ctx->pc = 0x2b13ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2b13f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b13f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13f4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2b13f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2b13f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2b13f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2b13fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b13fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1400: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b1400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1404: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2B1404u;
    SET_GPR_U32(ctx, 31, 0x2B140Cu);
    ctx->pc = 0x2B1408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1404u;
    // 0x2b1408: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B1404u, 0x2B140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B140Cu;
label_2b140c:
    // 0x2b140c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b140cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1414: 0xc0ac3b6  jal         func_2B0ED8
    ctx->pc = 0x2B1414u;
    SET_GPR_U32(ctx, 31, 0x2B141Cu);
    ctx->pc = 0x2B1418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1414u;
    // 0x2b1418: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0ED8u, 0x2B1414u, 0x2B141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B141Cu;
label_2b141c:
    // 0x2b141c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2b141cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1420: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2b1420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1424: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x2b1424u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
    // 0x2b1428: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x2b1428u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x2b142c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B142Cu;
    {
        const bool branch_taken_0x2b142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B142Cu;
        // 0x2b1430: 0xa2400056  sb          $zero, 0x56($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b142c) {
            ctx->pc = 0x2B1454u;
            goto label_2b1454;
        }
    }
    ctx->pc = 0x2B1434u;
label_2b1434:
    // 0x2b1434: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b1434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2b1438: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b1438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2b143c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B143Cu;
    {
        const bool branch_taken_0x2b143c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B143Cu;
        // 0x2b1440: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b143c) {
            ctx->pc = 0x2B1458u;
            goto label_2b1458;
        }
    }
    ctx->pc = 0x2B1444u;
    // 0x2b1444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b144c: 0xc0ac3b6  jal         func_2B0ED8
    ctx->pc = 0x2B144Cu;
    SET_GPR_U32(ctx, 31, 0x2B1454u);
    ctx->pc = 0x2B1450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B144Cu;
    // 0x2b1450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0ED8u, 0x2B144Cu, 0x2B1454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1454u;
label_2b1454:
    // 0x2b1454: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2b1454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b1458:
    // 0x2b1458: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2b1458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b145c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2b145cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b1460: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b1460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b1464: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2b1464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b1468: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2b1468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b146c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B146Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B146Cu;
        // 0x2b1470: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B146Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1474u;
    // 0x2b1474: 0x0  nop
    ctx->pc = 0x2b1474u;
    // NOP
    ctx->pc = 0x2b1478u;
}

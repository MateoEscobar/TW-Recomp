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

// Function: sub_00124248
// Address: 0x124248 - 0x124690
void sub_00124248_0x124248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124248_0x124248");
#endif

    switch (ctx->pc) {
        case 0x12427cu: goto label_12427c;
        case 0x12428cu: goto label_12428c;
        case 0x12429cu: goto label_12429c;
        case 0x1242b4u: goto label_1242b4;
        case 0x124334u: goto label_124334;
        case 0x12434cu: goto label_12434c;
        case 0x1243ccu: goto label_1243cc;
        case 0x1243e4u: goto label_1243e4;
        case 0x124468u: goto label_124468;
        case 0x124480u: goto label_124480;
        case 0x12449cu: goto label_12449c;
        case 0x12451cu: goto label_12451c;
        case 0x124534u: goto label_124534;
        case 0x1245b4u: goto label_1245b4;
        case 0x1245ccu: goto label_1245cc;
        case 0x124650u: goto label_124650;
        case 0x124668u: goto label_124668;
        default: break;
    }

    ctx->pc = 0x124248u;

    // 0x124248: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x124248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12424c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x12424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x124250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124254: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x124254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x124258: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x124258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x12425c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12425cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124260: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x124260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x124264: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x124264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124268: 0x248491a8  addiu       $a0, $a0, -0x6E58
    ctx->pc = 0x124268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
    // 0x12426c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12426cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124270: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x124270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x124274: 0xc136b7c  jal         func_4DADF0
    ctx->pc = 0x124274u;
    SET_GPR_U32(ctx, 31, 0x12427Cu);
    ctx->pc = 0x124278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124274u;
    // 0x124278: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x124274u, 0x12427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12427Cu;
label_12427c:
    // 0x12427c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124280: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x124280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x124284: 0xc0e409a  jal         func_390268
    ctx->pc = 0x124284u;
    SET_GPR_U32(ctx, 31, 0x12428Cu);
    ctx->pc = 0x124288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124284u;
    // 0x124288: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x124284u, 0x12428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12428Cu;
label_12428c:
    // 0x12428c: 0x504000fa  beql        $v0, $zero, . + 4 + (0xFA << 2)
    ctx->pc = 0x12428Cu;
    {
        const bool branch_taken_0x12428c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12428c) {
            ctx->pc = 0x124290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12428Cu;
            // 0x124290: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124678u;
            goto label_124678;
        }
    }
    ctx->pc = 0x124294u;
    // 0x124294: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x124294u;
    SET_GPR_U32(ctx, 31, 0x12429Cu);
    ctx->pc = 0x124298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124294u;
    // 0x124298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x124294u, 0x12429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12429Cu;
label_12429c:
    // 0x12429c: 0x544000f6  bnel        $v0, $zero, . + 4 + (0xF6 << 2)
    ctx->pc = 0x12429Cu;
    {
        const bool branch_taken_0x12429c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12429c) {
            ctx->pc = 0x1242A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12429Cu;
            // 0x1242a0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124678u;
            goto label_124678;
        }
    }
    ctx->pc = 0x1242A4u;
    // 0x1242a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1242a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1242a8: 0x26050180  addiu       $a1, $s0, 0x180
    ctx->pc = 0x1242a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x1242ac: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x1242ACu;
    SET_GPR_U32(ctx, 31, 0x1242B4u);
    ctx->pc = 0x1242B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242ACu;
    // 0x1242b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1242ACu, 0x1242B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242B4u;
label_1242b4:
    // 0x1242b4: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x1242b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1242b8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1242b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1242bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1242bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1242c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1242c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1242c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1242c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1242c8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1242c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1242cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1242ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1242d0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x1242d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1242d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1242d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1242d8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1242d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1242dc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1242dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1242e0: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1242e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1242e4: 0x0  nop
    ctx->pc = 0x1242e4u;
    // NOP
    // 0x1242e8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1242E8u;
    {
        const bool branch_taken_0x1242e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1242ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242E8u;
        // 0x1242ec: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242e8) {
            ctx->pc = 0x124310u;
            goto label_124310;
        }
    }
    ctx->pc = 0x1242F0u;
    // 0x1242f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1242f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1242f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1242f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1242f8: 0x0  nop
    ctx->pc = 0x1242f8u;
    // NOP
    // 0x1242fc: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x1242fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124300: 0x0  nop
    ctx->pc = 0x124300u;
    // NOP
    // 0x124304: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x124304u;
    {
        const bool branch_taken_0x124304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124304) {
            ctx->pc = 0x124384u;
            goto label_124384;
        }
    }
    ctx->pc = 0x12430Cu;
    // 0x12430c: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x12430cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124310:
    // 0x124310: 0x0  nop
    ctx->pc = 0x124310u;
    // NOP
    // 0x124314: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x124314u;
    {
        const bool branch_taken_0x124314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124314u;
        // 0x124318: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124314) {
            ctx->pc = 0x124374u;
            goto label_124374;
        }
    }
    ctx->pc = 0x12431Cu;
    // 0x12431c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x124320: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x124320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x124324: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124328: 0x46036329  min.s       $f12, $f12, $f3
    ctx->pc = 0x124328u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[3]);
    // 0x12432c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x12432Cu;
    SET_GPR_U32(ctx, 31, 0x124334u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12432Cu, 0x124334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124334u;
label_124334:
    // 0x124334: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x124334u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124338: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x124338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12433c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12433cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124340: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x124340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x124344: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x124344u;
    SET_GPR_U32(ctx, 31, 0x12434Cu);
    ctx->pc = 0x124348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124344u;
    // 0x124348: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x124344u, 0x12434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12434Cu;
label_12434c:
    // 0x12434c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x12434cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124350: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x124350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x124354: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x124354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x124358: 0x7e020180  sq          $v0, 0x180($s0)
    ctx->pc = 0x124358u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), GPR_VEC(ctx, 2));
    // 0x12435c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x124360: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x124360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124364: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x124364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124368: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x124368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12436c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x12436Cu;
    {
        const bool branch_taken_0x12436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12436Cu;
        // 0x124370: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12436c) {
            ctx->pc = 0x124400u;
            goto label_124400;
        }
    }
    ctx->pc = 0x124374u;
label_124374:
    // 0x124374: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x124374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x124378: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x124378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12437c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x12437Cu;
    {
        const bool branch_taken_0x12437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12437Cu;
        // 0x124380: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12437c) {
            ctx->pc = 0x124460u;
            goto label_124460;
        }
    }
    ctx->pc = 0x124384u;
label_124384:
    // 0x124384: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x124384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x124388: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x124388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12438c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12438cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124390: 0x0  nop
    ctx->pc = 0x124390u;
    // NOP
    // 0x124394: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x124394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124398: 0x0  nop
    ctx->pc = 0x124398u;
    // NOP
    // 0x12439c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x12439Cu;
    {
        const bool branch_taken_0x12439c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1243A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12439Cu;
        // 0x1243a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12439c) {
            ctx->pc = 0x12440Cu;
            goto label_12440c;
        }
    }
    ctx->pc = 0x1243A4u;
    // 0x1243a4: 0x46140d01  sub.s       $f20, $f1, $f20
    ctx->pc = 0x1243a4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1243a8: 0x3c01bff0  lui         $at, 0xBFF0
    ctx->pc = 0x1243a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49136 << 16));
    // 0x1243ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1243acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1243b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1243b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243b4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1243b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1243b8: 0x4604a500  add.s       $f20, $f20, $f4
    ctx->pc = 0x1243b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x1243bc: 0x4614a300  add.s       $f12, $f20, $f20
    ctx->pc = 0x1243bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x1243c0: 0x460c2329  min.s       $f12, $f4, $f12
    ctx->pc = 0x1243c0u;
    ctx->f[12] = std::min(ctx->f[4], ctx->f[12]);
    // 0x1243c4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x1243C4u;
    SET_GPR_U32(ctx, 31, 0x1243CCu);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1243C4u, 0x1243CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243CCu;
label_1243cc:
    // 0x1243cc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1243ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1243d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1243d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1243d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1243d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243d8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1243d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1243dc: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x1243DCu;
    SET_GPR_U32(ctx, 31, 0x1243E4u);
    ctx->pc = 0x1243E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243DCu;
    // 0x1243e0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1243DCu, 0x1243E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243E4u;
label_1243e4:
    // 0x1243e4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1243e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1243e8: 0x7e020180  sq          $v0, 0x180($s0)
    ctx->pc = 0x1243e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), GPR_VEC(ctx, 2));
    // 0x1243ec: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1243ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1243f0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1243f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1243f4: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x1243f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1243f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1243f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1243fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1243fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_124400:
    // 0x124400: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x124400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x124404: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x124404u;
    {
        const bool branch_taken_0x124404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124404u;
        // 0x124408: 0xe6010188  swc1        $f1, 0x188($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124404) {
            ctx->pc = 0x12448Cu;
            goto label_12448c;
        }
    }
    ctx->pc = 0x12440Cu;
label_12440c:
    // 0x12440c: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x12440cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
    // 0x124410: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x124410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x124414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124418: 0x0  nop
    ctx->pc = 0x124418u;
    // NOP
    // 0x12441c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12441cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124420: 0x0  nop
    ctx->pc = 0x124420u;
    // NOP
    // 0x124424: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x124424u;
    {
        const bool branch_taken_0x124424 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124424u;
        // 0x124428: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124424) {
            ctx->pc = 0x124490u;
            goto label_124490;
        }
    }
    ctx->pc = 0x12442Cu;
    // 0x12442c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x12442cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x124430: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x124430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x124434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124438: 0x0  nop
    ctx->pc = 0x124438u;
    // NOP
    // 0x12443c: 0x0  nop
    ctx->pc = 0x12443cu;
    // NOP
    // 0x124440: 0x46020304  c1          0x20304
    ctx->pc = 0x124440u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x124444: 0x3c01bfa0  lui         $at, 0xBFA0
    ctx->pc = 0x124444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49056 << 16));
    // 0x124448: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x124448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12444c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x124450: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x124450u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x124454: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124458: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x124458u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x12445c: 0x46046300  add.s       $f12, $f12, $f4
    ctx->pc = 0x12445cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
label_124460:
    // 0x124460: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x124460u;
    SET_GPR_U32(ctx, 31, 0x124468u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x124460u, 0x124468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124468u;
label_124468:
    // 0x124468: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x124468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12446c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12446cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124470: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x124470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x124474: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x124474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x124478: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x124478u;
    SET_GPR_U32(ctx, 31, 0x124480u);
    ctx->pc = 0x12447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124478u;
    // 0x12447c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x124478u, 0x124480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124480u;
label_124480:
    // 0x124480: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x124480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124484: 0x7e020180  sq          $v0, 0x180($s0)
    ctx->pc = 0x124484u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), GPR_VEC(ctx, 2));
    // 0x124488: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x124488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_12448c:
    // 0x12448c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_124490:
    // 0x124490: 0x260501f0  addiu       $a1, $s0, 0x1F0
    ctx->pc = 0x124490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x124494: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x124494u;
    SET_GPR_U32(ctx, 31, 0x12449Cu);
    ctx->pc = 0x124498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124494u;
    // 0x124498: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x124494u, 0x12449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12449Cu;
label_12449c:
    // 0x12449c: 0xc60101f8  lwc1        $f1, 0x1F8($s0)
    ctx->pc = 0x12449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1244a0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1244a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1244a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1244a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1244a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1244a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1244ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1244acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1244b0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1244b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1244b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1244b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1244b8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x1244b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1244bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1244bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1244c0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1244c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1244c4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1244c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1244c8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1244c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1244cc: 0x0  nop
    ctx->pc = 0x1244ccu;
    // NOP
    // 0x1244d0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1244D0u;
    {
        const bool branch_taken_0x1244d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1244D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244D0u;
        // 0x1244d4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244d0) {
            ctx->pc = 0x1244F8u;
            goto label_1244f8;
        }
    }
    ctx->pc = 0x1244D8u;
    // 0x1244d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1244d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1244dc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1244dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1244e0: 0x0  nop
    ctx->pc = 0x1244e0u;
    // NOP
    // 0x1244e4: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x1244e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1244e8: 0x0  nop
    ctx->pc = 0x1244e8u;
    // NOP
    // 0x1244ec: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1244ECu;
    {
        const bool branch_taken_0x1244ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1244ec) {
            ctx->pc = 0x12456Cu;
            goto label_12456c;
        }
    }
    ctx->pc = 0x1244F4u;
    // 0x1244f4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1244f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1244f8:
    // 0x1244f8: 0x0  nop
    ctx->pc = 0x1244f8u;
    // NOP
    // 0x1244fc: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1244FCu;
    {
        const bool branch_taken_0x1244fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244FCu;
        // 0x124500: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244fc) {
            ctx->pc = 0x12455Cu;
            goto label_12455c;
        }
    }
    ctx->pc = 0x124504u;
    // 0x124504: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x124504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x124508: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x124508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12450c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12450cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x124510: 0x46036329  min.s       $f12, $f12, $f3
    ctx->pc = 0x124510u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[3]);
    // 0x124514: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x124514u;
    SET_GPR_U32(ctx, 31, 0x12451Cu);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x124514u, 0x12451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12451Cu;
label_12451c:
    // 0x12451c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12451cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124520: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x124520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x124524: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x124524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124528: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x124528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12452c: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x12452Cu;
    SET_GPR_U32(ctx, 31, 0x124534u);
    ctx->pc = 0x124530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12452Cu;
    // 0x124530: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12452Cu, 0x124534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124534u;
label_124534:
    // 0x124534: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x124534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124538: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x124538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x12453c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12453cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x124540: 0x7e0201f0  sq          $v0, 0x1F0($s0)
    ctx->pc = 0x124540u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 2));
    // 0x124544: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x124544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x124548: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x124548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12454c: 0xc60001f8  lwc1        $f0, 0x1F8($s0)
    ctx->pc = 0x12454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124550: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x124550u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x124554: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x124554u;
    {
        const bool branch_taken_0x124554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124554u;
        // 0x124558: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124554) {
            ctx->pc = 0x1245E8u;
            goto label_1245e8;
        }
    }
    ctx->pc = 0x12455Cu;
label_12455c:
    // 0x12455c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x12455cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x124560: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x124560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x124564: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x124564u;
    {
        const bool branch_taken_0x124564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124564u;
        // 0x124568: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124564) {
            ctx->pc = 0x124648u;
            goto label_124648;
        }
    }
    ctx->pc = 0x12456Cu;
label_12456c:
    // 0x12456c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12456cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x124570: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x124570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x124574: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x124574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124578: 0x0  nop
    ctx->pc = 0x124578u;
    // NOP
    // 0x12457c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x12457cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124580: 0x0  nop
    ctx->pc = 0x124580u;
    // NOP
    // 0x124584: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x124584u;
    {
        const bool branch_taken_0x124584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124584u;
        // 0x124588: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124584) {
            ctx->pc = 0x1245F4u;
            goto label_1245f4;
        }
    }
    ctx->pc = 0x12458Cu;
    // 0x12458c: 0x46140d01  sub.s       $f20, $f1, $f20
    ctx->pc = 0x12458cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x124590: 0x3c01bff0  lui         $at, 0xBFF0
    ctx->pc = 0x124590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49136 << 16));
    // 0x124594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124598: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x124598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12459c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x12459cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1245a0: 0x4604a500  add.s       $f20, $f20, $f4
    ctx->pc = 0x1245a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x1245a4: 0x4614a300  add.s       $f12, $f20, $f20
    ctx->pc = 0x1245a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x1245a8: 0x460c2329  min.s       $f12, $f4, $f12
    ctx->pc = 0x1245a8u;
    ctx->f[12] = std::min(ctx->f[4], ctx->f[12]);
    // 0x1245ac: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x1245ACu;
    SET_GPR_U32(ctx, 31, 0x1245B4u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1245ACu, 0x1245B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245B4u;
label_1245b4:
    // 0x1245b4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1245b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1245b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1245b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1245bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1245bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245c0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1245c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1245c4: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x1245C4u;
    SET_GPR_U32(ctx, 31, 0x1245CCu);
    ctx->pc = 0x1245C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1245C4u;
    // 0x1245c8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1245C4u, 0x1245CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245CCu;
label_1245cc:
    // 0x1245cc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1245ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1245d0: 0x7e0201f0  sq          $v0, 0x1F0($s0)
    ctx->pc = 0x1245d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 2));
    // 0x1245d4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1245d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1245d8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1245d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1245dc: 0xc60001f8  lwc1        $f0, 0x1F8($s0)
    ctx->pc = 0x1245dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1245e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1245e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1245e4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1245e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1245e8:
    // 0x1245e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1245e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1245ec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1245ECu;
    {
        const bool branch_taken_0x1245ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245ECu;
        // 0x1245f0: 0xe60101f8  swc1        $f1, 0x1F8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 504), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245ec) {
            ctx->pc = 0x124674u;
            goto label_124674;
        }
    }
    ctx->pc = 0x1245F4u;
label_1245f4:
    // 0x1245f4: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x1245f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
    // 0x1245f8: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x1245f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x1245fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1245fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124600: 0x0  nop
    ctx->pc = 0x124600u;
    // NOP
    // 0x124604: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x124604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124608: 0x0  nop
    ctx->pc = 0x124608u;
    // NOP
    // 0x12460c: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x12460Cu;
    {
        const bool branch_taken_0x12460c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12460c) {
            ctx->pc = 0x124610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12460Cu;
            // 0x124610: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124678u;
            goto label_124678;
        }
    }
    ctx->pc = 0x124614u;
    // 0x124614: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x124614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x124618: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x124618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12461c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12461cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124620: 0x0  nop
    ctx->pc = 0x124620u;
    // NOP
    // 0x124624: 0x0  nop
    ctx->pc = 0x124624u;
    // NOP
    // 0x124628: 0x46020304  c1          0x20304
    ctx->pc = 0x124628u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x12462c: 0x3c01bfa0  lui         $at, 0xBFA0
    ctx->pc = 0x12462cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49056 << 16));
    // 0x124630: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x124630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x124634: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x124634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x124638: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x124638u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x12463c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12463cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x124640: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x124640u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x124644: 0x46046300  add.s       $f12, $f12, $f4
    ctx->pc = 0x124644u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
label_124648:
    // 0x124648: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x124648u;
    SET_GPR_U32(ctx, 31, 0x124650u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x124648u, 0x124650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124650u;
label_124650:
    // 0x124650: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x124650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124654: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x124654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124658: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x124658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12465c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12465cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x124660: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x124660u;
    SET_GPR_U32(ctx, 31, 0x124668u);
    ctx->pc = 0x124664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124660u;
    // 0x124664: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x124660u, 0x124668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124668u;
label_124668:
    // 0x124668: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x124668u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12466c: 0x7e0201f0  sq          $v0, 0x1F0($s0)
    ctx->pc = 0x12466cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 2));
    // 0x124670: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x124670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_124674:
    // 0x124674: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x124674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_124678:
    // 0x124678: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x124678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12467c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x12467cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x124680: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x124680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x124684: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x124684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x124688: 0x3e00008  jr          $ra
    ctx->pc = 0x124688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124688u;
        // 0x12468c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124690u;
}

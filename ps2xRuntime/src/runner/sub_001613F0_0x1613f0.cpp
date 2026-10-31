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

// Function: sub_001613F0
// Address: 0x1613f0 - 0x161600
void sub_001613F0_0x1613f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001613F0_0x1613f0");
#endif

    switch (ctx->pc) {
        case 0x1613f0u: goto label_1613f0;
        case 0x1613f4u: goto label_1613f4;
        case 0x1613f8u: goto label_1613f8;
        case 0x1613fcu: goto label_1613fc;
        case 0x161400u: goto label_161400;
        case 0x161404u: goto label_161404;
        case 0x161408u: goto label_161408;
        case 0x16140cu: goto label_16140c;
        case 0x161410u: goto label_161410;
        case 0x161414u: goto label_161414;
        case 0x161418u: goto label_161418;
        case 0x16141cu: goto label_16141c;
        case 0x161420u: goto label_161420;
        case 0x161424u: goto label_161424;
        case 0x161428u: goto label_161428;
        case 0x16142cu: goto label_16142c;
        case 0x161430u: goto label_161430;
        case 0x161434u: goto label_161434;
        case 0x161438u: goto label_161438;
        case 0x16143cu: goto label_16143c;
        case 0x161440u: goto label_161440;
        case 0x161444u: goto label_161444;
        case 0x161448u: goto label_161448;
        case 0x16144cu: goto label_16144c;
        case 0x161450u: goto label_161450;
        case 0x161454u: goto label_161454;
        case 0x161458u: goto label_161458;
        case 0x16145cu: goto label_16145c;
        case 0x161460u: goto label_161460;
        case 0x161464u: goto label_161464;
        case 0x161468u: goto label_161468;
        case 0x16146cu: goto label_16146c;
        case 0x161470u: goto label_161470;
        case 0x161474u: goto label_161474;
        case 0x161478u: goto label_161478;
        case 0x16147cu: goto label_16147c;
        case 0x161480u: goto label_161480;
        case 0x161484u: goto label_161484;
        case 0x161488u: goto label_161488;
        case 0x16148cu: goto label_16148c;
        case 0x161490u: goto label_161490;
        case 0x161494u: goto label_161494;
        case 0x161498u: goto label_161498;
        case 0x16149cu: goto label_16149c;
        case 0x1614a0u: goto label_1614a0;
        case 0x1614a4u: goto label_1614a4;
        case 0x1614a8u: goto label_1614a8;
        case 0x1614acu: goto label_1614ac;
        case 0x1614b0u: goto label_1614b0;
        case 0x1614b4u: goto label_1614b4;
        case 0x1614b8u: goto label_1614b8;
        case 0x1614bcu: goto label_1614bc;
        case 0x1614c0u: goto label_1614c0;
        case 0x1614c4u: goto label_1614c4;
        case 0x1614c8u: goto label_1614c8;
        case 0x1614ccu: goto label_1614cc;
        case 0x1614d0u: goto label_1614d0;
        case 0x1614d4u: goto label_1614d4;
        case 0x1614d8u: goto label_1614d8;
        case 0x1614dcu: goto label_1614dc;
        case 0x1614e0u: goto label_1614e0;
        case 0x1614e4u: goto label_1614e4;
        case 0x1614e8u: goto label_1614e8;
        case 0x1614ecu: goto label_1614ec;
        case 0x1614f0u: goto label_1614f0;
        case 0x1614f4u: goto label_1614f4;
        case 0x1614f8u: goto label_1614f8;
        case 0x1614fcu: goto label_1614fc;
        case 0x161500u: goto label_161500;
        case 0x161504u: goto label_161504;
        case 0x161508u: goto label_161508;
        case 0x16150cu: goto label_16150c;
        case 0x161510u: goto label_161510;
        case 0x161514u: goto label_161514;
        case 0x161518u: goto label_161518;
        case 0x16151cu: goto label_16151c;
        case 0x161520u: goto label_161520;
        case 0x161524u: goto label_161524;
        case 0x161528u: goto label_161528;
        case 0x16152cu: goto label_16152c;
        case 0x161530u: goto label_161530;
        case 0x161534u: goto label_161534;
        case 0x161538u: goto label_161538;
        case 0x16153cu: goto label_16153c;
        case 0x161540u: goto label_161540;
        case 0x161544u: goto label_161544;
        case 0x161548u: goto label_161548;
        case 0x16154cu: goto label_16154c;
        case 0x161550u: goto label_161550;
        case 0x161554u: goto label_161554;
        case 0x161558u: goto label_161558;
        case 0x16155cu: goto label_16155c;
        case 0x161560u: goto label_161560;
        case 0x161564u: goto label_161564;
        case 0x161568u: goto label_161568;
        case 0x16156cu: goto label_16156c;
        case 0x161570u: goto label_161570;
        case 0x161574u: goto label_161574;
        case 0x161578u: goto label_161578;
        case 0x16157cu: goto label_16157c;
        case 0x161580u: goto label_161580;
        case 0x161584u: goto label_161584;
        case 0x161588u: goto label_161588;
        case 0x16158cu: goto label_16158c;
        case 0x161590u: goto label_161590;
        case 0x161594u: goto label_161594;
        case 0x161598u: goto label_161598;
        case 0x16159cu: goto label_16159c;
        case 0x1615a0u: goto label_1615a0;
        case 0x1615a4u: goto label_1615a4;
        case 0x1615a8u: goto label_1615a8;
        case 0x1615acu: goto label_1615ac;
        case 0x1615b0u: goto label_1615b0;
        case 0x1615b4u: goto label_1615b4;
        case 0x1615b8u: goto label_1615b8;
        case 0x1615bcu: goto label_1615bc;
        case 0x1615c0u: goto label_1615c0;
        case 0x1615c4u: goto label_1615c4;
        case 0x1615c8u: goto label_1615c8;
        case 0x1615ccu: goto label_1615cc;
        case 0x1615d0u: goto label_1615d0;
        case 0x1615d4u: goto label_1615d4;
        case 0x1615d8u: goto label_1615d8;
        case 0x1615dcu: goto label_1615dc;
        case 0x1615e0u: goto label_1615e0;
        case 0x1615e4u: goto label_1615e4;
        case 0x1615e8u: goto label_1615e8;
        case 0x1615ecu: goto label_1615ec;
        case 0x1615f0u: goto label_1615f0;
        case 0x1615f4u: goto label_1615f4;
        case 0x1615f8u: goto label_1615f8;
        case 0x1615fcu: goto label_1615fc;
        default: break;
    }

    ctx->pc = 0x1613f0u;

label_1613f0:
    // 0x1613f0: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1613f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
label_1613f4:
    // 0x1613f4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1613f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1613f8:
    // 0x1613f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1613f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1613fc:
    // 0x1613fc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1613fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_161400:
    // 0x161400: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x161400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
label_161404:
    // 0x161404: 0x34217efa  ori         $at, $at, 0x7EFA
    ctx->pc = 0x161404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32506);
label_161408:
    // 0x161408: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x161408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16140c:
    // 0x16140c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16140cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161410:
    // 0x161410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_161414:
    // 0x161414: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x161414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_161418:
    // 0x161418: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x161418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_16141c:
    // 0x16141c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_161420:
    // 0x161420: 0xc05eb2a  jal         func_17ACA8
label_161424:
    if (ctx->pc == 0x161424u) {
        ctx->pc = 0x161424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161420u;
        // 0x161424: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161428u;
        goto label_161428;
    }
    ctx->pc = 0x161420u;
    SET_GPR_U32(ctx, 31, 0x161428u);
    ctx->pc = 0x161424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161420u;
    // 0x161424: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x161420u, 0x161428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161428u;
label_161428:
    // 0x161428: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x161428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_16142c:
    // 0x16142c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16142cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_161430:
    // 0x161430: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x161430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_161434:
    // 0x161434: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x161434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_161438:
    // 0x161438: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x161438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16143c:
    // 0x16143c: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x16143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_161440:
    // 0x161440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161444:
    // 0x161444: 0x0  nop
    ctx->pc = 0x161444u;
    // NOP
label_161448:
    // 0x161448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16144c:
    // 0x16144c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x16144cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_161450:
    // 0x161450: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x161450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_161454:
    // 0x161454: 0x8c46b8b8  lw          $a2, -0x4748($v0)
    ctx->pc = 0x161454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_161458:
    // 0x161458: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x161458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_16145c:
    // 0x16145c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x16145cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_161460:
    // 0x161460: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x161460u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_161464:
    // 0x161464: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161464u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_161468:
    // 0x161468: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x161468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16146c:
    // 0x16146c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x16146cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_161470:
    // 0x161470: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x161470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_161474:
    // 0x161474: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x161474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_161478:
    // 0x161478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16147c:
    // 0x16147c: 0x0  nop
    ctx->pc = 0x16147cu;
    // NOP
label_161480:
    // 0x161480: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161484:
    // 0x161484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x161484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_161488:
    // 0x161488: 0x0  nop
    ctx->pc = 0x161488u;
    // NOP
label_16148c:
    // 0x16148c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16148cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_161490:
    // 0x161490: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x161490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_161494:
    // 0x161494: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x161494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_161498:
    // 0x161498: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x161498u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_16149c:
    // 0x16149c: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16149cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_1614a0:
    // 0x1614a0: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x1614a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1614a4:
    // 0x1614a4: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x1614a4u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
label_1614a8:
    // 0x1614a8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1614a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1614ac:
    // 0x1614ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1614acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1614b0:
    // 0x1614b0: 0xa3a20004  sb          $v0, 0x4($sp)
    ctx->pc = 0x1614b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 2));
label_1614b4:
    // 0x1614b4: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1614b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1614b8:
    // 0x1614b8: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x1614b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_1614bc:
    // 0x1614bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1614bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1614c0:
    // 0x1614c0: 0x0  nop
    ctx->pc = 0x1614c0u;
    // NOP
label_1614c4:
    // 0x1614c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1614c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1614c8:
    // 0x1614c8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1614c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1614cc:
    // 0x1614cc: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1614ccu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_1614d0:
    // 0x1614d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1614d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1614d4:
    // 0x1614d4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1614d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1614d8:
    // 0x1614d8: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1614d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_1614dc:
    // 0x1614dc: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1614dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_1614e0:
    // 0x1614e0: 0xa3a00008  sb          $zero, 0x8($sp)
    ctx->pc = 0x1614e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 0));
label_1614e4:
    // 0x1614e4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1614e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1614e8:
    // 0x1614e8: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x1614e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
label_1614ec:
    // 0x1614ec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1614ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1614f0:
    // 0x1614f0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1614f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1614f4:
    // 0x1614f4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1614f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1614f8:
    // 0x1614f8: 0x40f809  jalr        $v0
label_1614fc:
    if (ctx->pc == 0x1614FCu) {
        ctx->pc = 0x1614FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614F8u;
        // 0x1614fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161500u;
        goto label_161500;
    }
    ctx->pc = 0x1614F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161500u);
        ctx->pc = 0x1614FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614F8u;
        // 0x1614fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1614F8u, 0x161500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161500u;
label_161500:
    // 0x161500: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x161500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161504:
    // 0x161504: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x161504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
label_161508:
    // 0x161508: 0xe3001b  divu        $zero, $a3, $v1
    ctx->pc = 0x161508u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_16150c:
    // 0x16150c: 0x2402044c  addiu       $v0, $zero, 0x44C
    ctx->pc = 0x16150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
label_161510:
    // 0x161510: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_161514:
    if (ctx->pc == 0x161514u) {
        ctx->pc = 0x161514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161510u;
        // 0x161514: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161518u;
        goto label_161518;
    }
    ctx->pc = 0x161510u;
    {
        const bool branch_taken_0x161510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161510) {
            ctx->pc = 0x161514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161510u;
            // 0x161514: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x161518u;
            goto label_161518;
        }
    }
    ctx->pc = 0x161518u;
label_161518:
    // 0x161518: 0x2010  mfhi        $a0
    ctx->pc = 0x161518u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_16151c:
    // 0x16151c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x16151cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_161520:
    // 0x161520: 0x1012  mflo        $v0
    ctx->pc = 0x161520u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_161524:
    // 0x161524: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_161528:
    if (ctx->pc == 0x161528u) {
        ctx->pc = 0x161528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161524u;
        // 0x161528: 0x8fa80008  lw          $t0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16152Cu;
        goto label_16152c;
    }
    ctx->pc = 0x161524u;
    {
        const bool branch_taken_0x161524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161524u;
        // 0x161528: 0x8fa80008  lw          $t0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161524) {
            ctx->pc = 0x161530u;
            goto label_161530;
        }
    }
    ctx->pc = 0x16152Cu;
label_16152c:
    // 0x16152c: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x16152cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_161530:
    // 0x161530: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x161530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
label_161534:
    // 0x161534: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x161534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
label_161538:
    // 0x161538: 0xe2001b  divu        $zero, $a3, $v0
    ctx->pc = 0x161538u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_16153c:
    // 0x16153c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_161540:
    if (ctx->pc == 0x161540u) {
        ctx->pc = 0x161540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16153Cu;
        // 0x161540: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161544u;
        goto label_161544;
    }
    ctx->pc = 0x16153Cu;
    {
        const bool branch_taken_0x16153c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16153c) {
            ctx->pc = 0x161540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16153Cu;
            // 0x161540: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x161544u;
            goto label_161544;
        }
    }
    ctx->pc = 0x161544u;
label_161544:
    // 0x161544: 0x2010  mfhi        $a0
    ctx->pc = 0x161544u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_161548:
    // 0x161548: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x161548u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_16154c:
    // 0x16154c: 0x1812  mflo        $v1
    ctx->pc = 0x16154cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_161550:
    // 0x161550: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_161554:
    if (ctx->pc == 0x161554u) {
        ctx->pc = 0x161554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161550u;
        // 0x161554: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161558u;
        goto label_161558;
    }
    ctx->pc = 0x161550u;
    {
        const bool branch_taken_0x161550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161550u;
        // 0x161554: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161550) {
            ctx->pc = 0x16155Cu;
            goto label_16155c;
        }
    }
    ctx->pc = 0x161558u;
label_161558:
    // 0x161558: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x161558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_16155c:
    // 0x16155c: 0x2402044c  addiu       $v0, $zero, 0x44C
    ctx->pc = 0x16155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
label_161560:
    // 0x161560: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x161560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_161564:
    // 0x161564: 0xe2001b  divu        $zero, $a3, $v0
    ctx->pc = 0x161564u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_161568:
    // 0x161568: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_16156c:
    if (ctx->pc == 0x16156Cu) {
        ctx->pc = 0x16156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161568u;
        // 0x16156c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161570u;
        goto label_161570;
    }
    ctx->pc = 0x161568u;
    {
        const bool branch_taken_0x161568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161568) {
            ctx->pc = 0x16156Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161568u;
            // 0x16156c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x161570u;
            goto label_161570;
        }
    }
    ctx->pc = 0x161570u;
label_161570:
    // 0x161570: 0x2010  mfhi        $a0
    ctx->pc = 0x161570u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_161574:
    // 0x161574: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_161578:
    if (ctx->pc == 0x161578u) {
        ctx->pc = 0x161578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161574u;
        // 0x161578: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16157Cu;
        goto label_16157c;
    }
    ctx->pc = 0x161574u;
    {
        const bool branch_taken_0x161574 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x161578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161574u;
        // 0x161578: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161574) {
            ctx->pc = 0x161590u;
            goto label_161590;
        }
    }
    ctx->pc = 0x16157Cu;
label_16157c:
    // 0x16157c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x16157cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_161580:
    // 0x161580: 0x0  nop
    ctx->pc = 0x161580u;
    // NOP
label_161584:
    // 0x161584: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x161584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_161588:
    // 0x161588: 0x10000008  b           . + 4 + (0x8 << 2)
label_16158c:
    if (ctx->pc == 0x16158Cu) {
        ctx->pc = 0x161590u;
        goto label_161590;
    }
    ctx->pc = 0x161588u;
    {
        const bool branch_taken_0x161588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161588) {
            ctx->pc = 0x1615ACu;
            goto label_1615ac;
        }
    }
    ctx->pc = 0x161590u;
label_161590:
    // 0x161590: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x161590u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_161594:
    // 0x161594: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x161594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_161598:
    // 0x161598: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x161598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_16159c:
    // 0x16159c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16159cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1615a0:
    // 0x1615a0: 0x0  nop
    ctx->pc = 0x1615a0u;
    // NOP
label_1615a4:
    // 0x1615a4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1615a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1615a8:
    // 0x1615a8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1615a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1615ac:
    // 0x1615ac: 0x3c014489  lui         $at, 0x4489
    ctx->pc = 0x1615acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17545 << 16));
label_1615b0:
    // 0x1615b0: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1615b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_1615b4:
    // 0x1615b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1615b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1615b8:
    // 0x1615b8: 0xc0ce090  jal         func_338240
label_1615bc:
    if (ctx->pc == 0x1615BCu) {
        ctx->pc = 0x1615BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615B8u;
        // 0x1615bc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1615C0u;
        goto label_1615c0;
    }
    ctx->pc = 0x1615B8u;
    SET_GPR_U32(ctx, 31, 0x1615C0u);
    ctx->pc = 0x1615BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1615B8u;
    // 0x1615bc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338240u, 0x1615B8u, 0x1615C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615C0u;
label_1615c0:
    // 0x1615c0: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x1615c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
label_1615c4:
    // 0x1615c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1615c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1615c8:
    // 0x1615c8: 0x2610e890  addiu       $s0, $s0, -0x1770
    ctx->pc = 0x1615c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961296));
label_1615cc:
    // 0x1615cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1615ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1615d0:
    // 0x1615d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1615d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1615d4:
    // 0x1615d4: 0xc068992  jal         func_1A2648
label_1615d8:
    if (ctx->pc == 0x1615D8u) {
        ctx->pc = 0x1615D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615D4u;
        // 0x1615d8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1615DCu;
        goto label_1615dc;
    }
    ctx->pc = 0x1615D4u;
    SET_GPR_U32(ctx, 31, 0x1615DCu);
    ctx->pc = 0x1615D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1615D4u;
    // 0x1615d8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1615D4u, 0x1615DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615DCu;
label_1615dc:
    // 0x1615dc: 0xc06886e  jal         func_1A21B8
label_1615e0:
    if (ctx->pc == 0x1615E0u) {
        ctx->pc = 0x1615E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615DCu;
        // 0x1615e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1615E4u;
        goto label_1615e4;
    }
    ctx->pc = 0x1615DCu;
    SET_GPR_U32(ctx, 31, 0x1615E4u);
    ctx->pc = 0x1615E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1615DCu;
    // 0x1615e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1615DCu, 0x1615E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615E4u;
label_1615e4:
    // 0x1615e4: 0xc068998  jal         func_1A2660
label_1615e8:
    if (ctx->pc == 0x1615E8u) {
        ctx->pc = 0x1615E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615E4u;
        // 0x1615e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1615ECu;
        goto label_1615ec;
    }
    ctx->pc = 0x1615E4u;
    SET_GPR_U32(ctx, 31, 0x1615ECu);
    ctx->pc = 0x1615E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1615E4u;
    // 0x1615e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1615E4u, 0x1615ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615ECu;
label_1615ec:
    // 0x1615ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1615ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1615f0:
    // 0x1615f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1615f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1615f4:
    // 0x1615f4: 0x3e00008  jr          $ra
label_1615f8:
    if (ctx->pc == 0x1615F8u) {
        ctx->pc = 0x1615F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615F4u;
        // 0x1615f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1615FCu;
        goto label_1615fc;
    }
    ctx->pc = 0x1615F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1615F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615F4u;
        // 0x1615f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1615F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1615FCu;
label_1615fc:
    // 0x1615fc: 0x0  nop
    ctx->pc = 0x1615fcu;
    // NOP
    ctx->pc = 0x161600u;
}

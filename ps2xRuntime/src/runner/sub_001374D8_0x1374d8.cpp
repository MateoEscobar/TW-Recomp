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

// Function: sub_001374D8
// Address: 0x1374d8 - 0x137670
void sub_001374D8_0x1374d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001374D8_0x1374d8");
#endif

    switch (ctx->pc) {
        case 0x1375b8u: goto label_1375b8;
        case 0x1375dcu: goto label_1375dc;
        case 0x13760cu: goto label_13760c;
        default: break;
    }

    ctx->pc = 0x1374d8u;

    // 0x1374d8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1374d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1374dc: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x1374dcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374e0: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1374e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1374e4: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x1374e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374e8: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1374e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1374ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1374ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374f0: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1374f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1374f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1374f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1374f8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1374f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1374fc: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1374fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137500: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x137500u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137504: 0x11600054  beqz        $t3, . + 4 + (0x54 << 2)
    ctx->pc = 0x137504u;
    {
        const bool branch_taken_0x137504 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x137508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137504u;
        // 0x137508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137504) {
            ctx->pc = 0x137658u;
            goto label_137658;
        }
    }
    ctx->pc = 0x13750Cu;
    // 0x13750c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13750cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x137510: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x137510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x137514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137518: 0x34422813  ori         $v0, $v0, 0x2813
    ctx->pc = 0x137518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10259);
    // 0x13751c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13751cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137520: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x137520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x137524: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x137524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x137528: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x137528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13752c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x13752cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x137530: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x137530u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x137534: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x137534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x137538: 0xafad00c0  sw          $t5, 0xC0($sp)
    ctx->pc = 0x137538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 13));
    // 0x13753c: 0xafac00cc  sw          $t4, 0xCC($sp)
    ctx->pc = 0x13753cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 12));
    // 0x137540: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x137540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x137544: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x137544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x137548: 0xafa500e4  sw          $a1, 0xE4($sp)
    ctx->pc = 0x137548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
    // 0x13754c: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x13754cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x137550: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x137550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x137554: 0xace9b27c  sw          $t1, -0x4D84($a3)
    ctx->pc = 0x137554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x50B27Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B27Cu, _value); } while (0);
    // 0x137558: 0xad0ab280  sw          $t2, -0x4D80($t0)
    ctx->pc = 0x137558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x50B280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B280u, _value); } while (0);
    // 0x13755c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x13755cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x137560: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x137560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x137564: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x137564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x137568: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x137568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x13756c: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x13756cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x137570: 0xafab00c4  sw          $t3, 0xC4($sp)
    ctx->pc = 0x137570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 11));
    // 0x137574: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x137574u;
    {
        const bool branch_taken_0x137574 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x137578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137574u;
        // 0x137578: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137574) {
            ctx->pc = 0x137584u;
            goto label_137584;
        }
    }
    ctx->pc = 0x13757Cu;
    // 0x13757c: 0x51400008  beql        $t2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13757Cu;
    {
        const bool branch_taken_0x13757c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x13757c) {
            ctx->pc = 0x137580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13757Cu;
            // 0x137580: 0x7a220210  lq          $v0, 0x210($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1375A0u;
            goto label_1375a0;
        }
    }
    ctx->pc = 0x137584u;
label_137584:
    // 0x137584: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x137584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x137588: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x137588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x13758c: 0x24636040  addiu       $v1, $v1, 0x6040
    ctx->pc = 0x13758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24640));
    // 0x137590: 0x34422813  ori         $v0, $v0, 0x2813
    ctx->pc = 0x137590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10259);
    // 0x137594: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x137594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x137598: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x137598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x13759c: 0x7a220210  lq          $v0, 0x210($s1)
    ctx->pc = 0x13759cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 528)));
label_1375a0:
    // 0x1375a0: 0x26300210  addiu       $s0, $s1, 0x210
    ctx->pc = 0x1375a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x1375a4: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x1375a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375a8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1375a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1375ac: 0x7d620050  sq          $v0, 0x50($t3)
    ctx->pc = 0x1375acu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 80), GPR_VEC(ctx, 2));
    // 0x1375b0: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x1375B0u;
    SET_GPR_U32(ctx, 31, 0x1375B8u);
    ctx->pc = 0x1375B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1375B0u;
    // 0x1375b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1375B0u, 0x1375B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375B8u;
label_1375b8:
    // 0x1375b8: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x1375b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1375bc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x1375bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x1375c0: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x1375c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x597198u));
    // 0x1375c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1375c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375c8: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x1375c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x1375cc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1375ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1375d0: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1375d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x1375d4: 0xc0cf9fc  jal         func_33E7F0
    ctx->pc = 0x1375D4u;
    SET_GPR_U32(ctx, 31, 0x1375DCu);
    ctx->pc = 0x1375D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1375D4u;
    // 0x1375d8: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x1375D4u, 0x1375DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375DCu;
label_1375dc:
    // 0x1375dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1375DCu;
    {
        const bool branch_taken_0x1375dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375DCu;
        // 0x1375e0: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375dc) {
            ctx->pc = 0x137640u;
            goto label_137640;
        }
    }
    ctx->pc = 0x1375E4u;
    // 0x1375e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1375e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1375e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1375e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1375ec: 0x0  nop
    ctx->pc = 0x1375ecu;
    // NOP
    // 0x1375f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1375f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1375f4: 0x0  nop
    ctx->pc = 0x1375f4u;
    // NOP
    // 0x1375f8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1375F8u;
    {
        const bool branch_taken_0x1375f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1375FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375F8u;
        // 0x1375fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375f8) {
            ctx->pc = 0x137640u;
            goto label_137640;
        }
    }
    ctx->pc = 0x137600u;
    // 0x137600: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x137600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x137604: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x137604u;
    SET_GPR_U32(ctx, 31, 0x13760Cu);
    ctx->pc = 0x137608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137604u;
    // 0x137608: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x137604u, 0x13760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13760Cu;
label_13760c:
    // 0x13760c: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x13760cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x137610: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x137610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x137614: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x137614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x137618: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x137618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13761c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13761cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x137620: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x137620u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x137624: 0x4a0003bf  vwaitq
    ctx->pc = 0x137624u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x137628: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x137628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13762c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13762cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x137630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x137630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137634: 0x0  nop
    ctx->pc = 0x137634u;
    // NOP
    // 0x137638: 0xe6200254  swc1        $f0, 0x254($s1)
    ctx->pc = 0x137638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 596), bits); }
    // 0x13763c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x13763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_137640:
    // 0x137640: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x137640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137644: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x137644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137648: 0x0  nop
    ctx->pc = 0x137648u;
    // NOP
    // 0x13764c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13764Cu;
    {
        const bool branch_taken_0x13764c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13764Cu;
        // 0x137650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13764c) {
            ctx->pc = 0x137658u;
            goto label_137658;
        }
    }
    ctx->pc = 0x137654u;
    // 0x137654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137658:
    // 0x137658: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x137658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x13765c: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x13765cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x137660: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x137660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x137664: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x137664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137668: 0x3e00008  jr          $ra
    ctx->pc = 0x137668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137668u;
        // 0x13766c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137670u;
}

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

// Function: sub_002741D8
// Address: 0x2741d8 - 0x2745e8
void sub_002741D8_0x2741d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002741D8_0x2741d8");
#endif

    switch (ctx->pc) {
        case 0x274268u: goto label_274268;
        case 0x274270u: goto label_274270;
        case 0x2742b8u: goto label_2742b8;
        case 0x2742e8u: goto label_2742e8;
        case 0x27437cu: goto label_27437c;
        case 0x2744a0u: goto label_2744a0;
        case 0x27452cu: goto label_27452c;
        default: break;
    }

    ctx->pc = 0x2741d8u;

    // 0x2741d8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2741d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2741dc: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2741dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2741e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2741e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2741e4: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x2741e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x2741e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2741e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2741ec: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2741ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x2741f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2741f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741f4: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x2741f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x2741f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2741f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2741fc: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x2741fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x274200: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x274200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x274204: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x274204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x274208: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x274208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27420c: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x27420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x274210: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x274210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x274214: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x274214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x274218: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x274218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x27421c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x27421cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x274220: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x274220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x274224: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x274224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x274228: 0xae4204fc  sw          $v0, 0x4FC($s2)
    ctx->pc = 0x274228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1276), GPR_U32(ctx, 2));
    // 0x27422c: 0xae420500  sw          $v0, 0x500($s2)
    ctx->pc = 0x27422cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1280), GPR_U32(ctx, 2));
    // 0x274230: 0xae400508  sw          $zero, 0x508($s2)
    ctx->pc = 0x274230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1288), GPR_U32(ctx, 0));
    // 0x274234: 0xae40050c  sw          $zero, 0x50C($s2)
    ctx->pc = 0x274234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1292), GPR_U32(ctx, 0));
    // 0x274238: 0xae400510  sw          $zero, 0x510($s2)
    ctx->pc = 0x274238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1296), GPR_U32(ctx, 0));
    // 0x27423c: 0xae400514  sw          $zero, 0x514($s2)
    ctx->pc = 0x27423cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1300), GPR_U32(ctx, 0));
    // 0x274240: 0xae400518  sw          $zero, 0x518($s2)
    ctx->pc = 0x274240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1304), GPR_U32(ctx, 0));
    // 0x274244: 0xae40051c  sw          $zero, 0x51C($s2)
    ctx->pc = 0x274244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1308), GPR_U32(ctx, 0));
    // 0x274248: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x274248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x27424c: 0xae400268  sw          $zero, 0x268($s2)
    ctx->pc = 0x27424cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 0));
    // 0x274250: 0xae430264  sw          $v1, 0x264($s2)
    ctx->pc = 0x274250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 3));
    // 0x274254: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x274254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x274258: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x274258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x27425c: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x27425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x274260: 0xc0e4060  jal         func_390180
    ctx->pc = 0x274260u;
    SET_GPR_U32(ctx, 31, 0x274268u);
    ctx->pc = 0x274264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274260u;
    // 0x274264: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x274260u, 0x274268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274268u;
label_274268:
    // 0x274268: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x274268u;
    SET_GPR_U32(ctx, 31, 0x274270u);
    ctx->pc = 0x27426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274268u;
    // 0x27426c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x274268u, 0x274270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274270u;
label_274270:
    // 0x274270: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x274270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x274274: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x274274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x274278: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x274278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27427c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x27427cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x274280: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x274280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x274284: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x274284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x274288: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x274288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x27428c: 0xafa600c4  sw          $a2, 0xC4($sp)
    ctx->pc = 0x27428cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 6));
    // 0x274290: 0x8c700914  lw          $s0, 0x914($v1)
    ctx->pc = 0x274290u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x510914u));
    // 0x274294: 0xc44000c8  lwc1        $f0, 0xC8($v0)
    ctx->pc = 0x274294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274298: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x274298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x27429c: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x27429cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2742a0: 0xe4800140  swc1        $f0, 0x140($a0)
    ctx->pc = 0x2742a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x2742a4: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x2742a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2742a8: 0x12000069  beqz        $s0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2742A8u;
    {
        const bool branch_taken_0x2742a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2742ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742A8u;
        // 0x2742ac: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742a8) {
            ctx->pc = 0x274450u;
            goto label_274450;
        }
    }
    ctx->pc = 0x2742B0u;
    // 0x2742b0: 0x241e012c  addiu       $fp, $zero, 0x12C
    ctx->pc = 0x2742b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2742b4: 0x3d0001b  divu        $zero, $fp, $s0
    ctx->pc = 0x2742b4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,30); } }
label_2742b8:
    // 0x2742b8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2742B8u;
    {
        const bool branch_taken_0x2742b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2742b8) {
            ctx->pc = 0x2742BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2742B8u;
            // 0x2742bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2742C0u;
            goto label_2742c0;
        }
    }
    ctx->pc = 0x2742C0u;
label_2742c0:
    // 0x2742c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2742c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2742c4: 0x1012  mflo        $v0
    ctx->pc = 0x2742c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2742c8: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2742C8u;
    {
        const bool branch_taken_0x2742c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2742CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742C8u;
        // 0x2742cc: 0x26970001  addiu       $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742c8) {
            ctx->pc = 0x274440u;
            goto label_274440;
        }
    }
    ctx->pc = 0x2742D0u;
    // 0x2742d0: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x2742d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2742d4: 0x32130001  andi        $s3, $s0, 0x1
    ctx->pc = 0x2742d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2742d8: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2742d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2742dc: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x2742dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2742e0: 0x2415012c  addiu       $s5, $zero, 0x12C
    ctx->pc = 0x2742e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2742e4: 0x0  nop
    ctx->pc = 0x2742e4u;
    // NOP
label_2742e8:
    // 0x2742e8: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2742E8u;
    {
        const bool branch_taken_0x2742e8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2742ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742E8u;
        // 0x2742ec: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742e8) {
            ctx->pc = 0x274304u;
            goto label_274304;
        }
    }
    ctx->pc = 0x2742F0u;
    // 0x2742f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2742f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2742f4: 0x0  nop
    ctx->pc = 0x2742f4u;
    // NOP
    // 0x2742f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2742f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2742fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2742FCu;
    {
        const bool branch_taken_0x2742fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2742fc) {
            ctx->pc = 0x27431Cu;
            goto label_27431c;
        }
    }
    ctx->pc = 0x274304u;
label_274304:
    // 0x274304: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x274304u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x274308: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x274308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27430c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27430cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274310: 0x0  nop
    ctx->pc = 0x274310u;
    // NOP
    // 0x274314: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274318: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x274318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27431c:
    // 0x27431c: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x27431cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274320: 0x0  nop
    ctx->pc = 0x274320u;
    // NOP
    // 0x274324: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x274324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x274328: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274328u;
    {
        const bool branch_taken_0x274328 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x274328) {
            ctx->pc = 0x274344u;
            goto label_274344;
        }
    }
    ctx->pc = 0x274330u;
    // 0x274330: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x274330u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x274334: 0x0  nop
    ctx->pc = 0x274334u;
    // NOP
    // 0x274338: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x274338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27433c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27433Cu;
    {
        const bool branch_taken_0x27433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27433c) {
            ctx->pc = 0x274354u;
            goto label_274354;
        }
    }
    ctx->pc = 0x274344u;
label_274344:
    // 0x274344: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x274344u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x274348: 0x0  nop
    ctx->pc = 0x274348u;
    // NOP
    // 0x27434c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27434cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x274350: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x274350u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_274354:
    // 0x274354: 0x0  nop
    ctx->pc = 0x274354u;
    // NOP
    // 0x274358: 0x0  nop
    ctx->pc = 0x274358u;
    // NOP
    // 0x27435c: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x27435cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x274360: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x274360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x274364: 0x24a5d978  addiu       $a1, $a1, -0x2688
    ctx->pc = 0x274364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957432));
    // 0x274368: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x274368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27436c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x27436cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274370: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x274370u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x274374: 0xc09cffc  jal         func_273FF0
    ctx->pc = 0x274374u;
    SET_GPR_U32(ctx, 31, 0x27437Cu);
    ctx->pc = 0x274378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274374u;
    // 0x274378: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273FF0u, 0x274374u, 0x27437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27437Cu;
label_27437c:
    // 0x27437c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274380: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x274380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274384: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x274384u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x274388: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x274388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27438c: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x27438cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274390: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x274390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x274394: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x274394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x274398: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x274398u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x27439c: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x27439cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x2743a0: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x2743a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x2743a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2743a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2743a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2743a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2743ac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2743acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2743b0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2743b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2743b4: 0x632018  mult        $a0, $v1, $v1
    ctx->pc = 0x2743b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2743b8: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x2743b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2743bc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2743bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2743c0: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x2743c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2743c4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2743C4u;
    {
        const bool branch_taken_0x2743c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2743C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743C4u;
        // 0x2743c8: 0x2b0001b  divu        $zero, $s5, $s0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743c4) {
            ctx->pc = 0x274424u;
            goto label_274424;
        }
    }
    ctx->pc = 0x2743CCu;
    // 0x2743cc: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x2743ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x2743d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2743d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2743d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2743d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2743d8: 0x83a30010  lb          $v1, 0x10($sp)
    ctx->pc = 0x2743d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2743dc: 0x83a40011  lb          $a0, 0x11($sp)
    ctx->pc = 0x2743dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x2743e0: 0xa043026c  sb          $v1, 0x26C($v0)
    ctx->pc = 0x2743e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 620), (uint8_t)GPR_U32(ctx, 3));
    // 0x2743e4: 0xa044026d  sb          $a0, 0x26D($v0)
    ctx->pc = 0x2743e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 621), (uint8_t)GPR_U32(ctx, 4));
    // 0x2743e8: 0x8e430268  lw          $v1, 0x268($s2)
    ctx->pc = 0x2743e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x2743ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2743ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2743f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2743f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2743f4: 0x8062026c  lb          $v0, 0x26C($v1)
    ctx->pc = 0x2743f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x2743f8: 0x8064026d  lb          $a0, 0x26D($v1)
    ctx->pc = 0x2743f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 621)));
    // 0x2743fc: 0xa062000c  sb          $v0, 0xC($v1)
    ctx->pc = 0x2743fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x274400: 0xa064000d  sb          $a0, 0xD($v1)
    ctx->pc = 0x274400u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x274404: 0xae4004fc  sw          $zero, 0x4FC($s2)
    ctx->pc = 0x274404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1276), GPR_U32(ctx, 0));
    // 0x274408: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x274408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x27440c: 0x83a30010  lb          $v1, 0x10($sp)
    ctx->pc = 0x27440cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274410: 0x83a40011  lb          $a0, 0x11($sp)
    ctx->pc = 0x274410u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x274414: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x274414u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x274418: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x274418u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x27441c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x274420: 0xae420268  sw          $v0, 0x268($s2)
    ctx->pc = 0x274420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
label_274424:
    // 0x274424: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x274424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x274428: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274428u;
    {
        const bool branch_taken_0x274428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x274428) {
            ctx->pc = 0x27442Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274428u;
            // 0x27442c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x274430u;
            goto label_274430;
        }
    }
    ctx->pc = 0x274430u;
label_274430:
    // 0x274430: 0x1012  mflo        $v0
    ctx->pc = 0x274430u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x274434: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x274434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x274438: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x274438u;
    {
        const bool branch_taken_0x274438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274438) {
            ctx->pc = 0x2742E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2742e8;
        }
    }
    ctx->pc = 0x274440u;
label_274440:
    // 0x274440: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x274440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274444: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x274444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x274448: 0x5440ff9b  bnel        $v0, $zero, . + 4 + (-0x65 << 2)
    ctx->pc = 0x274448u;
    {
        const bool branch_taken_0x274448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274448) {
            ctx->pc = 0x27444Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274448u;
            // 0x27444c: 0x3d0001b  divu        $zero, $fp, $s0 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,30); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2742B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2742b8;
        }
    }
    ctx->pc = 0x274450u;
label_274450:
    // 0x274450: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x274450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x274454: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274454u;
    {
        const bool branch_taken_0x274454 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x274458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274454u;
        // 0x274458: 0x8fa300b4  lw          $v1, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274454) {
            ctx->pc = 0x274470u;
            goto label_274470;
        }
    }
    ctx->pc = 0x27445Cu;
    // 0x27445c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27445cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274460: 0x0  nop
    ctx->pc = 0x274460u;
    // NOP
    // 0x274464: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274468: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x274468u;
    {
        const bool branch_taken_0x274468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274468u;
        // 0x27446c: 0x8c6200d4  lw          $v0, 0xD4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274468) {
            ctx->pc = 0x274494u;
            goto label_274494;
        }
    }
    ctx->pc = 0x274470u;
label_274470:
    // 0x274470: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x274470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x274474: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x274474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x274478: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x274478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27447c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27447cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274480: 0x0  nop
    ctx->pc = 0x274480u;
    // NOP
    // 0x274484: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274488: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x274488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x27448c: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x27448cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x274490: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x274490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_274494:
    // 0x274494: 0xc44c0140  lwc1        $f12, 0x140($v0)
    ctx->pc = 0x274494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274498: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x274498u;
    SET_GPR_U32(ctx, 31, 0x2744A0u);
    ctx->pc = 0x27449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274498u;
    // 0x27449c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x274498u, 0x2744A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2744A0u;
label_2744a0:
    // 0x2744a0: 0xae420508  sw          $v0, 0x508($s2)
    ctx->pc = 0x2744a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1288), GPR_U32(ctx, 2));
    // 0x2744a4: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x2744a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2744a8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2744a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2744ac: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x2744acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2744b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2744b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2744b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2744b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2744b8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2744b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2744bc: 0x9066026c  lbu         $a2, 0x26C($v1)
    ctx->pc = 0x2744bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x2744c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2744c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2744c4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2744c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2744c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2744c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2744cc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2744ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2744d0: 0x0  nop
    ctx->pc = 0x2744d0u;
    // NOP
    // 0x2744d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2744d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2744d8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2744d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2744dc: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x2744dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2744e0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2744e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2744e4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2744e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2744e8: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x2744e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2744ec: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x2744ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2744f0: 0xe64004f0  swc1        $f0, 0x4F0($s2)
    ctx->pc = 0x2744f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1264), bits); }
    // 0x2744f4: 0x8c68b734  lw          $t0, -0x48CC($v1)
    ctx->pc = 0x2744f4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x50B734u));
    // 0x2744f8: 0x90e6026d  lbu         $a2, 0x26D($a3)
    ctx->pc = 0x2744f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 621)));
    // 0x2744fc: 0xae420504  sw          $v0, 0x504($s2)
    ctx->pc = 0x2744fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1284), GPR_U32(ctx, 2));
    // 0x274500: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x274500u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274504: 0x0  nop
    ctx->pc = 0x274504u;
    // NOP
    // 0x274508: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27450c: 0xe64004f4  swc1        $f0, 0x4F4($s2)
    ctx->pc = 0x27450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1268), bits); }
    // 0x274510: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x274510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x274514: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x274514u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x274518: 0x7e4204e0  sq          $v0, 0x4E0($s2)
    ctx->pc = 0x274518u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1248), GPR_VEC(ctx, 2));
    // 0x27451c: 0x8d030048  lw          $v1, 0x48($t0)
    ctx->pc = 0x27451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x274520: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x274520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x274524: 0xc0cd940  jal         func_336500
    ctx->pc = 0x274524u;
    SET_GPR_U32(ctx, 31, 0x27452Cu);
    ctx->pc = 0x274528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274524u;
    // 0x274528: 0xae4304f8  sw          $v1, 0x4F8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x274524u, 0x27452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27452Cu;
label_27452c:
    // 0x27452c: 0x7ba80040  lq          $t0, 0x40($sp)
    ctx->pc = 0x27452cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274530: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x274530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274534: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x274534u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274538: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x274538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x27453c: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x27453cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x274540: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x274540u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x274544: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x274544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x274548: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x274548u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27454c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x27454cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x274550: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x274550u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x274554: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x274554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x274558: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x274558u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27455c: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x27455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x274560: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x274560u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274564: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x274564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x274568: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x274568u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x27456c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x27456cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x274570: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x274570u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x274574: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x274574u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x274578: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x274578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x27457c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x27457cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x274580: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x274580u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x274584: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x274584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x274588: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x274588u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x27458c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x27458cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x274590: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x274590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
    // 0x274594: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x274594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    // 0x274598: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x274598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x27459c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x27459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2745a0: 0x7e4404d0  sq          $a0, 0x4D0($s2)
    ctx->pc = 0x2745a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1232), GPR_VEC(ctx, 4));
    // 0x2745a4: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x2745a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2745a8: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x2745a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2745ac: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x2745acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2745b0: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x2745b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2745b4: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x2745b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2745b8: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x2745b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2745bc: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x2745bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2745c0: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x2745c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2745c4: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x2745c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2745c8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2745c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2745cc: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x2745ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
    // 0x2745d0: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x2745d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x2745d4: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x2745d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x2745d8: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x2745d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x2745dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2745DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2745E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745DCu;
        // 0x2745e0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2745DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2745E4u;
    // 0x2745e4: 0x0  nop
    ctx->pc = 0x2745e4u;
    // NOP
    ctx->pc = 0x2745e8u;
}

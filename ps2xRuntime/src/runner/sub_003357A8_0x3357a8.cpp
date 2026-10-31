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

// Function: sub_003357A8
// Address: 0x3357a8 - 0x3359b0
void sub_003357A8_0x3357a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003357A8_0x3357a8");
#endif

    ctx->pc = 0x3357a8u;

    // 0x3357a8: 0x3c013506  lui         $at, 0x3506
    ctx->pc = 0x3357a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13574 << 16));
    // 0x3357ac: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x3357acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x3357b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3357b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3357b4: 0x0  nop
    ctx->pc = 0x3357b4u;
    // NOP
    // 0x3357b8: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x3357b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3357bc: 0x0  nop
    ctx->pc = 0x3357bcu;
    // NOP
    // 0x3357c0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3357C0u;
    {
        const bool branch_taken_0x3357c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3357C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357C0u;
        // 0x3357c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3357c0) {
            ctx->pc = 0x3357E8u;
            goto label_3357e8;
        }
    }
    ctx->pc = 0x3357C8u;
    // 0x3357c8: 0x3c01b506  lui         $at, 0xB506
    ctx->pc = 0x3357c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46342 << 16));
    // 0x3357cc: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x3357ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x3357d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3357d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3357d4: 0x0  nop
    ctx->pc = 0x3357d4u;
    // NOP
    // 0x3357d8: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x3357d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3357dc: 0x0  nop
    ctx->pc = 0x3357dcu;
    // NOP
    // 0x3357e0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x3357E0u;
    {
        const bool branch_taken_0x3357e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3357e0) {
            ctx->pc = 0x33580Cu;
            goto label_33580c;
        }
    }
    ctx->pc = 0x3357E8u;
label_3357e8:
    // 0x3357e8: 0xc44016b0  lwc1        $f0, 0x16B0($v0)
    ctx->pc = 0x3357e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3357ec: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x3357ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3357f0: 0x0  nop
    ctx->pc = 0x3357f0u;
    // NOP
    // 0x3357f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3357F4u;
    {
        const bool branch_taken_0x3357f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3357f4) {
            ctx->pc = 0x33580Cu;
            goto label_33580c;
        }
    }
    ctx->pc = 0x3357FCu;
    // 0x3357fc: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x3357fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335800: 0x0  nop
    ctx->pc = 0x335800u;
    // NOP
    // 0x335804: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x335804u;
    {
        const bool branch_taken_0x335804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x335804) {
            ctx->pc = 0x335820u;
            goto label_335820;
        }
    }
    ctx->pc = 0x33580Cu;
label_33580c:
    // 0x33580c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x33580cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x335810: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x335810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x335814: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x335814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x335818: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x335818u;
    {
        const bool branch_taken_0x335818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335818) {
            ctx->pc = 0x335904u;
            goto label_335904;
        }
    }
    ctx->pc = 0x335820u;
label_335820:
    // 0x335820: 0x0  nop
    ctx->pc = 0x335820u;
    // NOP
    // 0x335824: 0x0  nop
    ctx->pc = 0x335824u;
    // NOP
    // 0x335828: 0x460d6003  div.s       $f0, $f12, $f13
    ctx->pc = 0x335828u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[12], ctx->f[13]); }
    // 0x33582c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33582cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x335830: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x335830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x335834: 0x46000105  abs.s       $f4, $f0
    ctx->pc = 0x335834u;
    ctx->f[4] = FPU_ABS_S(ctx->f[0]);
    // 0x335838: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x335838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33583c: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x33583cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335840: 0x0  nop
    ctx->pc = 0x335840u;
    // NOP
    // 0x335844: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x335844u;
    {
        const bool branch_taken_0x335844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x335848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335844u;
        // 0x335848: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335844) {
            ctx->pc = 0x33585Cu;
            goto label_33585c;
        }
    }
    ctx->pc = 0x33584Cu;
    // 0x33584c: 0x0  nop
    ctx->pc = 0x33584cu;
    // NOP
    // 0x335850: 0x0  nop
    ctx->pc = 0x335850u;
    // NOP
    // 0x335854: 0x46042903  div.s       $f4, $f5, $f4
    ctx->pc = 0x335854u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x335858: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x335858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33585c:
    // 0x33585c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33585cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x335860: 0xc440b908  lwc1        $f0, -0x46F8($v0)
    ctx->pc = 0x335860u;
    { uint32_t bits = FAST_READ32(0x6EB908u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335864: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x335864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335868: 0x0  nop
    ctx->pc = 0x335868u;
    // NOP
    // 0x33586c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x33586Cu;
    {
        const bool branch_taken_0x33586c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x335870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33586Cu;
        // 0x335870: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33586c) {
            ctx->pc = 0x33588Cu;
            goto label_33588c;
        }
    }
    ctx->pc = 0x335874u;
    // 0x335874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335878: 0xc441b904  lwc1        $f1, -0x46FC($v0)
    ctx->pc = 0x335878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33587c: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x33587cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x335880: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x335880u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x335884: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x335884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x335888: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x335888u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_33588c:
    // 0x33588c: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x33588cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x335890: 0x3c013e84  lui         $at, 0x3E84
    ctx->pc = 0x335890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16004 << 16));
    // 0x335894: 0x342115a6  ori         $at, $at, 0x15A6
    ctx->pc = 0x335894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5542);
    // 0x335898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33589c: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x33589cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x3358a0: 0x3421fff0  ori         $at, $at, 0xFFF0
    ctx->pc = 0x3358a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65520);
    // 0x3358a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3358a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3358a8: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x3358a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
    // 0x3358ac: 0x3421592e  ori         $at, $at, 0x592E
    ctx->pc = 0x3358acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22830);
    // 0x3358b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3358b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3358b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3358b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3358b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3358b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3358bc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3358bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3358c0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3358c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3358c4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3358c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3358c8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x3358c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3358cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3358CCu;
    {
        const bool branch_taken_0x3358cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3358cc) {
            ctx->pc = 0x3358E8u;
            goto label_3358e8;
        }
    }
    ctx->pc = 0x3358D4u;
    // 0x3358d4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x3358d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x3358d8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x3358d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x3358dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3358dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3358e0: 0x0  nop
    ctx->pc = 0x3358e0u;
    // NOP
    // 0x3358e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3358e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3358e8:
    // 0x3358e8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3358E8u;
    {
        const bool branch_taken_0x3358e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3358e8) {
            ctx->pc = 0x335904u;
            goto label_335904;
        }
    }
    ctx->pc = 0x3358F0u;
    // 0x3358f0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x3358f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x3358f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3358f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3358f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3358f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3358fc: 0x0  nop
    ctx->pc = 0x3358fcu;
    // NOP
    // 0x335900: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x335900u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_335904:
    // 0x335904: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x335904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x335908: 0x0  nop
    ctx->pc = 0x335908u;
    // NOP
    // 0x33590c: 0x46026834  c.lt.s      $f13, $f2
    ctx->pc = 0x33590cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335910: 0x0  nop
    ctx->pc = 0x335910u;
    // NOP
    // 0x335914: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x335914u;
    {
        const bool branch_taken_0x335914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x335914) {
            ctx->pc = 0x335930u;
            goto label_335930;
        }
    }
    ctx->pc = 0x33591Cu;
    // 0x33591c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x33591cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x335920: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x335920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x335924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335928: 0x0  nop
    ctx->pc = 0x335928u;
    // NOP
    // 0x33592c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x33592cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_335930:
    // 0x335930: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x335930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335934: 0x0  nop
    ctx->pc = 0x335934u;
    // NOP
    // 0x335938: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x335938u;
    {
        const bool branch_taken_0x335938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x335938) {
            ctx->pc = 0x33593Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335938u;
            // 0x33593c: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x335940u;
            goto label_335940;
        }
    }
    ctx->pc = 0x335940u;
label_335940:
    // 0x335940: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x335940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x335944: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x335944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x335948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33594c: 0x0  nop
    ctx->pc = 0x33594cu;
    // NOP
    // 0x335950: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x335950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335954: 0x0  nop
    ctx->pc = 0x335954u;
    // NOP
    // 0x335958: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x335958u;
    {
        const bool branch_taken_0x335958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x335958) {
            ctx->pc = 0x335974u;
            goto label_335974;
        }
    }
    ctx->pc = 0x335960u;
    // 0x335960: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x335960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x335964: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x335964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x335968: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33596c: 0x0  nop
    ctx->pc = 0x33596cu;
    // NOP
    // 0x335970: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x335970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_335974:
    // 0x335974: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x335974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x335978: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x335978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x33597c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33597cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335980: 0x0  nop
    ctx->pc = 0x335980u;
    // NOP
    // 0x335984: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x335984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335988: 0x0  nop
    ctx->pc = 0x335988u;
    // NOP
    // 0x33598c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x33598Cu;
    {
        const bool branch_taken_0x33598c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33598c) {
            ctx->pc = 0x3359A8u;
            goto label_3359a8;
        }
    }
    ctx->pc = 0x335994u;
    // 0x335994: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x335994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x335998: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x335998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x33599c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33599cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3359a0: 0x0  nop
    ctx->pc = 0x3359a0u;
    // NOP
    // 0x3359a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3359a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3359a8:
    // 0x3359a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3359A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3359ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359A8u;
        // 0x3359ac: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3359A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3359B0u;
}

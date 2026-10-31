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

// Function: sub_00419150
// Address: 0x419150 - 0x4193e8
void sub_00419150_0x419150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419150_0x419150");
#endif

    switch (ctx->pc) {
        case 0x419178u: goto label_419178;
        case 0x419188u: goto label_419188;
        case 0x41926cu: goto label_41926c;
        case 0x419294u: goto label_419294;
        case 0x4192b0u: goto label_4192b0;
        case 0x4192c0u: goto label_4192c0;
        case 0x4192c8u: goto label_4192c8;
        case 0x41939cu: goto label_41939c;
        case 0x4193b0u: goto label_4193b0;
        case 0x4193c0u: goto label_4193c0;
        case 0x4193d0u: goto label_4193d0;
        default: break;
    }

    ctx->pc = 0x419150u;

    // 0x419150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x419150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x419154: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x419154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x419158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x419158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41915c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41915cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x419160: 0x26110234  addiu       $s1, $s0, 0x234
    ctx->pc = 0x419160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    // 0x419164: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x419164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x419168: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x419168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41916c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419170: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x419170u;
    SET_GPR_U32(ctx, 31, 0x419178u);
    ctx->pc = 0x419174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419170u;
    // 0x419174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x419170u, 0x419178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419178u;
label_419178:
    // 0x419178: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x419178u;
    {
        const bool branch_taken_0x419178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x419178) {
            ctx->pc = 0x4193A8u;
            goto label_4193a8;
        }
    }
    ctx->pc = 0x419180u;
    // 0x419180: 0xc08cf14  jal         func_233C50
    ctx->pc = 0x419180u;
    SET_GPR_U32(ctx, 31, 0x419188u);
    ctx->pc = 0x233C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C50u, 0x419180u, 0x419188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419188u;
label_419188:
    // 0x419188: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x419188u;
    {
        const bool branch_taken_0x419188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419188) {
            ctx->pc = 0x41918Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419188u;
            // 0x41918c: 0x92030248  lbu         $v1, 0x248($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41929Cu;
            goto label_41929c;
        }
    }
    ctx->pc = 0x419190u;
    // 0x419190: 0x92020248  lbu         $v0, 0x248($s0)
    ctx->pc = 0x419190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x419194: 0x1452000b  bne         $v0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x419194u;
    {
        const bool branch_taken_0x419194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x419198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419194u;
        // 0x419198: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419194) {
            ctx->pc = 0x4191C4u;
            goto label_4191c4;
        }
    }
    ctx->pc = 0x41919Cu;
    // 0x41919c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4191a0: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x4191a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4191a4: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x4191a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x4191a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4191a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4191ac: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x4191acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x4191b0: 0xa2040248  sb          $a0, 0x248($s0)
    ctx->pc = 0x4191b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 584), (uint8_t)GPR_U32(ctx, 4));
    // 0x4191b4: 0xae020238  sw          $v0, 0x238($s0)
    ctx->pc = 0x4191b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
    // 0x4191b8: 0xe600023c  swc1        $f0, 0x23C($s0)
    ctx->pc = 0x4191b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 572), bits); }
    // 0x4191bc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x4191BCu;
    {
        const bool branch_taken_0x4191bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4191C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4191BCu;
        // 0x4191c0: 0xae000240  sw          $zero, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4191bc) {
            ctx->pc = 0x4193D0u;
            goto label_4193d0;
        }
    }
    ctx->pc = 0x4191C4u;
label_4191c4:
    // 0x4191c4: 0x8e050238  lw          $a1, 0x238($s0)
    ctx->pc = 0x4191c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x4191c8: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x4191c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x4191cc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x4191ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x4191d0: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x4191d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4191d4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4191D4u;
    {
        const bool branch_taken_0x4191d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4191D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4191D4u;
        // 0x4191d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4191d4) {
            ctx->pc = 0x4191F0u;
            goto label_4191f0;
        }
    }
    ctx->pc = 0x4191DCu;
    // 0x4191dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4191dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4191e0: 0x0  nop
    ctx->pc = 0x4191e0u;
    // NOP
    // 0x4191e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4191e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4191e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4191E8u;
    {
        const bool branch_taken_0x4191e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4191ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4191E8u;
        // 0x4191ec: 0x8e020254  lw          $v0, 0x254($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4191e8) {
            ctx->pc = 0x41920Cu;
            goto label_41920c;
        }
    }
    ctx->pc = 0x4191F0u;
label_4191f0:
    // 0x4191f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4191f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4191f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4191f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4191f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4191f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4191fc: 0x0  nop
    ctx->pc = 0x4191fcu;
    // NOP
    // 0x419200: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x419200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x419204: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x419204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x419208: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x419208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_41920c:
    // 0x41920c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41920Cu;
    {
        const bool branch_taken_0x41920c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x419210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41920Cu;
        // 0x419210: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41920c) {
            ctx->pc = 0x419228u;
            goto label_419228;
        }
    }
    ctx->pc = 0x419214u;
    // 0x419214: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x419214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x419218: 0x0  nop
    ctx->pc = 0x419218u;
    // NOP
    // 0x41921c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x41921cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x419220: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x419220u;
    {
        const bool branch_taken_0x419220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x419220) {
            ctx->pc = 0x419240u;
            goto label_419240;
        }
    }
    ctx->pc = 0x419228u;
label_419228:
    // 0x419228: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x419228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x41922c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x41922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x419230: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x419230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x419234: 0x0  nop
    ctx->pc = 0x419234u;
    // NOP
    // 0x419238: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x419238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x41923c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x41923cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_419240:
    // 0x419240: 0x0  nop
    ctx->pc = 0x419240u;
    // NOP
    // 0x419244: 0x0  nop
    ctx->pc = 0x419244u;
    // NOP
    // 0x419248: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x419248u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x41924c: 0xc601023c  lwc1        $f1, 0x23C($s0)
    ctx->pc = 0x41924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x419250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x419250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x419254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x419254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x419258: 0x26040234  addiu       $a0, $s0, 0x234
    ctx->pc = 0x419258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    // 0x41925c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x41925cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x419260: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x419260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x419264: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x419264u;
    SET_GPR_U32(ctx, 31, 0x41926Cu);
    ctx->pc = 0x419268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419264u;
    // 0x419268: 0xe6000244  swc1        $f0, 0x244($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x419264u, 0x41926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41926Cu;
label_41926c:
    // 0x41926c: 0xc6010244  lwc1        $f1, 0x244($s0)
    ctx->pc = 0x41926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x419270: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x419270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x419274: 0xe4410074  swc1        $f1, 0x74($v0)
    ctx->pc = 0x419274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x419278: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x419278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41927c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x41927cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x419280: 0x0  nop
    ctx->pc = 0x419280u;
    // NOP
    // 0x419284: 0x45020053  bc1fl       . + 4 + (0x53 << 2)
    ctx->pc = 0x419284u;
    {
        const bool branch_taken_0x419284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x419284) {
            ctx->pc = 0x419288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419284u;
            // 0x419288: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4193D4u;
            goto label_4193d4;
        }
    }
    ctx->pc = 0x41928Cu;
    // 0x41928c: 0xc106442  jal         func_419108
    ctx->pc = 0x41928Cu;
    SET_GPR_U32(ctx, 31, 0x419294u);
    ctx->pc = 0x419290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41928Cu;
    // 0x419290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419108u, 0x41928Cu, 0x419294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419294u;
label_419294:
    // 0x419294: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x419294u;
    {
        const bool branch_taken_0x419294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419294u;
        // 0x419298: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419294) {
            ctx->pc = 0x4193D4u;
            goto label_4193d4;
        }
    }
    ctx->pc = 0x41929Cu;
label_41929c:
    // 0x41929c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x41929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4192a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4192A0u;
    {
        const bool branch_taken_0x4192a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4192a0) {
            ctx->pc = 0x4192B8u;
            goto label_4192b8;
        }
    }
    ctx->pc = 0x4192A8u;
    // 0x4192a8: 0xc10640c  jal         func_419030
    ctx->pc = 0x4192A8u;
    SET_GPR_U32(ctx, 31, 0x4192B0u);
    ctx->pc = 0x4192ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4192A8u;
    // 0x4192ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419030u, 0x4192A8u, 0x4192B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4192B0u;
label_4192b0:
    // 0x4192b0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x4192B0u;
    {
        const bool branch_taken_0x4192b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4192B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4192B0u;
        // 0x4192b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4192b0) {
            ctx->pc = 0x4193D4u;
            goto label_4193d4;
        }
    }
    ctx->pc = 0x4192B8u;
label_4192b8:
    // 0x4192b8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x4192B8u;
    SET_GPR_U32(ctx, 31, 0x4192C0u);
    ctx->pc = 0x4192BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4192B8u;
    // 0x4192bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x4192B8u, 0x4192C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4192C0u;
label_4192c0:
    // 0x4192c0: 0xc046cf0  jal         func_11B3C0
    ctx->pc = 0x4192C0u;
    SET_GPR_U32(ctx, 31, 0x4192C8u);
    ctx->pc = 0x4192C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4192C0u;
    // 0x4192c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B3C0u, 0x4192C0u, 0x4192C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4192C8u;
label_4192c8:
    // 0x4192c8: 0x54520042  bnel        $v0, $s2, . + 4 + (0x42 << 2)
    ctx->pc = 0x4192C8u;
    {
        const bool branch_taken_0x4192c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x4192c8) {
            ctx->pc = 0x4192CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4192C8u;
            // 0x4192cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4193D4u;
            goto label_4193d4;
        }
    }
    ctx->pc = 0x4192D0u;
    // 0x4192d0: 0xc6010244  lwc1        $f1, 0x244($s0)
    ctx->pc = 0x4192d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4192d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4192d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4192d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4192d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4192dc: 0x0  nop
    ctx->pc = 0x4192dcu;
    // NOP
    // 0x4192e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4192e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4192e4: 0x0  nop
    ctx->pc = 0x4192e4u;
    // NOP
    // 0x4192e8: 0x4502003a  bc1fl       . + 4 + (0x3A << 2)
    ctx->pc = 0x4192E8u;
    {
        const bool branch_taken_0x4192e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4192e8) {
            ctx->pc = 0x4192ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4192E8u;
            // 0x4192ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4193D4u;
            goto label_4193d4;
        }
    }
    ctx->pc = 0x4192F0u;
    // 0x4192f0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x4192f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x4192f4: 0x8e050238  lw          $a1, 0x238($s0)
    ctx->pc = 0x4192f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x4192f8: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x4192f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x4192fc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x4192fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x419300: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x419300u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x419304: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x419304u;
    {
        const bool branch_taken_0x419304 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x419308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419304u;
        // 0x419308: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419304) {
            ctx->pc = 0x419320u;
            goto label_419320;
        }
    }
    ctx->pc = 0x41930Cu;
    // 0x41930c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41930cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x419310: 0x0  nop
    ctx->pc = 0x419310u;
    // NOP
    // 0x419314: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x419314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x419318: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x419318u;
    {
        const bool branch_taken_0x419318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419318u;
        // 0x41931c: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419318) {
            ctx->pc = 0x41933Cu;
            goto label_41933c;
        }
    }
    ctx->pc = 0x419320u;
label_419320:
    // 0x419320: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x419320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x419324: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x419324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x419328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x419328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41932c: 0x0  nop
    ctx->pc = 0x41932cu;
    // NOP
    // 0x419330: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x419330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x419334: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x419334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x419338: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x419338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_41933c:
    // 0x41933c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41933Cu;
    {
        const bool branch_taken_0x41933c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x419340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41933Cu;
        // 0x419340: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41933c) {
            ctx->pc = 0x419358u;
            goto label_419358;
        }
    }
    ctx->pc = 0x419344u;
    // 0x419344: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x419344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x419348: 0x0  nop
    ctx->pc = 0x419348u;
    // NOP
    // 0x41934c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x41934cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x419350: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x419350u;
    {
        const bool branch_taken_0x419350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x419350) {
            ctx->pc = 0x419370u;
            goto label_419370;
        }
    }
    ctx->pc = 0x419358u;
label_419358:
    // 0x419358: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x419358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x41935c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x41935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x419360: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x419360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x419364: 0x0  nop
    ctx->pc = 0x419364u;
    // NOP
    // 0x419368: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x419368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x41936c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x41936cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_419370:
    // 0x419370: 0x0  nop
    ctx->pc = 0x419370u;
    // NOP
    // 0x419374: 0x0  nop
    ctx->pc = 0x419374u;
    // NOP
    // 0x419378: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x419378u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x41937c: 0xc6010240  lwc1        $f1, 0x240($s0)
    ctx->pc = 0x41937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x419380: 0xc600023c  lwc1        $f0, 0x23C($s0)
    ctx->pc = 0x419380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x419384: 0x26040234  addiu       $a0, $s0, 0x234
    ctx->pc = 0x419384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    // 0x419388: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x419388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x41938c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x41938cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x419390: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x419390u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x419394: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x419394u;
    SET_GPR_U32(ctx, 31, 0x41939Cu);
    ctx->pc = 0x419398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419394u;
    // 0x419398: 0xe6010244  swc1        $f1, 0x244($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x419394u, 0x41939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41939Cu;
label_41939c:
    // 0x41939c: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x41939cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4193a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4193A0u;
    {
        const bool branch_taken_0x4193a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4193A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4193A0u;
        // 0x4193a4: 0xe4400074  swc1        $f0, 0x74($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4193a0) {
            ctx->pc = 0x4193D0u;
            goto label_4193d0;
        }
    }
    ctx->pc = 0x4193A8u;
label_4193a8:
    // 0x4193a8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x4193A8u;
    SET_GPR_U32(ctx, 31, 0x4193B0u);
    ctx->pc = 0x4193ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4193A8u;
    // 0x4193ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x4193A8u, 0x4193B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4193B0u;
label_4193b0:
    // 0x4193b0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4193B0u;
    {
        const bool branch_taken_0x4193b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4193b0) {
            ctx->pc = 0x4193B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4193B0u;
            // 0x4193b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4193D4u;
            goto label_4193d4;
        }
    }
    ctx->pc = 0x4193B8u;
    // 0x4193b8: 0xc08cf14  jal         func_233C50
    ctx->pc = 0x4193B8u;
    SET_GPR_U32(ctx, 31, 0x4193C0u);
    ctx->pc = 0x233C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C50u, 0x4193B8u, 0x4193C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4193C0u;
label_4193c0:
    // 0x4193c0: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4193C0u;
    {
        const bool branch_taken_0x4193c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x4193c0) {
            ctx->pc = 0x4193C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4193C0u;
            // 0x4193c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4193D4u;
            goto label_4193d4;
        }
    }
    ctx->pc = 0x4193C8u;
    // 0x4193c8: 0xc10640c  jal         func_419030
    ctx->pc = 0x4193C8u;
    SET_GPR_U32(ctx, 31, 0x4193D0u);
    ctx->pc = 0x4193CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4193C8u;
    // 0x4193cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419030u, 0x4193C8u, 0x4193D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4193D0u;
label_4193d0:
    // 0x4193d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4193d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4193d4:
    // 0x4193d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4193d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4193d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4193d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4193dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4193dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4193e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4193E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4193E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4193E0u;
        // 0x4193e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4193E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4193E8u;
}

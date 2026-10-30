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

// Function: sub_00274710
// Address: 0x274710 - 0x2748a0
void sub_00274710_0x274710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274710_0x274710");
#endif

    switch (ctx->pc) {
        case 0x274734u: goto label_274734;
        case 0x274848u: goto label_274848;
        case 0x274868u: goto label_274868;
        default: break;
    }

    ctx->pc = 0x274710u;

    // 0x274710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x274710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x274714: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x274714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x274718: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x274718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27471c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27471cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274720: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x274720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274724: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x274724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x274728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27472c: 0xc09ce76  jal         func_2739D8
    ctx->pc = 0x27472Cu;
    SET_GPR_U32(ctx, 31, 0x274734u);
    ctx->pc = 0x274730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27472Cu;
    // 0x274730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2739D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2739D8u, 0x27472Cu, 0x274734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274734u;
label_274734:
    // 0x274734: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x274734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274738: 0x8e030518  lw          $v1, 0x518($s0)
    ctx->pc = 0x274738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x27473c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27473cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x274740: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x274740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x274744: 0x8c47b734  lw          $a3, -0x48CC($v0)
    ctx->pc = 0x274744u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50B734u));
    // 0x274748: 0x8ce60048  lw          $a2, 0x48($a3)
    ctx->pc = 0x274748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x27474c: 0xc32023  subu        $a0, $a2, $v1
    ctx->pc = 0x27474cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x274750: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x274750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x274754: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x274754u;
    {
        const bool branch_taken_0x274754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274754) {
            ctx->pc = 0x274758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274754u;
            // 0x274758: 0x8e020508  lw          $v0, 0x508($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2747E0u;
            goto label_2747e0;
        }
    }
    ctx->pc = 0x27475Cu;
    // 0x27475c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27475Cu;
    {
        const bool branch_taken_0x27475c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x274760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27475Cu;
        // 0x274760: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27475c) {
            ctx->pc = 0x274778u;
            goto label_274778;
        }
    }
    ctx->pc = 0x274764u;
    // 0x274764: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x274764u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274768: 0x0  nop
    ctx->pc = 0x274768u;
    // NOP
    // 0x27476c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27476cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274770: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x274770u;
    {
        const bool branch_taken_0x274770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274770) {
            ctx->pc = 0x274790u;
            goto label_274790;
        }
    }
    ctx->pc = 0x274778u;
label_274778:
    // 0x274778: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x274778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27477c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27477cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x274780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274784: 0x0  nop
    ctx->pc = 0x274784u;
    // NOP
    // 0x274788: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27478c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27478cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_274790:
    // 0x274790: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x274790u;
    {
        const bool branch_taken_0x274790 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x274794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274790u;
        // 0x274794: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274790) {
            ctx->pc = 0x2747ACu;
            goto label_2747ac;
        }
    }
    ctx->pc = 0x274798u;
    // 0x274798: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x274798u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27479c: 0x0  nop
    ctx->pc = 0x27479cu;
    // NOP
    // 0x2747a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2747a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2747a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2747A4u;
    {
        const bool branch_taken_0x2747a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2747a4) {
            ctx->pc = 0x2747C4u;
            goto label_2747c4;
        }
    }
    ctx->pc = 0x2747ACu;
label_2747ac:
    // 0x2747ac: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2747acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2747b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2747b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2747b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2747b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2747b8: 0x0  nop
    ctx->pc = 0x2747b8u;
    // NOP
    // 0x2747bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2747bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2747c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2747c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2747c4:
    // 0x2747c4: 0x0  nop
    ctx->pc = 0x2747c4u;
    // NOP
    // 0x2747c8: 0x0  nop
    ctx->pc = 0x2747c8u;
    // NOP
    // 0x2747cc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2747ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2747d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2747d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2747d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2747d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2747d8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2747D8u;
    {
        const bool branch_taken_0x2747d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747D8u;
        // 0x2747dc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747d8) {
            ctx->pc = 0x274888u;
            goto label_274888;
        }
    }
    ctx->pc = 0x2747E0u;
label_2747e0:
    // 0x2747e0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2747e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x2747e4: 0xae060518  sw          $a2, 0x518($s0)
    ctx->pc = 0x2747e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 6));
    // 0x2747e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2747e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2747ec: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2747ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x2747f0: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2747f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2747f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2747f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2747f8: 0x9065026c  lbu         $a1, 0x26C($v1)
    ctx->pc = 0x2747f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x2747fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2747fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274800: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x274800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x274804: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x274804u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274808: 0x0  nop
    ctx->pc = 0x274808u;
    // NOP
    // 0x27480c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27480cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274810: 0xe60004f0  swc1        $f0, 0x4F0($s0)
    ctx->pc = 0x274810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1264), bits); }
    // 0x274814: 0x9043026d  lbu         $v1, 0x26D($v0)
    ctx->pc = 0x274814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 621)));
    // 0x274818: 0xae000510  sw          $zero, 0x510($s0)
    ctx->pc = 0x274818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 0));
    // 0x27481c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27481cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274820: 0x0  nop
    ctx->pc = 0x274820u;
    // NOP
    // 0x274824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274828: 0xe60004f4  swc1        $f0, 0x4F4($s0)
    ctx->pc = 0x274828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1268), bits); }
    // 0x27482c: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x27482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x274830: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x274830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x274834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274838: 0xae02051c  sw          $v0, 0x51C($s0)
    ctx->pc = 0x274838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1308), GPR_U32(ctx, 2));
    // 0x27483c: 0xae020514  sw          $v0, 0x514($s0)
    ctx->pc = 0x27483cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1300), GPR_U32(ctx, 2));
    // 0x274840: 0xc107908  jal         func_41E420
    ctx->pc = 0x274840u;
    SET_GPR_U32(ctx, 31, 0x274848u);
    ctx->pc = 0x274844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274840u;
    // 0x274844: 0x8e250380  lw          $a1, 0x380($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x274840u, 0x274848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274848u;
label_274848:
    // 0x274848: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274848u;
    {
        const bool branch_taken_0x274848 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274848u;
        // 0x27484c: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274848) {
            ctx->pc = 0x274870u;
            goto label_274870;
        }
    }
    ctx->pc = 0x274850u;
    // 0x274850: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x274850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274854: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x274854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x274858: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x274858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27485c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x27485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x274860: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x274860u;
    SET_GPR_U32(ctx, 31, 0x274868u);
    ctx->pc = 0x274864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274860u;
    // 0x274864: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x274860u, 0x274868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274868u;
label_274868:
    // 0x274868: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x274868u;
    {
        const bool branch_taken_0x274868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274868) {
            ctx->pc = 0x274880u;
            goto label_274880;
        }
    }
    ctx->pc = 0x274870u;
label_274870:
    // 0x274870: 0x8e030268  lw          $v1, 0x268($s0)
    ctx->pc = 0x274870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x274874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274878: 0xae0204fc  sw          $v0, 0x4FC($s0)
    ctx->pc = 0x274878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1276), GPR_U32(ctx, 2));
    // 0x27487c: 0xae030508  sw          $v1, 0x508($s0)
    ctx->pc = 0x27487cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 3));
label_274880:
    // 0x274880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x274884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_274888:
    // 0x274888: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x274888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27488c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27488cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274890: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x274890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274898: 0x3e00008  jr          $ra
    ctx->pc = 0x274898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274898u;
        // 0x27489c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2748A0u;
}

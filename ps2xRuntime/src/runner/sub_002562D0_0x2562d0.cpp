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

// Function: sub_002562D0
// Address: 0x2562d0 - 0x256a60
void sub_002562D0_0x2562d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002562D0_0x2562d0");
#endif

    switch (ctx->pc) {
        case 0x256310u: goto label_256310;
        case 0x25632cu: goto label_25632c;
        case 0x256408u: goto label_256408;
        case 0x256410u: goto label_256410;
        case 0x256424u: goto label_256424;
        case 0x256484u: goto label_256484;
        case 0x2564a0u: goto label_2564a0;
        case 0x2564f4u: goto label_2564f4;
        case 0x2565b4u: goto label_2565b4;
        case 0x2566a4u: goto label_2566a4;
        case 0x256704u: goto label_256704;
        case 0x256714u: goto label_256714;
        case 0x25672cu: goto label_25672c;
        case 0x256760u: goto label_256760;
        case 0x2567b4u: goto label_2567b4;
        case 0x256818u: goto label_256818;
        case 0x256828u: goto label_256828;
        case 0x256838u: goto label_256838;
        case 0x256850u: goto label_256850;
        case 0x256930u: goto label_256930;
        case 0x256944u: goto label_256944;
        case 0x256958u: goto label_256958;
        case 0x256968u: goto label_256968;
        case 0x256990u: goto label_256990;
        case 0x2569f4u: goto label_2569f4;
        case 0x256a04u: goto label_256a04;
        case 0x256a14u: goto label_256a14;
        case 0x256a24u: goto label_256a24;
        case 0x256a34u: goto label_256a34;
        default: break;
    }

    ctx->pc = 0x2562d0u;

    // 0x2562d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2562d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2562d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2562d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2562d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2562d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2562dc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2562dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2562e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2562e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2562e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2562e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2562e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2562e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2562ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2562ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2562f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2562f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2562f4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2562f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2562f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2562f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2562fc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2562fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x256300: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x256300u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x256304: 0x8e5300d4  lw          $s3, 0xD4($s2)
    ctx->pc = 0x256304u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x256308: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x256308u;
    SET_GPR_U32(ctx, 31, 0x256310u);
    ctx->pc = 0x25630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256308u;
    // 0x25630c: 0x8c750048  lw          $s5, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x256308u, 0x256310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256310u;
label_256310:
    // 0x256310: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x256310u;
    {
        const bool branch_taken_0x256310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256310u;
        // 0x256314: 0x8e83b734  lw          $v1, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256310) {
            ctx->pc = 0x256408u;
            goto label_256408;
        }
    }
    ctx->pc = 0x256318u;
    // 0x256318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25631c: 0x8e620154  lw          $v0, 0x154($s3)
    ctx->pc = 0x25631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x256320: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x256320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x256324: 0xc088cd2  jal         func_223348
    ctx->pc = 0x256324u;
    SET_GPR_U32(ctx, 31, 0x25632Cu);
    ctx->pc = 0x256328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256324u;
    // 0x256328: 0x2028823  subu        $s1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223348u, 0x256324u, 0x25632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25632Cu;
label_25632c:
    // 0x25632c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x25632cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x256330: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x256330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x256334: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x256334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256338: 0xae700154  sw          $s0, 0x154($s3)
    ctx->pc = 0x256338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 16));
    // 0x25633c: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25633Cu;
    {
        const bool branch_taken_0x25633c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x256340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25633Cu;
        // 0x256340: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25633c) {
            ctx->pc = 0x256358u;
            goto label_256358;
        }
    }
    ctx->pc = 0x256344u;
    // 0x256344: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x256344u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256348: 0x0  nop
    ctx->pc = 0x256348u;
    // NOP
    // 0x25634c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25634cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256350: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x256350u;
    {
        const bool branch_taken_0x256350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256350u;
        // 0x256354: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256350) {
            ctx->pc = 0x256378u;
            goto label_256378;
        }
    }
    ctx->pc = 0x256358u;
label_256358:
    // 0x256358: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x256358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x25635c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x25635cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x256360: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x256360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256368: 0x0  nop
    ctx->pc = 0x256368u;
    // NOP
    // 0x25636c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25636cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256370: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x256370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x256374: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x256374u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_256378:
    // 0x256378: 0x9662014a  lhu         $v0, 0x14A($s3)
    ctx->pc = 0x256378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 330)));
    // 0x25637c: 0xc6600158  lwc1        $f0, 0x158($s3)
    ctx->pc = 0x25637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256380: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x256380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256384: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x256384u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x256388: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x256388u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25638c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x25638cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x256390: 0xe6620158  swc1        $f2, 0x158($s3)
    ctx->pc = 0x256390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 344), bits); }
    // 0x256394: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x256394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256398: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x256398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25639c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25639Cu;
    {
        const bool branch_taken_0x25639c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2563A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25639Cu;
        // 0x2563a0: 0xa662014a  sh          $v0, 0x14A($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 330), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25639c) {
            ctx->pc = 0x2563B8u;
            goto label_2563b8;
        }
    }
    ctx->pc = 0x2563A4u;
    // 0x2563a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2563a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2563a8: 0x0  nop
    ctx->pc = 0x2563a8u;
    // NOP
    // 0x2563ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2563acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2563b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2563B0u;
    {
        const bool branch_taken_0x2563b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2563B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563B0u;
        // 0x2563b4: 0xc6600158  lwc1        $f0, 0x158($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563b0) {
            ctx->pc = 0x2563E8u;
            goto label_2563e8;
        }
    }
    ctx->pc = 0x2563B8u;
label_2563b8:
    // 0x2563b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2563b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2563bc: 0x0  nop
    ctx->pc = 0x2563bcu;
    // NOP
    // 0x2563c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2563c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2563c4: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2563c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2563c8: 0x0  nop
    ctx->pc = 0x2563c8u;
    // NOP
    // 0x2563cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2563CCu;
    {
        const bool branch_taken_0x2563cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2563D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563CCu;
        // 0x2563d0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563cc) {
            ctx->pc = 0x2563E4u;
            goto label_2563e4;
        }
    }
    ctx->pc = 0x2563D4u;
    // 0x2563d4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2563d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2563d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2563d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2563dc: 0x0  nop
    ctx->pc = 0x2563dcu;
    // NOP
    // 0x2563e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2563e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2563e4:
    // 0x2563e4: 0xc6600158  lwc1        $f0, 0x158($s3)
    ctx->pc = 0x2563e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2563e8:
    // 0x2563e8: 0x8662014a  lh          $v0, 0x14A($s3)
    ctx->pc = 0x2563e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 330)));
    // 0x2563ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2563ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2563f0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2563F0u;
    {
        const bool branch_taken_0x2563f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2563F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563F0u;
        // 0x2563f4: 0xe6600158  swc1        $f0, 0x158($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563f0) {
            ctx->pc = 0x256408u;
            goto label_256408;
        }
    }
    ctx->pc = 0x2563F8u;
    // 0x2563f8: 0xa660014a  sh          $zero, 0x14A($s3)
    ctx->pc = 0x2563f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 330), (uint16_t)GPR_U32(ctx, 0));
    // 0x2563fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2563fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256400: 0xc089988  jal         func_226620
    ctx->pc = 0x256400u;
    SET_GPR_U32(ctx, 31, 0x256408u);
    ctx->pc = 0x256404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256400u;
    // 0x256404: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x256400u, 0x256408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256408u;
label_256408:
    // 0x256408: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x256408u;
    SET_GPR_U32(ctx, 31, 0x256410u);
    ctx->pc = 0x25640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256408u;
    // 0x25640c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x256408u, 0x256410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256410u;
label_256410:
    // 0x256410: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x256410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x256414: 0x506000ed  beql        $v1, $zero, . + 4 + (0xED << 2)
    ctx->pc = 0x256414u;
    {
        const bool branch_taken_0x256414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256414) {
            ctx->pc = 0x256418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256414u;
            // 0x256418: 0xde4300e0  ld          $v1, 0xE0($s2) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2567CCu;
            goto label_2567cc;
        }
    }
    ctx->pc = 0x25641Cu;
    // 0x25641c: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x25641Cu;
    SET_GPR_U32(ctx, 31, 0x256424u);
    ctx->pc = 0x256420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25641Cu;
    // 0x256420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x25641Cu, 0x256424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256424u;
label_256424:
    // 0x256424: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x256424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256428: 0x8e420648  lw          $v0, 0x648($s2)
    ctx->pc = 0x256428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1608)));
    // 0x25642c: 0x144000cf  bnez        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x25642Cu;
    {
        const bool branch_taken_0x25642c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25642Cu;
        // 0x256430: 0x8e82b734  lw          $v0, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25642c) {
            ctx->pc = 0x25676Cu;
            goto label_25676c;
        }
    }
    ctx->pc = 0x256434u;
    // 0x256434: 0x8e420650  lw          $v0, 0x650($s2)
    ctx->pc = 0x256434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
    // 0x256438: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x256438u;
    {
        const bool branch_taken_0x256438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256438u;
        // 0x25643c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256438) {
            ctx->pc = 0x256768u;
            goto label_256768;
        }
    }
    ctx->pc = 0x256440u;
    // 0x256440: 0xde4400e0  ld          $a0, 0xE0($s2)
    ctx->pc = 0x256440u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x256444: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x256444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x256448: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25644c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25644cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256450: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x256450u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x256454: 0x144000c5  bnez        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x256454u;
    {
        const bool branch_taken_0x256454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256454u;
        // 0x256458: 0x8e82b734  lw          $v0, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256454) {
            ctx->pc = 0x25676Cu;
            goto label_25676c;
        }
    }
    ctx->pc = 0x25645Cu;
    // 0x25645c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x25645cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x256460: 0x8e43064c  lw          $v1, 0x64C($s2)
    ctx->pc = 0x256460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1612)));
    // 0x256464: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x256464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x256468: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25646c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25646cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256470: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x256470u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x256474: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256474u;
    {
        const bool branch_taken_0x256474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256474u;
        // 0x256478: 0x2a38023  subu        $s0, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256474) {
            ctx->pc = 0x256498u;
            goto label_256498;
        }
    }
    ctx->pc = 0x25647Cu;
    // 0x25647c: 0xc088ad6  jal         func_222B58
    ctx->pc = 0x25647Cu;
    SET_GPR_U32(ctx, 31, 0x256484u);
    ctx->pc = 0x256480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25647Cu;
    // 0x256480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x25647Cu, 0x256484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256484u;
label_256484:
    // 0x256484: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x256484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x256488: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256488u;
    {
        const bool branch_taken_0x256488 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256488u;
        // 0x25648c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256488) {
            ctx->pc = 0x2564ACu;
            goto label_2564ac;
        }
    }
    ctx->pc = 0x256490u;
    // 0x256490: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x256490u;
    {
        const bool branch_taken_0x256490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256490u;
        // 0x256494: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256490) {
            ctx->pc = 0x2564C4u;
            goto label_2564c4;
        }
    }
    ctx->pc = 0x256498u;
label_256498:
    // 0x256498: 0xc088ad6  jal         func_222B58
    ctx->pc = 0x256498u;
    SET_GPR_U32(ctx, 31, 0x2564A0u);
    ctx->pc = 0x25649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256498u;
    // 0x25649c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x256498u, 0x2564A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564A0u;
label_2564a0:
    // 0x2564a0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2564a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2564a4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2564A4u;
    {
        const bool branch_taken_0x2564a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2564A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564A4u;
        // 0x2564a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564a4) {
            ctx->pc = 0x2564C0u;
            goto label_2564c0;
        }
    }
    ctx->pc = 0x2564ACu;
label_2564ac:
    // 0x2564ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2564acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2564b0: 0x0  nop
    ctx->pc = 0x2564b0u;
    // NOP
    // 0x2564b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2564b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2564b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2564B8u;
    {
        const bool branch_taken_0x2564b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2564b8) {
            ctx->pc = 0x2564D8u;
            goto label_2564d8;
        }
    }
    ctx->pc = 0x2564C0u;
label_2564c0:
    // 0x2564c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2564c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2564c4:
    // 0x2564c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2564c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2564c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2564c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2564cc: 0x0  nop
    ctx->pc = 0x2564ccu;
    // NOP
    // 0x2564d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2564d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2564d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2564d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2564d8:
    // 0x2564d8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2564d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2564dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2564dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2564e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2564e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2564e4: 0x0  nop
    ctx->pc = 0x2564e4u;
    // NOP
    // 0x2564e8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2564e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2564ec: 0xc088c98  jal         func_223260
    ctx->pc = 0x2564ECu;
    SET_GPR_U32(ctx, 31, 0x2564F4u);
    ctx->pc = 0x2564F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2564ECu;
    // 0x2564f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x2564ECu, 0x2564F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564F4u;
label_2564f4:
    // 0x2564f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2564F4u;
    {
        const bool branch_taken_0x2564f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2564F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564F4u;
        // 0x2564f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564f4) {
            ctx->pc = 0x256510u;
            goto label_256510;
        }
    }
    ctx->pc = 0x2564FCu;
    // 0x2564fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2564fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256500: 0x0  nop
    ctx->pc = 0x256500u;
    // NOP
    // 0x256504: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256508: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x256508u;
    {
        const bool branch_taken_0x256508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256508u;
        // 0x25650c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256508) {
            ctx->pc = 0x25652Cu;
            goto label_25652c;
        }
    }
    ctx->pc = 0x256510u;
label_256510:
    // 0x256510: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x256510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x256514: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x256514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25651c: 0x0  nop
    ctx->pc = 0x25651cu;
    // NOP
    // 0x256520: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256524: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x256524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x256528: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x256528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_25652c:
    // 0x25652c: 0x8c420294  lw          $v0, 0x294($v0)
    ctx->pc = 0x25652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
    // 0x256530: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256530u;
    {
        const bool branch_taken_0x256530 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x256534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256530u;
        // 0x256534: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256530) {
            ctx->pc = 0x25654Cu;
            goto label_25654c;
        }
    }
    ctx->pc = 0x256538u;
    // 0x256538: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x256538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25653c: 0x0  nop
    ctx->pc = 0x25653cu;
    // NOP
    // 0x256540: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x256540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x256544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x256544u;
    {
        const bool branch_taken_0x256544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256544) {
            ctx->pc = 0x256568u;
            goto label_256568;
        }
    }
    ctx->pc = 0x25654Cu;
label_25654c:
    // 0x25654c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x25654cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x256550: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x256550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x256554: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x256554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256558: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x256558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25655c: 0x0  nop
    ctx->pc = 0x25655cu;
    // NOP
    // 0x256560: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x256560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x256564: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x256564u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_256568:
    // 0x256568: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x256568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x25656c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x25656cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x256570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256574: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x256574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x256578: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x256578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25657c: 0x0  nop
    ctx->pc = 0x25657cu;
    // NOP
    // 0x256580: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x256580u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x256584: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x256584u;
    {
        const bool branch_taken_0x256584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256584u;
        // 0x256588: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256584) {
            ctx->pc = 0x2565B4u;
            goto label_2565b4;
        }
    }
    ctx->pc = 0x25658Cu;
    // 0x25658c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x25658cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x256590: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x256590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x256594: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256598: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25659c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25659cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2565a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2565a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2565a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2565A4u;
    {
        const bool branch_taken_0x2565a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2565A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565A4u;
        // 0x2565a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565a4) {
            ctx->pc = 0x2565B4u;
            goto label_2565b4;
        }
    }
    ctx->pc = 0x2565ACu;
    // 0x2565ac: 0xc08dbb2  jal         func_236EC8
    ctx->pc = 0x2565ACu;
    SET_GPR_U32(ctx, 31, 0x2565B4u);
    ctx->pc = 0x2565B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2565ACu;
    // 0x2565b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EC8u, 0x2565ACu, 0x2565B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2565B4u;
label_2565b4:
    // 0x2565b4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2565b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2565b8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2565b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2565bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2565bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2565c0: 0xae55064c  sw          $s5, 0x64C($s2)
    ctx->pc = 0x2565c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1612), GPR_U32(ctx, 21));
    // 0x2565c4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2565C4u;
    {
        const bool branch_taken_0x2565c4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2565C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565C4u;
        // 0x2565c8: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565c4) {
            ctx->pc = 0x2565E0u;
            goto label_2565e0;
        }
    }
    ctx->pc = 0x2565CCu;
    // 0x2565cc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2565ccu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2565d0: 0x0  nop
    ctx->pc = 0x2565d0u;
    // NOP
    // 0x2565d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2565d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2565d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2565D8u;
    {
        const bool branch_taken_0x2565d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2565DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565D8u;
        // 0x2565dc: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565d8) {
            ctx->pc = 0x256600u;
            goto label_256600;
        }
    }
    ctx->pc = 0x2565E0u;
label_2565e0:
    // 0x2565e0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2565e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2565e4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2565e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2565e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2565e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2565ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2565ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2565f0: 0x0  nop
    ctx->pc = 0x2565f0u;
    // NOP
    // 0x2565f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2565f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2565f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2565f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2565fc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2565fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_256600:
    // 0x256600: 0x8e420650  lw          $v0, 0x650($s2)
    ctx->pc = 0x256600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
    // 0x256604: 0xc6400654  lwc1        $f0, 0x654($s2)
    ctx->pc = 0x256604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256608: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x256608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25660c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x25660cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x256610: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x256610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x256614: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x256614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x256618: 0xe6540654  swc1        $f20, 0x654($s2)
    ctx->pc = 0x256618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1620), bits); }
    // 0x25661c: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x25661cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256620: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x256620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256624: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x256624u;
    {
        const bool branch_taken_0x256624 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x256628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256624u;
        // 0x256628: 0xae420650  sw          $v0, 0x650($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256624) {
            ctx->pc = 0x256640u;
            goto label_256640;
        }
    }
    ctx->pc = 0x25662Cu;
    // 0x25662c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25662cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256630: 0x0  nop
    ctx->pc = 0x256630u;
    // NOP
    // 0x256634: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x256634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x256638: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x256638u;
    {
        const bool branch_taken_0x256638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256638u;
        // 0x25663c: 0xc6400654  lwc1        $f0, 0x654($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x256638) {
            ctx->pc = 0x256670u;
            goto label_256670;
        }
    }
    ctx->pc = 0x256640u;
label_256640:
    // 0x256640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x256640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256644: 0x0  nop
    ctx->pc = 0x256644u;
    // NOP
    // 0x256648: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25664c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x25664cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256650: 0x0  nop
    ctx->pc = 0x256650u;
    // NOP
    // 0x256654: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x256654u;
    {
        const bool branch_taken_0x256654 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x256658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256654u;
        // 0x256658: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256654) {
            ctx->pc = 0x25666Cu;
            goto label_25666c;
        }
    }
    ctx->pc = 0x25665Cu;
    // 0x25665c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x256660: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x256660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256664: 0x0  nop
    ctx->pc = 0x256664u;
    // NOP
    // 0x256668: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x256668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_25666c:
    // 0x25666c: 0xc6400654  lwc1        $f0, 0x654($s2)
    ctx->pc = 0x25666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_256670:
    // 0x256670: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x256670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x256674: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x256674u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x256678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x256678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25667c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256680: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x256684: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256688: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x256688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x25668c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x25668Cu;
    {
        const bool branch_taken_0x25668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25668Cu;
        // 0x256690: 0xe6400654  swc1        $f0, 0x654($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25668c) {
            ctx->pc = 0x256714u;
            goto label_256714;
        }
    }
    ctx->pc = 0x256694u;
    // 0x256694: 0xc6540650  lwc1        $f20, 0x650($s2)
    ctx->pc = 0x256694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x256698: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x256698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x25669c: 0xc088c98  jal         func_223260
    ctx->pc = 0x25669Cu;
    SET_GPR_U32(ctx, 31, 0x2566A4u);
    ctx->pc = 0x2566A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25669Cu;
    // 0x2566a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x25669Cu, 0x2566A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566A4u;
label_2566a4:
    // 0x2566a4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2566A4u;
    {
        const bool branch_taken_0x2566a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2566A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566A4u;
        // 0x2566a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566a4) {
            ctx->pc = 0x2566C0u;
            goto label_2566c0;
        }
    }
    ctx->pc = 0x2566ACu;
    // 0x2566ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2566acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2566b0: 0x0  nop
    ctx->pc = 0x2566b0u;
    // NOP
    // 0x2566b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2566b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2566b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2566B8u;
    {
        const bool branch_taken_0x2566b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2566b8) {
            ctx->pc = 0x2566D8u;
            goto label_2566d8;
        }
    }
    ctx->pc = 0x2566C0u;
label_2566c0:
    // 0x2566c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2566c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2566c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2566c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2566c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2566c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2566cc: 0x0  nop
    ctx->pc = 0x2566ccu;
    // NOP
    // 0x2566d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2566d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2566d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2566d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2566d8:
    // 0x2566d8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2566d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2566dc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2566dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2566e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2566e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2566e4: 0x0  nop
    ctx->pc = 0x2566e4u;
    // NOP
    // 0x2566e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2566e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2566ec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2566ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2566f0: 0x0  nop
    ctx->pc = 0x2566f0u;
    // NOP
    // 0x2566f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2566F4u;
    {
        const bool branch_taken_0x2566f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2566F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566F4u;
        // 0x2566f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566f4) {
            ctx->pc = 0x25670Cu;
            goto label_25670c;
        }
    }
    ctx->pc = 0x2566FCu;
    // 0x2566fc: 0xc106518  jal         func_419460
    ctx->pc = 0x2566FCu;
    SET_GPR_U32(ctx, 31, 0x256704u);
    ctx->pc = 0x256700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2566FCu;
    // 0x256700: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419460u, 0x2566FCu, 0x256704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256704u;
label_256704:
    // 0x256704: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x256704u;
    {
        const bool branch_taken_0x256704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256704u;
        // 0x256708: 0x8e420650  lw          $v0, 0x650($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256704) {
            ctx->pc = 0x256718u;
            goto label_256718;
        }
    }
    ctx->pc = 0x25670Cu;
label_25670c:
    // 0x25670c: 0xc106556  jal         func_419558
    ctx->pc = 0x25670Cu;
    SET_GPR_U32(ctx, 31, 0x256714u);
    ctx->pc = 0x256710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25670Cu;
    // 0x256710: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419558u, 0x25670Cu, 0x256714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256714u;
label_256714:
    // 0x256714: 0x8e420650  lw          $v0, 0x650($s2)
    ctx->pc = 0x256714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
label_256718:
    // 0x256718: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x256718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x25671c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25671Cu;
    {
        const bool branch_taken_0x25671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25671Cu;
        // 0x256720: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25671c) {
            ctx->pc = 0x25672Cu;
            goto label_25672c;
        }
    }
    ctx->pc = 0x256724u;
    // 0x256724: 0xc1064fe  jal         func_4193F8
    ctx->pc = 0x256724u;
    SET_GPR_U32(ctx, 31, 0x25672Cu);
    ctx->pc = 0x256728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256724u;
    // 0x256728: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4193F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4193F8u, 0x256724u, 0x25672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25672Cu;
label_25672c:
    // 0x25672c: 0x8e420650  lw          $v0, 0x650($s2)
    ctx->pc = 0x25672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
    // 0x256730: 0x5c400026  bgtzl       $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x256730u;
    {
        const bool branch_taken_0x256730 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x256730) {
            ctx->pc = 0x256734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256730u;
            // 0x256734: 0xde4300e0  ld          $v1, 0xE0($s2) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2567CCu;
            goto label_2567cc;
        }
    }
    ctx->pc = 0x256738u;
    // 0x256738: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x256738u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x25673c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x25673cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x256740: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256744: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x256748: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25674c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x25674cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x256750: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256750u;
    {
        const bool branch_taken_0x256750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256750u;
        // 0x256754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256750) {
            ctx->pc = 0x256760u;
            goto label_256760;
        }
    }
    ctx->pc = 0x256758u;
    // 0x256758: 0xc08dbee  jal         func_236FB8
    ctx->pc = 0x256758u;
    SET_GPR_U32(ctx, 31, 0x256760u);
    ctx->pc = 0x25675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256758u;
    // 0x25675c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FB8u, 0x256758u, 0x256760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256760u;
label_256760:
    // 0x256760: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x256760u;
    {
        const bool branch_taken_0x256760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256760u;
        // 0x256764: 0xae400650  sw          $zero, 0x650($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256760) {
            ctx->pc = 0x2567C8u;
            goto label_2567c8;
        }
    }
    ctx->pc = 0x256768u;
label_256768:
    // 0x256768: 0x8e82b734  lw          $v0, -0x48CC($s4)
    ctx->pc = 0x256768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_25676c:
    // 0x25676c: 0x8e430648  lw          $v1, 0x648($s2)
    ctx->pc = 0x25676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1608)));
    // 0x256770: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x256770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x256774: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x256774u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x256778: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x256778u;
    {
        const bool branch_taken_0x256778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256778u;
        // 0x25677c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256778) {
            ctx->pc = 0x2567C8u;
            goto label_2567c8;
        }
    }
    ctx->pc = 0x256780u;
    // 0x256780: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x256780u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x256784: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256788: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25678c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25678cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256790: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x256790u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x256794: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x256794u;
    {
        const bool branch_taken_0x256794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256794) {
            ctx->pc = 0x256798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256794u;
            // 0x256798: 0xde4300e0  ld          $v1, 0xE0($s2) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2567CCu;
            goto label_2567cc;
        }
    }
    ctx->pc = 0x25679Cu;
    // 0x25679c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x25679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2567a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2567A0u;
    {
        const bool branch_taken_0x2567a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2567A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567A0u;
        // 0x2567a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567a0) {
            ctx->pc = 0x2567B4u;
            goto label_2567b4;
        }
    }
    ctx->pc = 0x2567A8u;
    // 0x2567a8: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2567a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x2567ac: 0xc08dbb2  jal         func_236EC8
    ctx->pc = 0x2567ACu;
    SET_GPR_U32(ctx, 31, 0x2567B4u);
    ctx->pc = 0x2567B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2567ACu;
    // 0x2567b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EC8u, 0x2567ACu, 0x2567B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567B4u;
label_2567b4:
    // 0x2567b4: 0x8e82b734  lw          $v0, -0x48CC($s4)
    ctx->pc = 0x2567b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
    // 0x2567b8: 0xae400648  sw          $zero, 0x648($s2)
    ctx->pc = 0x2567b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1608), GPR_U32(ctx, 0));
    // 0x2567bc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2567bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2567c0: 0xae400654  sw          $zero, 0x654($s2)
    ctx->pc = 0x2567c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1620), GPR_U32(ctx, 0));
    // 0x2567c4: 0xae43064c  sw          $v1, 0x64C($s2)
    ctx->pc = 0x2567c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1612), GPR_U32(ctx, 3));
label_2567c8:
    // 0x2567c8: 0xde4300e0  ld          $v1, 0xE0($s2)
    ctx->pc = 0x2567c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2567cc:
    // 0x2567cc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2567ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2567d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2567d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2567d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2567d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2567d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2567d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2567dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2567dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2567e0: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2567E0u;
    {
        const bool branch_taken_0x2567e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2567E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567E0u;
        // 0x2567e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567e0) {
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x2567E8u;
    // 0x2567e8: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x2567e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x2567ec: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2567ecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2567f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2567F0u;
    {
        const bool branch_taken_0x2567f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2567F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567F0u;
        // 0x2567f4: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567f0) {
            ctx->pc = 0x256810u;
            goto label_256810;
        }
    }
    ctx->pc = 0x2567F8u;
    // 0x2567f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2567f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2567fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2567fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x256800: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256804: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x256804u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x256808: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x256808u;
    {
        const bool branch_taken_0x256808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256808u;
        // 0x25680c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256808) {
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x256810u;
label_256810:
    // 0x256810: 0xc088e60  jal         func_223980
    ctx->pc = 0x256810u;
    SET_GPR_U32(ctx, 31, 0x256818u);
    ctx->pc = 0x256814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256810u;
    // 0x256814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x256810u, 0x256818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256818u;
label_256818:
    // 0x256818: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x256818u;
    {
        const bool branch_taken_0x256818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256818) {
            ctx->pc = 0x25681Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256818u;
            // 0x25681c: 0x8e62014c  lw          $v0, 0x14C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256844u;
            goto label_256844;
        }
    }
    ctx->pc = 0x256820u;
    // 0x256820: 0xc088e40  jal         func_223900
    ctx->pc = 0x256820u;
    SET_GPR_U32(ctx, 31, 0x256828u);
    ctx->pc = 0x256824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256820u;
    // 0x256824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x256820u, 0x256828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256828u;
label_256828:
    // 0x256828: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x256828u;
    {
        const bool branch_taken_0x256828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256828) {
            ctx->pc = 0x25682Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256828u;
            // 0x25682c: 0x8e62014c  lw          $v0, 0x14C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256844u;
            goto label_256844;
        }
    }
    ctx->pc = 0x256830u;
    // 0x256830: 0xc088eb4  jal         func_223AD0
    ctx->pc = 0x256830u;
    SET_GPR_U32(ctx, 31, 0x256838u);
    ctx->pc = 0x256834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256830u;
    // 0x256834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x256830u, 0x256838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256838u;
label_256838:
    // 0x256838: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x256838u;
    {
        const bool branch_taken_0x256838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256838) {
            ctx->pc = 0x25683Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256838u;
            // 0x25683c: 0x86620148  lh          $v0, 0x148($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256918u;
            goto label_256918;
        }
    }
    ctx->pc = 0x256840u;
    // 0x256840: 0x8e62014c  lw          $v0, 0x14C($s3)
    ctx->pc = 0x256840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
label_256844:
    // 0x256844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256848: 0xc088ca0  jal         func_223280
    ctx->pc = 0x256848u;
    SET_GPR_U32(ctx, 31, 0x256850u);
    ctx->pc = 0x25684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256848u;
    // 0x25684c: 0x2a28023  subu        $s0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223280u, 0x256848u, 0x256850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256850u;
label_256850:
    // 0x256850: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x256850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x256854: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x256854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x256858: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x256858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25685c: 0xae75014c  sw          $s5, 0x14C($s3)
    ctx->pc = 0x25685cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 332), GPR_U32(ctx, 21));
    // 0x256860: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256860u;
    {
        const bool branch_taken_0x256860 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x256864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256860u;
        // 0x256864: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256860) {
            ctx->pc = 0x25687Cu;
            goto label_25687c;
        }
    }
    ctx->pc = 0x256868u;
    // 0x256868: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x256868u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25686c: 0x0  nop
    ctx->pc = 0x25686cu;
    // NOP
    // 0x256870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256874: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x256874u;
    {
        const bool branch_taken_0x256874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256874u;
        // 0x256878: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256874) {
            ctx->pc = 0x25689Cu;
            goto label_25689c;
        }
    }
    ctx->pc = 0x25687Cu;
label_25687c:
    // 0x25687c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x25687cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x256880: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x256880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x256884: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x256884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25688c: 0x0  nop
    ctx->pc = 0x25688cu;
    // NOP
    // 0x256890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256894: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x256894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x256898: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x256898u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_25689c:
    // 0x25689c: 0x96620148  lhu         $v0, 0x148($s3)
    ctx->pc = 0x25689cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x2568a0: 0xc6600150  lwc1        $f0, 0x150($s3)
    ctx->pc = 0x2568a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2568a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2568a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2568a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2568a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2568ac: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2568acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2568b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2568b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2568b4: 0xe6620150  swc1        $f2, 0x150($s3)
    ctx->pc = 0x2568b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 336), bits); }
    // 0x2568b8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2568b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2568bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2568bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2568c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2568C0u;
    {
        const bool branch_taken_0x2568c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2568C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568C0u;
        // 0x2568c4: 0xa6620148  sh          $v0, 0x148($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568c0) {
            ctx->pc = 0x2568DCu;
            goto label_2568dc;
        }
    }
    ctx->pc = 0x2568C8u;
    // 0x2568c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2568c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2568cc: 0x0  nop
    ctx->pc = 0x2568ccu;
    // NOP
    // 0x2568d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2568d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2568d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2568D4u;
    {
        const bool branch_taken_0x2568d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2568D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568D4u;
        // 0x2568d8: 0xc6600150  lwc1        $f0, 0x150($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568d4) {
            ctx->pc = 0x25690Cu;
            goto label_25690c;
        }
    }
    ctx->pc = 0x2568DCu;
label_2568dc:
    // 0x2568dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2568dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2568e0: 0x0  nop
    ctx->pc = 0x2568e0u;
    // NOP
    // 0x2568e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2568e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2568e8: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2568e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2568ec: 0x0  nop
    ctx->pc = 0x2568ecu;
    // NOP
    // 0x2568f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2568F0u;
    {
        const bool branch_taken_0x2568f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2568F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568F0u;
        // 0x2568f4: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568f0) {
            ctx->pc = 0x256908u;
            goto label_256908;
        }
    }
    ctx->pc = 0x2568F8u;
    // 0x2568f8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2568f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2568fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2568fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256900: 0x0  nop
    ctx->pc = 0x256900u;
    // NOP
    // 0x256904: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x256904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_256908:
    // 0x256908: 0xc6600150  lwc1        $f0, 0x150($s3)
    ctx->pc = 0x256908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25690c:
    // 0x25690c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25690cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x256910: 0xe6600150  swc1        $f0, 0x150($s3)
    ctx->pc = 0x256910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 336), bits); }
    // 0x256914: 0x86620148  lh          $v0, 0x148($s3)
    ctx->pc = 0x256914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 328)));
label_256918:
    // 0x256918: 0x1c400047  bgtz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x256918u;
    {
        const bool branch_taken_0x256918 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x25691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256918u;
        // 0x25691c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256918) {
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x256920u;
    // 0x256920: 0x3c0500c0  lui         $a1, 0xC0
    ctx->pc = 0x256920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)192 << 16));
    // 0x256924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256928: 0xc089998  jal         func_226660
    ctx->pc = 0x256928u;
    SET_GPR_U32(ctx, 31, 0x256930u);
    ctx->pc = 0x25692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256928u;
    // 0x25692c: 0x34a52201  ori         $a1, $a1, 0x2201 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8705);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x256928u, 0x256930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256930u;
label_256930:
    // 0x256930: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x256930u;
    {
        const bool branch_taken_0x256930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256930u;
        // 0x256934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256930) {
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x256938u;
    // 0x256938: 0xa6600148  sh          $zero, 0x148($s3)
    ctx->pc = 0x256938u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 328), (uint16_t)GPR_U32(ctx, 0));
    // 0x25693c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x25693Cu;
    SET_GPR_U32(ctx, 31, 0x256944u);
    ctx->pc = 0x256940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25693Cu;
    // 0x256940: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x25693Cu, 0x256944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256944u;
label_256944:
    // 0x256944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x256944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256948: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x256948u;
    {
        const bool branch_taken_0x256948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256948u;
        // 0x25694c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256948) {
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x256950u;
    // 0x256950: 0xc089f86  jal         func_227E18
    ctx->pc = 0x256950u;
    SET_GPR_U32(ctx, 31, 0x256958u);
    ctx->pc = 0x256954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256950u;
    // 0x256954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x256950u, 0x256958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256958u;
label_256958:
    // 0x256958: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x256958u;
    {
        const bool branch_taken_0x256958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256958u;
        // 0x25695c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256958) {
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x256960u;
    // 0x256960: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x256960u;
    SET_GPR_U32(ctx, 31, 0x256968u);
    ctx->pc = 0x256964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256960u;
    // 0x256964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x256960u, 0x256968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256968u;
label_256968:
    // 0x256968: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x256968u;
    {
        const bool branch_taken_0x256968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256968u;
        // 0x25696c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256968) {
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x256970u;
    // 0x256970: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x256970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x256974: 0x84430118  lh          $v1, 0x118($v0)
    ctx->pc = 0x256974u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x256978: 0x84440144  lh          $a0, 0x144($v0)
    ctx->pc = 0x256978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 324)));
    // 0x25697c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x25697cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x256980: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x256980u;
    {
        const bool branch_taken_0x256980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256980u;
        // 0x256984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256980) {
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x256988u;
    // 0x256988: 0xc088e60  jal         func_223980
    ctx->pc = 0x256988u;
    SET_GPR_U32(ctx, 31, 0x256990u);
    ctx->pc = 0x25698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256988u;
    // 0x25698c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x256988u, 0x256990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256990u;
label_256990:
    // 0x256990: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x256990u;
    {
        const bool branch_taken_0x256990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256990) {
            ctx->pc = 0x256A1Cu;
            goto label_256a1c;
        }
    }
    ctx->pc = 0x256998u;
    // 0x256998: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x256998u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x25699c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x25699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2569a0: 0x215b8  dsll        $v0, $v0, 22
    ctx->pc = 0x2569a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 22);
    // 0x2569a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2569a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2569a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2569a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2569ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2569acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2569b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2569b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2569b4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2569B4u;
    {
        const bool branch_taken_0x2569b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2569B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569B4u;
        // 0x2569b8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569b4) {
            ctx->pc = 0x256A0Cu;
            goto label_256a0c;
        }
    }
    ctx->pc = 0x2569BCu;
    // 0x2569bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2569bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2569c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2569c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2569c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2569c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2569c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2569c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2569cc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2569CCu;
    {
        const bool branch_taken_0x2569cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2569D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569CCu;
        // 0x2569d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569cc) {
            ctx->pc = 0x2569FCu;
            goto label_2569fc;
        }
    }
    ctx->pc = 0x2569D4u;
    // 0x2569d4: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2569d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2569d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2569d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2569dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2569dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2569e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2569e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2569e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2569E4u;
    {
        const bool branch_taken_0x2569e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2569e4) {
            ctx->pc = 0x2569FCu;
            goto label_2569fc;
        }
    }
    ctx->pc = 0x2569ECu;
    // 0x2569ec: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x2569ECu;
    SET_GPR_U32(ctx, 31, 0x2569F4u);
    ctx->pc = 0x2569F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2569ECu;
    // 0x2569f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x2569ECu, 0x2569F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2569F4u;
label_2569f4:
    // 0x2569f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2569F4u;
    {
        const bool branch_taken_0x2569f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569F4u;
        // 0x2569f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569f4) {
            ctx->pc = 0x256A0Cu;
            goto label_256a0c;
        }
    }
    ctx->pc = 0x2569FCu;
label_2569fc:
    // 0x2569fc: 0xc09b306  jal         func_26CC18
    ctx->pc = 0x2569FCu;
    SET_GPR_U32(ctx, 31, 0x256A04u);
    ctx->pc = 0x256A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2569FCu;
    // 0x256a00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CC18u, 0x2569FCu, 0x256A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A04u;
label_256a04:
    // 0x256a04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x256A04u;
    {
        const bool branch_taken_0x256a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A04u;
        // 0x256a08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a04) {
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x256A0Cu;
label_256a0c:
    // 0x256a0c: 0xc09b1f8  jal         func_26C7E0
    ctx->pc = 0x256A0Cu;
    SET_GPR_U32(ctx, 31, 0x256A14u);
    ctx->pc = 0x256A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A0Cu;
    // 0x256a10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C7E0u, 0x256A0Cu, 0x256A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A14u;
label_256a14:
    // 0x256a14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x256A14u;
    {
        const bool branch_taken_0x256a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A14u;
        // 0x256a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a14) {
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x256A1Cu;
label_256a1c:
    // 0x256a1c: 0xc088e40  jal         func_223900
    ctx->pc = 0x256A1Cu;
    SET_GPR_U32(ctx, 31, 0x256A24u);
    ctx->pc = 0x256A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A1Cu;
    // 0x256a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x256A1Cu, 0x256A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A24u;
label_256a24:
    // 0x256a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256A24u;
    {
        const bool branch_taken_0x256a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A24u;
        // 0x256a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a24) {
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x256A2Cu;
    // 0x256a2c: 0xc09c51c  jal         func_271470
    ctx->pc = 0x256A2Cu;
    SET_GPR_U32(ctx, 31, 0x256A34u);
    ctx->pc = 0x256A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A2Cu;
    // 0x256a30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271470u, 0x256A2Cu, 0x256A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A34u;
label_256a34:
    // 0x256a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256a38:
    // 0x256a38: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x256a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256a3c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x256a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256a40: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x256a40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256a44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x256a44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256a48: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x256a48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256a4c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x256a4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256a54: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x256a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x256a58: 0x3e00008  jr          $ra
    ctx->pc = 0x256A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A58u;
        // 0x256a5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256A60u;
}

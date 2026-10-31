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

// Function: sub_004865C0
// Address: 0x4865c0 - 0x4868b0
void sub_004865C0_0x4865c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004865C0_0x4865c0");
#endif

    switch (ctx->pc) {
        case 0x486720u: goto label_486720;
        default: break;
    }

    ctx->pc = 0x4865c0u;

    // 0x4865c0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4865c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4865c4: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4865c4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4865c8: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x4865c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4865cc: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x4865ccu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4865d0: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x4865d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4865d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4865d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4865d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4865d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4865dc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x4865dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4865e0: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x4865e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4865e4: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x4865e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x4865e8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x4865e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4865ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4865ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4865f0: 0x65403  sra         $t2, $a2, 16
    ctx->pc = 0x4865f0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4865f4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4865f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4865f8: 0x46060202  mul.s       $f8, $f0, $f6
    ctx->pc = 0x4865f8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x4865fc: 0x152a0020  bne         $t1, $t2, . + 4 + (0x20 << 2)
    ctx->pc = 0x4865FCu;
    {
        const bool branch_taken_0x4865fc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x486600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4865FCu;
        // 0x486600: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4865fc) {
            ctx->pc = 0x486680u;
            goto label_486680;
        }
    }
    ctx->pc = 0x486604u;
    // 0x486604: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x486604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x486608: 0xc7848298  lwc1        $f4, -0x7D68($gp)
    ctx->pc = 0x486608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48660c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x48660cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x486610: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x486610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x486614: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x486614u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x486618: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x486618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x48661c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x48661cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x486620: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x486620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x486624: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x486624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x486628: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x486628u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x48662c: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x48662cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x486630: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x486630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x486634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x486634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x486638: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x486638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x48663c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x48663cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x486640: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x486640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x486644: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x486644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x486648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x486648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48664c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48664cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x486650: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x486650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x486654: 0x460041c6  mov.s       $f7, $f8
    ctx->pc = 0x486654u;
    ctx->f[7] = FPU_MOV_S(ctx->f[8]);
    // 0x486658: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x486658u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x48665c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x48665cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x486660: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x486660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x486664: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x486664u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x486668: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x486668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x48666c: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x48666cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x486670: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x486670u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x486674: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x486674u;
    {
        const bool branch_taken_0x486674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x486678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486674u;
        // 0x486678: 0xe5010008  swc1        $f1, 0x8($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x486674) {
            ctx->pc = 0x486868u;
            goto label_486868;
        }
    }
    ctx->pc = 0x48667Cu;
    // 0x48667c: 0x0  nop
    ctx->pc = 0x48667cu;
    // NOP
label_486680:
    // 0x486680: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x486680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x486684: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x486684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x486688: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x486688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48668c: 0xc785829c  lwc1        $f5, -0x7D64($gp)
    ctx->pc = 0x48668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x486690: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x486690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x486694: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x486694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x486698: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x486698u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x48669c: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x48669cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4866a0: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x4866a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x4866a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4866a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4866a8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4866a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4866ac: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x4866acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x4866b0: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x4866b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4866b4: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x4866b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4866b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4866b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4866bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4866bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4866c0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x4866c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x4866c4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x4866c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x4866c8: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x4866c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x4866cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4866ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4866d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4866d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4866d4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x4866d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x4866d8: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x4866d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4866dc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4866dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4866e0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4866e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4866e4: 0x460621c2  mul.s       $f7, $f4, $f6
    ctx->pc = 0x4866e4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x4866e8: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x4866e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x4866ec: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x4866ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x4866f0: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x4866f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4866f4: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x4866f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x4866f8: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x4866f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x4866fc: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x4866fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x486700: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x486700u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x486704: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x486704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x486708: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x486708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48670c: 0x104a0028  beq         $v0, $t2, . + 4 + (0x28 << 2)
    ctx->pc = 0x48670Cu;
    {
        const bool branch_taken_0x48670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x486710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48670Cu;
        // 0x486710: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48670c) {
            ctx->pc = 0x4867B0u;
            goto label_4867b0;
        }
    }
    ctx->pc = 0x486714u;
    // 0x486714: 0x460029c6  mov.s       $f7, $f5
    ctx->pc = 0x486714u;
    ctx->f[7] = FPU_MOV_S(ctx->f[5]);
    // 0x486718: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x486718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48671c: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x48671cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_486720:
    // 0x486720: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x486720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x486724: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x486724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x486728: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x486728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x48672c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x48672cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x486730: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x486730u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x486734: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x486734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x486738: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x486738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x48673c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x48673cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x486740: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x486740u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x486744: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x486744u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x486748: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x486748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x48674c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x48674cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x486750: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x486750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x486754: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x486754u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x486758: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x486758u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x48675c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x48675cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x486760: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x486760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x486764: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x486764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x486768: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x486768u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x48676c: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x48676cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x486770: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x486770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486774: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x486774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x486778: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x486778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48677c: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x48677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x486780: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x486780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x486784: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x486784u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x486788: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x486788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x48678c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x48678cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x486790: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x486790u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x486794: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x486794u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x486798: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x486798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x48679c: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x48679cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x4867a0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4867a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4867a4: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x4867a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4867a8: 0x1445ffdd  bne         $v0, $a1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x4867A8u;
    {
        const bool branch_taken_0x4867a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4867ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4867A8u;
        // 0x4867ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4867a8) {
            ctx->pc = 0x486720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486720;
        }
    }
    ctx->pc = 0x4867B0u;
label_4867b0:
    // 0x4867b0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4867b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4867b4: 0xc78082a0  lwc1        $f0, -0x7D60($gp)
    ctx->pc = 0x4867b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4867b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4867b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4867bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4867bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4867c0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4867c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4867c4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x4867c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4867c8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x4867c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x4867cc: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x4867ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4867d0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x4867d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x4867d4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x4867d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4867d8: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x4867d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4867dc: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x4867dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4867e0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4867e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4867e4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4867e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4867e8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x4867e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4867ec: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x4867ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4867f0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x4867f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x4867f4: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x4867f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4867f8: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x4867f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x4867fc: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x4867fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x486800: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x486800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x486804: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x486804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x486808: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x486808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x48680c: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x48680cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x486810: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x486810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x486814: 0x460009c2  mul.s       $f7, $f1, $f0
    ctx->pc = 0x486814u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x486818: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x486818u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x48681c: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x48681cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x486820: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x486820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x486824: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x486824u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x486828: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x486828u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x48682c: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x48682cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x486830: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x486830u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x486834: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x486834u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x486838: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x486838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48683c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x48683cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x486840: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x486840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x486844: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x486844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x486848: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x486848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48684c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x48684cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x486850: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x486850u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x486854: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x486854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x486858: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x486858u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x48685c: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x48685cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x486860: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x486860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x486864: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x486864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_486868:
    // 0x486868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x486868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x48686c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x48686cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x486870: 0x460809c3  div.s       $f7, $f1, $f8
    ctx->pc = 0x486870u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[1], ctx->f[8]); }
    // 0x486874: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x486874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486878: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x486878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48687c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x48687cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x486880: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x486880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x486884: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x486884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x486888: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x486888u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x48688c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x48688cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x486890: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x486890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x486894: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x486894u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x486898: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x486898u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x48689c: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x48689cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x4868a0: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x4868a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x4868a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4868A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4868A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4868A4u;
        // 0x4868a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4868A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4868ACu;
    // 0x4868ac: 0x0  nop
    ctx->pc = 0x4868acu;
    // NOP
    ctx->pc = 0x4868b0u;
}

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

// Function: sub_0047C860
// Address: 0x47c860 - 0x47caa8
void sub_0047C860_0x47c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C860_0x47c860");
#endif

    ctx->pc = 0x47c860u;

    // 0x47c860: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x47c860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c864: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x47c864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c868: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x47c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c86c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x47c86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c870: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x47c870u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x47c874: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c878: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x47c878u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x47c87c: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x47c87cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x47c880: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x47c880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c884: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x47c884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c888: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x47c888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c88c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47c88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c890: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x47c890u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x47c894: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c898: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x47c898u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x47c89c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x47c89cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x47c8a0: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x47c8a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x47c8a4: 0xc4a50018  lwc1        $f5, 0x18($a1)
    ctx->pc = 0x47c8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47c8a8: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x47c8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c8ac: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x47c8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c8b0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47c8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c8b4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x47c8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x47c8b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x47c8b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x47c8bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x47c8bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x47c8c0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x47c8c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x47c8c4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47c8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c8c8: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x47c8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47c8cc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x47c8ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x47c8d0: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x47c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c8d4: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x47c8d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x47c8d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x47c8d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x47c8dc: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x47c8dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x47c8e0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x47c8e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x47c8e4: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x47c8e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x47c8e8: 0x0  nop
    ctx->pc = 0x47c8e8u;
    // NOP
    // 0x47c8ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47C8ECu;
    {
        const bool branch_taken_0x47c8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C8ECu;
        // 0x47c8f0: 0xc4890000  lwc1        $f9, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c8ec) {
            ctx->pc = 0x47C908u;
            goto label_47c908;
        }
    }
    ctx->pc = 0x47C8F4u;
    // 0x47c8f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47c8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47c8f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x47c8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c8fc: 0x46040303  div.s       $f12, $f0, $f4
    ctx->pc = 0x47c8fcu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x47c900: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47C900u;
    {
        const bool branch_taken_0x47c900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C900u;
        // 0x47c904: 0xc48a0004  lwc1        $f10, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c900) {
            ctx->pc = 0x47C914u;
            goto label_47c914;
        }
    }
    ctx->pc = 0x47C908u;
label_47c908:
    // 0x47c908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47c908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47c90c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x47c90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x47c910: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x47c910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_47c914:
    // 0x47c914: 0xc48b0008  lwc1        $f11, 0x8($a0)
    ctx->pc = 0x47c914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x47c918: 0x460c4a42  mul.s       $f9, $f9, $f12
    ctx->pc = 0x47c918u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x47c91c: 0x460c5282  mul.s       $f10, $f10, $f12
    ctx->pc = 0x47c91cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x47c920: 0x460c5ac2  mul.s       $f11, $f11, $f12
    ctx->pc = 0x47c920u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x47c924: 0xe4890000  swc1        $f9, 0x0($a0)
    ctx->pc = 0x47c924u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x47c928: 0xe48a0004  swc1        $f10, 0x4($a0)
    ctx->pc = 0x47c928u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x47c92c: 0xe48b0008  swc1        $f11, 0x8($a0)
    ctx->pc = 0x47c92cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x47c930: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x47c930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c934: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x47c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c938: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x47c938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x47c93c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x47c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c940: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x47c940u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x47c944: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c948: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x47c948u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x47c94c: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x47c94cu;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x47c950: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x47c950u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x47c954: 0xe4860010  swc1        $f6, 0x10($a0)
    ctx->pc = 0x47c954u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x47c958: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x47c958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c95c: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x47c95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c960: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x47c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x47c964: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c968: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x47c968u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x47c96c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c96cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c970: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x47c970u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x47c974: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x47c974u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x47c978: 0xe4880014  swc1        $f8, 0x14($a0)
    ctx->pc = 0x47c978u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x47c97c: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x47c97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c980: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x47c980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c984: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x47c984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x47c988: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47c988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c98c: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x47c98cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x47c990: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c994: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x47c994u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x47c998: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x47c998u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x47c99c: 0x460c39c2  mul.s       $f7, $f7, $f12
    ctx->pc = 0x47c99cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x47c9a0: 0xe4870018  swc1        $f7, 0x18($a0)
    ctx->pc = 0x47c9a0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x47c9a4: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x47c9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c9a8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x47c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c9ac: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x47c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c9b0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x47c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c9b4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x47c9b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x47c9b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c9b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c9bc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x47c9bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x47c9c0: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x47c9c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x47c9c4: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x47c9c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x47c9c8: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x47c9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c9cc: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x47c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c9d0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x47c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c9d4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47c9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c9d8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x47c9d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x47c9dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c9dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c9e0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x47c9e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x47c9e4: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x47c9e4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x47c9e8: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x47c9e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x47c9ec: 0xe4830024  swc1        $f3, 0x24($a0)
    ctx->pc = 0x47c9ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x47c9f0: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x47c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47c9f4: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x47c9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c9f8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47c9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c9fc: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x47c9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47ca00: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x47ca00u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x47ca04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47ca04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47ca08: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x47ca08u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x47ca0c: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x47ca0cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x47ca10: 0xe4850028  swc1        $f5, 0x28($a0)
    ctx->pc = 0x47ca10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x47ca14: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x47ca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47ca18: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x47ca18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47ca1c: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x47ca1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x47ca20: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x47ca20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ca24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47ca24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ca28: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x47ca28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x47ca2c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x47ca2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x47ca30: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47ca30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47ca34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x47ca34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x47ca38: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x47ca38u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x47ca3c: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x47ca3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x47ca40: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x47ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ca44: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x47ca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47ca48: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x47ca48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x47ca4c: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x47ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47ca50: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x47ca50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x47ca54: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x47ca54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x47ca58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47ca58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47ca5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47ca5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x47ca60: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x47ca60u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x47ca64: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x47ca64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x47ca68: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x47ca68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47ca6c: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x47ca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47ca70: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x47ca70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x47ca74: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x47ca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ca78: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x47ca78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x47ca7c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x47ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x47ca80: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x47ca80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x47ca84: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47ca84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47ca88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x47ca88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x47ca8c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x47ca8cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x47ca90: 0x3e00008  jr          $ra
    ctx->pc = 0x47CA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CA90u;
        // 0x47ca94: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47CA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47CA98u;
    // 0x47ca98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x47ca98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x47ca9c: 0x0  nop
    ctx->pc = 0x47ca9cu;
    // NOP
    // 0x47caa0: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x47caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x47caa4: 0x0  nop
    ctx->pc = 0x47caa4u;
    // NOP
    ctx->pc = 0x47caa8u;
}

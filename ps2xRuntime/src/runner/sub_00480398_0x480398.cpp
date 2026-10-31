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

// Function: sub_00480398
// Address: 0x480398 - 0x480430
void sub_00480398_0x480398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480398_0x480398");
#endif

    ctx->pc = 0x480398u;

    // 0x480398: 0xc4aa0000  lwc1        $f10, 0x0($a1)
    ctx->pc = 0x480398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x48039c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x48039cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4803a0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x4803a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4803a4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x4803a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4803a8: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x4803a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4803ac: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x4803acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x4803b0: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x4803b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x4803b4: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x4803b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4803b8: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x4803b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x4803bc: 0xc4c80014  lwc1        $f8, 0x14($a2)
    ctx->pc = 0x4803bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4803c0: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x4803c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4803c4: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x4803c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4803c8: 0x46065182  mul.s       $f6, $f10, $f6
    ctx->pc = 0x4803c8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x4803cc: 0xc4c70020  lwc1        $f7, 0x20($a2)
    ctx->pc = 0x4803ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4803d0: 0x46045102  mul.s       $f4, $f10, $f4
    ctx->pc = 0x4803d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x4803d4: 0xc4c90030  lwc1        $f9, 0x30($a2)
    ctx->pc = 0x4803d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4803d8: 0x46085202  mul.s       $f8, $f10, $f8
    ctx->pc = 0x4803d8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x4803dc: 0xc4c50024  lwc1        $f5, 0x24($a2)
    ctx->pc = 0x4803dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4803e0: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x4803e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4803e4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x4803e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x4803e8: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x4803e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4803ec: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x4803ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x4803f0: 0x460751c2  mul.s       $f7, $f10, $f7
    ctx->pc = 0x4803f0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x4803f4: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x4803f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x4803f8: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x4803f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x4803fc: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x4803fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x480400: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x480400u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x480404: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x480404u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x480408: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x480408u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x48040c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x48040cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x480410: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x480410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x480414: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x480414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480418: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x480418u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x48041c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x48041cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x480420: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x480420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480424: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x480424u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x480428: 0x3e00008  jr          $ra
    ctx->pc = 0x480428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480428u;
        // 0x48042c: 0xe4830008  swc1        $f3, 0x8($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480430u;
}

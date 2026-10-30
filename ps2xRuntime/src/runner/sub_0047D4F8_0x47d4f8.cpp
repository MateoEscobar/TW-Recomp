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

// Function: sub_0047D4F8
// Address: 0x47d4f8 - 0x47d578
void sub_0047D4F8_0x47d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D4F8_0x47d4f8");
#endif

    ctx->pc = 0x47d4f8u;

    // 0x47d4f8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x47d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x47d4fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47d4fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47d500: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x47d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x47d504: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x47d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47d508: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x47d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47d50c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x47d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d510: 0xc4660008  lwc1        $f6, 0x8($v1)
    ctx->pc = 0x47d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x47d514: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x47d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d518: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x47d518u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47d51c: 0xc4850020  lwc1        $f5, 0x20($a0)
    ctx->pc = 0x47d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47d520: 0x46061902  mul.s       $f4, $f3, $f6
    ctx->pc = 0x47d520u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x47d524: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47d524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47d528: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x47d528u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x47d52c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x47d52cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x47d530: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x47d530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x47d534: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x47d534u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x47d538: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x47d538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x47d53c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x47d53cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x47d540: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x47d540u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x47d544: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x47d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x47d548: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x47d548u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x47d54c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x47d54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d550: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x47d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47d554: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x47d554u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x47d558: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x47d558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47d55c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x47d55cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x47d560: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x47d560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x47d564: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x47d564u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x47d568: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x47d568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x47d56c: 0x3e00008  jr          $ra
    ctx->pc = 0x47D56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D56Cu;
        // 0x47d570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D574u;
    // 0x47d574: 0x0  nop
    ctx->pc = 0x47d574u;
    // NOP
    ctx->pc = 0x47d578u;
}

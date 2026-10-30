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

// Function: sub_0047D620
// Address: 0x47d620 - 0x47d6c0
void sub_0047D620_0x47d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D620_0x47d620");
#endif

    ctx->pc = 0x47d620u;

    // 0x47d620: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x47d620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x47d624: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x47d624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x47d628: 0xc4890010  lwc1        $f9, 0x10($a0)
    ctx->pc = 0x47d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x47d62c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47d62cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47d630: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x47d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d634: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x47d634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x47d638: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x47d638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47d63c: 0x46004882  mul.s       $f2, $f9, $f0
    ctx->pc = 0x47d63cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x47d640: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x47d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47d644: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x47d644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d648: 0x460451c2  mul.s       $f7, $f10, $f4
    ctx->pc = 0x47d648u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x47d64c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x47d64cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x47d650: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x47d650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47d654: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47d654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47d658: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x47d658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x47d65c: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x47d65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x47d660: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x47d660u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x47d664: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x47d664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x47d668: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x47d668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x47d66c: 0x46061902  mul.s       $f4, $f3, $f6
    ctx->pc = 0x47d66cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x47d670: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x47d670u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x47d674: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x47d674u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x47d678: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x47d678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x47d67c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x47d67cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x47d680: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x47d680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x47d684: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x47d684u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x47d688: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x47d688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x47d68c: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x47d68cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x47d690: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x47d690u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x47d694: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x47d694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x47d698: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x47d698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x47d69c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x47d69cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x47d6a0: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x47d6a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x47d6a4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x47d6a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x47d6a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47d6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47d6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x47D6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D6ACu;
        // 0x47d6b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D6B4u;
    // 0x47d6b4: 0x0  nop
    ctx->pc = 0x47d6b4u;
    // NOP
    // 0x47d6b8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x47d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x47d6bc: 0x0  nop
    ctx->pc = 0x47d6bcu;
    // NOP
    ctx->pc = 0x47d6c0u;
}

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

// Function: sub_0047D578
// Address: 0x47d578 - 0x47d620
void sub_0047D578_0x47d578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D578_0x47d578");
#endif

    ctx->pc = 0x47d578u;

    // 0x47d578: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x47d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x47d57c: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x47d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x47d580: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x47d580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47d584: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x47d584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x47d588: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x47d588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47d58c: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x47d58cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x47d590: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x47d590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47d594: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x47d594u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x47d598: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x47d598u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x47d59c: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x47d59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x47d5a0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x47d5a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x47d5a4: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x47d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d5a8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x47d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d5ac: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x47d5acu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x47d5b0: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x47d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47d5b4: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x47d5b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x47d5b8: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x47d5b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x47d5bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47d5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47d5c0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x47d5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x47d5c4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x47d5c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x47d5c8: 0xc4660008  lwc1        $f6, 0x8($v1)
    ctx->pc = 0x47d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x47d5cc: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x47d5ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x47d5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47d5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47d5d4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x47d5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x47d5d8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x47d5d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x47d5dc: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x47d5dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x47d5e0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x47d5e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x47d5e4: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x47d5e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x47d5e8: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x47d5e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x47d5ec: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x47d5ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x47d5f0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x47d5f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x47d5f4: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x47d5f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x47d5f8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x47d5f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x47d5fc: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x47d5fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x47d600: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x47d600u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x47d604: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x47d604u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x47d608: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x47d608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x47d60c: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x47d60cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x47d610: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x47d610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x47d614: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47d614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47d618: 0x3e00008  jr          $ra
    ctx->pc = 0x47D618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D618u;
        // 0x47d61c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D620u;
}

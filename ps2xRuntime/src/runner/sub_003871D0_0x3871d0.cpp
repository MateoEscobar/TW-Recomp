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

// Function: sub_003871D0
// Address: 0x3871d0 - 0x3872a0
void sub_003871D0_0x3871d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003871D0_0x3871d0");
#endif

    ctx->pc = 0x3871d0u;

    // 0x3871d0: 0x24a70010  addiu       $a3, $a1, 0x10
    ctx->pc = 0x3871d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3871d4: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x3871d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3871d8: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x3871d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3871dc: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x3871dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3871e0: 0xc4e80008  lwc1        $f8, 0x8($a3)
    ctx->pc = 0x3871e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3871e4: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x3871e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x3871e8: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x3871e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3871ec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3871ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3871f0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3871f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3871f4: 0x46082202  mul.s       $f8, $f4, $f8
    ctx->pc = 0x3871f4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x3871f8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3871f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3871fc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3871fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x387200: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x387200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x387204: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x387204u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x387208: 0xc4e70004  lwc1        $f7, 0x4($a3)
    ctx->pc = 0x387208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x38720c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38720cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x387210: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x387210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x387214: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x387214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x387218: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x387218u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x38721c: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x38721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x387220: 0xc4a70020  lwc1        $f7, 0x20($a1)
    ctx->pc = 0x387220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x387224: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x387224u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x387228: 0xc4490004  lwc1        $f9, 0x4($v0)
    ctx->pc = 0x387228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x38722c: 0x46062982  mul.s       $f6, $f5, $f6
    ctx->pc = 0x38722cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x387230: 0x460729c2  mul.s       $f7, $f5, $f7
    ctx->pc = 0x387230u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x387234: 0xc46a0004  lwc1        $f10, 0x4($v1)
    ctx->pc = 0x387234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x387238: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x387238u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x38723c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38723cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x387240: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x387240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x387244: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x387244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x387248: 0xc4680008  lwc1        $f8, 0x8($v1)
    ctx->pc = 0x387248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x38724c: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x38724cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x387250: 0xc4a40030  lwc1        $f4, 0x30($a1)
    ctx->pc = 0x387250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x387254: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x387254u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x387258: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x387258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x38725c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x38725cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x387260: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x387260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x387264: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x387264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x387268: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x387268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x38726c: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x38726cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x387270: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x387270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x387274: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x387274u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x387278: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x387278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x38727c: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x38727cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x387280: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x387280u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x387284: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x387284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x387288: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x387288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x38728c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x38728cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387290: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x387290u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x387294: 0x3e00008  jr          $ra
    ctx->pc = 0x387294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387294u;
        // 0x387298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38729Cu;
    // 0x38729c: 0x0  nop
    ctx->pc = 0x38729cu;
    // NOP
    ctx->pc = 0x3872a0u;
}

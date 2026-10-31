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

// Function: sub_0014D398
// Address: 0x14d398 - 0x14d3e0
void sub_0014D398_0x14d398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D398_0x14d398");
#endif

    switch (ctx->pc) {
        case 0x14d3d0u: goto label_14d3d0;
        default: break;
    }

    ctx->pc = 0x14d398u;

    // 0x14d398: 0x3c0146ff  lui         $at, 0x46FF
    ctx->pc = 0x14d398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18175 << 16));
    // 0x14d39c: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x14d39cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x14d3a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d3a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14d3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d3ac: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x14d3acu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x14d3b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d3b4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x14d3b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x14d3b8: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d3b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d3bc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x14d3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x14d3c0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d3c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d3c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x14d3c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x14d3c8: 0xc053fc8  jal         func_14FF20
    ctx->pc = 0x14D3C8u;
    SET_GPR_U32(ctx, 31, 0x14D3D0u);
    ctx->pc = 0x14FF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF20u, 0x14D3C8u, 0x14D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3D0u;
label_14d3d0:
    // 0x14d3d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3D4u;
        // 0x14d3d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D3DCu;
    // 0x14d3dc: 0x0  nop
    ctx->pc = 0x14d3dcu;
    // NOP
    ctx->pc = 0x14d3e0u;
}

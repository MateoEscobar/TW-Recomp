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

// Function: sub_0017C488
// Address: 0x17c488 - 0x17c508
void sub_0017C488_0x17c488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C488_0x17c488");
#endif

    ctx->pc = 0x17c488u;

    // 0x17c488: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x17c488u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x17c48c: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x17c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x17c490: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x17c490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17c494: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17c494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17c498: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17c498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17c49c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x17c49cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x17c4a0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x17c4a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c4a4: 0x0  nop
    ctx->pc = 0x17c4a4u;
    // NOP
    // 0x17c4a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17c4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17c4ac: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x17c4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x17c4b0: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x17c4b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x17c4b4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x17c4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17c4b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17c4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c4bc: 0x0  nop
    ctx->pc = 0x17c4bcu;
    // NOP
    // 0x17c4c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c4c4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x17c4c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17c4c8: 0x0  nop
    ctx->pc = 0x17c4c8u;
    // NOP
    // 0x17c4cc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17c4ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x17c4d0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17c4d0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c4d4: 0x0  nop
    ctx->pc = 0x17c4d4u;
    // NOP
    // 0x17c4d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c4dc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x17c4dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x17c4e0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x17c4e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x17c4e4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x17c4e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x17c4e8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x17c4e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x17c4ec: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x17c4ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x17c4f0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x17c4f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x17c4f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x17c4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x17c4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x17C4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4F8u;
        // 0x17c4fc: 0xe4830008  swc1        $f3, 0x8($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C500u;
    // 0x17c500: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x17c500u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17c504: 0x0  nop
    ctx->pc = 0x17c504u;
    // NOP
    ctx->pc = 0x17c508u;
}

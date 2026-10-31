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

// Function: sub_002545A8
// Address: 0x2545a8 - 0x2545e0
void sub_002545A8_0x2545a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002545A8_0x2545a8");
#endif

    ctx->pc = 0x2545a8u;

    // 0x2545a8: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x2545a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2545ac: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2545acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545b0: 0x8c450160  lw          $a1, 0x160($v0)
    ctx->pc = 0x2545b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2545b4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2545B4u;
    {
        const bool branch_taken_0x2545b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545B4u;
        // 0x2545b8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545b4) {
            ctx->pc = 0x2545D8u;
            goto label_2545d8;
        }
    }
    ctx->pc = 0x2545BCu;
    // 0x2545bc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2545bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2545c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2545c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2545c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2545c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2545c8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2545c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2545cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2545ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2545d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2545d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2545d4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x2545d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_2545d8:
    // 0x2545d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2545D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2545D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2545E0u;
}

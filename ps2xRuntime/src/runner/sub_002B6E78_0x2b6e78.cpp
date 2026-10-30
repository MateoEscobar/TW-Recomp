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

// Function: sub_002B6E78
// Address: 0x2b6e78 - 0x2b6eb0
void sub_002B6E78_0x2b6e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6E78_0x2b6e78");
#endif

    switch (ctx->pc) {
        case 0x2b6e94u: goto label_2b6e94;
        default: break;
    }

    ctx->pc = 0x2b6e78u;

    // 0x2b6e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6e7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b6e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b6e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6e8c: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2B6E8Cu;
    SET_GPR_U32(ctx, 31, 0x2B6E94u);
    ctx->pc = 0x2B6E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6E8Cu;
    // 0x2b6e90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2B6E8Cu, 0x2B6E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E94u;
label_2b6e94:
    // 0x2b6e94: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2b6e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6e98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6e9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b6e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6ea4: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2b6ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x2b6ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EA8u;
        // 0x2b6eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6EB0u;
}

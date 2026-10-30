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

// Function: sub_001A9C48
// Address: 0x1a9c48 - 0x1a9c88
void sub_001A9C48_0x1a9c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9C48_0x1a9c48");
#endif

    ctx->pc = 0x1a9c48u;

    // 0x1a9c48: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1a9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a9c4c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9c50: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x1a9c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a9c54: 0x786200b0  lq          $v0, 0xB0($v1)
    ctx->pc = 0x1a9c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1a9c58: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1a9c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1a9c5c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9C5Cu;
    {
        const bool branch_taken_0x1a9c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C5Cu;
        // 0x1a9c60: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c5c) {
            ctx->pc = 0x1A9C78u;
            goto label_1a9c78;
        }
    }
    ctx->pc = 0x1A9C64u;
    // 0x1a9c64: 0x788200b0  lq          $v0, 0xB0($a0)
    ctx->pc = 0x1a9c64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1a9c68: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1a9c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1a9c6c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1a9c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1a9c70: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1a9c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9c74: 0x46010068  max.s       $f1, $f0, $f1
    ctx->pc = 0x1a9c74u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[1]);
label_1a9c78:
    // 0x1a9c78: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1a9c78u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1a9c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C7Cu;
        // 0x1a9c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9C84u;
    // 0x1a9c84: 0x0  nop
    ctx->pc = 0x1a9c84u;
    // NOP
    ctx->pc = 0x1a9c88u;
}

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

// Function: sub_00106C80
// Address: 0x106c80 - 0x106cc8
void sub_00106C80_0x106c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106C80_0x106c80");
#endif

    ctx->pc = 0x106c80u;

    // 0x106c80: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x106c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x106c84: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x106c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x106c88: 0x24424c30  addiu       $v0, $v0, 0x4C30
    ctx->pc = 0x106c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19504));
    // 0x106c8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x106c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106c90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x106c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x106c94: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x106c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x106c98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x106c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c9c: 0xac880020  sw          $t0, 0x20($a0)
    ctx->pc = 0x106c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
    // 0x106ca0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x106ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x106ca4: 0x8ca302b8  lw          $v1, 0x2B8($a1)
    ctx->pc = 0x106ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 696)));
    // 0x106ca8: 0xc46003a4  lwc1        $f0, 0x3A4($v1)
    ctx->pc = 0x106ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106cac: 0xe48c0018  swc1        $f12, 0x18($a0)
    ctx->pc = 0x106cacu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x106cb0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x106cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x106cb4: 0xac870028  sw          $a3, 0x28($a0)
    ctx->pc = 0x106cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
    // 0x106cb8: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x106cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x106cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x106CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CBCu;
        // 0x106cc0: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106CC4u;
    // 0x106cc4: 0x0  nop
    ctx->pc = 0x106cc4u;
    // NOP
    ctx->pc = 0x106cc8u;
}

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

// Function: sub_00417AF0
// Address: 0x417af0 - 0x417b10
void sub_00417AF0_0x417af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417AF0_0x417af0");
#endif

    ctx->pc = 0x417af0u;

    // 0x417af0: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x417af0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x417af4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x417af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x417af8: 0x24424878  addiu       $v0, $v0, 0x4878
    ctx->pc = 0x417af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18552));
    // 0x417afc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x417afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x417b00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x417b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x417b04: 0x3e00008  jr          $ra
    ctx->pc = 0x417B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417B04u;
        // 0x417b08: 0xe48c0000  swc1        $f12, 0x0($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417B0Cu;
    // 0x417b0c: 0x0  nop
    ctx->pc = 0x417b0cu;
    // NOP
    ctx->pc = 0x417b10u;
}

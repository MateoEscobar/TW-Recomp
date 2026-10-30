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

// Function: sub_00148F60
// Address: 0x148f60 - 0x148f98
void sub_00148F60_0x148f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148F60_0x148f60");
#endif

    switch (ctx->pc) {
        case 0x148f80u: goto label_148f80;
        default: break;
    }

    ctx->pc = 0x148f60u;

    // 0x148f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148f64: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x148f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x148f68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x148f6c: 0x24427e98  addiu       $v0, $v0, 0x7E98
    ctx->pc = 0x148f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32408));
    // 0x148f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f78: 0xc0523e6  jal         func_148F98
    ctx->pc = 0x148F78u;
    SET_GPR_U32(ctx, 31, 0x148F80u);
    ctx->pc = 0x148F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F78u;
    // 0x148f7c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F98u, 0x148F78u, 0x148F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F80u;
label_148f80:
    // 0x148f80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x148f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148f88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x148f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x148F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F8Cu;
        // 0x148f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148F94u;
    // 0x148f94: 0x0  nop
    ctx->pc = 0x148f94u;
    // NOP
    ctx->pc = 0x148f98u;
}

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

// Function: sub_001CAB90
// Address: 0x1cab90 - 0x1cabc0
void sub_001CAB90_0x1cab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAB90_0x1cab90");
#endif

    switch (ctx->pc) {
        case 0x1caba8u: goto label_1caba8;
        default: break;
    }

    ctx->pc = 0x1cab90u;

    // 0x1cab90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cab94: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x1cab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1cab98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cab98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cab9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cab9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1caba0: 0xc051048  jal         func_144120
    ctx->pc = 0x1CABA0u;
    SET_GPR_U32(ctx, 31, 0x1CABA8u);
    ctx->pc = 0x1CABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABA0u;
    // 0x1caba4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x1CABA0u, 0x1CABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABA8u;
label_1caba8:
    // 0x1caba8: 0xae02ea74  sw          $v0, -0x158C($s0)
    ctx->pc = 0x1caba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294961780), GPR_U32(ctx, 2));
    // 0x1cabac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cabacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cabb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cabb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cabb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CABB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABB4u;
        // 0x1cabb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CABB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CABBCu;
    // 0x1cabbc: 0x0  nop
    ctx->pc = 0x1cabbcu;
    // NOP
    ctx->pc = 0x1cabc0u;
}

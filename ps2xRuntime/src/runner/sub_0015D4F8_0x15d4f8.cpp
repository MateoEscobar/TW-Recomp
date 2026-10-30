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

// Function: sub_0015D4F8
// Address: 0x15d4f8 - 0x15d540
void sub_0015D4F8_0x15d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D4F8_0x15d4f8");
#endif

    switch (ctx->pc) {
        case 0x15d50cu: goto label_15d50c;
        case 0x15d520u: goto label_15d520;
        default: break;
    }

    ctx->pc = 0x15d4f8u;

    // 0x15d4f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d4fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15d4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15d500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d504: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x15D504u;
    SET_GPR_U32(ctx, 31, 0x15D50Cu);
    ctx->pc = 0x15D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D504u;
    // 0x15d508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x15D504u, 0x15D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D50Cu;
label_15d50c:
    // 0x15d50c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15d510: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x15d510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x15d514: 0x246386a0  addiu       $v1, $v1, -0x7960
    ctx->pc = 0x15d514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936224));
    // 0x15d518: 0xc06f05a  jal         func_1BC168
    ctx->pc = 0x15D518u;
    SET_GPR_U32(ctx, 31, 0x15D520u);
    ctx->pc = 0x15D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D518u;
    // 0x15d51c: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC168u, 0x15D518u, 0x15D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D520u;
label_15d520:
    // 0x15d520: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15d520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d524: 0xa20006d8  sb          $zero, 0x6D8($s0)
    ctx->pc = 0x15d524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1752), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d528: 0xa20006f8  sb          $zero, 0x6F8($s0)
    ctx->pc = 0x15d528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1784), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d52c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15d52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d534: 0x3e00008  jr          $ra
    ctx->pc = 0x15D534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D534u;
        // 0x15d538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D53Cu;
    // 0x15d53c: 0x0  nop
    ctx->pc = 0x15d53cu;
    // NOP
    ctx->pc = 0x15d540u;
}

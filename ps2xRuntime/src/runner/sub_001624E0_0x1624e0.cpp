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

// Function: sub_001624E0
// Address: 0x1624e0 - 0x162518
void sub_001624E0_0x1624e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001624E0_0x1624e0");
#endif

    switch (ctx->pc) {
        case 0x162500u: goto label_162500;
        default: break;
    }

    ctx->pc = 0x1624e0u;

    // 0x1624e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1624e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1624e4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1624e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1624e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1624e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1624ec: 0x24428900  addiu       $v0, $v0, -0x7700
    ctx->pc = 0x1624ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936832));
    // 0x1624f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1624f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1624f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1624f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624f8: 0xc05895a  jal         func_162568
    ctx->pc = 0x1624F8u;
    SET_GPR_U32(ctx, 31, 0x162500u);
    ctx->pc = 0x1624FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1624F8u;
    // 0x1624fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162568u, 0x1624F8u, 0x162500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162500u;
label_162500:
    // 0x162500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x162500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162508: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x162508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16250c: 0x3e00008  jr          $ra
    ctx->pc = 0x16250Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16250Cu;
        // 0x162510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16250Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162514u;
    // 0x162514: 0x0  nop
    ctx->pc = 0x162514u;
    // NOP
    ctx->pc = 0x162518u;
}

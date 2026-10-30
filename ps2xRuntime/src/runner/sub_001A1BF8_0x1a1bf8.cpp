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

// Function: sub_001A1BF8
// Address: 0x1a1bf8 - 0x1a1c30
void sub_001A1BF8_0x1a1bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1BF8_0x1a1bf8");
#endif

    switch (ctx->pc) {
        case 0x1a1c18u: goto label_1a1c18;
        default: break;
    }

    ctx->pc = 0x1a1bf8u;

    // 0x1a1bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1bfc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1a1c00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a1c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a1c04: 0x244294b8  addiu       $v0, $v0, -0x6B48
    ctx->pc = 0x1a1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939832));
    // 0x1a1c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c10: 0xc068720  jal         func_1A1C80
    ctx->pc = 0x1A1C10u;
    SET_GPR_U32(ctx, 31, 0x1A1C18u);
    ctx->pc = 0x1A1C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C10u;
    // 0x1a1c14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C80u, 0x1A1C10u, 0x1A1C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C18u;
label_1a1c18:
    // 0x1a1c18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a1c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1c20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a1c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c24: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C24u;
        // 0x1a1c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1C2Cu;
    // 0x1a1c2c: 0x0  nop
    ctx->pc = 0x1a1c2cu;
    // NOP
    ctx->pc = 0x1a1c30u;
}

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

// Function: sub_003289F8
// Address: 0x3289f8 - 0x328a30
void sub_003289F8_0x3289f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003289F8_0x3289f8");
#endif

    switch (ctx->pc) {
        case 0x328a24u: goto label_328a24;
        default: break;
    }

    ctx->pc = 0x3289f8u;

    // 0x3289f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3289f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3289fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3289fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x328a00: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x328a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x328a04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x328A04u;
    {
        const bool branch_taken_0x328a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A04u;
        // 0x328a08: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a04) {
            ctx->pc = 0x328A28u;
            goto label_328a28;
        }
    }
    ctx->pc = 0x328A0Cu;
    // 0x328a0c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x328a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x328a10: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x328a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
    // 0x328a14: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x328a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x328a18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x328a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328a1c: 0xc0ca24e  jal         func_328938
    ctx->pc = 0x328A1Cu;
    SET_GPR_U32(ctx, 31, 0x328A24u);
    ctx->pc = 0x328A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A1Cu;
    // 0x328a20: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328938u, 0x328A1Cu, 0x328A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A24u;
label_328a24:
    // 0x328a24: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x328a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_328a28:
    // 0x328a28: 0x3e00008  jr          $ra
    ctx->pc = 0x328A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A28u;
        // 0x328a2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328A30u;
}

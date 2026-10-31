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

// Function: sub_0016D458
// Address: 0x16d458 - 0x16d498
void sub_0016D458_0x16d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D458_0x16d458");
#endif

    switch (ctx->pc) {
        case 0x16d478u: goto label_16d478;
        default: break;
    }

    ctx->pc = 0x16d458u;

    // 0x16d458: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d45c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x16d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x16d460: 0x24426e30  addiu       $v0, $v0, 0x6E30
    ctx->pc = 0x16d460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
    // 0x16d464: 0x34636200  ori         $v1, $v1, 0x6200
    ctx->pc = 0x16d464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25088);
    // 0x16d468: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d46c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d470: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x16d470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16d474: 0x0  nop
    ctx->pc = 0x16d474u;
    // NOP
label_16d478:
    // 0x16d478: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x16d478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x16d47c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x16d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16d480: 0x24a50b10  addiu       $a1, $a1, 0xB10
    ctx->pc = 0x16d480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2832));
    // 0x16d484: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x16d484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x16d488: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16D488u;
    {
        const bool branch_taken_0x16d488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D488u;
        // 0x16d48c: 0x64300a  movz        $a2, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d488) {
            ctx->pc = 0x16D478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d478;
        }
    }
    ctx->pc = 0x16D490u;
    // 0x16d490: 0x3e00008  jr          $ra
    ctx->pc = 0x16D490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D490u;
        // 0x16d494: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D498u;
}

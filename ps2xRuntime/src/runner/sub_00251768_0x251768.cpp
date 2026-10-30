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

// Function: sub_00251768
// Address: 0x251768 - 0x2517b0
void sub_00251768_0x251768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251768_0x251768");
#endif

    switch (ctx->pc) {
        case 0x251790u: goto label_251790;
        default: break;
    }

    ctx->pc = 0x251768u;

    // 0x251768: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x251768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x25176c: 0x8c63a218  lw          $v1, -0x5DE8($v1)
    ctx->pc = 0x25176cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6CA218u));
    // 0x251770: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x251770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x251774: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x251774u;
    {
        const bool branch_taken_0x251774 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x251778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251774u;
        // 0x251778: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251774) {
            ctx->pc = 0x2517A8u;
            goto label_2517a8;
        }
    }
    ctx->pc = 0x25177Cu;
    // 0x25177c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x25177cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x251780: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x251780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251784: 0x8c43a21c  lw          $v1, -0x5DE4($v0)
    ctx->pc = 0x251784u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6CA21Cu));
    // 0x251788: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x251788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25178c: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x25178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_251790:
    // 0x251790: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x251790u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x251794: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x251794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x251798: 0x84a20008  lh          $v0, 0x8($a1)
    ctx->pc = 0x251798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25179c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x25179cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2517a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2517A0u;
    {
        const bool branch_taken_0x2517a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2517A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2517A0u;
        // 0x2517a4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517a0) {
            ctx->pc = 0x251790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251790;
        }
    }
    ctx->pc = 0x2517A8u;
label_2517a8:
    // 0x2517a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2517A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2517A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2517B0u;
}

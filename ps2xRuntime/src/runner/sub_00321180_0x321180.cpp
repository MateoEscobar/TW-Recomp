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

// Function: sub_00321180
// Address: 0x321180 - 0x3211a8
void sub_00321180_0x321180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321180_0x321180");
#endif

    ctx->pc = 0x321180u;

    // 0x321180: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x321180u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x321184: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x321184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x321188: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x321188u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x32118c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32118Cu;
    {
        const bool branch_taken_0x32118c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x321190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32118Cu;
        // 0x321190: 0xa4850028  sh          $a1, 0x28($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32118c) {
            ctx->pc = 0x3211A0u;
            goto label_3211a0;
        }
    }
    ctx->pc = 0x321194u;
    // 0x321194: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x321194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x321198: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x321198u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x32119c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x32119cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_3211a0:
    // 0x3211a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3211A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3211A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3211A8u;
}

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

// Function: sub_0042F500
// Address: 0x42f500 - 0x42f530
void sub_0042F500_0x42f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F500_0x42f500");
#endif

    switch (ctx->pc) {
        case 0x42f524u: goto label_42f524;
        default: break;
    }

    ctx->pc = 0x42f500u;

    // 0x42f500: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42f500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42f504: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42f504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42f508: 0x2442c168  addiu       $v0, $v0, -0x3E98
    ctx->pc = 0x42f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951272));
    // 0x42f50c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42f50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42f510: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x42f510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x42f514: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x42F514u;
    {
        const bool branch_taken_0x42f514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F514u;
        // 0x42f518: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f514) {
            ctx->pc = 0x42F524u;
            goto label_42f524;
        }
    }
    ctx->pc = 0x42F51Cu;
    // 0x42f51c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x42F51Cu;
    SET_GPR_U32(ctx, 31, 0x42F524u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x42F51Cu, 0x42F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F524u;
label_42f524:
    // 0x42f524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42f524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42f528: 0x3e00008  jr          $ra
    ctx->pc = 0x42F528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F528u;
        // 0x42f52c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F530u;
}

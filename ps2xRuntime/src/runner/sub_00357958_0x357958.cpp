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

// Function: sub_00357958
// Address: 0x357958 - 0x357988
void sub_00357958_0x357958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357958_0x357958");
#endif

    switch (ctx->pc) {
        case 0x35796cu: goto label_35796c;
        default: break;
    }

    ctx->pc = 0x357958u;

    // 0x357958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35795c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35795Cu;
    {
        const bool branch_taken_0x35795c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x357960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35795Cu;
        // 0x357960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35795c) {
            ctx->pc = 0x357974u;
            goto label_357974;
        }
    }
    ctx->pc = 0x357964u;
    // 0x357964: 0xc0cbf78  jal         func_32FDE0
    ctx->pc = 0x357964u;
    SET_GPR_U32(ctx, 31, 0x35796Cu);
    ctx->pc = 0x357968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357964u;
    // 0x357968: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDE0u, 0x357964u, 0x35796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35796Cu;
label_35796c:
    // 0x35796c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35796Cu;
    {
        const bool branch_taken_0x35796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35796Cu;
        // 0x357970: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35796c) {
            ctx->pc = 0x35797Cu;
            goto label_35797c;
        }
    }
    ctx->pc = 0x357974u;
label_357974:
    // 0x357974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35797c:
    // 0x35797c: 0x3e00008  jr          $ra
    ctx->pc = 0x35797Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35797Cu;
        // 0x357980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35797Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357984u;
    // 0x357984: 0x0  nop
    ctx->pc = 0x357984u;
    // NOP
    ctx->pc = 0x357988u;
}

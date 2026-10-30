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

// Function: sub_002F6938
// Address: 0x2f6938 - 0x2f6958
void sub_002F6938_0x2f6938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6938_0x2f6938");
#endif

    switch (ctx->pc) {
        case 0x2f694cu: goto label_2f694c;
        default: break;
    }

    ctx->pc = 0x2f6938u;

    // 0x2f6938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f693c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f693cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2f6940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f6944: 0xc0a7c8c  jal         func_29F230
    ctx->pc = 0x2F6944u;
    SET_GPR_U32(ctx, 31, 0x2F694Cu);
    ctx->pc = 0x2F6948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6944u;
    // 0x2f6948: 0x34a5fbf9  ori         $a1, $a1, 0xFBF9 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2F6944u, 0x2F694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F694Cu;
label_2f694c:
    // 0x2f694c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f694cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6950: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6950u;
        // 0x2f6954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6958u;
}

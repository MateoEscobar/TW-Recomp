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

// Function: sub_00111F40
// Address: 0x111f40 - 0x111f78
void sub_00111F40_0x111f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111F40_0x111f40");
#endif

    switch (ctx->pc) {
        case 0x111f60u: goto label_111f60;
        default: break;
    }

    ctx->pc = 0x111f40u;

    // 0x111f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111f44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x111f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f48: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111F48u;
    {
        const bool branch_taken_0x111f48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x111F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F48u;
        // 0x111f4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f48) {
            ctx->pc = 0x111F58u;
            goto label_111f58;
        }
    }
    ctx->pc = 0x111F50u;
    // 0x111f50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x111F50u;
    {
        const bool branch_taken_0x111f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F50u;
        // 0x111f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f50) {
            ctx->pc = 0x111F60u;
            goto label_111f60;
        }
    }
    ctx->pc = 0x111F58u;
label_111f58:
    // 0x111f58: 0xc046ca6  jal         func_11B298
    ctx->pc = 0x111F58u;
    SET_GPR_U32(ctx, 31, 0x111F60u);
    ctx->pc = 0x11B298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B298u, 0x111F58u, 0x111F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F60u;
label_111f60:
    // 0x111f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111f64: 0x3e00008  jr          $ra
    ctx->pc = 0x111F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F64u;
        // 0x111f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111F6Cu;
    // 0x111f6c: 0x0  nop
    ctx->pc = 0x111f6cu;
    // NOP
    // 0x111f70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x111f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x111f74: 0x0  nop
    ctx->pc = 0x111f74u;
    // NOP
    ctx->pc = 0x111f78u;
}

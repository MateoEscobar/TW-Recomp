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

// Function: sub_0038FE88
// Address: 0x38fe88 - 0x38fed8
void sub_0038FE88_0x38fe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FE88_0x38fe88");
#endif

    switch (ctx->pc) {
        case 0x38fe98u: goto label_38fe98;
        case 0x38feb0u: goto label_38feb0;
        case 0x38feb8u: goto label_38feb8;
        default: break;
    }

    ctx->pc = 0x38fe88u;

    // 0x38fe88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38fe88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38fe8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38fe90: 0xc0e3f8a  jal         func_38FE28
    ctx->pc = 0x38FE90u;
    SET_GPR_U32(ctx, 31, 0x38FE98u);
    ctx->pc = 0x38FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FE90u;
    // 0x38fe94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE28u, 0x38FE90u, 0x38FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FE98u;
label_38fe98:
    // 0x38fe98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38fe98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fe9c: 0x2862003c  slti        $v0, $v1, 0x3C
    ctx->pc = 0x38fe9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x38fea0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38FEA0u;
    {
        const bool branch_taken_0x38fea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FEA0u;
        // 0x38fea4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fea0) {
            ctx->pc = 0x38FECCu;
            goto label_38fecc;
        }
    }
    ctx->pc = 0x38FEA8u;
    // 0x38fea8: 0xc08c88c  jal         func_232230
    ctx->pc = 0x38FEA8u;
    SET_GPR_U32(ctx, 31, 0x38FEB0u);
    ctx->pc = 0x38FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FEA8u;
    // 0x38feac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232230u, 0x38FEA8u, 0x38FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FEB0u;
label_38feb0:
    // 0x38feb0: 0xc0e3f8a  jal         func_38FE28
    ctx->pc = 0x38FEB0u;
    SET_GPR_U32(ctx, 31, 0x38FEB8u);
    ctx->pc = 0x38FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FEB0u;
    // 0x38feb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE28u, 0x38FEB0u, 0x38FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FEB8u;
label_38feb8:
    // 0x38feb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38feb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38febc: 0x2862003c  slti        $v0, $v1, 0x3C
    ctx->pc = 0x38febcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x38fec0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38FEC0u;
    {
        const bool branch_taken_0x38fec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FEC0u;
        // 0x38fec4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fec0) {
            ctx->pc = 0x38FECCu;
            goto label_38fecc;
        }
    }
    ctx->pc = 0x38FEC8u;
    // 0x38fec8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38fecc:
    // 0x38fecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38feccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38fed0: 0x3e00008  jr          $ra
    ctx->pc = 0x38FED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FED0u;
        // 0x38fed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FED8u;
}

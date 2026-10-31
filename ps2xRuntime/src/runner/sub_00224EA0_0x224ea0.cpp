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

// Function: sub_00224EA0
// Address: 0x224ea0 - 0x224ec8
void sub_00224EA0_0x224ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224EA0_0x224ea0");
#endif

    switch (ctx->pc) {
        case 0x224eb0u: goto label_224eb0;
        default: break;
    }

    ctx->pc = 0x224ea0u;

    // 0x224ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224ea8: 0xc088ade  jal         func_222B78
    ctx->pc = 0x224EA8u;
    SET_GPR_U32(ctx, 31, 0x224EB0u);
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x224EA8u, 0x224EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EB0u;
label_224eb0:
    // 0x224eb0: 0x90420041  lbu         $v0, 0x41($v0)
    ctx->pc = 0x224eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 65)));
    // 0x224eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224eb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x224eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x224ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x224EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EBCu;
        // 0x224ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224EC4u;
    // 0x224ec4: 0x0  nop
    ctx->pc = 0x224ec4u;
    // NOP
    ctx->pc = 0x224ec8u;
}

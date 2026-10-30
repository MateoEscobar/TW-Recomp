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

// Function: sub_00444968
// Address: 0x444968 - 0x444998
void sub_00444968_0x444968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444968_0x444968");
#endif

    switch (ctx->pc) {
        case 0x444980u: goto label_444980;
        default: break;
    }

    ctx->pc = 0x444968u;

    // 0x444968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x444968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44496c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44496cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x444970: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x444970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x444974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x444978: 0xc10f534  jal         func_43D4D0
    ctx->pc = 0x444978u;
    SET_GPR_U32(ctx, 31, 0x444980u);
    ctx->pc = 0x44497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444978u;
    // 0x44497c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D4D0u, 0x444978u, 0x444980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444980u;
label_444980:
    // 0x444980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x444980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444984: 0x3e00008  jr          $ra
    ctx->pc = 0x444984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444984u;
        // 0x444988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44498Cu;
    // 0x44498c: 0x0  nop
    ctx->pc = 0x44498cu;
    // NOP
    // 0x444990: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x444990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x444994: 0x0  nop
    ctx->pc = 0x444994u;
    // NOP
    ctx->pc = 0x444998u;
}

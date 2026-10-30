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

// Function: sub_00221BF0
// Address: 0x221bf0 - 0x221c20
void sub_00221BF0_0x221bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221BF0_0x221bf0");
#endif

    switch (ctx->pc) {
        case 0x221c0cu: goto label_221c0c;
        default: break;
    }

    ctx->pc = 0x221bf0u;

    // 0x221bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221bf8: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x221bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x221bfc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x221BFCu;
    {
        const bool branch_taken_0x221bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BFCu;
        // 0x221c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bfc) {
            ctx->pc = 0x221C0Cu;
            goto label_221c0c;
        }
    }
    ctx->pc = 0x221C04u;
    // 0x221c04: 0xc05d420  jal         func_175080
    ctx->pc = 0x221C04u;
    SET_GPR_U32(ctx, 31, 0x221C0Cu);
    ctx->pc = 0x221C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C04u;
    // 0x221c08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x221C04u, 0x221C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C0Cu;
label_221c0c:
    // 0x221c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221c10: 0x3e00008  jr          $ra
    ctx->pc = 0x221C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C10u;
        // 0x221c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221C18u;
    // 0x221c18: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x221c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x221c1c: 0x0  nop
    ctx->pc = 0x221c1cu;
    // NOP
    ctx->pc = 0x221c20u;
}

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

// Function: sub_004AFB80
// Address: 0x4afb80 - 0x4afbc0
void sub_004AFB80_0x4afb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFB80_0x4afb80");
#endif

    switch (ctx->pc) {
        case 0x4afbacu: goto label_4afbac;
        default: break;
    }

    ctx->pc = 0x4afb80u;

    // 0x4afb80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afb88: 0x94820048  lhu         $v0, 0x48($a0)
    ctx->pc = 0x4afb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4afb8c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AFB8Cu;
    {
        const bool branch_taken_0x4afb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afb8c) {
            ctx->pc = 0x4AFB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFB8Cu;
            // 0x4afb90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFBB4u;
            goto label_4afbb4;
        }
    }
    ctx->pc = 0x4AFB94u;
    // 0x4afb94: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x4afb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4afb98: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x4afb98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4afb9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4afb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afba0: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x4afba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4afba4: 0xc12c53c  jal         func_4B14F0
    ctx->pc = 0x4AFBA4u;
    SET_GPR_U32(ctx, 31, 0x4AFBACu);
    ctx->pc = 0x4AFBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFBA4u;
    // 0x4afba8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B14F0u, 0x4AFBA4u, 0x4AFBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFBACu;
label_4afbac:
    // 0x4afbac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFBACu;
    {
        const bool branch_taken_0x4afbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFBACu;
        // 0x4afbb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afbac) {
            ctx->pc = 0x4AFBB8u;
            goto label_4afbb8;
        }
    }
    ctx->pc = 0x4AFBB4u;
label_4afbb4:
    // 0x4afbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4afbb8:
    // 0x4afbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFBB8u;
        // 0x4afbbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFBC0u;
}

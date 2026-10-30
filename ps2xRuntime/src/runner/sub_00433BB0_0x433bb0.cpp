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

// Function: sub_00433BB0
// Address: 0x433bb0 - 0x433bf8
void sub_00433BB0_0x433bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433BB0_0x433bb0");
#endif

    switch (ctx->pc) {
        case 0x433bd0u: goto label_433bd0;
        case 0x433bdcu: goto label_433bdc;
        case 0x433be4u: goto label_433be4;
        default: break;
    }

    ctx->pc = 0x433bb0u;

    // 0x433bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x433bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x433bb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x433bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x433bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x433bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x433bbc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x433bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x433bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x433bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x433bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x433bc8: 0xc10cfce  jal         func_433F38
    ctx->pc = 0x433BC8u;
    SET_GPR_U32(ctx, 31, 0x433BD0u);
    ctx->pc = 0x433BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433BC8u;
    // 0x433bcc: 0x8e0469ec  lw          $a0, 0x69EC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F38u, 0x433BC8u, 0x433BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433BD0u;
label_433bd0:
    // 0x433bd0: 0x8e0469ec  lw          $a0, 0x69EC($s0)
    ctx->pc = 0x433bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x433bd4: 0xc10e4e0  jal         func_439380
    ctx->pc = 0x433BD4u;
    SET_GPR_U32(ctx, 31, 0x433BDCu);
    ctx->pc = 0x433BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433BD4u;
    // 0x433bd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439380u, 0x433BD4u, 0x433BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433BDCu;
label_433bdc:
    // 0x433bdc: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x433BDCu;
    SET_GPR_U32(ctx, 31, 0x433BE4u);
    ctx->pc = 0x433BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433BDCu;
    // 0x433be0: 0x8e0469ec  lw          $a0, 0x69EC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x433BDCu, 0x433BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433BE4u;
label_433be4:
    // 0x433be4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x433be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x433be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x433be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x433bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x433becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x433bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x433BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433BF0u;
        // 0x433bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x433BF8u;
}

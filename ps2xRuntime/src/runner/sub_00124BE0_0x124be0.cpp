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

// Function: sub_00124BE0
// Address: 0x124be0 - 0x124c28
void sub_00124BE0_0x124be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124BE0_0x124be0");
#endif

    switch (ctx->pc) {
        case 0x124c08u: goto label_124c08;
        case 0x124c14u: goto label_124c14;
        default: break;
    }

    ctx->pc = 0x124be0u;

    // 0x124be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124be4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x124be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x124be8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x124be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x124bec: 0x24425d50  addiu       $v0, $v0, 0x5D50
    ctx->pc = 0x124becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23888));
    // 0x124bf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x124bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x124bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x124bfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x124bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c00: 0xc04961c  jal         func_125870
    ctx->pc = 0x124C00u;
    SET_GPR_U32(ctx, 31, 0x124C08u);
    ctx->pc = 0x124C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C00u;
    // 0x124c04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125870u, 0x124C00u, 0x124C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C08u;
label_124c08:
    // 0x124c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c0c: 0xc048274  jal         func_1209D0
    ctx->pc = 0x124C0Cu;
    SET_GPR_U32(ctx, 31, 0x124C14u);
    ctx->pc = 0x124C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C0Cu;
    // 0x124c10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1209D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1209D0u, 0x124C0Cu, 0x124C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C14u;
label_124c14:
    // 0x124c14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x124c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x124c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124c20: 0x3e00008  jr          $ra
    ctx->pc = 0x124C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C20u;
        // 0x124c24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124C28u;
}

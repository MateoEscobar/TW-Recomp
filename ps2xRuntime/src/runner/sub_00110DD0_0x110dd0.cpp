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

// Function: sub_00110DD0
// Address: 0x110dd0 - 0x110e08
void sub_00110DD0_0x110dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110DD0_0x110dd0");
#endif

    switch (ctx->pc) {
        case 0x110decu: goto label_110dec;
        case 0x110df8u: goto label_110df8;
        default: break;
    }

    ctx->pc = 0x110dd0u;

    // 0x110dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110dd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x110dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x110dd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110de0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x110de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x110de4: 0xc050fda  jal         func_143F68
    ctx->pc = 0x110DE4u;
    SET_GPR_U32(ctx, 31, 0x110DECu);
    ctx->pc = 0x110DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DE4u;
    // 0x110de8: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x110DE4u, 0x110DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DECu;
label_110dec:
    // 0x110dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110df0: 0xc044a90  jal         func_112A40
    ctx->pc = 0x110DF0u;
    SET_GPR_U32(ctx, 31, 0x110DF8u);
    ctx->pc = 0x110DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DF0u;
    // 0x110df4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A40u, 0x110DF0u, 0x110DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DF8u;
label_110df8:
    // 0x110df8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x110df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110e00: 0x3e00008  jr          $ra
    ctx->pc = 0x110E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E00u;
        // 0x110e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110E08u;
}

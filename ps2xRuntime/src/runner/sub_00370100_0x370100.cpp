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

// Function: sub_00370100
// Address: 0x370100 - 0x370138
void sub_00370100_0x370100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370100_0x370100");
#endif

    switch (ctx->pc) {
        case 0x370118u: goto label_370118;
        case 0x370120u: goto label_370120;
        case 0x370128u: goto label_370128;
        default: break;
    }

    ctx->pc = 0x370100u;

    // 0x370100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370104: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x370104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x370108: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x370108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x37010c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370110: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370110u;
    SET_GPR_U32(ctx, 31, 0x370118u);
    ctx->pc = 0x370114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370110u;
    // 0x370114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370110u, 0x370118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370118u;
label_370118:
    // 0x370118: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370118u;
    SET_GPR_U32(ctx, 31, 0x370120u);
    ctx->pc = 0x37011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370118u;
    // 0x37011c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370118u, 0x370120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370120u;
label_370120:
    // 0x370120: 0xc06d0ea  jal         func_1B43A8
    ctx->pc = 0x370120u;
    SET_GPR_U32(ctx, 31, 0x370128u);
    ctx->pc = 0x370124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370120u;
    // 0x370124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B43A8u, 0x370120u, 0x370128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370128u;
label_370128:
    // 0x370128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37012c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37012cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370130: 0x3e00008  jr          $ra
    ctx->pc = 0x370130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370130u;
        // 0x370134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370138u;
}

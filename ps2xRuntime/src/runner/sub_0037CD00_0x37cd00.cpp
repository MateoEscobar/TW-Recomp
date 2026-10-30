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

// Function: sub_0037CD00
// Address: 0x37cd00 - 0x37cd38
void sub_0037CD00_0x37cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CD00_0x37cd00");
#endif

    switch (ctx->pc) {
        case 0x37cd14u: goto label_37cd14;
        case 0x37cd1cu: goto label_37cd1c;
        case 0x37cd24u: goto label_37cd24;
        default: break;
    }

    ctx->pc = 0x37cd00u;

    // 0x37cd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37cd04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37cd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cd08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cd0c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CD0Cu;
    SET_GPR_U32(ctx, 31, 0x37CD14u);
    ctx->pc = 0x37CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD0Cu;
    // 0x37cd10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CD0Cu, 0x37CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD14u;
label_37cd14:
    // 0x37cd14: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CD14u;
    SET_GPR_U32(ctx, 31, 0x37CD1Cu);
    ctx->pc = 0x37CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD14u;
    // 0x37cd18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CD14u, 0x37CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD1Cu;
label_37cd1c:
    // 0x37cd1c: 0xc108dbc  jal         func_4236F0
    ctx->pc = 0x37CD1Cu;
    SET_GPR_U32(ctx, 31, 0x37CD24u);
    ctx->pc = 0x37CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD1Cu;
    // 0x37cd20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4236F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4236F0u, 0x37CD1Cu, 0x37CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD24u;
label_37cd24:
    // 0x37cd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37cd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cd28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37cd28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x37CD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD2Cu;
        // 0x37cd30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CD34u;
    // 0x37cd34: 0x0  nop
    ctx->pc = 0x37cd34u;
    // NOP
    ctx->pc = 0x37cd38u;
}

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

// Function: sub_004DAD20
// Address: 0x4dad20 - 0x4dad38
void sub_004DAD20_0x4dad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAD20_0x4dad20");
#endif

    switch (ctx->pc) {
        case 0x4dad34u: goto label_4dad34;
        default: break;
    }

    ctx->pc = 0x4dad20u;

    // 0x4dad20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dad24: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x4dad24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4dad28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dad2c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4DAD2Cu;
    SET_GPR_U32(ctx, 31, 0x4DAD34u);
    ctx->pc = 0x4DAD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAD2Cu;
    // 0x4dad30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4DAD2Cu, 0x4DAD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DAD34u;
label_4dad34:
    // 0x4dad34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dad34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x4dad38u;
}

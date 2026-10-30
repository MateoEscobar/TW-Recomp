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

// Function: sub_0032FDA8
// Address: 0x32fda8 - 0x32fde0
void sub_0032FDA8_0x32fda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FDA8_0x32fda8");
#endif

    switch (ctx->pc) {
        case 0x32fdb8u: goto label_32fdb8;
        default: break;
    }

    ctx->pc = 0x32fda8u;

    // 0x32fda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fdac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fdb0: 0xc0cbf58  jal         func_32FD60
    ctx->pc = 0x32FDB0u;
    SET_GPR_U32(ctx, 31, 0x32FDB8u);
    ctx->pc = 0x32FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD60u, 0x32FDB0u, 0x32FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FDB8u;
label_32fdb8:
    // 0x32fdb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32fdb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fdbc: 0x8462000a  lh          $v0, 0xA($v1)
    ctx->pc = 0x32fdbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x32fdc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32FDC0u;
    {
        const bool branch_taken_0x32fdc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDC0u;
        // 0x32fdc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fdc0) {
            ctx->pc = 0x32FDD0u;
            goto label_32fdd0;
        }
    }
    ctx->pc = 0x32FDC8u;
    // 0x32fdc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32fdcc: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x32fdccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
label_32fdd0:
    // 0x32fdd0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x32fdd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x32FDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDD4u;
        // 0x32fdd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FDDCu;
    // 0x32fddc: 0x0  nop
    ctx->pc = 0x32fddcu;
    // NOP
    ctx->pc = 0x32fde0u;
}

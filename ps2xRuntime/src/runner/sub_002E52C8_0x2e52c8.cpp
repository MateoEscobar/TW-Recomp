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

// Function: sub_002E52C8
// Address: 0x2e52c8 - 0x2e5300
void sub_002E52C8_0x2e52c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E52C8_0x2e52c8");
#endif

    switch (ctx->pc) {
        case 0x2e52e8u: goto label_2e52e8;
        default: break;
    }

    ctx->pc = 0x2e52c8u;

    // 0x2e52c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e52c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e52cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e52ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e52d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e52d4: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2e52d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x2e52d8: 0x5c600006  bgtzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E52D8u;
    {
        const bool branch_taken_0x2e52d8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e52d8) {
            ctx->pc = 0x2E52DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E52D8u;
            // 0x2e52dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E52F4u;
            goto label_2e52f4;
        }
    }
    ctx->pc = 0x2E52E0u;
    // 0x2e52e0: 0xc0d5016  jal         func_354058
    ctx->pc = 0x2E52E0u;
    SET_GPR_U32(ctx, 31, 0x2E52E8u);
    ctx->pc = 0x2E52E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E52E0u;
    // 0x2e52e4: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354058u, 0x2E52E0u, 0x2E52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E52E8u;
label_2e52e8:
    // 0x2e52e8: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2e52e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e52ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e52f0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2e52f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2e52f4:
    // 0x2e52f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e52f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e52f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E52F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E52F8u;
        // 0x2e52fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E52F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5300u;
}

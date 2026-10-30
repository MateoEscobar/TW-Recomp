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

// Function: sub_002E5898
// Address: 0x2e5898 - 0x2e58d0
void sub_002E5898_0x2e5898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5898_0x2e5898");
#endif

    switch (ctx->pc) {
        case 0x2e58b8u: goto label_2e58b8;
        default: break;
    }

    ctx->pc = 0x2e5898u;

    // 0x2e5898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e589c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e58a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e58a4: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2e58a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x2e58a8: 0x5c600006  bgtzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E58A8u;
    {
        const bool branch_taken_0x2e58a8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e58a8) {
            ctx->pc = 0x2E58ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E58A8u;
            // 0x2e58ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E58C4u;
            goto label_2e58c4;
        }
    }
    ctx->pc = 0x2E58B0u;
    // 0x2e58b0: 0xc0d5016  jal         func_354058
    ctx->pc = 0x2E58B0u;
    SET_GPR_U32(ctx, 31, 0x2E58B8u);
    ctx->pc = 0x2E58B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E58B0u;
    // 0x2e58b4: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354058u, 0x2E58B0u, 0x2E58B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58B8u;
label_2e58b8:
    // 0x2e58b8: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2e58b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e58bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e58c0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2e58c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2e58c4:
    // 0x2e58c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e58c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e58c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E58C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E58CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E58C8u;
        // 0x2e58cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E58C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E58D0u;
}

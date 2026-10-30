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

// Function: sub_004614A8
// Address: 0x4614a8 - 0x4614f8
void sub_004614A8_0x4614a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004614A8_0x4614a8");
#endif

    switch (ctx->pc) {
        case 0x4614d4u: goto label_4614d4;
        default: break;
    }

    ctx->pc = 0x4614a8u;

    // 0x4614a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4614a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4614ac: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4614acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x4614b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4614b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4614b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4614b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4614b8: 0x2470d810  addiu       $s0, $v1, -0x27F0
    ctx->pc = 0x4614b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
    // 0x4614bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4614bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4614c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4614c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51D818u));
    // 0x4614c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4614C4u;
    {
        const bool branch_taken_0x4614c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4614C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4614C4u;
        // 0x4614c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4614c4) {
            ctx->pc = 0x4614D4u;
            goto label_4614d4;
        }
    }
    ctx->pc = 0x4614CCu;
    // 0x4614cc: 0xc1185f6  jal         func_4617D8
    ctx->pc = 0x4614CCu;
    SET_GPR_U32(ctx, 31, 0x4614D4u);
    ctx->pc = 0x4614D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4614CCu;
    // 0x4614d0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4617D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4617D8u, 0x4614CCu, 0x4614D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4614D4u;
label_4614d4:
    // 0x4614d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4614d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4614d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4614d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4614dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4614dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4614e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4614e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4614e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4614e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4614e8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4614e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x4614ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4614ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4614f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4614F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4614F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4614F0u;
        // 0x4614f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4614F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4614F8u;
}

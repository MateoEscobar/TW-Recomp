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

// Function: sub_004D88D8
// Address: 0x4d88d8 - 0x4d8918
void sub_004D88D8_0x4d88d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D88D8_0x4d88d8");
#endif

    switch (ctx->pc) {
        case 0x4d88fcu: goto label_4d88fc;
        default: break;
    }

    ctx->pc = 0x4d88d8u;

    // 0x4d88d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d88d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d88dc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4d88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4d88e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d88e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d88e4: 0x80623ec8  lb          $v0, 0x3EC8($v1)
    ctx->pc = 0x4d88e4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x533EC8u));
    // 0x4d88e8: 0x24703ec8  addiu       $s0, $v1, 0x3EC8
    ctx->pc = 0x4d88e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16072));
    // 0x4d88ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D88ECu;
    {
        const bool branch_taken_0x4d88ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D88ECu;
        // 0x4d88f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d88ec) {
            ctx->pc = 0x4D88FCu;
            goto label_4d88fc;
        }
    }
    ctx->pc = 0x4D88F4u;
    // 0x4d88f4: 0xc13621a  jal         func_4D8868
    ctx->pc = 0x4D88F4u;
    SET_GPR_U32(ctx, 31, 0x4D88FCu);
    ctx->pc = 0x4D8868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D8868u, 0x4D88F4u, 0x4D88FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D88FCu;
label_4d88fc:
    // 0x4d88fc: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x4d88fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4d8900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d8900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8904: 0x38420054  xori        $v0, $v0, 0x54
    ctx->pc = 0x4d8904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)84);
    // 0x4d8908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d8908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d890c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4d890cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4d8910: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8910u;
        // 0x4d8914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D8918u;
}

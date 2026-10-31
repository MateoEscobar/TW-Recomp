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

// Function: sub_004B0918
// Address: 0x4b0918 - 0x4b0960
void sub_004B0918_0x4b0918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0918_0x4b0918");
#endif

    switch (ctx->pc) {
        case 0x4b0930u: goto label_4b0930;
        default: break;
    }

    ctx->pc = 0x4b0918u;

    // 0x4b0918: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4b0918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b091c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4b091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4b0920: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x4b0920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b0924: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B0924u;
    {
        const bool branch_taken_0x4b0924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0924u;
        // 0x4b0928: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0924) {
            ctx->pc = 0x4B094Cu;
            goto label_4b094c;
        }
    }
    ctx->pc = 0x4B092Cu;
    // 0x4b092c: 0x0  nop
    ctx->pc = 0x4b092cu;
    // NOP
label_4b0930:
    // 0x4b0930: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4b0930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b0934: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4b0934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b0938: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x4b0938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4b093c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4b093cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x4b0940: 0x0  nop
    ctx->pc = 0x4b0940u;
    // NOP
    // 0x4b0944: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B0944u;
    {
        const bool branch_taken_0x4b0944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0944) {
            ctx->pc = 0x4B0930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b0930;
        }
    }
    ctx->pc = 0x4B094Cu;
label_4b094c:
    // 0x4b094c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x4b094cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4b0950: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b0950u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b0954: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B095Cu;
    // 0x4b095c: 0x0  nop
    ctx->pc = 0x4b095cu;
    // NOP
    ctx->pc = 0x4b0960u;
}

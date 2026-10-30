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

// Function: sub_003A4C78
// Address: 0x3a4c78 - 0x3a4cb0
void sub_003A4C78_0x3a4c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4C78_0x3a4c78");
#endif

    switch (ctx->pc) {
        case 0x3a4c8cu: goto label_3a4c8c;
        default: break;
    }

    ctx->pc = 0x3a4c78u;

    // 0x3a4c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a4c7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a4c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a4c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4c84: 0xc0e3d62  jal         func_38F588
    ctx->pc = 0x3A4C84u;
    SET_GPR_U32(ctx, 31, 0x3A4C8Cu);
    ctx->pc = 0x3A4C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4C84u;
    // 0x3a4c88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F588u, 0x3A4C84u, 0x3A4C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4C8Cu;
label_3a4c8c:
    // 0x3a4c8c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4C8Cu;
    {
        const bool branch_taken_0x3a4c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4c8c) {
            ctx->pc = 0x3A4C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4C8Cu;
            // 0x3a4c90: 0xa45000fa  sh          $s0, 0xFA($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 250), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4C9Cu;
            goto label_3a4c9c;
        }
    }
    ctx->pc = 0x3A4C94u;
    // 0x3a4c94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A4C94u;
    {
        const bool branch_taken_0x3a4c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C94u;
        // 0x3a4c98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c94) {
            ctx->pc = 0x3A4CA0u;
            goto label_3a4ca0;
        }
    }
    ctx->pc = 0x3A4C9Cu;
label_3a4c9c:
    // 0x3a4c9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a4c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a4ca0:
    // 0x3a4ca0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a4ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4CA8u;
        // 0x3a4cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4CB0u;
}

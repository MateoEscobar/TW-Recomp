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

// Function: sub_00324158
// Address: 0x324158 - 0x324190
void sub_00324158_0x324158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324158_0x324158");
#endif

    switch (ctx->pc) {
        case 0x324184u: goto label_324184;
        default: break;
    }

    ctx->pc = 0x324158u;

    // 0x324158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32415c: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x32415cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x324160: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x324160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x324164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324168: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x324168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x32416c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x32416cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x324170: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x324170u;
    {
        const bool branch_taken_0x324170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324170u;
        // 0x324174: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324170) {
            ctx->pc = 0x32417Cu;
            goto label_32417c;
        }
    }
    ctx->pc = 0x324178u;
    // 0x324178: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x324178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
label_32417c:
    // 0x32417c: 0xc0ca864  jal         func_32A190
    ctx->pc = 0x32417Cu;
    SET_GPR_U32(ctx, 31, 0x324184u);
    ctx->pc = 0x32A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A190u, 0x32417Cu, 0x324184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324184u;
label_324184:
    // 0x324184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324188: 0x3e00008  jr          $ra
    ctx->pc = 0x324188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324188u;
        // 0x32418c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324190u;
}

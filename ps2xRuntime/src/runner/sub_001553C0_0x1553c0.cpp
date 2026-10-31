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

// Function: sub_001553C0
// Address: 0x1553c0 - 0x155408
void sub_001553C0_0x1553c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001553C0_0x1553c0");
#endif

    switch (ctx->pc) {
        case 0x1553d0u: goto label_1553d0;
        case 0x1553e4u: goto label_1553e4;
        case 0x1553ecu: goto label_1553ec;
        case 0x1553f8u: goto label_1553f8;
        default: break;
    }

    ctx->pc = 0x1553c0u;

    // 0x1553c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1553c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1553c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1553c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1553c8: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x1553C8u;
    SET_GPR_U32(ctx, 31, 0x1553D0u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x1553C8u, 0x1553D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553D0u;
label_1553d0:
    // 0x1553d0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1553d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1553d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1553D4u;
    {
        const bool branch_taken_0x1553d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553D4u;
        // 0x1553d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553d4) {
            ctx->pc = 0x1553FCu;
            goto label_1553fc;
        }
    }
    ctx->pc = 0x1553DCu;
    // 0x1553dc: 0xc0568a8  jal         func_15A2A0
    ctx->pc = 0x1553DCu;
    SET_GPR_U32(ctx, 31, 0x1553E4u);
    ctx->pc = 0x1553E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553DCu;
    // 0x1553e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A2A0u, 0x1553DCu, 0x1553E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553E4u;
label_1553e4:
    // 0x1553e4: 0xc05689c  jal         func_15A270
    ctx->pc = 0x1553E4u;
    SET_GPR_U32(ctx, 31, 0x1553ECu);
    ctx->pc = 0x1553E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553E4u;
    // 0x1553e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A270u, 0x1553E4u, 0x1553ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553ECu;
label_1553ec:
    // 0x1553ec: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1553ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1553f0: 0xc05797a  jal         func_15E5E8
    ctx->pc = 0x1553F0u;
    SET_GPR_U32(ctx, 31, 0x1553F8u);
    ctx->pc = 0x1553F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553F0u;
    // 0x1553f4: 0x24845810  addiu       $a0, $a0, 0x5810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x1553F0u, 0x1553F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553F8u;
label_1553f8:
    // 0x1553f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1553f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1553fc:
    // 0x1553fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1553FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553FCu;
        // 0x155400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1553FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155404u;
    // 0x155404: 0x0  nop
    ctx->pc = 0x155404u;
    // NOP
    ctx->pc = 0x155408u;
}

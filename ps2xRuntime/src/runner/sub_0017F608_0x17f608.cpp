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

// Function: sub_0017F608
// Address: 0x17f608 - 0x17f650
void sub_0017F608_0x17f608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F608_0x17f608");
#endif

    switch (ctx->pc) {
        case 0x17f634u: goto label_17f634;
        default: break;
    }

    ctx->pc = 0x17f608u;

    // 0x17f608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f60c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f610: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x17f610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f614: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F614u;
    {
        const bool branch_taken_0x17f614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F614u;
        // 0x17f618: 0x3c05001a  lui         $a1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f614) {
            ctx->pc = 0x17F624u;
            goto label_17f624;
        }
    }
    ctx->pc = 0x17F61Cu;
    // 0x17f61c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17F61Cu;
    {
        const bool branch_taken_0x17f61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F61Cu;
        // 0x17f620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f61c) {
            ctx->pc = 0x17F638u;
            goto label_17f638;
        }
    }
    ctx->pc = 0x17F624u;
label_17f624:
    // 0x17f624: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x17f624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x17f628: 0x24a58358  addiu       $a1, $a1, -0x7CA8
    ctx->pc = 0x17f628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935384));
    // 0x17f62c: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x17F62Cu;
    SET_GPR_U32(ctx, 31, 0x17F634u);
    ctx->pc = 0x17F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F62Cu;
    // 0x17f630: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x17F62Cu, 0x17F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F634u;
label_17f634:
    // 0x17f634: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17f638:
    // 0x17f638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f63c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F63Cu;
        // 0x17f640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F644u;
    // 0x17f644: 0x0  nop
    ctx->pc = 0x17f644u;
    // NOP
    // 0x17f648: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x17f648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17f64c: 0x0  nop
    ctx->pc = 0x17f64cu;
    // NOP
    ctx->pc = 0x17f650u;
}

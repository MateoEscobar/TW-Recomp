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

// Function: sub_004AEDE0
// Address: 0x4aede0 - 0x4aee20
void sub_004AEDE0_0x4aede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEDE0_0x4aede0");
#endif

    switch (ctx->pc) {
        case 0x4aee0cu: goto label_4aee0c;
        default: break;
    }

    ctx->pc = 0x4aede0u;

    // 0x4aede0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aede4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aede8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4aede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4aedec: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4aedecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4aedf0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AEDF0u;
    {
        const bool branch_taken_0x4aedf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEDF0u;
        // 0x4aedf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aedf0) {
            ctx->pc = 0x4AEE10u;
            goto label_4aee10;
        }
    }
    ctx->pc = 0x4AEDF8u;
    // 0x4aedf8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4aedf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4aedfc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AEDFCu;
    {
        const bool branch_taken_0x4aedfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEDFCu;
        // 0x4aee00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aedfc) {
            ctx->pc = 0x4AEE10u;
            goto label_4aee10;
        }
    }
    ctx->pc = 0x4AEE04u;
    // 0x4aee04: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AEE04u;
    SET_GPR_U32(ctx, 31, 0x4AEE0Cu);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AEE04u, 0x4AEE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEE0Cu;
label_4aee0c:
    // 0x4aee0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4aee10:
    // 0x4aee10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aee10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aee14: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEE14u;
        // 0x4aee18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEE1Cu;
    // 0x4aee1c: 0x0  nop
    ctx->pc = 0x4aee1cu;
    // NOP
    ctx->pc = 0x4aee20u;
}

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

// Function: sub_0042EF78
// Address: 0x42ef78 - 0x42efb8
void sub_0042EF78_0x42ef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EF78_0x42ef78");
#endif

    switch (ctx->pc) {
        case 0x42ef98u: goto label_42ef98;
        default: break;
    }

    ctx->pc = 0x42ef78u;

    // 0x42ef78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42ef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42ef7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42ef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42ef80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42ef80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42ef84: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42EF84u;
    {
        const bool branch_taken_0x42ef84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x42EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EF84u;
        // 0x42ef88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ef84) {
            ctx->pc = 0x42EFA0u;
            goto label_42efa0;
        }
    }
    ctx->pc = 0x42EF8Cu;
    // 0x42ef8c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x42ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42ef90: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x42EF90u;
    SET_GPR_U32(ctx, 31, 0x42EF98u);
    ctx->pc = 0x42EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42EF90u;
    // 0x42ef94: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x42EF90u, 0x42EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42EF98u;
label_42ef98:
    // 0x42ef98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42EF98u;
    {
        const bool branch_taken_0x42ef98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EF98u;
        // 0x42ef9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ef98) {
            ctx->pc = 0x42EFA8u;
            goto label_42efa8;
        }
    }
    ctx->pc = 0x42EFA0u;
label_42efa0:
    // 0x42efa0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x42efa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42efa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42efa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42efa8:
    // 0x42efa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42efa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42efac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42efacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42efb0: 0x3e00008  jr          $ra
    ctx->pc = 0x42EFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EFB0u;
        // 0x42efb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42EFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42EFB8u;
}

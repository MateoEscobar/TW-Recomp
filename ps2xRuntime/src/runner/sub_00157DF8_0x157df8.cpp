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

// Function: sub_00157DF8
// Address: 0x157df8 - 0x157e28
void sub_00157DF8_0x157df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157DF8_0x157df8");
#endif

    switch (ctx->pc) {
        case 0x157e1cu: goto label_157e1c;
        default: break;
    }

    ctx->pc = 0x157df8u;

    // 0x157df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157dfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x157dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x157e00: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157E00u;
    {
        const bool branch_taken_0x157e00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x157E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E00u;
        // 0x157e04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e00) {
            ctx->pc = 0x157E1Cu;
            goto label_157e1c;
        }
    }
    ctx->pc = 0x157E08u;
    // 0x157e08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157E08u;
    {
        const bool branch_taken_0x157e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E08u;
        // 0x157e0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e08) {
            ctx->pc = 0x157E20u;
            goto label_157e20;
        }
    }
    ctx->pc = 0x157E10u;
    // 0x157e10: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x157e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x157e14: 0xc055b48  jal         func_156D20
    ctx->pc = 0x157E14u;
    SET_GPR_U32(ctx, 31, 0x157E1Cu);
    ctx->pc = 0x157E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E14u;
    // 0x157e18: 0x24845560  addiu       $a0, $a0, 0x5560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156D20u, 0x157E14u, 0x157E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E1Cu;
label_157e1c:
    // 0x157e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157e20:
    // 0x157e20: 0x3e00008  jr          $ra
    ctx->pc = 0x157E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E20u;
        // 0x157e24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157E28u;
}

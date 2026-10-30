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

// Function: sub_00460F08
// Address: 0x460f08 - 0x460f80
void sub_00460F08_0x460f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460F08_0x460f08");
#endif

    switch (ctx->pc) {
        case 0x460f40u: goto label_460f40;
        default: break;
    }

    ctx->pc = 0x460f08u;

    // 0x460f08: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x460f08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x460f0c: 0x8cc7008c  lw          $a3, 0x8C($a2)
    ctx->pc = 0x460f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x460f10: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x460f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x460f14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x460f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x460f18: 0x8cc30084  lw          $v1, 0x84($a2)
    ctx->pc = 0x460f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
    // 0x460f1c: 0x8cc50088  lw          $a1, 0x88($a2)
    ctx->pc = 0x460f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    // 0x460f20: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x460f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x460f24: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x460f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x460f28: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x460f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x460f2c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x460f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x460f30: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x460f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x460f34: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x460F34u;
    {
        const bool branch_taken_0x460f34 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x460F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460F34u;
        // 0x460f38: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460f34) {
            ctx->pc = 0x460F78u;
            goto label_460f78;
        }
    }
    ctx->pc = 0x460F3Cu;
    // 0x460f3c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x460f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_460f40:
    // 0x460f40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x460f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x460f44: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x460f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x460f48: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x460f4c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x460f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x460f50: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x460f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x460f54: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x460f58: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x460f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x460f5c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x460f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x460f60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x460f64: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x460f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x460f68: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x460f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x460f6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x460f70: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x460F70u;
    {
        const bool branch_taken_0x460f70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x460F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460F70u;
        // 0x460f74: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460f70) {
            ctx->pc = 0x460F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_460f40;
        }
    }
    ctx->pc = 0x460F78u;
label_460f78:
    // 0x460f78: 0x3e00008  jr          $ra
    ctx->pc = 0x460F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x460F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460F78u;
        // 0x460f7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460F80u;
}

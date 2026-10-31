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

// Function: sub_00250C00
// Address: 0x250c00 - 0x250c50
void sub_00250C00_0x250c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250C00_0x250c00");
#endif

    switch (ctx->pc) {
        case 0x250c28u: goto label_250c28;
        default: break;
    }

    ctx->pc = 0x250c00u;

    // 0x250c00: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x250c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250c04: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x250C04u;
    {
        const bool branch_taken_0x250c04 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x250C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C04u;
        // 0x250c08: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c04) {
            ctx->pc = 0x250C44u;
            goto label_250c44;
        }
    }
    ctx->pc = 0x250C0Cu;
    // 0x250c0c: 0x8c460594  lw          $a2, 0x594($v0)
    ctx->pc = 0x250c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    // 0x250c10: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x250C10u;
    {
        const bool branch_taken_0x250c10 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x250C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C10u;
        // 0x250c14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c10) {
            ctx->pc = 0x250C44u;
            goto label_250c44;
        }
    }
    ctx->pc = 0x250C18u;
    // 0x250c18: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x250c18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x250c1c: 0x8c430590  lw          $v1, 0x590($v0)
    ctx->pc = 0x250c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1424)));
    // 0x250c20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x250c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x250c24: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x250c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_250c28:
    // 0x250c28: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x250c28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x250c2c: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x250c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x250c30: 0x14470002  bne         $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x250C30u;
    {
        const bool branch_taken_0x250c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x250C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C30u;
        // 0x250c34: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c30) {
            ctx->pc = 0x250C3Cu;
            goto label_250c3c;
        }
    }
    ctx->pc = 0x250C38u;
    // 0x250c38: 0xa4850004  sh          $a1, 0x4($a0)
    ctx->pc = 0x250c38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 5));
label_250c3c:
    // 0x250c3c: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x250C3Cu;
    {
        const bool branch_taken_0x250c3c = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x250C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C3Cu;
        // 0x250c40: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c3c) {
            ctx->pc = 0x250C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250c28;
        }
    }
    ctx->pc = 0x250C44u;
label_250c44:
    // 0x250c44: 0x3e00008  jr          $ra
    ctx->pc = 0x250C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250C4Cu;
    // 0x250c4c: 0x0  nop
    ctx->pc = 0x250c4cu;
    // NOP
    ctx->pc = 0x250c50u;
}

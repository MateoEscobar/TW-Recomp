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

// Function: sub_0046DE00
// Address: 0x46de00 - 0x46de58
void sub_0046DE00_0x46de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046DE00_0x46de00");
#endif

    switch (ctx->pc) {
        case 0x46de00u: goto label_46de00;
        case 0x46de04u: goto label_46de04;
        case 0x46de08u: goto label_46de08;
        case 0x46de0cu: goto label_46de0c;
        case 0x46de10u: goto label_46de10;
        case 0x46de14u: goto label_46de14;
        case 0x46de18u: goto label_46de18;
        case 0x46de1cu: goto label_46de1c;
        case 0x46de20u: goto label_46de20;
        case 0x46de24u: goto label_46de24;
        case 0x46de28u: goto label_46de28;
        case 0x46de2cu: goto label_46de2c;
        case 0x46de30u: goto label_46de30;
        case 0x46de34u: goto label_46de34;
        case 0x46de38u: goto label_46de38;
        case 0x46de3cu: goto label_46de3c;
        case 0x46de40u: goto label_46de40;
        case 0x46de44u: goto label_46de44;
        case 0x46de48u: goto label_46de48;
        case 0x46de4cu: goto label_46de4c;
        case 0x46de50u: goto label_46de50;
        case 0x46de54u: goto label_46de54;
        default: break;
    }

    ctx->pc = 0x46de00u;

label_46de00:
    // 0x46de00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x46de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_46de04:
    // 0x46de04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x46de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46de08:
    // 0x46de08: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_46de0c:
    if (ctx->pc == 0x46DE0Cu) {
        ctx->pc = 0x46DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DE08u;
        // 0x46de0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DE10u;
        goto label_46de10;
    }
    ctx->pc = 0x46DE08u;
    {
        const bool branch_taken_0x46de08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DE08u;
        // 0x46de0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46de08) {
            ctx->pc = 0x46DE34u;
            goto label_46de34;
        }
    }
    ctx->pc = 0x46DE10u;
label_46de10:
    // 0x46de10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x46de10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_46de14:
    // 0x46de14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_46de18:
    if (ctx->pc == 0x46DE18u) {
        ctx->pc = 0x46DE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DE14u;
        // 0x46de18: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DE1Cu;
        goto label_46de1c;
    }
    ctx->pc = 0x46DE14u;
    {
        const bool branch_taken_0x46de14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DE14u;
        // 0x46de18: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46de14) {
            ctx->pc = 0x46DE38u;
            goto label_46de38;
        }
    }
    ctx->pc = 0x46DE1Cu;
label_46de1c:
    // 0x46de1c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x46de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_46de20:
    // 0x46de20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_46de24:
    if (ctx->pc == 0x46DE24u) {
        ctx->pc = 0x46DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DE20u;
        // 0x46de24: 0x8c62ae24  lw          $v0, -0x51DC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DE28u;
        goto label_46de28;
    }
    ctx->pc = 0x46DE20u;
    {
        const bool branch_taken_0x46de20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DE20u;
        // 0x46de24: 0x8c62ae24  lw          $v0, -0x51DC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46de20) {
            ctx->pc = 0x46DE3Cu;
            goto label_46de3c;
        }
    }
    ctx->pc = 0x46DE28u;
label_46de28:
    // 0x46de28: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x46de28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_46de2c:
    // 0x46de2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_46de30:
    if (ctx->pc == 0x46DE30u) {
        ctx->pc = 0x46DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DE2Cu;
        // 0x46de30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DE34u;
        goto label_46de34;
    }
    ctx->pc = 0x46DE2Cu;
    {
        const bool branch_taken_0x46de2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DE2Cu;
        // 0x46de30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46de2c) {
            ctx->pc = 0x46DE48u;
            goto label_46de48;
        }
    }
    ctx->pc = 0x46DE34u;
label_46de34:
    // 0x46de34: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46de34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46de38:
    // 0x46de38: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x46de38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_46de3c:
    // 0x46de3c: 0x40f809  jalr        $v0
label_46de40:
    if (ctx->pc == 0x46DE40u) {
        ctx->pc = 0x46DE44u;
        goto label_46de44;
    }
    ctx->pc = 0x46DE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DE44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DE3Cu, 0x46DE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DE44u;
label_46de44:
    // 0x46de44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46de44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46de48:
    // 0x46de48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46de48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46de4c:
    // 0x46de4c: 0x3e00008  jr          $ra
label_46de50:
    if (ctx->pc == 0x46DE50u) {
        ctx->pc = 0x46DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DE4Cu;
        // 0x46de50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DE54u;
        goto label_46de54;
    }
    ctx->pc = 0x46DE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DE4Cu;
        // 0x46de50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46DE54u;
label_46de54:
    // 0x46de54: 0x0  nop
    ctx->pc = 0x46de54u;
    // NOP
    ctx->pc = 0x46de58u;
}

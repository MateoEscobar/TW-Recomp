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

// Function: sub_0018CC20
// Address: 0x18cc20 - 0x18cc60
void sub_0018CC20_0x18cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CC20_0x18cc20");
#endif

    switch (ctx->pc) {
        case 0x18cc20u: goto label_18cc20;
        case 0x18cc24u: goto label_18cc24;
        case 0x18cc28u: goto label_18cc28;
        case 0x18cc2cu: goto label_18cc2c;
        case 0x18cc30u: goto label_18cc30;
        case 0x18cc34u: goto label_18cc34;
        case 0x18cc38u: goto label_18cc38;
        case 0x18cc3cu: goto label_18cc3c;
        case 0x18cc40u: goto label_18cc40;
        case 0x18cc44u: goto label_18cc44;
        case 0x18cc48u: goto label_18cc48;
        case 0x18cc4cu: goto label_18cc4c;
        case 0x18cc50u: goto label_18cc50;
        case 0x18cc54u: goto label_18cc54;
        case 0x18cc58u: goto label_18cc58;
        case 0x18cc5cu: goto label_18cc5c;
        default: break;
    }

    ctx->pc = 0x18cc20u;

label_18cc20:
    // 0x18cc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18cc24:
    // 0x18cc24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18cc28:
    // 0x18cc28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18cc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18cc2c:
    // 0x18cc2c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_18cc30:
    // 0x18cc30: 0x8c47cdb4  lw          $a3, -0x324C($v0)
    ctx->pc = 0x18cc30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_18cc34:
    // 0x18cc34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18cc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18cc38:
    // 0x18cc38: 0x94860212  lhu         $a2, 0x212($a0)
    ctx->pc = 0x18cc38u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 530)));
label_18cc3c:
    // 0x18cc3c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x18cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_18cc40:
    // 0x18cc40: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x18cc40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_18cc44:
    // 0x18cc44: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x18cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_18cc48:
    // 0x18cc48: 0x60f809  jalr        $v1
label_18cc4c:
    if (ctx->pc == 0x18CC4Cu) {
        ctx->pc = 0x18CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC48u;
        // 0x18cc4c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CC50u;
        goto label_18cc50;
    }
    ctx->pc = 0x18CC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18CC50u);
        ctx->pc = 0x18CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC48u;
        // 0x18cc4c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CC48u, 0x18CC50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CC50u;
label_18cc50:
    // 0x18cc50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18cc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18cc54:
    // 0x18cc54: 0x3e00008  jr          $ra
label_18cc58:
    if (ctx->pc == 0x18CC58u) {
        ctx->pc = 0x18CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC54u;
        // 0x18cc58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CC5Cu;
        goto label_18cc5c;
    }
    ctx->pc = 0x18CC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC54u;
        // 0x18cc58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CC5Cu;
label_18cc5c:
    // 0x18cc5c: 0x0  nop
    ctx->pc = 0x18cc5cu;
    // NOP
    ctx->pc = 0x18cc60u;
}

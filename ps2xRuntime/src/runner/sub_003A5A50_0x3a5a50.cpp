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

// Function: sub_003A5A50
// Address: 0x3a5a50 - 0x3a5a90
void sub_003A5A50_0x3a5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5A50_0x3a5a50");
#endif

    switch (ctx->pc) {
        case 0x3a5a50u: goto label_3a5a50;
        case 0x3a5a54u: goto label_3a5a54;
        case 0x3a5a58u: goto label_3a5a58;
        case 0x3a5a5cu: goto label_3a5a5c;
        case 0x3a5a60u: goto label_3a5a60;
        case 0x3a5a64u: goto label_3a5a64;
        case 0x3a5a68u: goto label_3a5a68;
        case 0x3a5a6cu: goto label_3a5a6c;
        case 0x3a5a70u: goto label_3a5a70;
        case 0x3a5a74u: goto label_3a5a74;
        case 0x3a5a78u: goto label_3a5a78;
        case 0x3a5a7cu: goto label_3a5a7c;
        case 0x3a5a80u: goto label_3a5a80;
        case 0x3a5a84u: goto label_3a5a84;
        case 0x3a5a88u: goto label_3a5a88;
        case 0x3a5a8cu: goto label_3a5a8c;
        default: break;
    }

    ctx->pc = 0x3a5a50u;

label_3a5a50:
    // 0x3a5a50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a5a54:
    // 0x3a5a54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a5a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a5a58:
    // 0x3a5a58: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x3a5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_3a5a5c:
    // 0x3a5a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a5a60:
    // 0x3a5a60: 0xc0e8b36  jal         func_3A2CD8
label_3a5a64:
    if (ctx->pc == 0x3A5A64u) {
        ctx->pc = 0x3A5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A60u;
        // 0x3a5a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5A68u;
        goto label_3a5a68;
    }
    ctx->pc = 0x3A5A60u;
    SET_GPR_U32(ctx, 31, 0x3A5A68u);
    ctx->pc = 0x3A5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5A60u;
    // 0x3a5a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x3A5A60u, 0x3A5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5A68u;
label_3a5a68:
    // 0x3a5a68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a5a6c:
    // 0x3a5a6c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x3a5a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3a5a70:
    // 0x3a5a70: 0x8c650044  lw          $a1, 0x44($v1)
    ctx->pc = 0x3a5a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3a5a74:
    // 0x3a5a74: 0xa0f809  jalr        $a1
label_3a5a78:
    if (ctx->pc == 0x3A5A78u) {
        ctx->pc = 0x3A5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A74u;
        // 0x3a5a78: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5A7Cu;
        goto label_3a5a7c;
    }
    ctx->pc = 0x3A5A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3A5A7Cu);
        ctx->pc = 0x3A5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A74u;
        // 0x3a5a78: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5A74u, 0x3A5A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5A7Cu;
label_3a5a7c:
    // 0x3a5a7c: 0x28420201  slti        $v0, $v0, 0x201
    ctx->pc = 0x3a5a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
label_3a5a80:
    // 0x3a5a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a5a84:
    // 0x3a5a84: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a5a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3a5a88:
    // 0x3a5a88: 0x3e00008  jr          $ra
label_3a5a8c:
    if (ctx->pc == 0x3A5A8Cu) {
        ctx->pc = 0x3A5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A88u;
        // 0x3a5a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5A90u;
        goto label_fallthrough_0x3a5a88;
    }
    ctx->pc = 0x3A5A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A88u;
        // 0x3a5a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a5a88:
    ctx->pc = 0x3A5A90u;
}

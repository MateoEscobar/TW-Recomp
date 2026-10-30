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

// Function: sub_00139E40
// Address: 0x139e40 - 0x139e90
void sub_00139E40_0x139e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139E40_0x139e40");
#endif

    switch (ctx->pc) {
        case 0x139e40u: goto label_139e40;
        case 0x139e44u: goto label_139e44;
        case 0x139e48u: goto label_139e48;
        case 0x139e4cu: goto label_139e4c;
        case 0x139e50u: goto label_139e50;
        case 0x139e54u: goto label_139e54;
        case 0x139e58u: goto label_139e58;
        case 0x139e5cu: goto label_139e5c;
        case 0x139e60u: goto label_139e60;
        case 0x139e64u: goto label_139e64;
        case 0x139e68u: goto label_139e68;
        case 0x139e6cu: goto label_139e6c;
        case 0x139e70u: goto label_139e70;
        case 0x139e74u: goto label_139e74;
        case 0x139e78u: goto label_139e78;
        case 0x139e7cu: goto label_139e7c;
        case 0x139e80u: goto label_139e80;
        case 0x139e84u: goto label_139e84;
        case 0x139e88u: goto label_139e88;
        case 0x139e8cu: goto label_139e8c;
        default: break;
    }

    ctx->pc = 0x139e40u;

label_139e40:
    // 0x139e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_139e44:
    // 0x139e44: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x139e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_139e48:
    // 0x139e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_139e4c:
    // 0x139e4c: 0x8cc50334  lw          $a1, 0x334($a2)
    ctx->pc = 0x139e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 820)));
label_139e50:
    // 0x139e50: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
label_139e54:
    if (ctx->pc == 0x139E54u) {
        ctx->pc = 0x139E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E50u;
        // 0x139e54: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139E58u;
        goto label_139e58;
    }
    ctx->pc = 0x139E50u;
    {
        const bool branch_taken_0x139e50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x139e50) {
            ctx->pc = 0x139E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139E50u;
            // 0x139e54: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139E6Cu;
            goto label_139e6c;
        }
    }
    ctx->pc = 0x139E58u;
label_139e58:
    // 0x139e58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x139e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_139e5c:
    // 0x139e5c: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x139e5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_139e60:
    // 0x139e60: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x139e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_139e64:
    // 0x139e64: 0x10000004  b           . + 4 + (0x4 << 2)
label_139e68:
    if (ctx->pc == 0x139E68u) {
        ctx->pc = 0x139E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E64u;
        // 0x139e68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139E6Cu;
        goto label_139e6c;
    }
    ctx->pc = 0x139E64u;
    {
        const bool branch_taken_0x139e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E64u;
        // 0x139e68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e64) {
            ctx->pc = 0x139E78u;
            goto label_139e78;
        }
    }
    ctx->pc = 0x139E6Cu;
label_139e6c:
    // 0x139e6c: 0x84640228  lh          $a0, 0x228($v1)
    ctx->pc = 0x139e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 552)));
label_139e70:
    // 0x139e70: 0x8c62022c  lw          $v0, 0x22C($v1)
    ctx->pc = 0x139e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 556)));
label_139e74:
    // 0x139e74: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x139e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_139e78:
    // 0x139e78: 0x40f809  jalr        $v0
label_139e7c:
    if (ctx->pc == 0x139E7Cu) {
        ctx->pc = 0x139E80u;
        goto label_139e80;
    }
    ctx->pc = 0x139E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139E80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139E78u, 0x139E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139E80u;
label_139e80:
    // 0x139e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139e84:
    // 0x139e84: 0x3e00008  jr          $ra
label_139e88:
    if (ctx->pc == 0x139E88u) {
        ctx->pc = 0x139E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E84u;
        // 0x139e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139E8Cu;
        goto label_139e8c;
    }
    ctx->pc = 0x139E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E84u;
        // 0x139e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139E8Cu;
label_139e8c:
    // 0x139e8c: 0x0  nop
    ctx->pc = 0x139e8cu;
    // NOP
    ctx->pc = 0x139e90u;
}

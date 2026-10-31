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

// Function: sub_0033AF38
// Address: 0x33af38 - 0x33af78
void sub_0033AF38_0x33af38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AF38_0x33af38");
#endif

    switch (ctx->pc) {
        case 0x33af38u: goto label_33af38;
        case 0x33af3cu: goto label_33af3c;
        case 0x33af40u: goto label_33af40;
        case 0x33af44u: goto label_33af44;
        case 0x33af48u: goto label_33af48;
        case 0x33af4cu: goto label_33af4c;
        case 0x33af50u: goto label_33af50;
        case 0x33af54u: goto label_33af54;
        case 0x33af58u: goto label_33af58;
        case 0x33af5cu: goto label_33af5c;
        case 0x33af60u: goto label_33af60;
        case 0x33af64u: goto label_33af64;
        case 0x33af68u: goto label_33af68;
        case 0x33af6cu: goto label_33af6c;
        case 0x33af70u: goto label_33af70;
        case 0x33af74u: goto label_33af74;
        default: break;
    }

    ctx->pc = 0x33af38u;

label_33af38:
    // 0x33af38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33af38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33af3c:
    // 0x33af3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33af3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33af40:
    // 0x33af40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33af40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33af44:
    // 0x33af44: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x33af44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_33af48:
    // 0x33af48: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_33af4c:
    if (ctx->pc == 0x33AF4Cu) {
        ctx->pc = 0x33AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF48u;
        // 0x33af4c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AF50u;
        goto label_33af50;
    }
    ctx->pc = 0x33AF48u;
    {
        const bool branch_taken_0x33af48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33af48) {
            ctx->pc = 0x33AF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AF48u;
            // 0x33af4c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AF58u;
            goto label_33af58;
        }
    }
    ctx->pc = 0x33AF50u;
label_33af50:
    // 0x33af50: 0x10000006  b           . + 4 + (0x6 << 2)
label_33af54:
    if (ctx->pc == 0x33AF54u) {
        ctx->pc = 0x33AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF50u;
        // 0x33af54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AF58u;
        goto label_33af58;
    }
    ctx->pc = 0x33AF50u;
    {
        const bool branch_taken_0x33af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF50u;
        // 0x33af54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af50) {
            ctx->pc = 0x33AF6Cu;
            goto label_33af6c;
        }
    }
    ctx->pc = 0x33AF58u;
label_33af58:
    // 0x33af58: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x33af58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_33af5c:
    // 0x33af5c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x33af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_33af60:
    // 0x33af60: 0x60f809  jalr        $v1
label_33af64:
    if (ctx->pc == 0x33AF64u) {
        ctx->pc = 0x33AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF60u;
        // 0x33af64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AF68u;
        goto label_33af68;
    }
    ctx->pc = 0x33AF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33AF68u);
        ctx->pc = 0x33AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF60u;
        // 0x33af64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AF60u, 0x33AF68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33AF68u;
label_33af68:
    // 0x33af68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33af68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33af6c:
    // 0x33af6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33af6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33af70:
    // 0x33af70: 0x3e00008  jr          $ra
label_33af74:
    if (ctx->pc == 0x33AF74u) {
        ctx->pc = 0x33AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF70u;
        // 0x33af74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AF78u;
        goto label_fallthrough_0x33af70;
    }
    ctx->pc = 0x33AF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF70u;
        // 0x33af74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33af70:
    ctx->pc = 0x33AF78u;
}

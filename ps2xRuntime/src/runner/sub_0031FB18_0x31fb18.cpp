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

// Function: sub_0031FB18
// Address: 0x31fb18 - 0x31fb80
void sub_0031FB18_0x31fb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FB18_0x31fb18");
#endif

    switch (ctx->pc) {
        case 0x31fb18u: goto label_31fb18;
        case 0x31fb1cu: goto label_31fb1c;
        case 0x31fb20u: goto label_31fb20;
        case 0x31fb24u: goto label_31fb24;
        case 0x31fb28u: goto label_31fb28;
        case 0x31fb2cu: goto label_31fb2c;
        case 0x31fb30u: goto label_31fb30;
        case 0x31fb34u: goto label_31fb34;
        case 0x31fb38u: goto label_31fb38;
        case 0x31fb3cu: goto label_31fb3c;
        case 0x31fb40u: goto label_31fb40;
        case 0x31fb44u: goto label_31fb44;
        case 0x31fb48u: goto label_31fb48;
        case 0x31fb4cu: goto label_31fb4c;
        case 0x31fb50u: goto label_31fb50;
        case 0x31fb54u: goto label_31fb54;
        case 0x31fb58u: goto label_31fb58;
        case 0x31fb5cu: goto label_31fb5c;
        case 0x31fb60u: goto label_31fb60;
        case 0x31fb64u: goto label_31fb64;
        case 0x31fb68u: goto label_31fb68;
        case 0x31fb6cu: goto label_31fb6c;
        case 0x31fb70u: goto label_31fb70;
        case 0x31fb74u: goto label_31fb74;
        case 0x31fb78u: goto label_31fb78;
        case 0x31fb7cu: goto label_31fb7c;
        default: break;
    }

    ctx->pc = 0x31fb18u;

label_31fb18:
    // 0x31fb18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31fb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31fb1c:
    // 0x31fb1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31fb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31fb20:
    // 0x31fb20: 0xc087502  jal         func_21D408
label_31fb24:
    if (ctx->pc == 0x31FB24u) {
        ctx->pc = 0x31FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB20u;
        // 0x31fb24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB28u;
        goto label_31fb28;
    }
    ctx->pc = 0x31FB20u;
    SET_GPR_U32(ctx, 31, 0x31FB28u);
    ctx->pc = 0x31FB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FB20u;
    // 0x31fb24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31FB20u, 0x31FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB28u;
label_31fb28:
    // 0x31fb28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31fb28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fb2c:
    // 0x31fb2c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x31fb2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_31fb30:
    // 0x31fb30: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31fb34:
    if (ctx->pc == 0x31FB34u) {
        ctx->pc = 0x31FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB30u;
        // 0x31fb34: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB38u;
        goto label_31fb38;
    }
    ctx->pc = 0x31FB30u;
    {
        const bool branch_taken_0x31fb30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB30u;
        // 0x31fb34: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb30) {
            ctx->pc = 0x31FB44u;
            goto label_31fb44;
        }
    }
    ctx->pc = 0x31FB38u;
label_31fb38:
    // 0x31fb38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31fb3c:
    // 0x31fb3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_31fb40:
    if (ctx->pc == 0x31FB40u) {
        ctx->pc = 0x31FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB3Cu;
        // 0x31fb40: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB44u;
        goto label_31fb44;
    }
    ctx->pc = 0x31FB3Cu;
    {
        const bool branch_taken_0x31fb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB3Cu;
        // 0x31fb40: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb3c) {
            ctx->pc = 0x31FB48u;
            goto label_31fb48;
        }
    }
    ctx->pc = 0x31FB44u;
label_31fb44:
    // 0x31fb44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31fb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fb48:
    // 0x31fb48: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_31fb4c:
    if (ctx->pc == 0x31FB4Cu) {
        ctx->pc = 0x31FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB48u;
        // 0x31fb4c: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB50u;
        goto label_31fb50;
    }
    ctx->pc = 0x31FB48u;
    {
        const bool branch_taken_0x31fb48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fb48) {
            ctx->pc = 0x31FB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FB48u;
            // 0x31fb4c: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FB58u;
            goto label_31fb58;
        }
    }
    ctx->pc = 0x31FB50u;
label_31fb50:
    // 0x31fb50: 0x10000007  b           . + 4 + (0x7 << 2)
label_31fb54:
    if (ctx->pc == 0x31FB54u) {
        ctx->pc = 0x31FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB50u;
        // 0x31fb54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB58u;
        goto label_31fb58;
    }
    ctx->pc = 0x31FB50u;
    {
        const bool branch_taken_0x31fb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB50u;
        // 0x31fb54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb50) {
            ctx->pc = 0x31FB70u;
            goto label_31fb70;
        }
    }
    ctx->pc = 0x31FB58u;
label_31fb58:
    // 0x31fb58: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31fb58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31fb5c:
    // 0x31fb5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31fb60:
    // 0x31fb60: 0x40f809  jalr        $v0
label_31fb64:
    if (ctx->pc == 0x31FB64u) {
        ctx->pc = 0x31FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB60u;
        // 0x31fb64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB68u;
        goto label_31fb68;
    }
    ctx->pc = 0x31FB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31FB68u);
        ctx->pc = 0x31FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB60u;
        // 0x31fb64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FB60u, 0x31FB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FB68u;
label_31fb68:
    // 0x31fb68: 0x2442ffce  addiu       $v0, $v0, -0x32
    ctx->pc = 0x31fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967246));
label_31fb6c:
    // 0x31fb6c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x31fb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_31fb70:
    // 0x31fb70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31fb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31fb74:
    // 0x31fb74: 0x3e00008  jr          $ra
label_31fb78:
    if (ctx->pc == 0x31FB78u) {
        ctx->pc = 0x31FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB74u;
        // 0x31fb78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB7Cu;
        goto label_31fb7c;
    }
    ctx->pc = 0x31FB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB74u;
        // 0x31fb78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FB7Cu;
label_31fb7c:
    // 0x31fb7c: 0x0  nop
    ctx->pc = 0x31fb7cu;
    // NOP
    ctx->pc = 0x31fb80u;
}

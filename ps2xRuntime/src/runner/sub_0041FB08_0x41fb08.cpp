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

// Function: sub_0041FB08
// Address: 0x41fb08 - 0x41fb78
void sub_0041FB08_0x41fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FB08_0x41fb08");
#endif

    switch (ctx->pc) {
        case 0x41fb08u: goto label_41fb08;
        case 0x41fb0cu: goto label_41fb0c;
        case 0x41fb10u: goto label_41fb10;
        case 0x41fb14u: goto label_41fb14;
        case 0x41fb18u: goto label_41fb18;
        case 0x41fb1cu: goto label_41fb1c;
        case 0x41fb20u: goto label_41fb20;
        case 0x41fb24u: goto label_41fb24;
        case 0x41fb28u: goto label_41fb28;
        case 0x41fb2cu: goto label_41fb2c;
        case 0x41fb30u: goto label_41fb30;
        case 0x41fb34u: goto label_41fb34;
        case 0x41fb38u: goto label_41fb38;
        case 0x41fb3cu: goto label_41fb3c;
        case 0x41fb40u: goto label_41fb40;
        case 0x41fb44u: goto label_41fb44;
        case 0x41fb48u: goto label_41fb48;
        case 0x41fb4cu: goto label_41fb4c;
        case 0x41fb50u: goto label_41fb50;
        case 0x41fb54u: goto label_41fb54;
        case 0x41fb58u: goto label_41fb58;
        case 0x41fb5cu: goto label_41fb5c;
        case 0x41fb60u: goto label_41fb60;
        case 0x41fb64u: goto label_41fb64;
        case 0x41fb68u: goto label_41fb68;
        case 0x41fb6cu: goto label_41fb6c;
        case 0x41fb70u: goto label_41fb70;
        case 0x41fb74u: goto label_41fb74;
        default: break;
    }

    ctx->pc = 0x41fb08u;

label_41fb08:
    // 0x41fb08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41fb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41fb0c:
    // 0x41fb0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41fb10:
    // 0x41fb10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41fb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41fb14:
    // 0x41fb14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41fb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41fb18:
    // 0x41fb18: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x41fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_41fb1c:
    // 0x41fb1c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_41fb20:
    if (ctx->pc == 0x41FB20u) {
        ctx->pc = 0x41FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB1Cu;
        // 0x41fb20: 0x8e030128  lw          $v1, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FB24u;
        goto label_41fb24;
    }
    ctx->pc = 0x41FB1Cu;
    {
        const bool branch_taken_0x41fb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41fb1c) {
            ctx->pc = 0x41FB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FB1Cu;
            // 0x41fb20: 0x8e030128  lw          $v1, 0x128($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FB2Cu;
            goto label_41fb2c;
        }
    }
    ctx->pc = 0x41FB24u;
label_41fb24:
    // 0x41fb24: 0x10000010  b           . + 4 + (0x10 << 2)
label_41fb28:
    if (ctx->pc == 0x41FB28u) {
        ctx->pc = 0x41FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB24u;
        // 0x41fb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FB2Cu;
        goto label_41fb2c;
    }
    ctx->pc = 0x41FB24u;
    {
        const bool branch_taken_0x41fb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB24u;
        // 0x41fb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fb24) {
            ctx->pc = 0x41FB68u;
            goto label_41fb68;
        }
    }
    ctx->pc = 0x41FB2Cu;
label_41fb2c:
    // 0x41fb2c: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x41fb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_41fb30:
    // 0x41fb30: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x41fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_41fb34:
    // 0x41fb34: 0x40f809  jalr        $v0
label_41fb38:
    if (ctx->pc == 0x41FB38u) {
        ctx->pc = 0x41FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB34u;
        // 0x41fb38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FB3Cu;
        goto label_41fb3c;
    }
    ctx->pc = 0x41FB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41FB3Cu);
        ctx->pc = 0x41FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB34u;
        // 0x41fb38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FB34u, 0x41FB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41FB3Cu;
label_41fb3c:
    // 0x41fb3c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_41fb40:
    if (ctx->pc == 0x41FB40u) {
        ctx->pc = 0x41FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB3Cu;
        // 0x41fb40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FB44u;
        goto label_41fb44;
    }
    ctx->pc = 0x41FB3Cu;
    {
        const bool branch_taken_0x41fb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fb3c) {
            ctx->pc = 0x41FB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FB3Cu;
            // 0x41fb40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FB68u;
            goto label_41fb68;
        }
    }
    ctx->pc = 0x41FB44u;
label_41fb44:
    // 0x41fb44: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x41fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_41fb48:
    // 0x41fb48: 0x84640130  lh          $a0, 0x130($v1)
    ctx->pc = 0x41fb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
label_41fb4c:
    // 0x41fb4c: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x41fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_41fb50:
    // 0x41fb50: 0x40f809  jalr        $v0
label_41fb54:
    if (ctx->pc == 0x41FB54u) {
        ctx->pc = 0x41FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB50u;
        // 0x41fb54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FB58u;
        goto label_41fb58;
    }
    ctx->pc = 0x41FB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41FB58u);
        ctx->pc = 0x41FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB50u;
        // 0x41fb54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FB50u, 0x41FB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41FB58u;
label_41fb58:
    // 0x41fb58: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x41fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_41fb5c:
    // 0x41fb5c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x41fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_41fb60:
    // 0x41fb60: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x41fb60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41fb64:
    // 0x41fb64: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x41fb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_41fb68:
    // 0x41fb68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41fb68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41fb6c:
    // 0x41fb6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41fb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41fb70:
    // 0x41fb70: 0x3e00008  jr          $ra
label_41fb74:
    if (ctx->pc == 0x41FB74u) {
        ctx->pc = 0x41FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB70u;
        // 0x41fb74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FB78u;
        goto label_fallthrough_0x41fb70;
    }
    ctx->pc = 0x41FB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB70u;
        // 0x41fb74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41fb70:
    ctx->pc = 0x41FB78u;
}

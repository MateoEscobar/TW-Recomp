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

// Function: sub_0015DD38
// Address: 0x15dd38 - 0x15dd98
void sub_0015DD38_0x15dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DD38_0x15dd38");
#endif

    switch (ctx->pc) {
        case 0x15dd38u: goto label_15dd38;
        case 0x15dd3cu: goto label_15dd3c;
        case 0x15dd40u: goto label_15dd40;
        case 0x15dd44u: goto label_15dd44;
        case 0x15dd48u: goto label_15dd48;
        case 0x15dd4cu: goto label_15dd4c;
        case 0x15dd50u: goto label_15dd50;
        case 0x15dd54u: goto label_15dd54;
        case 0x15dd58u: goto label_15dd58;
        case 0x15dd5cu: goto label_15dd5c;
        case 0x15dd60u: goto label_15dd60;
        case 0x15dd64u: goto label_15dd64;
        case 0x15dd68u: goto label_15dd68;
        case 0x15dd6cu: goto label_15dd6c;
        case 0x15dd70u: goto label_15dd70;
        case 0x15dd74u: goto label_15dd74;
        case 0x15dd78u: goto label_15dd78;
        case 0x15dd7cu: goto label_15dd7c;
        case 0x15dd80u: goto label_15dd80;
        case 0x15dd84u: goto label_15dd84;
        case 0x15dd88u: goto label_15dd88;
        case 0x15dd8cu: goto label_15dd8c;
        case 0x15dd90u: goto label_15dd90;
        case 0x15dd94u: goto label_15dd94;
        default: break;
    }

    ctx->pc = 0x15dd38u;

label_15dd38:
    // 0x15dd38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15dd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15dd3c:
    // 0x15dd3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15dd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_15dd40:
    // 0x15dd40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15dd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15dd44:
    // 0x15dd44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15dd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15dd48:
    // 0x15dd48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15dd4c:
    // 0x15dd4c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15dd4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15dd50:
    // 0x15dd50: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_15dd54:
    // 0x15dd54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15dd58:
    // 0x15dd58: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x15dd58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_15dd5c:
    // 0x15dd5c: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x15dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_15dd60:
    // 0x15dd60: 0x60f809  jalr        $v1
label_15dd64:
    if (ctx->pc == 0x15DD64u) {
        ctx->pc = 0x15DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD60u;
        // 0x15dd64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD68u;
        goto label_15dd68;
    }
    ctx->pc = 0x15DD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DD68u);
        ctx->pc = 0x15DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD60u;
        // 0x15dd64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DD60u, 0x15DD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DD68u;
label_15dd68:
    // 0x15dd68: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x15dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_15dd6c:
    // 0x15dd6c: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x15dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_15dd70:
    // 0x15dd70: 0xc043e94  jal         func_10FA50
label_15dd74:
    if (ctx->pc == 0x15DD74u) {
        ctx->pc = 0x15DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD70u;
        // 0x15dd74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD78u;
        goto label_15dd78;
    }
    ctx->pc = 0x15DD70u;
    SET_GPR_U32(ctx, 31, 0x15DD78u);
    ctx->pc = 0x15DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD70u;
    // 0x15dd74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x15DD70u, 0x15DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD78u;
label_15dd78:
    // 0x15dd78: 0xc043eda  jal         func_10FB68
label_15dd7c:
    if (ctx->pc == 0x15DD7Cu) {
        ctx->pc = 0x15DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD78u;
        // 0x15dd7c: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD80u;
        goto label_15dd80;
    }
    ctx->pc = 0x15DD78u;
    SET_GPR_U32(ctx, 31, 0x15DD80u);
    ctx->pc = 0x15DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD78u;
    // 0x15dd7c: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB68u, 0x15DD78u, 0x15DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD80u;
label_15dd80:
    // 0x15dd80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15dd80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15dd84:
    // 0x15dd84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15dd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15dd88:
    // 0x15dd88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15dd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15dd8c:
    // 0x15dd8c: 0x3e00008  jr          $ra
label_15dd90:
    if (ctx->pc == 0x15DD90u) {
        ctx->pc = 0x15DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD8Cu;
        // 0x15dd90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD94u;
        goto label_15dd94;
    }
    ctx->pc = 0x15DD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD8Cu;
        // 0x15dd90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DD94u;
label_15dd94:
    // 0x15dd94: 0x0  nop
    ctx->pc = 0x15dd94u;
    // NOP
    ctx->pc = 0x15dd98u;
}

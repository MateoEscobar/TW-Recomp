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

// Function: sub_0029EE30
// Address: 0x29ee30 - 0x29eea0
void sub_0029EE30_0x29ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EE30_0x29ee30");
#endif

    switch (ctx->pc) {
        case 0x29ee30u: goto label_29ee30;
        case 0x29ee34u: goto label_29ee34;
        case 0x29ee38u: goto label_29ee38;
        case 0x29ee3cu: goto label_29ee3c;
        case 0x29ee40u: goto label_29ee40;
        case 0x29ee44u: goto label_29ee44;
        case 0x29ee48u: goto label_29ee48;
        case 0x29ee4cu: goto label_29ee4c;
        case 0x29ee50u: goto label_29ee50;
        case 0x29ee54u: goto label_29ee54;
        case 0x29ee58u: goto label_29ee58;
        case 0x29ee5cu: goto label_29ee5c;
        case 0x29ee60u: goto label_29ee60;
        case 0x29ee64u: goto label_29ee64;
        case 0x29ee68u: goto label_29ee68;
        case 0x29ee6cu: goto label_29ee6c;
        case 0x29ee70u: goto label_29ee70;
        case 0x29ee74u: goto label_29ee74;
        case 0x29ee78u: goto label_29ee78;
        case 0x29ee7cu: goto label_29ee7c;
        case 0x29ee80u: goto label_29ee80;
        case 0x29ee84u: goto label_29ee84;
        case 0x29ee88u: goto label_29ee88;
        case 0x29ee8cu: goto label_29ee8c;
        case 0x29ee90u: goto label_29ee90;
        case 0x29ee94u: goto label_29ee94;
        case 0x29ee98u: goto label_29ee98;
        case 0x29ee9cu: goto label_29ee9c;
        default: break;
    }

    ctx->pc = 0x29ee30u;

label_29ee30:
    // 0x29ee30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29ee34:
    // 0x29ee34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_29ee38:
    // 0x29ee38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29ee3c:
    // 0x29ee3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ee3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ee40:
    // 0x29ee40: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x29ee40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_29ee44:
    // 0x29ee44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_29ee48:
    if (ctx->pc == 0x29EE48u) {
        ctx->pc = 0x29EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE44u;
        // 0x29ee48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE4Cu;
        goto label_29ee4c;
    }
    ctx->pc = 0x29EE44u;
    {
        const bool branch_taken_0x29ee44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE44u;
        // 0x29ee48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee44) {
            ctx->pc = 0x29EE5Cu;
            goto label_29ee5c;
        }
    }
    ctx->pc = 0x29EE4Cu;
label_29ee4c:
    // 0x29ee4c: 0xc0a7b56  jal         func_29ED58
label_29ee50:
    if (ctx->pc == 0x29EE50u) {
        ctx->pc = 0x29EE54u;
        goto label_29ee54;
    }
    ctx->pc = 0x29EE4Cu;
    SET_GPR_U32(ctx, 31, 0x29EE54u);
    ctx->pc = 0x29ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ED58u, 0x29EE4Cu, 0x29EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE54u;
label_29ee54:
    // 0x29ee54: 0x1000000e  b           . + 4 + (0xE << 2)
label_29ee58:
    if (ctx->pc == 0x29EE58u) {
        ctx->pc = 0x29EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE54u;
        // 0x29ee58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE5Cu;
        goto label_29ee5c;
    }
    ctx->pc = 0x29EE54u;
    {
        const bool branch_taken_0x29ee54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE54u;
        // 0x29ee58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee54) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29EE5Cu;
label_29ee5c:
    // 0x29ee5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29ee5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29ee60:
    // 0x29ee60: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x29ee60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
label_29ee64:
    // 0x29ee64: 0x8083002e  lb          $v1, 0x2E($a0)
    ctx->pc = 0x29ee64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_29ee68:
    // 0x29ee68: 0x5c600008  bgtzl       $v1, . + 4 + (0x8 << 2)
label_29ee6c:
    if (ctx->pc == 0x29EE6Cu) {
        ctx->pc = 0x29EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE68u;
        // 0x29ee6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE70u;
        goto label_29ee70;
    }
    ctx->pc = 0x29EE68u;
    {
        const bool branch_taken_0x29ee68 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x29ee68) {
            ctx->pc = 0x29EE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EE68u;
            // 0x29ee6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EE8Cu;
            goto label_29ee8c;
        }
    }
    ctx->pc = 0x29EE70u;
label_29ee70:
    // 0x29ee70: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29ee74:
    // 0x29ee74: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x29ee74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_29ee78:
    // 0x29ee78: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x29ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_29ee7c:
    // 0x29ee7c: 0x60f809  jalr        $v1
label_29ee80:
    if (ctx->pc == 0x29EE80u) {
        ctx->pc = 0x29EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE7Cu;
        // 0x29ee80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE84u;
        goto label_29ee84;
    }
    ctx->pc = 0x29EE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29EE84u);
        ctx->pc = 0x29EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE7Cu;
        // 0x29ee80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EE7Cu, 0x29EE84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EE84u;
label_29ee84:
    // 0x29ee84: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x29ee84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_29ee88:
    // 0x29ee88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ee8c:
    // 0x29ee8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29ee8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29ee90:
    // 0x29ee90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ee90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ee94:
    // 0x29ee94: 0x3e00008  jr          $ra
label_29ee98:
    if (ctx->pc == 0x29EE98u) {
        ctx->pc = 0x29EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE94u;
        // 0x29ee98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE9Cu;
        goto label_29ee9c;
    }
    ctx->pc = 0x29EE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE94u;
        // 0x29ee98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EE9Cu;
label_29ee9c:
    // 0x29ee9c: 0x0  nop
    ctx->pc = 0x29ee9cu;
    // NOP
    ctx->pc = 0x29eea0u;
}

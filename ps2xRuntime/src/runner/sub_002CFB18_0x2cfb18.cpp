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

// Function: sub_002CFB18
// Address: 0x2cfb18 - 0x2cfb90
void sub_002CFB18_0x2cfb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFB18_0x2cfb18");
#endif

    switch (ctx->pc) {
        case 0x2cfb18u: goto label_2cfb18;
        case 0x2cfb1cu: goto label_2cfb1c;
        case 0x2cfb20u: goto label_2cfb20;
        case 0x2cfb24u: goto label_2cfb24;
        case 0x2cfb28u: goto label_2cfb28;
        case 0x2cfb2cu: goto label_2cfb2c;
        case 0x2cfb30u: goto label_2cfb30;
        case 0x2cfb34u: goto label_2cfb34;
        case 0x2cfb38u: goto label_2cfb38;
        case 0x2cfb3cu: goto label_2cfb3c;
        case 0x2cfb40u: goto label_2cfb40;
        case 0x2cfb44u: goto label_2cfb44;
        case 0x2cfb48u: goto label_2cfb48;
        case 0x2cfb4cu: goto label_2cfb4c;
        case 0x2cfb50u: goto label_2cfb50;
        case 0x2cfb54u: goto label_2cfb54;
        case 0x2cfb58u: goto label_2cfb58;
        case 0x2cfb5cu: goto label_2cfb5c;
        case 0x2cfb60u: goto label_2cfb60;
        case 0x2cfb64u: goto label_2cfb64;
        case 0x2cfb68u: goto label_2cfb68;
        case 0x2cfb6cu: goto label_2cfb6c;
        case 0x2cfb70u: goto label_2cfb70;
        case 0x2cfb74u: goto label_2cfb74;
        case 0x2cfb78u: goto label_2cfb78;
        case 0x2cfb7cu: goto label_2cfb7c;
        case 0x2cfb80u: goto label_2cfb80;
        case 0x2cfb84u: goto label_2cfb84;
        case 0x2cfb88u: goto label_2cfb88;
        case 0x2cfb8cu: goto label_2cfb8c;
        default: break;
    }

    ctx->pc = 0x2cfb18u;

label_2cfb18:
    // 0x2cfb18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cfb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cfb1c:
    // 0x2cfb1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cfb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cfb20:
    // 0x2cfb20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cfb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2cfb24:
    // 0x2cfb24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cfb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb28:
    // 0x2cfb28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cfb2c:
    // 0x2cfb2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cfb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cfb30:
    // 0x2cfb30: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2cfb30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cfb34:
    // 0x2cfb34: 0xc08a08a  jal         func_228228
label_2cfb38:
    if (ctx->pc == 0x2CFB38u) {
        ctx->pc = 0x2CFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB34u;
        // 0x2cfb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB3Cu;
        goto label_2cfb3c;
    }
    ctx->pc = 0x2CFB34u;
    SET_GPR_U32(ctx, 31, 0x2CFB3Cu);
    ctx->pc = 0x2CFB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB34u;
    // 0x2cfb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2CFB34u, 0x2CFB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB3Cu;
label_2cfb3c:
    // 0x2cfb3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2cfb40:
    if (ctx->pc == 0x2CFB40u) {
        ctx->pc = 0x2CFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB3Cu;
        // 0x2cfb40: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB44u;
        goto label_2cfb44;
    }
    ctx->pc = 0x2CFB3Cu;
    {
        const bool branch_taken_0x2cfb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb3c) {
            ctx->pc = 0x2CFB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFB3Cu;
            // 0x2cfb40: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFB50u;
            goto label_2cfb50;
        }
    }
    ctx->pc = 0x2CFB44u;
label_2cfb44:
    // 0x2cfb44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfb48:
    // 0x2cfb48: 0xa2220039  sb          $v0, 0x39($s1)
    ctx->pc = 0x2cfb48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 57), (uint8_t)GPR_U32(ctx, 2));
label_2cfb4c:
    // 0x2cfb4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cfb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cfb50:
    // 0x2cfb50: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cfb50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cfb54:
    // 0x2cfb54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cfb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cfb58:
    // 0x2cfb58: 0x40f809  jalr        $v0
label_2cfb5c:
    if (ctx->pc == 0x2CFB5Cu) {
        ctx->pc = 0x2CFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB58u;
        // 0x2cfb5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB60u;
        goto label_2cfb60;
    }
    ctx->pc = 0x2CFB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CFB60u);
        ctx->pc = 0x2CFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB58u;
        // 0x2cfb5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB58u, 0x2CFB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CFB60u;
label_2cfb60:
    // 0x2cfb60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb64:
    // 0x2cfb64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cfb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb68:
    // 0x2cfb68: 0xc08e1a4  jal         func_238690
label_2cfb6c:
    if (ctx->pc == 0x2CFB6Cu) {
        ctx->pc = 0x2CFB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB68u;
        // 0x2cfb6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB70u;
        goto label_2cfb70;
    }
    ctx->pc = 0x2CFB68u;
    SET_GPR_U32(ctx, 31, 0x2CFB70u);
    ctx->pc = 0x2CFB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB68u;
    // 0x2cfb6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2CFB68u, 0x2CFB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB70u;
label_2cfb70:
    // 0x2cfb70: 0x8225003c  lb          $a1, 0x3C($s1)
    ctx->pc = 0x2cfb70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
label_2cfb74:
    // 0x2cfb74: 0xc0a337e  jal         func_28CDF8
label_2cfb78:
    if (ctx->pc == 0x2CFB78u) {
        ctx->pc = 0x2CFB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB74u;
        // 0x2cfb78: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB7Cu;
        goto label_2cfb7c;
    }
    ctx->pc = 0x2CFB74u;
    SET_GPR_U32(ctx, 31, 0x2CFB7Cu);
    ctx->pc = 0x2CFB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB74u;
    // 0x2cfb78: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2CFB74u, 0x2CFB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB7Cu;
label_2cfb7c:
    // 0x2cfb7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cfb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfb80:
    // 0x2cfb80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cfb80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfb84:
    // 0x2cfb84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfb88:
    // 0x2cfb88: 0x3e00008  jr          $ra
label_2cfb8c:
    if (ctx->pc == 0x2CFB8Cu) {
        ctx->pc = 0x2CFB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB88u;
        // 0x2cfb8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB90u;
        goto label_fallthrough_0x2cfb88;
    }
    ctx->pc = 0x2CFB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB88u;
        // 0x2cfb8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cfb88:
    ctx->pc = 0x2CFB90u;
}

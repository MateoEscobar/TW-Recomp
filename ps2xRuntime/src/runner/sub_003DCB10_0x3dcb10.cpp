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

// Function: sub_003DCB10
// Address: 0x3dcb10 - 0x3dcb68
void sub_003DCB10_0x3dcb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCB10_0x3dcb10");
#endif

    switch (ctx->pc) {
        case 0x3dcb10u: goto label_3dcb10;
        case 0x3dcb14u: goto label_3dcb14;
        case 0x3dcb18u: goto label_3dcb18;
        case 0x3dcb1cu: goto label_3dcb1c;
        case 0x3dcb20u: goto label_3dcb20;
        case 0x3dcb24u: goto label_3dcb24;
        case 0x3dcb28u: goto label_3dcb28;
        case 0x3dcb2cu: goto label_3dcb2c;
        case 0x3dcb30u: goto label_3dcb30;
        case 0x3dcb34u: goto label_3dcb34;
        case 0x3dcb38u: goto label_3dcb38;
        case 0x3dcb3cu: goto label_3dcb3c;
        case 0x3dcb40u: goto label_3dcb40;
        case 0x3dcb44u: goto label_3dcb44;
        case 0x3dcb48u: goto label_3dcb48;
        case 0x3dcb4cu: goto label_3dcb4c;
        case 0x3dcb50u: goto label_3dcb50;
        case 0x3dcb54u: goto label_3dcb54;
        case 0x3dcb58u: goto label_3dcb58;
        case 0x3dcb5cu: goto label_3dcb5c;
        case 0x3dcb60u: goto label_3dcb60;
        case 0x3dcb64u: goto label_3dcb64;
        default: break;
    }

    ctx->pc = 0x3dcb10u;

label_3dcb10:
    // 0x3dcb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dcb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3dcb14:
    // 0x3dcb14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dcb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3dcb18:
    // 0x3dcb18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3dcb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dcb1c:
    // 0x3dcb1c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3dcb1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dcb20:
    // 0x3dcb20: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dcb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dcb24:
    // 0x3dcb24: 0x40f809  jalr        $v0
label_3dcb28:
    if (ctx->pc == 0x3DCB28u) {
        ctx->pc = 0x3DCB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB24u;
        // 0x3dcb28: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCB2Cu;
        goto label_3dcb2c;
    }
    ctx->pc = 0x3DCB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DCB2Cu);
        ctx->pc = 0x3DCB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB24u;
        // 0x3dcb28: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCB24u, 0x3DCB2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DCB2Cu;
label_3dcb2c:
    // 0x3dcb2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dcb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dcb30:
    // 0x3dcb30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3dcb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dcb34:
    // 0x3dcb34: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3dcb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3dcb38:
    // 0x3dcb38: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3dcb3c:
    if (ctx->pc == 0x3DCB3Cu) {
        ctx->pc = 0x3DCB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB38u;
        // 0x3dcb3c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCB40u;
        goto label_3dcb40;
    }
    ctx->pc = 0x3DCB38u;
    {
        const bool branch_taken_0x3dcb38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DCB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB38u;
        // 0x3dcb3c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcb38) {
            ctx->pc = 0x3DCB4Cu;
            goto label_3dcb4c;
        }
    }
    ctx->pc = 0x3DCB40u;
label_3dcb40:
    // 0x3dcb40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dcb40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dcb44:
    // 0x3dcb44: 0x10000004  b           . + 4 + (0x4 << 2)
label_3dcb48:
    if (ctx->pc == 0x3DCB48u) {
        ctx->pc = 0x3DCB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB44u;
        // 0x3dcb48: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCB4Cu;
        goto label_3dcb4c;
    }
    ctx->pc = 0x3DCB44u;
    {
        const bool branch_taken_0x3dcb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB44u;
        // 0x3dcb48: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcb44) {
            ctx->pc = 0x3DCB58u;
            goto label_3dcb58;
        }
    }
    ctx->pc = 0x3DCB4Cu;
label_3dcb4c:
    // 0x3dcb4c: 0xc0e93de  jal         func_3A4F78
label_3dcb50:
    if (ctx->pc == 0x3DCB50u) {
        ctx->pc = 0x3DCB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB4Cu;
        // 0x3dcb50: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCB54u;
        goto label_3dcb54;
    }
    ctx->pc = 0x3DCB4Cu;
    SET_GPR_U32(ctx, 31, 0x3DCB54u);
    ctx->pc = 0x3DCB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCB4Cu;
    // 0x3dcb50: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3DCB4Cu, 0x3DCB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCB54u;
label_3dcb54:
    // 0x3dcb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dcb58:
    // 0x3dcb58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dcb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dcb5c:
    // 0x3dcb5c: 0x3e00008  jr          $ra
label_3dcb60:
    if (ctx->pc == 0x3DCB60u) {
        ctx->pc = 0x3DCB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB5Cu;
        // 0x3dcb60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCB64u;
        goto label_3dcb64;
    }
    ctx->pc = 0x3DCB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB5Cu;
        // 0x3dcb60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCB64u;
label_3dcb64:
    // 0x3dcb64: 0x0  nop
    ctx->pc = 0x3dcb64u;
    // NOP
    ctx->pc = 0x3dcb68u;
}

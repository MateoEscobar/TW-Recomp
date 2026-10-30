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

// Function: sub_001EFDD0
// Address: 0x1efdd0 - 0x1efe40
void sub_001EFDD0_0x1efdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFDD0_0x1efdd0");
#endif

    switch (ctx->pc) {
        case 0x1efdd0u: goto label_1efdd0;
        case 0x1efdd4u: goto label_1efdd4;
        case 0x1efdd8u: goto label_1efdd8;
        case 0x1efddcu: goto label_1efddc;
        case 0x1efde0u: goto label_1efde0;
        case 0x1efde4u: goto label_1efde4;
        case 0x1efde8u: goto label_1efde8;
        case 0x1efdecu: goto label_1efdec;
        case 0x1efdf0u: goto label_1efdf0;
        case 0x1efdf4u: goto label_1efdf4;
        case 0x1efdf8u: goto label_1efdf8;
        case 0x1efdfcu: goto label_1efdfc;
        case 0x1efe00u: goto label_1efe00;
        case 0x1efe04u: goto label_1efe04;
        case 0x1efe08u: goto label_1efe08;
        case 0x1efe0cu: goto label_1efe0c;
        case 0x1efe10u: goto label_1efe10;
        case 0x1efe14u: goto label_1efe14;
        case 0x1efe18u: goto label_1efe18;
        case 0x1efe1cu: goto label_1efe1c;
        case 0x1efe20u: goto label_1efe20;
        case 0x1efe24u: goto label_1efe24;
        case 0x1efe28u: goto label_1efe28;
        case 0x1efe2cu: goto label_1efe2c;
        case 0x1efe30u: goto label_1efe30;
        case 0x1efe34u: goto label_1efe34;
        case 0x1efe38u: goto label_1efe38;
        case 0x1efe3cu: goto label_1efe3c;
        default: break;
    }

    ctx->pc = 0x1efdd0u;

label_1efdd0:
    // 0x1efdd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1efdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1efdd4:
    // 0x1efdd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1efdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1efdd8:
    // 0x1efdd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1efdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1efddc:
    // 0x1efddc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1efddcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_1efde0:
    // 0x1efde0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1efde4:
    // 0x1efde4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1efde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1efde8:
    // 0x1efde8: 0x3610ff00  ori         $s0, $s0, 0xFF00
    ctx->pc = 0x1efde8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65280);
label_1efdec:
    // 0x1efdec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1efdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1efdf0:
    // 0x1efdf0: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x1efdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
label_1efdf4:
    // 0x1efdf4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1efdf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1efdf8:
    // 0x1efdf8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1efdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1efdfc:
    // 0x1efdfc: 0x60f809  jalr        $v1
label_1efe00:
    if (ctx->pc == 0x1EFE00u) {
        ctx->pc = 0x1EFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDFCu;
        // 0x1efe00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFE04u;
        goto label_1efe04;
    }
    ctx->pc = 0x1EFDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EFE04u);
        ctx->pc = 0x1EFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDFCu;
        // 0x1efe00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFDFCu, 0x1EFE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFE04u;
label_1efe04:
    // 0x1efe04: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x1efe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1efe08:
    // 0x1efe08: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
label_1efe0c:
    if (ctx->pc == 0x1EFE0Cu) {
        ctx->pc = 0x1EFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE08u;
        // 0x1efe0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFE10u;
        goto label_1efe10;
    }
    ctx->pc = 0x1EFE08u;
    {
        const bool branch_taken_0x1efe08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1EFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE08u;
        // 0x1efe0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe08) {
            ctx->pc = 0x1EFE2Cu;
            goto label_1efe2c;
        }
    }
    ctx->pc = 0x1EFE10u;
label_1efe10:
    // 0x1efe10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1efe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1efe14:
    // 0x1efe14: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1efe14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1efe18:
    // 0x1efe18: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1efe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1efe1c:
    // 0x1efe1c: 0x60f809  jalr        $v1
label_1efe20:
    if (ctx->pc == 0x1EFE20u) {
        ctx->pc = 0x1EFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE1Cu;
        // 0x1efe20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFE24u;
        goto label_1efe24;
    }
    ctx->pc = 0x1EFE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EFE24u);
        ctx->pc = 0x1EFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE1Cu;
        // 0x1efe20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFE1Cu, 0x1EFE24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFE24u;
label_1efe24:
    // 0x1efe24: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x1efe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1efe28:
    // 0x1efe28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1efe28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1efe2c:
    // 0x1efe2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1efe2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1efe30:
    // 0x1efe30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efe30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1efe34:
    // 0x1efe34: 0x3e00008  jr          $ra
label_1efe38:
    if (ctx->pc == 0x1EFE38u) {
        ctx->pc = 0x1EFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE34u;
        // 0x1efe38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFE3Cu;
        goto label_1efe3c;
    }
    ctx->pc = 0x1EFE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE34u;
        // 0x1efe38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFE3Cu;
label_1efe3c:
    // 0x1efe3c: 0x0  nop
    ctx->pc = 0x1efe3cu;
    // NOP
    ctx->pc = 0x1efe40u;
}

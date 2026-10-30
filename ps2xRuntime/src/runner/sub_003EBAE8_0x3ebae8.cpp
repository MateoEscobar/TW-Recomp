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

// Function: sub_003EBAE8
// Address: 0x3ebae8 - 0x3ebb70
void sub_003EBAE8_0x3ebae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBAE8_0x3ebae8");
#endif

    switch (ctx->pc) {
        case 0x3ebae8u: goto label_3ebae8;
        case 0x3ebaecu: goto label_3ebaec;
        case 0x3ebaf0u: goto label_3ebaf0;
        case 0x3ebaf4u: goto label_3ebaf4;
        case 0x3ebaf8u: goto label_3ebaf8;
        case 0x3ebafcu: goto label_3ebafc;
        case 0x3ebb00u: goto label_3ebb00;
        case 0x3ebb04u: goto label_3ebb04;
        case 0x3ebb08u: goto label_3ebb08;
        case 0x3ebb0cu: goto label_3ebb0c;
        case 0x3ebb10u: goto label_3ebb10;
        case 0x3ebb14u: goto label_3ebb14;
        case 0x3ebb18u: goto label_3ebb18;
        case 0x3ebb1cu: goto label_3ebb1c;
        case 0x3ebb20u: goto label_3ebb20;
        case 0x3ebb24u: goto label_3ebb24;
        case 0x3ebb28u: goto label_3ebb28;
        case 0x3ebb2cu: goto label_3ebb2c;
        case 0x3ebb30u: goto label_3ebb30;
        case 0x3ebb34u: goto label_3ebb34;
        case 0x3ebb38u: goto label_3ebb38;
        case 0x3ebb3cu: goto label_3ebb3c;
        case 0x3ebb40u: goto label_3ebb40;
        case 0x3ebb44u: goto label_3ebb44;
        case 0x3ebb48u: goto label_3ebb48;
        case 0x3ebb4cu: goto label_3ebb4c;
        case 0x3ebb50u: goto label_3ebb50;
        case 0x3ebb54u: goto label_3ebb54;
        case 0x3ebb58u: goto label_3ebb58;
        case 0x3ebb5cu: goto label_3ebb5c;
        case 0x3ebb60u: goto label_3ebb60;
        case 0x3ebb64u: goto label_3ebb64;
        case 0x3ebb68u: goto label_3ebb68;
        case 0x3ebb6cu: goto label_3ebb6c;
        default: break;
    }

    ctx->pc = 0x3ebae8u;

label_3ebae8:
    // 0x3ebae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ebae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ebaec:
    // 0x3ebaec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ebaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3ebaf0:
    // 0x3ebaf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ebaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ebaf4:
    // 0x3ebaf4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ebaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ebaf8:
    // 0x3ebaf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ebaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ebafc:
    // 0x3ebafc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ebafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ebb00:
    // 0x3ebb00: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3ebb00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ebb04:
    // 0x3ebb04: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ebb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ebb08:
    // 0x3ebb08: 0x40f809  jalr        $v0
label_3ebb0c:
    if (ctx->pc == 0x3EBB0Cu) {
        ctx->pc = 0x3EBB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB08u;
        // 0x3ebb0c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB10u;
        goto label_3ebb10;
    }
    ctx->pc = 0x3EBB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EBB10u);
        ctx->pc = 0x3EBB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB08u;
        // 0x3ebb0c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBB08u, 0x3EBB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EBB10u;
label_3ebb10:
    // 0x3ebb10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ebb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ebb14:
    // 0x3ebb14: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3ebb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ebb18:
    // 0x3ebb18: 0x56020011  bnel        $s0, $v0, . + 4 + (0x11 << 2)
label_3ebb1c:
    if (ctx->pc == 0x3EBB1Cu) {
        ctx->pc = 0x3EBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB18u;
        // 0x3ebb1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB20u;
        goto label_3ebb20;
    }
    ctx->pc = 0x3EBB18u;
    {
        const bool branch_taken_0x3ebb18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ebb18) {
            ctx->pc = 0x3EBB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBB18u;
            // 0x3ebb1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBB60u;
            goto label_3ebb60;
        }
    }
    ctx->pc = 0x3EBB20u;
label_3ebb20:
    // 0x3ebb20: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3ebb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3ebb24:
    // 0x3ebb24: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3ebb28:
    if (ctx->pc == 0x3EBB28u) {
        ctx->pc = 0x3EBB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB24u;
        // 0x3ebb28: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB2Cu;
        goto label_3ebb2c;
    }
    ctx->pc = 0x3EBB24u;
    {
        const bool branch_taken_0x3ebb24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebb24) {
            ctx->pc = 0x3EBB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBB24u;
            // 0x3ebb28: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBB3Cu;
            goto label_3ebb3c;
        }
    }
    ctx->pc = 0x3EBB2Cu;
label_3ebb2c:
    // 0x3ebb2c: 0xc045cfa  jal         func_1173E8
label_3ebb30:
    if (ctx->pc == 0x3EBB30u) {
        ctx->pc = 0x3EBB34u;
        goto label_3ebb34;
    }
    ctx->pc = 0x3EBB2Cu;
    SET_GPR_U32(ctx, 31, 0x3EBB34u);
    ctx->pc = 0x1173E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1173E8u, 0x3EBB2Cu, 0x3EBB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBB34u;
label_3ebb34:
    // 0x3ebb34: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x3ebb34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_3ebb38:
    // 0x3ebb38: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3ebb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ebb3c:
    // 0x3ebb3c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_3ebb40:
    if (ctx->pc == 0x3EBB40u) {
        ctx->pc = 0x3EBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB3Cu;
        // 0x3ebb40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB44u;
        goto label_3ebb44;
    }
    ctx->pc = 0x3EBB3Cu;
    {
        const bool branch_taken_0x3ebb3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB3Cu;
        // 0x3ebb40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb3c) {
            ctx->pc = 0x3EBB60u;
            goto label_3ebb60;
        }
    }
    ctx->pc = 0x3EBB44u;
label_3ebb44:
    // 0x3ebb44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3ebb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ebb48:
    // 0x3ebb48: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3ebb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3ebb4c:
    // 0x3ebb4c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3ebb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3ebb50:
    // 0x3ebb50: 0x60f809  jalr        $v1
label_3ebb54:
    if (ctx->pc == 0x3EBB54u) {
        ctx->pc = 0x3EBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB50u;
        // 0x3ebb54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB58u;
        goto label_3ebb58;
    }
    ctx->pc = 0x3EBB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EBB58u);
        ctx->pc = 0x3EBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB50u;
        // 0x3ebb54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBB50u, 0x3EBB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EBB58u;
label_3ebb58:
    // 0x3ebb58: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x3ebb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_3ebb5c:
    // 0x3ebb5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ebb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ebb60:
    // 0x3ebb60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ebb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ebb64:
    // 0x3ebb64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ebb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ebb68:
    // 0x3ebb68: 0x3e00008  jr          $ra
label_3ebb6c:
    if (ctx->pc == 0x3EBB6Cu) {
        ctx->pc = 0x3EBB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB68u;
        // 0x3ebb6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB70u;
        goto label_fallthrough_0x3ebb68;
    }
    ctx->pc = 0x3EBB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB68u;
        // 0x3ebb6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ebb68:
    ctx->pc = 0x3EBB70u;
}

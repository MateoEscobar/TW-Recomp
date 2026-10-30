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

// Function: sub_0042CC88
// Address: 0x42cc88 - 0x42cd40
void sub_0042CC88_0x42cc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CC88_0x42cc88");
#endif

    switch (ctx->pc) {
        case 0x42cc88u: goto label_42cc88;
        case 0x42cc8cu: goto label_42cc8c;
        case 0x42cc90u: goto label_42cc90;
        case 0x42cc94u: goto label_42cc94;
        case 0x42cc98u: goto label_42cc98;
        case 0x42cc9cu: goto label_42cc9c;
        case 0x42cca0u: goto label_42cca0;
        case 0x42cca4u: goto label_42cca4;
        case 0x42cca8u: goto label_42cca8;
        case 0x42ccacu: goto label_42ccac;
        case 0x42ccb0u: goto label_42ccb0;
        case 0x42ccb4u: goto label_42ccb4;
        case 0x42ccb8u: goto label_42ccb8;
        case 0x42ccbcu: goto label_42ccbc;
        case 0x42ccc0u: goto label_42ccc0;
        case 0x42ccc4u: goto label_42ccc4;
        case 0x42ccc8u: goto label_42ccc8;
        case 0x42ccccu: goto label_42cccc;
        case 0x42ccd0u: goto label_42ccd0;
        case 0x42ccd4u: goto label_42ccd4;
        case 0x42ccd8u: goto label_42ccd8;
        case 0x42ccdcu: goto label_42ccdc;
        case 0x42cce0u: goto label_42cce0;
        case 0x42cce4u: goto label_42cce4;
        case 0x42cce8u: goto label_42cce8;
        case 0x42ccecu: goto label_42ccec;
        case 0x42ccf0u: goto label_42ccf0;
        case 0x42ccf4u: goto label_42ccf4;
        case 0x42ccf8u: goto label_42ccf8;
        case 0x42ccfcu: goto label_42ccfc;
        case 0x42cd00u: goto label_42cd00;
        case 0x42cd04u: goto label_42cd04;
        case 0x42cd08u: goto label_42cd08;
        case 0x42cd0cu: goto label_42cd0c;
        case 0x42cd10u: goto label_42cd10;
        case 0x42cd14u: goto label_42cd14;
        case 0x42cd18u: goto label_42cd18;
        case 0x42cd1cu: goto label_42cd1c;
        case 0x42cd20u: goto label_42cd20;
        case 0x42cd24u: goto label_42cd24;
        case 0x42cd28u: goto label_42cd28;
        case 0x42cd2cu: goto label_42cd2c;
        case 0x42cd30u: goto label_42cd30;
        case 0x42cd34u: goto label_42cd34;
        case 0x42cd38u: goto label_42cd38;
        case 0x42cd3cu: goto label_42cd3c;
        default: break;
    }

    ctx->pc = 0x42cc88u;

label_42cc88:
    // 0x42cc88: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x42cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_42cc8c:
    // 0x42cc8c: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x42cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_42cc90:
    // 0x42cc90: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x42cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_42cc94:
    // 0x42cc94: 0x8fa20644  lw          $v0, 0x644($sp)
    ctx->pc = 0x42cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_42cc98:
    // 0x42cc98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42cc9c:
    // 0x42cc9c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_42cca0:
    if (ctx->pc == 0x42CCA0u) {
        ctx->pc = 0x42CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CC9Cu;
        // 0x42cca0: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CCA4u;
        goto label_42cca4;
    }
    ctx->pc = 0x42CC9Cu;
    {
        const bool branch_taken_0x42cc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CC9Cu;
        // 0x42cca0: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cc9c) {
            ctx->pc = 0x42CCD8u;
            goto label_42ccd8;
        }
    }
    ctx->pc = 0x42CCA4u;
label_42cca4:
    // 0x42cca4: 0x0  nop
    ctx->pc = 0x42cca4u;
    // NOP
label_42cca8:
    // 0x42cca8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42ccac:
    // 0x42ccac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x42ccacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42ccb0:
    // 0x42ccb0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x42ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_42ccb4:
    // 0x42ccb4: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x42ccb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_42ccb8:
    // 0x42ccb8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x42ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42ccbc:
    // 0x42ccbc: 0x60f809  jalr        $v1
label_42ccc0:
    if (ctx->pc == 0x42CCC0u) {
        ctx->pc = 0x42CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CCBCu;
        // 0x42ccc0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CCC4u;
        goto label_42ccc4;
    }
    ctx->pc = 0x42CCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42CCC4u);
        ctx->pc = 0x42CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CCBCu;
        // 0x42ccc0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CCBCu, 0x42CCC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42CCC4u;
label_42ccc4:
    // 0x42ccc4: 0x8fa30644  lw          $v1, 0x644($sp)
    ctx->pc = 0x42ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_42ccc8:
    // 0x42ccc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42cccc:
    // 0x42cccc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_42ccd0:
    if (ctx->pc == 0x42CCD0u) {
        ctx->pc = 0x42CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CCCCu;
        // 0x42ccd0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CCD4u;
        goto label_42ccd4;
    }
    ctx->pc = 0x42CCCCu;
    {
        const bool branch_taken_0x42cccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CCCCu;
        // 0x42ccd0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cccc) {
            ctx->pc = 0x42CCA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42cca8;
        }
    }
    ctx->pc = 0x42CCD4u;
label_42ccd4:
    // 0x42ccd4: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x42ccd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_42ccd8:
    // 0x42ccd8: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x42ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_42ccdc:
    // 0x42ccdc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42cce0:
    // 0x42cce0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x42cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_42cce4:
    // 0x42cce4: 0x8fa60640  lw          $a2, 0x640($sp)
    ctx->pc = 0x42cce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_42cce8:
    // 0x42cce8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42ccec:
    // 0x42ccec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42ccf0:
    // 0x42ccf0: 0xc10b29a  jal         func_42CA68
label_42ccf4:
    if (ctx->pc == 0x42CCF4u) {
        ctx->pc = 0x42CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CCF0u;
        // 0x42ccf4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CCF8u;
        goto label_42ccf8;
    }
    ctx->pc = 0x42CCF0u;
    SET_GPR_U32(ctx, 31, 0x42CCF8u);
    ctx->pc = 0x42CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42CCF0u;
    // 0x42ccf4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CA68u, 0x42CCF0u, 0x42CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42CCF8u;
label_42ccf8:
    // 0x42ccf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42ccf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42ccfc:
    // 0x42ccfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42ccfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_42cd00:
    // 0x42cd00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42cd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42cd04:
    // 0x42cd04: 0xc10b262  jal         func_42C988
label_42cd08:
    if (ctx->pc == 0x42CD08u) {
        ctx->pc = 0x42CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CD04u;
        // 0x42cd08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CD0Cu;
        goto label_42cd0c;
    }
    ctx->pc = 0x42CD04u;
    SET_GPR_U32(ctx, 31, 0x42CD0Cu);
    ctx->pc = 0x42CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42CD04u;
    // 0x42cd08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C988u, 0x42CD04u, 0x42CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42CD0Cu;
label_42cd0c:
    // 0x42cd0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42cd10:
    // 0x42cd10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x42cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42cd14:
    // 0x42cd14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_42cd18:
    if (ctx->pc == 0x42CD18u) {
        ctx->pc = 0x42CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CD14u;
        // 0x42cd18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CD1Cu;
        goto label_42cd1c;
    }
    ctx->pc = 0x42CD14u;
    {
        const bool branch_taken_0x42cd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CD14u;
        // 0x42cd18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cd14) {
            ctx->pc = 0x42CD24u;
            goto label_42cd24;
        }
    }
    ctx->pc = 0x42CD1Cu;
label_42cd1c:
    // 0x42cd1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_42cd20:
    if (ctx->pc == 0x42CD20u) {
        ctx->pc = 0x42CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CD1Cu;
        // 0x42cd20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CD24u;
        goto label_42cd24;
    }
    ctx->pc = 0x42CD1Cu;
    {
        const bool branch_taken_0x42cd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CD1Cu;
        // 0x42cd20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cd1c) {
            ctx->pc = 0x42CD30u;
            goto label_42cd30;
        }
    }
    ctx->pc = 0x42CD24u;
label_42cd24:
    // 0x42cd24: 0x40f809  jalr        $v0
label_42cd28:
    if (ctx->pc == 0x42CD28u) {
        ctx->pc = 0x42CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CD24u;
        // 0x42cd28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CD2Cu;
        goto label_42cd2c;
    }
    ctx->pc = 0x42CD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42CD2Cu);
        ctx->pc = 0x42CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CD24u;
        // 0x42cd28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CD24u, 0x42CD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42CD2Cu;
label_42cd2c:
    // 0x42cd2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x42cd2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_42cd30:
    // 0x42cd30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42cd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42cd34:
    // 0x42cd34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42cd34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42cd38:
    // 0x42cd38: 0x3e00008  jr          $ra
label_42cd3c:
    if (ctx->pc == 0x42CD3Cu) {
        ctx->pc = 0x42CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CD38u;
        // 0x42cd3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CD40u;
        goto label_fallthrough_0x42cd38;
    }
    ctx->pc = 0x42CD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CD38u;
        // 0x42cd3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x42cd38:
    ctx->pc = 0x42CD40u;
}

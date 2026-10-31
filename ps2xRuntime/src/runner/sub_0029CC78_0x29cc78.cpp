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

// Function: sub_0029CC78
// Address: 0x29cc78 - 0x29cd30
void sub_0029CC78_0x29cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CC78_0x29cc78");
#endif

    switch (ctx->pc) {
        case 0x29cc78u: goto label_29cc78;
        case 0x29cc7cu: goto label_29cc7c;
        case 0x29cc80u: goto label_29cc80;
        case 0x29cc84u: goto label_29cc84;
        case 0x29cc88u: goto label_29cc88;
        case 0x29cc8cu: goto label_29cc8c;
        case 0x29cc90u: goto label_29cc90;
        case 0x29cc94u: goto label_29cc94;
        case 0x29cc98u: goto label_29cc98;
        case 0x29cc9cu: goto label_29cc9c;
        case 0x29cca0u: goto label_29cca0;
        case 0x29cca4u: goto label_29cca4;
        case 0x29cca8u: goto label_29cca8;
        case 0x29ccacu: goto label_29ccac;
        case 0x29ccb0u: goto label_29ccb0;
        case 0x29ccb4u: goto label_29ccb4;
        case 0x29ccb8u: goto label_29ccb8;
        case 0x29ccbcu: goto label_29ccbc;
        case 0x29ccc0u: goto label_29ccc0;
        case 0x29ccc4u: goto label_29ccc4;
        case 0x29ccc8u: goto label_29ccc8;
        case 0x29ccccu: goto label_29cccc;
        case 0x29ccd0u: goto label_29ccd0;
        case 0x29ccd4u: goto label_29ccd4;
        case 0x29ccd8u: goto label_29ccd8;
        case 0x29ccdcu: goto label_29ccdc;
        case 0x29cce0u: goto label_29cce0;
        case 0x29cce4u: goto label_29cce4;
        case 0x29cce8u: goto label_29cce8;
        case 0x29ccecu: goto label_29ccec;
        case 0x29ccf0u: goto label_29ccf0;
        case 0x29ccf4u: goto label_29ccf4;
        case 0x29ccf8u: goto label_29ccf8;
        case 0x29ccfcu: goto label_29ccfc;
        case 0x29cd00u: goto label_29cd00;
        case 0x29cd04u: goto label_29cd04;
        case 0x29cd08u: goto label_29cd08;
        case 0x29cd0cu: goto label_29cd0c;
        case 0x29cd10u: goto label_29cd10;
        case 0x29cd14u: goto label_29cd14;
        case 0x29cd18u: goto label_29cd18;
        case 0x29cd1cu: goto label_29cd1c;
        case 0x29cd20u: goto label_29cd20;
        case 0x29cd24u: goto label_29cd24;
        case 0x29cd28u: goto label_29cd28;
        case 0x29cd2cu: goto label_29cd2c;
        default: break;
    }

    ctx->pc = 0x29cc78u;

label_29cc78:
    // 0x29cc78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29cc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_29cc7c:
    // 0x29cc7c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x29cc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_29cc80:
    // 0x29cc80: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x29cc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_29cc84:
    // 0x29cc84: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x29cc84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cc88:
    // 0x29cc88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29cc88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29cc8c:
    // 0x29cc8c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x29cc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_29cc90:
    // 0x29cc90: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29cc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_29cc94:
    // 0x29cc94: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x29cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29cc98:
    // 0x29cc98: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x29cc98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_29cc9c:
    // 0x29cc9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x29cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29cca0:
    // 0x29cca0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_29cca4:
    // 0x29cca4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29cca8:
    // 0x29cca8: 0x0  nop
    ctx->pc = 0x29cca8u;
    // NOP
label_29ccac:
    // 0x29ccac: 0x0  nop
    ctx->pc = 0x29ccacu;
    // NOP
label_29ccb0:
    // 0x29ccb0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
label_29ccb4:
    if (ctx->pc == 0x29CCB4u) {
        ctx->pc = 0x29CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCB0u;
        // 0x29ccb4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCB8u;
        goto label_29ccb8;
    }
    ctx->pc = 0x29CCB0u;
    {
        const bool branch_taken_0x29ccb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCB0u;
        // 0x29ccb4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccb0) {
            ctx->pc = 0x29CCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cca0;
        }
    }
    ctx->pc = 0x29CCB8u;
label_29ccb8:
    // 0x29ccb8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29ccb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ccbc:
    // 0x29ccbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29ccbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29ccc0:
    // 0x29ccc0: 0xc0a728a  jal         func_29CA28
label_29ccc4:
    if (ctx->pc == 0x29CCC4u) {
        ctx->pc = 0x29CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCC0u;
        // 0x29ccc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCC8u;
        goto label_29ccc8;
    }
    ctx->pc = 0x29CCC0u;
    SET_GPR_U32(ctx, 31, 0x29CCC8u);
    ctx->pc = 0x29CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CCC0u;
    // 0x29ccc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CA28u, 0x29CCC0u, 0x29CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCC8u;
label_29ccc8:
    // 0x29ccc8: 0xc137832  jal         func_4DE0C8
label_29cccc:
    if (ctx->pc == 0x29CCCCu) {
        ctx->pc = 0x29CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCC8u;
        // 0x29cccc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCD0u;
        goto label_29ccd0;
    }
    ctx->pc = 0x29CCC8u;
    SET_GPR_U32(ctx, 31, 0x29CCD0u);
    ctx->pc = 0x29CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CCC8u;
    // 0x29cccc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x29CCC8u, 0x29CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCD0u;
label_29ccd0:
    // 0x29ccd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ccd4:
    // 0x29ccd4: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_29ccd8:
    if (ctx->pc == 0x29CCD8u) {
        ctx->pc = 0x29CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCD4u;
        // 0x29ccd8: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCDCu;
        goto label_29ccdc;
    }
    ctx->pc = 0x29CCD4u;
    {
        const bool branch_taken_0x29ccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCD4u;
        // 0x29ccd8: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccd4) {
            ctx->pc = 0x29CD14u;
            goto label_29cd14;
        }
    }
    ctx->pc = 0x29CCDCu;
label_29ccdc:
    // 0x29ccdc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29cce0:
    // 0x29cce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29cce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29cce4:
    // 0x29cce4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x29cce4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_29cce8:
    // 0x29cce8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x29cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_29ccec:
    // 0x29ccec: 0x40f809  jalr        $v0
label_29ccf0:
    if (ctx->pc == 0x29CCF0u) {
        ctx->pc = 0x29CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCECu;
        // 0x29ccf0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCF4u;
        goto label_29ccf4;
    }
    ctx->pc = 0x29CCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29CCF4u);
        ctx->pc = 0x29CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCECu;
        // 0x29ccf0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CCECu, 0x29CCF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CCF4u;
label_29ccf4:
    // 0x29ccf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29ccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29ccf8:
    // 0x29ccf8: 0xc13b782  jal         func_4EDE08
label_29ccfc:
    if (ctx->pc == 0x29CCFCu) {
        ctx->pc = 0x29CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCF8u;
        // 0x29ccfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD00u;
        goto label_29cd00;
    }
    ctx->pc = 0x29CCF8u;
    SET_GPR_U32(ctx, 31, 0x29CD00u);
    ctx->pc = 0x29CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CCF8u;
    // 0x29ccfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x29CCF8u, 0x29CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD00u;
label_29cd00:
    // 0x29cd00: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x29cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_29cd04:
    // 0x29cd04: 0xc0e409a  jal         func_390268
label_29cd08:
    if (ctx->pc == 0x29CD08u) {
        ctx->pc = 0x29CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD04u;
        // 0x29cd08: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD0Cu;
        goto label_29cd0c;
    }
    ctx->pc = 0x29CD04u;
    SET_GPR_U32(ctx, 31, 0x29CD0Cu);
    ctx->pc = 0x29CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD04u;
    // 0x29cd08: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29CD04u, 0x29CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD0Cu;
label_29cd0c:
    // 0x29cd0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_29cd10:
    if (ctx->pc == 0x29CD10u) {
        ctx->pc = 0x29CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD0Cu;
        // 0x29cd10: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD14u;
        goto label_29cd14;
    }
    ctx->pc = 0x29CD0Cu;
    {
        const bool branch_taken_0x29cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD0Cu;
        // 0x29cd10: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd0c) {
            ctx->pc = 0x29CD1Cu;
            goto label_29cd1c;
        }
    }
    ctx->pc = 0x29CD14u;
label_29cd14:
    // 0x29cd14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29cd14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cd18:
    // 0x29cd18: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x29cd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_29cd1c:
    // 0x29cd1c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x29cd1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29cd20:
    // 0x29cd20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29cd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29cd24:
    // 0x29cd24: 0x3e00008  jr          $ra
label_29cd28:
    if (ctx->pc == 0x29CD28u) {
        ctx->pc = 0x29CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD24u;
        // 0x29cd28: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD2Cu;
        goto label_29cd2c;
    }
    ctx->pc = 0x29CD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD24u;
        // 0x29cd28: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CD2Cu;
label_29cd2c:
    // 0x29cd2c: 0x0  nop
    ctx->pc = 0x29cd2cu;
    // NOP
    ctx->pc = 0x29cd30u;
}

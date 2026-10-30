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

// Function: sub_001D4B88
// Address: 0x1d4b88 - 0x1d4c40
void sub_001D4B88_0x1d4b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4B88_0x1d4b88");
#endif

    switch (ctx->pc) {
        case 0x1d4b88u: goto label_1d4b88;
        case 0x1d4b8cu: goto label_1d4b8c;
        case 0x1d4b90u: goto label_1d4b90;
        case 0x1d4b94u: goto label_1d4b94;
        case 0x1d4b98u: goto label_1d4b98;
        case 0x1d4b9cu: goto label_1d4b9c;
        case 0x1d4ba0u: goto label_1d4ba0;
        case 0x1d4ba4u: goto label_1d4ba4;
        case 0x1d4ba8u: goto label_1d4ba8;
        case 0x1d4bacu: goto label_1d4bac;
        case 0x1d4bb0u: goto label_1d4bb0;
        case 0x1d4bb4u: goto label_1d4bb4;
        case 0x1d4bb8u: goto label_1d4bb8;
        case 0x1d4bbcu: goto label_1d4bbc;
        case 0x1d4bc0u: goto label_1d4bc0;
        case 0x1d4bc4u: goto label_1d4bc4;
        case 0x1d4bc8u: goto label_1d4bc8;
        case 0x1d4bccu: goto label_1d4bcc;
        case 0x1d4bd0u: goto label_1d4bd0;
        case 0x1d4bd4u: goto label_1d4bd4;
        case 0x1d4bd8u: goto label_1d4bd8;
        case 0x1d4bdcu: goto label_1d4bdc;
        case 0x1d4be0u: goto label_1d4be0;
        case 0x1d4be4u: goto label_1d4be4;
        case 0x1d4be8u: goto label_1d4be8;
        case 0x1d4becu: goto label_1d4bec;
        case 0x1d4bf0u: goto label_1d4bf0;
        case 0x1d4bf4u: goto label_1d4bf4;
        case 0x1d4bf8u: goto label_1d4bf8;
        case 0x1d4bfcu: goto label_1d4bfc;
        case 0x1d4c00u: goto label_1d4c00;
        case 0x1d4c04u: goto label_1d4c04;
        case 0x1d4c08u: goto label_1d4c08;
        case 0x1d4c0cu: goto label_1d4c0c;
        case 0x1d4c10u: goto label_1d4c10;
        case 0x1d4c14u: goto label_1d4c14;
        case 0x1d4c18u: goto label_1d4c18;
        case 0x1d4c1cu: goto label_1d4c1c;
        case 0x1d4c20u: goto label_1d4c20;
        case 0x1d4c24u: goto label_1d4c24;
        case 0x1d4c28u: goto label_1d4c28;
        case 0x1d4c2cu: goto label_1d4c2c;
        case 0x1d4c30u: goto label_1d4c30;
        case 0x1d4c34u: goto label_1d4c34;
        case 0x1d4c38u: goto label_1d4c38;
        case 0x1d4c3cu: goto label_1d4c3c;
        default: break;
    }

    ctx->pc = 0x1d4b88u;

label_1d4b88:
    // 0x1d4b88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d4b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d4b8c:
    // 0x1d4b8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d4b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d4b90:
    // 0x1d4b90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d4b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d4b94:
    // 0x1d4b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b98:
    // 0x1d4b98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d4b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1d4b9c:
    // 0x1d4b9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d4b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ba0:
    // 0x1d4ba0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d4ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1d4ba4:
    // 0x1d4ba4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d4ba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ba8:
    // 0x1d4ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d4bac:
    // 0x1d4bac: 0xc07512e  jal         func_1D44B8
label_1d4bb0:
    if (ctx->pc == 0x1D4BB0u) {
        ctx->pc = 0x1D4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BACu;
        // 0x1d4bb0: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BB4u;
        goto label_1d4bb4;
    }
    ctx->pc = 0x1D4BACu;
    SET_GPR_U32(ctx, 31, 0x1D4BB4u);
    ctx->pc = 0x1D4BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4BACu;
    // 0x1d4bb0: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D44B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B8u, 0x1D4BACu, 0x1D4BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BB4u;
label_1d4bb4:
    // 0x1d4bb4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1d4bb8:
    if (ctx->pc == 0x1D4BB8u) {
        ctx->pc = 0x1D4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BB4u;
        // 0x1d4bb8: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BBCu;
        goto label_1d4bbc;
    }
    ctx->pc = 0x1D4BB4u;
    {
        const bool branch_taken_0x1d4bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BB4u;
        // 0x1d4bb8: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bb4) {
            ctx->pc = 0x1D4C20u;
            goto label_1d4c20;
        }
    }
    ctx->pc = 0x1D4BBCu;
label_1d4bbc:
    // 0x1d4bbc: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1d4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1d4bc0:
    // 0x1d4bc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d4bc4:
    // 0x1d4bc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d4bc8:
    // 0x1d4bc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d4bcc:
    // 0x1d4bcc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d4bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d4bd0:
    // 0x1d4bd0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4bd4:
    // 0x1d4bd4: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1d4bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1d4bd8:
    // 0x1d4bd8: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1d4bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1d4bdc:
    // 0x1d4bdc: 0x60f809  jalr        $v1
label_1d4be0:
    if (ctx->pc == 0x1D4BE0u) {
        ctx->pc = 0x1D4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BDCu;
        // 0x1d4be0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BE4u;
        goto label_1d4be4;
    }
    ctx->pc = 0x1D4BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D4BE4u);
        ctx->pc = 0x1D4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BDCu;
        // 0x1d4be0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4BDCu, 0x1D4BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4BE4u;
label_1d4be4:
    // 0x1d4be4: 0xae3200a4  sw          $s2, 0xA4($s1)
    ctx->pc = 0x1d4be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 18));
label_1d4be8:
    // 0x1d4be8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d4be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1d4bec:
    // 0x1d4bec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d4becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d4bf0:
    // 0x1d4bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d4bf4:
    // 0x1d4bf4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d4bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d4bf8:
    // 0x1d4bf8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d4bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4bfc:
    // 0x1d4bfc: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1d4bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1d4c00:
    // 0x1d4c00: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1d4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1d4c04:
    // 0x1d4c04: 0x40f809  jalr        $v0
label_1d4c08:
    if (ctx->pc == 0x1D4C08u) {
        ctx->pc = 0x1D4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C04u;
        // 0x1d4c08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C0Cu;
        goto label_1d4c0c;
    }
    ctx->pc = 0x1D4C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4C0Cu);
        ctx->pc = 0x1D4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C04u;
        // 0x1d4c08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4C04u, 0x1D4C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4C0Cu;
label_1d4c0c:
    // 0x1d4c0c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_1d4c10:
    if (ctx->pc == 0x1D4C10u) {
        ctx->pc = 0x1D4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C0Cu;
        // 0x1d4c10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C14u;
        goto label_1d4c14;
    }
    ctx->pc = 0x1D4C0Cu;
    {
        const bool branch_taken_0x1d4c0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C0Cu;
        // 0x1d4c10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c0c) {
            ctx->pc = 0x1D4C20u;
            goto label_1d4c20;
        }
    }
    ctx->pc = 0x1D4C14u;
label_1d4c14:
    // 0x1d4c14: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1d4c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1d4c18:
    // 0x1d4c18: 0xc043f0c  jal         func_10FC30
label_1d4c1c:
    if (ctx->pc == 0x1D4C1Cu) {
        ctx->pc = 0x1D4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C18u;
        // 0x1d4c1c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C20u;
        goto label_1d4c20;
    }
    ctx->pc = 0x1D4C18u;
    SET_GPR_U32(ctx, 31, 0x1D4C20u);
    ctx->pc = 0x1D4C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C18u;
    // 0x1d4c1c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1D4C18u, 0x1D4C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C20u;
label_1d4c20:
    // 0x1d4c20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d4c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d4c24:
    // 0x1d4c24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d4c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d4c28:
    // 0x1d4c28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4c2c:
    // 0x1d4c2c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d4c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4c30:
    // 0x1d4c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4c34:
    // 0x1d4c34: 0x3e00008  jr          $ra
label_1d4c38:
    if (ctx->pc == 0x1D4C38u) {
        ctx->pc = 0x1D4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C34u;
        // 0x1d4c38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C3Cu;
        goto label_1d4c3c;
    }
    ctx->pc = 0x1D4C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C34u;
        // 0x1d4c38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4C3Cu;
label_1d4c3c:
    // 0x1d4c3c: 0x0  nop
    ctx->pc = 0x1d4c3cu;
    // NOP
    ctx->pc = 0x1d4c40u;
}

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

// Function: sub_00268B88
// Address: 0x268b88 - 0x268c50
void sub_00268B88_0x268b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268B88_0x268b88");
#endif

    switch (ctx->pc) {
        case 0x268b88u: goto label_268b88;
        case 0x268b8cu: goto label_268b8c;
        case 0x268b90u: goto label_268b90;
        case 0x268b94u: goto label_268b94;
        case 0x268b98u: goto label_268b98;
        case 0x268b9cu: goto label_268b9c;
        case 0x268ba0u: goto label_268ba0;
        case 0x268ba4u: goto label_268ba4;
        case 0x268ba8u: goto label_268ba8;
        case 0x268bacu: goto label_268bac;
        case 0x268bb0u: goto label_268bb0;
        case 0x268bb4u: goto label_268bb4;
        case 0x268bb8u: goto label_268bb8;
        case 0x268bbcu: goto label_268bbc;
        case 0x268bc0u: goto label_268bc0;
        case 0x268bc4u: goto label_268bc4;
        case 0x268bc8u: goto label_268bc8;
        case 0x268bccu: goto label_268bcc;
        case 0x268bd0u: goto label_268bd0;
        case 0x268bd4u: goto label_268bd4;
        case 0x268bd8u: goto label_268bd8;
        case 0x268bdcu: goto label_268bdc;
        case 0x268be0u: goto label_268be0;
        case 0x268be4u: goto label_268be4;
        case 0x268be8u: goto label_268be8;
        case 0x268becu: goto label_268bec;
        case 0x268bf0u: goto label_268bf0;
        case 0x268bf4u: goto label_268bf4;
        case 0x268bf8u: goto label_268bf8;
        case 0x268bfcu: goto label_268bfc;
        case 0x268c00u: goto label_268c00;
        case 0x268c04u: goto label_268c04;
        case 0x268c08u: goto label_268c08;
        case 0x268c0cu: goto label_268c0c;
        case 0x268c10u: goto label_268c10;
        case 0x268c14u: goto label_268c14;
        case 0x268c18u: goto label_268c18;
        case 0x268c1cu: goto label_268c1c;
        case 0x268c20u: goto label_268c20;
        case 0x268c24u: goto label_268c24;
        case 0x268c28u: goto label_268c28;
        case 0x268c2cu: goto label_268c2c;
        case 0x268c30u: goto label_268c30;
        case 0x268c34u: goto label_268c34;
        case 0x268c38u: goto label_268c38;
        case 0x268c3cu: goto label_268c3c;
        case 0x268c40u: goto label_268c40;
        case 0x268c44u: goto label_268c44;
        case 0x268c48u: goto label_268c48;
        case 0x268c4cu: goto label_268c4c;
        default: break;
    }

    ctx->pc = 0x268b88u;

label_268b88:
    // 0x268b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_268b8c:
    // 0x268b8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_268b90:
    // 0x268b90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x268b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_268b94:
    // 0x268b94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x268b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_268b98:
    // 0x268b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_268b9c:
    // 0x268b9c: 0xc0e409a  jal         func_390268
label_268ba0:
    if (ctx->pc == 0x268BA0u) {
        ctx->pc = 0x268BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B9Cu;
        // 0x268ba0: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268BA4u;
        goto label_268ba4;
    }
    ctx->pc = 0x268B9Cu;
    SET_GPR_U32(ctx, 31, 0x268BA4u);
    ctx->pc = 0x268BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B9Cu;
    // 0x268ba0: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x268B9Cu, 0x268BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BA4u;
label_268ba4:
    // 0x268ba4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268ba8:
    // 0x268ba8: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x268ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_268bac:
    // 0x268bac: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x268bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_268bb0:
    // 0x268bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268bb4:
    // 0x268bb4: 0xc089974  jal         func_2265D0
label_268bb8:
    if (ctx->pc == 0x268BB8u) {
        ctx->pc = 0x268BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BB4u;
        // 0x268bb8: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268BBCu;
        goto label_268bbc;
    }
    ctx->pc = 0x268BB4u;
    SET_GPR_U32(ctx, 31, 0x268BBCu);
    ctx->pc = 0x268BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268BB4u;
    // 0x268bb8: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x268BB4u, 0x268BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BBCu;
label_268bbc:
    // 0x268bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268bc0:
    // 0x268bc0: 0xc08b186  jal         func_22C618
label_268bc4:
    if (ctx->pc == 0x268BC4u) {
        ctx->pc = 0x268BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BC0u;
        // 0x268bc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268BC8u;
        goto label_268bc8;
    }
    ctx->pc = 0x268BC0u;
    SET_GPR_U32(ctx, 31, 0x268BC8u);
    ctx->pc = 0x268BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268BC0u;
    // 0x268bc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C618u, 0x268BC0u, 0x268BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BC8u;
label_268bc8:
    // 0x268bc8: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x268bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_268bcc:
    // 0x268bcc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_268bd0:
    if (ctx->pc == 0x268BD0u) {
        ctx->pc = 0x268BD4u;
        goto label_268bd4;
    }
    ctx->pc = 0x268BCCu;
    {
        const bool branch_taken_0x268bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x268bcc) {
            ctx->pc = 0x268BF0u;
            goto label_268bf0;
        }
    }
    ctx->pc = 0x268BD4u;
label_268bd4:
    // 0x268bd4: 0xc05d484  jal         func_175210
label_268bd8:
    if (ctx->pc == 0x268BD8u) {
        ctx->pc = 0x268BDCu;
        goto label_268bdc;
    }
    ctx->pc = 0x268BD4u;
    SET_GPR_U32(ctx, 31, 0x268BDCu);
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x268BD4u, 0x268BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BDCu;
label_268bdc:
    // 0x268bdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x268bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_268be0:
    // 0x268be0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x268be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_268be4:
    // 0x268be4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x268be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_268be8:
    // 0x268be8: 0xa0f809  jalr        $a1
label_268bec:
    if (ctx->pc == 0x268BECu) {
        ctx->pc = 0x268BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BE8u;
        // 0x268bec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268BF0u;
        goto label_268bf0;
    }
    ctx->pc = 0x268BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x268BF0u);
        ctx->pc = 0x268BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BE8u;
        // 0x268bec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268BE8u, 0x268BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268BF0u;
label_268bf0:
    // 0x268bf0: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
label_268bf4:
    if (ctx->pc == 0x268BF4u) {
        ctx->pc = 0x268BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BF0u;
        // 0x268bf4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268BF8u;
        goto label_268bf8;
    }
    ctx->pc = 0x268BF0u;
    {
        const bool branch_taken_0x268bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x268bf0) {
            ctx->pc = 0x268BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268BF0u;
            // 0x268bf4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268C3Cu;
            goto label_268c3c;
        }
    }
    ctx->pc = 0x268BF8u;
label_268bf8:
    // 0x268bf8: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x268bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_268bfc:
    // 0x268bfc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_268c00:
    if (ctx->pc == 0x268C00u) {
        ctx->pc = 0x268C04u;
        goto label_268c04;
    }
    ctx->pc = 0x268BFCu;
    {
        const bool branch_taken_0x268bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x268bfc) {
            ctx->pc = 0x268C20u;
            goto label_268c20;
        }
    }
    ctx->pc = 0x268C04u;
label_268c04:
    // 0x268c04: 0xc05d484  jal         func_175210
label_268c08:
    if (ctx->pc == 0x268C08u) {
        ctx->pc = 0x268C0Cu;
        goto label_268c0c;
    }
    ctx->pc = 0x268C04u;
    SET_GPR_U32(ctx, 31, 0x268C0Cu);
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x268C04u, 0x268C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C0Cu;
label_268c0c:
    // 0x268c0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x268c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_268c10:
    // 0x268c10: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x268c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_268c14:
    // 0x268c14: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x268c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_268c18:
    // 0x268c18: 0xa0f809  jalr        $a1
label_268c1c:
    if (ctx->pc == 0x268C1Cu) {
        ctx->pc = 0x268C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C18u;
        // 0x268c1c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268C20u;
        goto label_268c20;
    }
    ctx->pc = 0x268C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x268C20u);
        ctx->pc = 0x268C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C18u;
        // 0x268c1c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268C18u, 0x268C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268C20u;
label_268c20:
    // 0x268c20: 0xc0899ae  jal         func_2266B8
label_268c24:
    if (ctx->pc == 0x268C24u) {
        ctx->pc = 0x268C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C20u;
        // 0x268c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268C28u;
        goto label_268c28;
    }
    ctx->pc = 0x268C20u;
    SET_GPR_U32(ctx, 31, 0x268C28u);
    ctx->pc = 0x268C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C20u;
    // 0x268c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x268C20u, 0x268C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C28u;
label_268c28:
    // 0x268c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268c2c:
    // 0x268c2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x268c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268c30:
    // 0x268c30: 0xc09a902  jal         func_26A408
label_268c34:
    if (ctx->pc == 0x268C34u) {
        ctx->pc = 0x268C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C30u;
        // 0x268c34: 0x24460002  addiu       $a2, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268C38u;
        goto label_268c38;
    }
    ctx->pc = 0x268C30u;
    SET_GPR_U32(ctx, 31, 0x268C38u);
    ctx->pc = 0x268C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C30u;
    // 0x268c34: 0x24460002  addiu       $a2, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A408u, 0x268C30u, 0x268C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C38u;
label_268c38:
    // 0x268c38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x268c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_268c3c:
    // 0x268c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268c40:
    // 0x268c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_268c44:
    // 0x268c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_268c48:
    // 0x268c48: 0x3e00008  jr          $ra
label_268c4c:
    if (ctx->pc == 0x268C4Cu) {
        ctx->pc = 0x268C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C48u;
        // 0x268c4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268C50u;
        goto label_fallthrough_0x268c48;
    }
    ctx->pc = 0x268C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C48u;
        // 0x268c4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x268c48:
    ctx->pc = 0x268C50u;
}

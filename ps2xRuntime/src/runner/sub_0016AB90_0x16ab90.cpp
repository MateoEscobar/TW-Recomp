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

// Function: sub_0016AB90
// Address: 0x16ab90 - 0x16ac40
void sub_0016AB90_0x16ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AB90_0x16ab90");
#endif

    switch (ctx->pc) {
        case 0x16ab90u: goto label_16ab90;
        case 0x16ab94u: goto label_16ab94;
        case 0x16ab98u: goto label_16ab98;
        case 0x16ab9cu: goto label_16ab9c;
        case 0x16aba0u: goto label_16aba0;
        case 0x16aba4u: goto label_16aba4;
        case 0x16aba8u: goto label_16aba8;
        case 0x16abacu: goto label_16abac;
        case 0x16abb0u: goto label_16abb0;
        case 0x16abb4u: goto label_16abb4;
        case 0x16abb8u: goto label_16abb8;
        case 0x16abbcu: goto label_16abbc;
        case 0x16abc0u: goto label_16abc0;
        case 0x16abc4u: goto label_16abc4;
        case 0x16abc8u: goto label_16abc8;
        case 0x16abccu: goto label_16abcc;
        case 0x16abd0u: goto label_16abd0;
        case 0x16abd4u: goto label_16abd4;
        case 0x16abd8u: goto label_16abd8;
        case 0x16abdcu: goto label_16abdc;
        case 0x16abe0u: goto label_16abe0;
        case 0x16abe4u: goto label_16abe4;
        case 0x16abe8u: goto label_16abe8;
        case 0x16abecu: goto label_16abec;
        case 0x16abf0u: goto label_16abf0;
        case 0x16abf4u: goto label_16abf4;
        case 0x16abf8u: goto label_16abf8;
        case 0x16abfcu: goto label_16abfc;
        case 0x16ac00u: goto label_16ac00;
        case 0x16ac04u: goto label_16ac04;
        case 0x16ac08u: goto label_16ac08;
        case 0x16ac0cu: goto label_16ac0c;
        case 0x16ac10u: goto label_16ac10;
        case 0x16ac14u: goto label_16ac14;
        case 0x16ac18u: goto label_16ac18;
        case 0x16ac1cu: goto label_16ac1c;
        case 0x16ac20u: goto label_16ac20;
        case 0x16ac24u: goto label_16ac24;
        case 0x16ac28u: goto label_16ac28;
        case 0x16ac2cu: goto label_16ac2c;
        case 0x16ac30u: goto label_16ac30;
        case 0x16ac34u: goto label_16ac34;
        case 0x16ac38u: goto label_16ac38;
        case 0x16ac3cu: goto label_16ac3c;
        default: break;
    }

    ctx->pc = 0x16ab90u;

label_16ab90:
    // 0x16ab90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16ab94:
    // 0x16ab94: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_16ab98:
    // 0x16ab98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16ab98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_16ab9c:
    // 0x16ab9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16aba0:
    // 0x16aba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16aba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16aba4:
    // 0x16aba4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16aba4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_16aba8:
    // 0x16aba8: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
label_16abac:
    if (ctx->pc == 0x16ABACu) {
        ctx->pc = 0x16ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABA8u;
        // 0x16abac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ABB0u;
        goto label_16abb0;
    }
    ctx->pc = 0x16ABA8u;
    {
        const bool branch_taken_0x16aba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABA8u;
        // 0x16abac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aba8) {
            ctx->pc = 0x16AC28u;
            goto label_16ac28;
        }
    }
    ctx->pc = 0x16ABB0u;
label_16abb0:
    // 0x16abb0: 0xc05b0e2  jal         func_16C388
label_16abb4:
    if (ctx->pc == 0x16ABB4u) {
        ctx->pc = 0x16ABB8u;
        goto label_16abb8;
    }
    ctx->pc = 0x16ABB0u;
    SET_GPR_U32(ctx, 31, 0x16ABB8u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16ABB0u, 0x16ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABB8u;
label_16abb8:
    // 0x16abb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16abb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16abbc:
    // 0x16abbc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_16abc0:
    // 0x16abc0: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_16abc4:
    if (ctx->pc == 0x16ABC4u) {
        ctx->pc = 0x16ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABC0u;
        // 0x16abc4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ABC8u;
        goto label_16abc8;
    }
    ctx->pc = 0x16ABC0u;
    {
        const bool branch_taken_0x16abc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16abc0) {
            ctx->pc = 0x16ABC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ABC0u;
            // 0x16abc4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AC2Cu;
            goto label_16ac2c;
        }
    }
    ctx->pc = 0x16ABC8u;
label_16abc8:
    // 0x16abc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16abc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16abcc:
    // 0x16abcc: 0xc0591f8  jal         func_1647E0
label_16abd0:
    if (ctx->pc == 0x16ABD0u) {
        ctx->pc = 0x16ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABCCu;
        // 0x16abd0: 0x26110048  addiu       $s1, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ABD4u;
        goto label_16abd4;
    }
    ctx->pc = 0x16ABCCu;
    SET_GPR_U32(ctx, 31, 0x16ABD4u);
    ctx->pc = 0x16ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABCCu;
    // 0x16abd0: 0x26110048  addiu       $s1, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x16ABCCu, 0x16ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABD4u;
label_16abd4:
    // 0x16abd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16abd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16abd8:
    // 0x16abd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16abd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16abdc:
    // 0x16abdc: 0x0  nop
    ctx->pc = 0x16abdcu;
    // NOP
label_16abe0:
    // 0x16abe0: 0xc137866  jal         func_4DE198
label_16abe4:
    if (ctx->pc == 0x16ABE4u) {
        ctx->pc = 0x16ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABE0u;
        // 0x16abe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ABE8u;
        goto label_16abe8;
    }
    ctx->pc = 0x16ABE0u;
    SET_GPR_U32(ctx, 31, 0x16ABE8u);
    ctx->pc = 0x16ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABE0u;
    // 0x16abe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x16ABE0u, 0x16ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABE8u;
label_16abe8:
    // 0x16abe8: 0xc0e409a  jal         func_390268
label_16abec:
    if (ctx->pc == 0x16ABECu) {
        ctx->pc = 0x16ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABE8u;
        // 0x16abec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ABF0u;
        goto label_16abf0;
    }
    ctx->pc = 0x16ABE8u;
    SET_GPR_U32(ctx, 31, 0x16ABF0u);
    ctx->pc = 0x16ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABE8u;
    // 0x16abec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16ABE8u, 0x16ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABF0u;
label_16abf0:
    // 0x16abf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16abf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16abf4:
    // 0x16abf4: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_16abf8:
    if (ctx->pc == 0x16ABF8u) {
        ctx->pc = 0x16ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABF4u;
        // 0x16abf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ABFCu;
        goto label_16abfc;
    }
    ctx->pc = 0x16ABF4u;
    {
        const bool branch_taken_0x16abf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16abf4) {
            ctx->pc = 0x16ABF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ABF4u;
            // 0x16abf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AC1Cu;
            goto label_16ac1c;
        }
    }
    ctx->pc = 0x16ABFCu;
label_16abfc:
    // 0x16abfc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16ac00:
    // 0x16ac00: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x16ac00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_16ac04:
    // 0x16ac04: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x16ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_16ac08:
    // 0x16ac08: 0x40f809  jalr        $v0
label_16ac0c:
    if (ctx->pc == 0x16AC0Cu) {
        ctx->pc = 0x16AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC08u;
        // 0x16ac0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AC10u;
        goto label_16ac10;
    }
    ctx->pc = 0x16AC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16AC10u);
        ctx->pc = 0x16AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC08u;
        // 0x16ac0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AC08u, 0x16AC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16AC10u;
label_16ac10:
    // 0x16ac10: 0xc0e162e  jal         func_3858B8
label_16ac14:
    if (ctx->pc == 0x16AC14u) {
        ctx->pc = 0x16AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC10u;
        // 0x16ac14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AC18u;
        goto label_16ac18;
    }
    ctx->pc = 0x16AC10u;
    SET_GPR_U32(ctx, 31, 0x16AC18u);
    ctx->pc = 0x16AC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC10u;
    // 0x16ac14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3858B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3858B8u, 0x16AC10u, 0x16AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC18u;
label_16ac18:
    // 0x16ac18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16ac18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16ac1c:
    // 0x16ac1c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16ac1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16ac20:
    // 0x16ac20: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_16ac24:
    if (ctx->pc == 0x16AC24u) {
        ctx->pc = 0x16AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC20u;
        // 0x16ac24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AC28u;
        goto label_16ac28;
    }
    ctx->pc = 0x16AC20u;
    {
        const bool branch_taken_0x16ac20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC20u;
        // 0x16ac24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac20) {
            ctx->pc = 0x16ABE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16abe0;
        }
    }
    ctx->pc = 0x16AC28u;
label_16ac28:
    // 0x16ac28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16ac28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16ac2c:
    // 0x16ac2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16ac2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16ac30:
    // 0x16ac30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ac30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ac34:
    // 0x16ac34: 0x3e00008  jr          $ra
label_16ac38:
    if (ctx->pc == 0x16AC38u) {
        ctx->pc = 0x16AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC34u;
        // 0x16ac38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AC3Cu;
        goto label_16ac3c;
    }
    ctx->pc = 0x16AC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC34u;
        // 0x16ac38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AC3Cu;
label_16ac3c:
    // 0x16ac3c: 0x0  nop
    ctx->pc = 0x16ac3cu;
    // NOP
    ctx->pc = 0x16ac40u;
}

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

// Function: sub_003EAF98
// Address: 0x3eaf98 - 0x3eb060
void sub_003EAF98_0x3eaf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAF98_0x3eaf98");
#endif

    switch (ctx->pc) {
        case 0x3eaf98u: goto label_3eaf98;
        case 0x3eaf9cu: goto label_3eaf9c;
        case 0x3eafa0u: goto label_3eafa0;
        case 0x3eafa4u: goto label_3eafa4;
        case 0x3eafa8u: goto label_3eafa8;
        case 0x3eafacu: goto label_3eafac;
        case 0x3eafb0u: goto label_3eafb0;
        case 0x3eafb4u: goto label_3eafb4;
        case 0x3eafb8u: goto label_3eafb8;
        case 0x3eafbcu: goto label_3eafbc;
        case 0x3eafc0u: goto label_3eafc0;
        case 0x3eafc4u: goto label_3eafc4;
        case 0x3eafc8u: goto label_3eafc8;
        case 0x3eafccu: goto label_3eafcc;
        case 0x3eafd0u: goto label_3eafd0;
        case 0x3eafd4u: goto label_3eafd4;
        case 0x3eafd8u: goto label_3eafd8;
        case 0x3eafdcu: goto label_3eafdc;
        case 0x3eafe0u: goto label_3eafe0;
        case 0x3eafe4u: goto label_3eafe4;
        case 0x3eafe8u: goto label_3eafe8;
        case 0x3eafecu: goto label_3eafec;
        case 0x3eaff0u: goto label_3eaff0;
        case 0x3eaff4u: goto label_3eaff4;
        case 0x3eaff8u: goto label_3eaff8;
        case 0x3eaffcu: goto label_3eaffc;
        case 0x3eb000u: goto label_3eb000;
        case 0x3eb004u: goto label_3eb004;
        case 0x3eb008u: goto label_3eb008;
        case 0x3eb00cu: goto label_3eb00c;
        case 0x3eb010u: goto label_3eb010;
        case 0x3eb014u: goto label_3eb014;
        case 0x3eb018u: goto label_3eb018;
        case 0x3eb01cu: goto label_3eb01c;
        case 0x3eb020u: goto label_3eb020;
        case 0x3eb024u: goto label_3eb024;
        case 0x3eb028u: goto label_3eb028;
        case 0x3eb02cu: goto label_3eb02c;
        case 0x3eb030u: goto label_3eb030;
        case 0x3eb034u: goto label_3eb034;
        case 0x3eb038u: goto label_3eb038;
        case 0x3eb03cu: goto label_3eb03c;
        case 0x3eb040u: goto label_3eb040;
        case 0x3eb044u: goto label_3eb044;
        case 0x3eb048u: goto label_3eb048;
        case 0x3eb04cu: goto label_3eb04c;
        case 0x3eb050u: goto label_3eb050;
        case 0x3eb054u: goto label_3eb054;
        case 0x3eb058u: goto label_3eb058;
        case 0x3eb05cu: goto label_3eb05c;
        default: break;
    }

    ctx->pc = 0x3eaf98u;

label_3eaf98:
    // 0x3eaf98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3eaf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3eaf9c:
    // 0x3eaf9c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3eaf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3eafa0:
    // 0x3eafa0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3eafa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3eafa4:
    // 0x3eafa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eafa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eafa8:
    // 0x3eafa8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3eafa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3eafac:
    // 0x3eafac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eafacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eafb0:
    // 0x3eafb0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3eafb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3eafb4:
    // 0x3eafb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eafb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eafb8:
    // 0x3eafb8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eafb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eafbc:
    // 0x3eafbc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eafc0:
    // 0x3eafc0: 0x40f809  jalr        $v0
label_3eafc4:
    if (ctx->pc == 0x3EAFC4u) {
        ctx->pc = 0x3EAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFC0u;
        // 0x3eafc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAFC8u;
        goto label_3eafc8;
    }
    ctx->pc = 0x3EAFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAFC8u);
        ctx->pc = 0x3EAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFC0u;
        // 0x3eafc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAFC0u, 0x3EAFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAFC8u;
label_3eafc8:
    // 0x3eafc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3eafc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eafcc:
    // 0x3eafcc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eafccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eafd0:
    // 0x3eafd0: 0xc0ea12a  jal         func_3A84A8
label_3eafd4:
    if (ctx->pc == 0x3EAFD4u) {
        ctx->pc = 0x3EAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFD0u;
        // 0x3eafd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAFD8u;
        goto label_3eafd8;
    }
    ctx->pc = 0x3EAFD0u;
    SET_GPR_U32(ctx, 31, 0x3EAFD8u);
    ctx->pc = 0x3EAFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAFD0u;
    // 0x3eafd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EAFD0u, 0x3EAFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAFD8u;
label_3eafd8:
    // 0x3eafd8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eafd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eafdc:
    // 0x3eafdc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eafe0:
    // 0x3eafe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3eafe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eafe4:
    // 0x3eafe4: 0xc0ea12a  jal         func_3A84A8
label_3eafe8:
    if (ctx->pc == 0x3EAFE8u) {
        ctx->pc = 0x3EAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFE4u;
        // 0x3eafe8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAFECu;
        goto label_3eafec;
    }
    ctx->pc = 0x3EAFE4u;
    SET_GPR_U32(ctx, 31, 0x3EAFECu);
    ctx->pc = 0x3EAFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAFE4u;
    // 0x3eafe8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EAFE4u, 0x3EAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAFECu;
label_3eafec:
    // 0x3eafec: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3eafecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eaff0:
    // 0x3eaff0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3eaff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3eaff4:
    // 0x3eaff4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3eaff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3eaff8:
    // 0x3eaff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eaff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eaffc:
    // 0x3eaffc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3eaffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3eb000:
    // 0x3eb000: 0xc0e858c  jal         func_3A1630
label_3eb004:
    if (ctx->pc == 0x3EB004u) {
        ctx->pc = 0x3EB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB000u;
        // 0x3eb004: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB008u;
        goto label_3eb008;
    }
    ctx->pc = 0x3EB000u;
    SET_GPR_U32(ctx, 31, 0x3EB008u);
    ctx->pc = 0x3EB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB000u;
    // 0x3eb004: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EB000u, 0x3EB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB008u;
label_3eb008:
    // 0x3eb008: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3eb008u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb00c:
    // 0x3eb00c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb010:
    // 0x3eb010: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3eb010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb014:
    // 0x3eb014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3eb014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eb018:
    // 0x3eb018: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3eb018u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3eb01c:
    // 0x3eb01c: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3eb01cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3eb020:
    // 0x3eb020: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3eb020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3eb024:
    // 0x3eb024: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3eb024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3eb028:
    // 0x3eb028: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x3eb028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3eb02c:
    // 0x3eb02c: 0x0  nop
    ctx->pc = 0x3eb02cu;
    // NOP
label_3eb030:
    // 0x3eb030: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_3eb034:
    if (ctx->pc == 0x3EB034u) {
        ctx->pc = 0x3EB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB030u;
        // 0x3eb034: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB038u;
        goto label_3eb038;
    }
    ctx->pc = 0x3EB030u;
    {
        const bool branch_taken_0x3eb030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB030u;
        // 0x3eb034: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb030) {
            ctx->pc = 0x3EB020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb020;
        }
    }
    ctx->pc = 0x3EB038u;
label_3eb038:
    // 0x3eb038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eb038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eb03c:
    // 0x3eb03c: 0xc0fab7a  jal         func_3EADE8
label_3eb040:
    if (ctx->pc == 0x3EB040u) {
        ctx->pc = 0x3EB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB03Cu;
        // 0x3eb040: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB044u;
        goto label_3eb044;
    }
    ctx->pc = 0x3EB03Cu;
    SET_GPR_U32(ctx, 31, 0x3EB044u);
    ctx->pc = 0x3EB040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB03Cu;
    // 0x3eb040: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EADE8u, 0x3EB03Cu, 0x3EB044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB044u;
label_3eb044:
    // 0x3eb044: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3eb044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eb048:
    // 0x3eb048: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3eb048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eb04c:
    // 0x3eb04c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3eb04cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eb050:
    // 0x3eb050: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3eb050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3eb054:
    // 0x3eb054: 0x3e00008  jr          $ra
label_3eb058:
    if (ctx->pc == 0x3EB058u) {
        ctx->pc = 0x3EB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB054u;
        // 0x3eb058: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB05Cu;
        goto label_3eb05c;
    }
    ctx->pc = 0x3EB054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB054u;
        // 0x3eb058: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EB05Cu;
label_3eb05c:
    // 0x3eb05c: 0x0  nop
    ctx->pc = 0x3eb05cu;
    // NOP
    ctx->pc = 0x3eb060u;
}

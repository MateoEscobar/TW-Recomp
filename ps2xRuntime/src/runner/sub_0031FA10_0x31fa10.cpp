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

// Function: sub_0031FA10
// Address: 0x31fa10 - 0x31fb18
void sub_0031FA10_0x31fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FA10_0x31fa10");
#endif

    switch (ctx->pc) {
        case 0x31fa50u: goto label_31fa50;
        case 0x31fa74u: goto label_31fa74;
        case 0x31fab0u: goto label_31fab0;
        case 0x31fac4u: goto label_31fac4;
        case 0x31faecu: goto label_31faec;
        case 0x31fb00u: goto label_31fb00;
        default: break;
    }

    ctx->pc = 0x31fa10u;

    // 0x31fa10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31fa14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31fa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31fa18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31fa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31fa1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31fa1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31fa24: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x31fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x31fa28: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x31FA28u;
    {
        const bool branch_taken_0x31fa28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA28u;
        // 0x31fa2c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa28) {
            ctx->pc = 0x31FB04u;
            goto label_31fb04;
        }
    }
    ctx->pc = 0x31FA30u;
    // 0x31fa30: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x31fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x31fa34: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31FA34u;
    {
        const bool branch_taken_0x31fa34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA34u;
        // 0x31fa38: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa34) {
            ctx->pc = 0x31FA5Cu;
            goto label_31fa5c;
        }
    }
    ctx->pc = 0x31FA3Cu;
    // 0x31fa3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31fa40: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x31fa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31fa44: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x31fa44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x31fa48: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x31FA48u;
    SET_GPR_U32(ctx, 31, 0x31FA50u);
    ctx->pc = 0x31FA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA48u;
    // 0x31fa4c: 0x9045060c  lbu         $a1, 0x60C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x31FA48u, 0x31FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FA50u;
label_31fa50:
    // 0x31fa50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fa54: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31FA54u;
    {
        const bool branch_taken_0x31fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA54u;
        // 0x31fa58: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa54) {
            ctx->pc = 0x31FB00u;
            goto label_31fb00;
        }
    }
    ctx->pc = 0x31FA5Cu;
label_31fa5c:
    // 0x31fa5c: 0x1470001c  bne         $v1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31FA5Cu;
    {
        const bool branch_taken_0x31fa5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x31FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA5Cu;
        // 0x31fa60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa5c) {
            ctx->pc = 0x31FAD0u;
            goto label_31fad0;
        }
    }
    ctx->pc = 0x31FA64u;
    // 0x31fa64: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x31fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x31fa68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31fa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa6c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x31FA6Cu;
    SET_GPR_U32(ctx, 31, 0x31FA74u);
    ctx->pc = 0x31FA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA6Cu;
    // 0x31fa70: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x31FA6Cu, 0x31FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FA74u;
label_31fa74:
    // 0x31fa74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31fa74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31fa78: 0x10500021  beq         $v0, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x31FA78u;
    {
        const bool branch_taken_0x31fa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x31FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA78u;
        // 0x31fa7c: 0x2406026d  addiu       $a2, $zero, 0x26D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa78) {
            ctx->pc = 0x31FB00u;
            goto label_31fb00;
        }
    }
    ctx->pc = 0x31FA80u;
    // 0x31fa80: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x31fa80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x31fa84: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31fa88: 0x8ca203b4  lw          $v0, 0x3B4($a1)
    ctx->pc = 0x31fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 948)));
    // 0x31fa8c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x31fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x31fa90: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x31fa90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31fa94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31fa98: 0x8c870214  lw          $a3, 0x214($a0)
    ctx->pc = 0x31fa98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x31fa9c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31faa0: 0x9070060c  lbu         $s0, 0x60C($v1)
    ctx->pc = 0x31faa0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1548)));
    // 0x31faa4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x31faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x31faa8: 0xc05a582  jal         func_169608
    ctx->pc = 0x31FAA8u;
    SET_GPR_U32(ctx, 31, 0x31FAB0u);
    ctx->pc = 0x31FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FAA8u;
    // 0x31faac: 0x90450040  lbu         $a1, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169608u, 0x31FAA8u, 0x31FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FAB0u;
label_31fab0:
    // 0x31fab0: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x31fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x31fab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31fab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fab8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x31fab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x31fabc: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x31FABCu;
    SET_GPR_U32(ctx, 31, 0x31FAC4u);
    ctx->pc = 0x31FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FABCu;
    // 0x31fac0: 0x2407004e  addiu       $a3, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x31FABCu, 0x31FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FAC4u;
label_31fac4:
    // 0x31fac4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31fac8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31FAC8u;
    {
        const bool branch_taken_0x31fac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAC8u;
        // 0x31facc: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fac8) {
            ctx->pc = 0x31FB00u;
            goto label_31fb00;
        }
    }
    ctx->pc = 0x31FAD0u;
label_31fad0:
    // 0x31fad0: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31FAD0u;
    {
        const bool branch_taken_0x31fad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31fad0) {
            ctx->pc = 0x31FAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FAD0u;
            // 0x31fad4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FB04u;
            goto label_31fb04;
        }
    }
    ctx->pc = 0x31FAD8u;
    // 0x31fad8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x31fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x31fadc: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x31fadcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x31fae0: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x31fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x31fae4: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x31FAE4u;
    SET_GPR_U32(ctx, 31, 0x31FAECu);
    ctx->pc = 0x31FAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FAE4u;
    // 0x31fae8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x31FAE4u, 0x31FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FAECu;
label_31faec:
    // 0x31faec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31faecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31faf0: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FAF0u;
    {
        const bool branch_taken_0x31faf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x31FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAF0u;
        // 0x31faf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31faf0) {
            ctx->pc = 0x31FB00u;
            goto label_31fb00;
        }
    }
    ctx->pc = 0x31FAF8u;
    // 0x31faf8: 0xc0c7de8  jal         func_31F7A0
    ctx->pc = 0x31FAF8u;
    SET_GPR_U32(ctx, 31, 0x31FB00u);
    ctx->pc = 0x31FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FAF8u;
    // 0x31fafc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F7A0u, 0x31FAF8u, 0x31FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB00u;
label_31fb00:
    // 0x31fb00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31fb00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31fb04:
    // 0x31fb04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31fb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fb08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31fb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB0Cu;
        // 0x31fb10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FB14u;
    // 0x31fb14: 0x0  nop
    ctx->pc = 0x31fb14u;
    // NOP
    ctx->pc = 0x31fb18u;
}

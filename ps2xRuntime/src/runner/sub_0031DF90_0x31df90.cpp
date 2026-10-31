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

// Function: sub_0031DF90
// Address: 0x31df90 - 0x31e098
void sub_0031DF90_0x31df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DF90_0x31df90");
#endif

    switch (ctx->pc) {
        case 0x31dfd0u: goto label_31dfd0;
        case 0x31dff4u: goto label_31dff4;
        case 0x31e030u: goto label_31e030;
        case 0x31e044u: goto label_31e044;
        case 0x31e06cu: goto label_31e06c;
        case 0x31e080u: goto label_31e080;
        default: break;
    }

    ctx->pc = 0x31df90u;

    // 0x31df90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31df94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31df98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31df98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31df9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31df9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dfa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31dfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31dfa4: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x31dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x31dfa8: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x31DFA8u;
    {
        const bool branch_taken_0x31dfa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFA8u;
        // 0x31dfac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dfa8) {
            ctx->pc = 0x31E084u;
            goto label_31e084;
        }
    }
    ctx->pc = 0x31DFB0u;
    // 0x31dfb0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x31dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x31dfb4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31DFB4u;
    {
        const bool branch_taken_0x31dfb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFB4u;
        // 0x31dfb8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dfb4) {
            ctx->pc = 0x31DFDCu;
            goto label_31dfdc;
        }
    }
    ctx->pc = 0x31DFBCu;
    // 0x31dfbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31dfc0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x31dfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31dfc4: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x31dfc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x31dfc8: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x31DFC8u;
    SET_GPR_U32(ctx, 31, 0x31DFD0u);
    ctx->pc = 0x31DFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DFC8u;
    // 0x31dfcc: 0x9045060c  lbu         $a1, 0x60C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x31DFC8u, 0x31DFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFD0u;
label_31dfd0:
    // 0x31dfd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dfd4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31DFD4u;
    {
        const bool branch_taken_0x31dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFD4u;
        // 0x31dfd8: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dfd4) {
            ctx->pc = 0x31E080u;
            goto label_31e080;
        }
    }
    ctx->pc = 0x31DFDCu;
label_31dfdc:
    // 0x31dfdc: 0x1470001c  bne         $v1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31DFDCu;
    {
        const bool branch_taken_0x31dfdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x31DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFDCu;
        // 0x31dfe0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dfdc) {
            ctx->pc = 0x31E050u;
            goto label_31e050;
        }
    }
    ctx->pc = 0x31DFE4u;
    // 0x31dfe4: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x31dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x31dfe8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31dfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dfec: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x31DFECu;
    SET_GPR_U32(ctx, 31, 0x31DFF4u);
    ctx->pc = 0x31DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DFECu;
    // 0x31dff0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x31DFECu, 0x31DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFF4u;
label_31dff4:
    // 0x31dff4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31dff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31dff8: 0x10500021  beq         $v0, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x31DFF8u;
    {
        const bool branch_taken_0x31dff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x31DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFF8u;
        // 0x31dffc: 0x2406026d  addiu       $a2, $zero, 0x26D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dff8) {
            ctx->pc = 0x31E080u;
            goto label_31e080;
        }
    }
    ctx->pc = 0x31E000u;
    // 0x31e000: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x31e000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x31e004: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31e004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31e008: 0x8ca203b4  lw          $v0, 0x3B4($a1)
    ctx->pc = 0x31e008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 948)));
    // 0x31e00c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x31e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x31e010: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x31e010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31e014: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31e014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31e018: 0x8c870214  lw          $a3, 0x214($a0)
    ctx->pc = 0x31e018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x31e01c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31e01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e020: 0x9070060c  lbu         $s0, 0x60C($v1)
    ctx->pc = 0x31e020u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1548)));
    // 0x31e024: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x31e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x31e028: 0xc05a582  jal         func_169608
    ctx->pc = 0x31E028u;
    SET_GPR_U32(ctx, 31, 0x31E030u);
    ctx->pc = 0x31E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E028u;
    // 0x31e02c: 0x90450040  lbu         $a1, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169608u, 0x31E028u, 0x31E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E030u;
label_31e030:
    // 0x31e030: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x31e030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x31e034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31e034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e038: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x31e038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x31e03c: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x31E03Cu;
    SET_GPR_U32(ctx, 31, 0x31E044u);
    ctx->pc = 0x31E040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E03Cu;
    // 0x31e040: 0x2407004e  addiu       $a3, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x31E03Cu, 0x31E044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E044u;
label_31e044:
    // 0x31e044: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31e044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31e048: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31E048u;
    {
        const bool branch_taken_0x31e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E048u;
        // 0x31e04c: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e048) {
            ctx->pc = 0x31E080u;
            goto label_31e080;
        }
    }
    ctx->pc = 0x31E050u;
label_31e050:
    // 0x31e050: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31E050u;
    {
        const bool branch_taken_0x31e050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31e050) {
            ctx->pc = 0x31E054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E050u;
            // 0x31e054: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E084u;
            goto label_31e084;
        }
    }
    ctx->pc = 0x31E058u;
    // 0x31e058: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x31e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x31e05c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x31e05cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x31e060: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x31e060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x31e064: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x31E064u;
    SET_GPR_U32(ctx, 31, 0x31E06Cu);
    ctx->pc = 0x31E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E064u;
    // 0x31e068: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x31E064u, 0x31E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E06Cu;
label_31e06c:
    // 0x31e06c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31e06cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31e070: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E070u;
    {
        const bool branch_taken_0x31e070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x31E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E070u;
        // 0x31e074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e070) {
            ctx->pc = 0x31E080u;
            goto label_31e080;
        }
    }
    ctx->pc = 0x31E078u;
    // 0x31e078: 0xc0c7758  jal         func_31DD60
    ctx->pc = 0x31E078u;
    SET_GPR_U32(ctx, 31, 0x31E080u);
    ctx->pc = 0x31E07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E078u;
    // 0x31e07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD60u, 0x31E078u, 0x31E080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E080u;
label_31e080:
    // 0x31e080: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31e080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31e084:
    // 0x31e084: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31e084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e08c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E08Cu;
        // 0x31e090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E094u;
    // 0x31e094: 0x0  nop
    ctx->pc = 0x31e094u;
    // NOP
    ctx->pc = 0x31e098u;
}

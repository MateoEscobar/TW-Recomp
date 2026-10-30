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

// Function: sub_0016A000
// Address: 0x16a000 - 0x16a088
void sub_0016A000_0x16a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A000_0x16a000");
#endif

    switch (ctx->pc) {
        case 0x16a000u: goto label_16a000;
        case 0x16a004u: goto label_16a004;
        case 0x16a008u: goto label_16a008;
        case 0x16a00cu: goto label_16a00c;
        case 0x16a010u: goto label_16a010;
        case 0x16a014u: goto label_16a014;
        case 0x16a018u: goto label_16a018;
        case 0x16a01cu: goto label_16a01c;
        case 0x16a020u: goto label_16a020;
        case 0x16a024u: goto label_16a024;
        case 0x16a028u: goto label_16a028;
        case 0x16a02cu: goto label_16a02c;
        case 0x16a030u: goto label_16a030;
        case 0x16a034u: goto label_16a034;
        case 0x16a038u: goto label_16a038;
        case 0x16a03cu: goto label_16a03c;
        case 0x16a040u: goto label_16a040;
        case 0x16a044u: goto label_16a044;
        case 0x16a048u: goto label_16a048;
        case 0x16a04cu: goto label_16a04c;
        case 0x16a050u: goto label_16a050;
        case 0x16a054u: goto label_16a054;
        case 0x16a058u: goto label_16a058;
        case 0x16a05cu: goto label_16a05c;
        case 0x16a060u: goto label_16a060;
        case 0x16a064u: goto label_16a064;
        case 0x16a068u: goto label_16a068;
        case 0x16a06cu: goto label_16a06c;
        case 0x16a070u: goto label_16a070;
        case 0x16a074u: goto label_16a074;
        case 0x16a078u: goto label_16a078;
        case 0x16a07cu: goto label_16a07c;
        case 0x16a080u: goto label_16a080;
        case 0x16a084u: goto label_16a084;
        default: break;
    }

    ctx->pc = 0x16a000u;

label_16a000:
    // 0x16a000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16a004:
    // 0x16a004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16a008:
    // 0x16a008: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_16a00c:
    // 0x16a00c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a00cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a010:
    // 0x16a010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16a014:
    // 0x16a014: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16a014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a018:
    // 0x16a018: 0xa22500d8  sb          $a1, 0xD8($s1)
    ctx->pc = 0x16a018u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 216), (uint8_t)GPR_U32(ctx, 5));
label_16a01c:
    // 0x16a01c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a020:
    // 0x16a020: 0xc137826  jal         func_4DE098
label_16a024:
    if (ctx->pc == 0x16A024u) {
        ctx->pc = 0x16A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A020u;
        // 0x16a024: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A028u;
        goto label_16a028;
    }
    ctx->pc = 0x16A020u;
    SET_GPR_U32(ctx, 31, 0x16A028u);
    ctx->pc = 0x16A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A020u;
    // 0x16a024: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16A020u, 0x16A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A028u;
label_16a028:
    // 0x16a028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16a028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16a02c:
    // 0x16a02c: 0xc0e409a  jal         func_390268
label_16a030:
    if (ctx->pc == 0x16A030u) {
        ctx->pc = 0x16A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A02Cu;
        // 0x16a030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A034u;
        goto label_16a034;
    }
    ctx->pc = 0x16A02Cu;
    SET_GPR_U32(ctx, 31, 0x16A034u);
    ctx->pc = 0x16A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A02Cu;
    // 0x16a030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16A02Cu, 0x16A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A034u;
label_16a034:
    // 0x16a034: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a038:
    // 0x16a038: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_16a03c:
    if (ctx->pc == 0x16A03Cu) {
        ctx->pc = 0x16A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A038u;
        // 0x16a03c: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A040u;
        goto label_16a040;
    }
    ctx->pc = 0x16A038u;
    {
        const bool branch_taken_0x16a038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A038u;
        // 0x16a03c: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a038) {
            ctx->pc = 0x16A068u;
            goto label_16a068;
        }
    }
    ctx->pc = 0x16A040u;
label_16a040:
    // 0x16a040: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16a044:
    // 0x16a044: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16a044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_16a048:
    // 0x16a048: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16a04c:
    // 0x16a04c: 0x40f809  jalr        $v0
label_16a050:
    if (ctx->pc == 0x16A050u) {
        ctx->pc = 0x16A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A04Cu;
        // 0x16a050: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A054u;
        goto label_16a054;
    }
    ctx->pc = 0x16A04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A054u);
        ctx->pc = 0x16A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A04Cu;
        // 0x16a050: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A04Cu, 0x16A054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A054u;
label_16a054:
    // 0x16a054: 0x922500d8  lbu         $a1, 0xD8($s1)
    ctx->pc = 0x16a054u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 216)));
label_16a058:
    // 0x16a058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16a058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a05c:
    // 0x16a05c: 0xc08d68a  jal         func_235A28
label_16a060:
    if (ctx->pc == 0x16A060u) {
        ctx->pc = 0x16A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A05Cu;
        // 0x16a060: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A064u;
        goto label_16a064;
    }
    ctx->pc = 0x16A05Cu;
    SET_GPR_U32(ctx, 31, 0x16A064u);
    ctx->pc = 0x16A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A05Cu;
    // 0x16a060: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A28u, 0x16A05Cu, 0x16A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A064u;
label_16a064:
    // 0x16a064: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16a064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16a068:
    // 0x16a068: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_16a06c:
    if (ctx->pc == 0x16A06Cu) {
        ctx->pc = 0x16A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A068u;
        // 0x16a06c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A070u;
        goto label_16a070;
    }
    ctx->pc = 0x16A068u;
    {
        const bool branch_taken_0x16a068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a068) {
            ctx->pc = 0x16A06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A068u;
            // 0x16a06c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a020;
        }
    }
    ctx->pc = 0x16A070u;
label_16a070:
    // 0x16a070: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16a070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16a074:
    // 0x16a074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16a078:
    // 0x16a078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a07c:
    // 0x16a07c: 0x3e00008  jr          $ra
label_16a080:
    if (ctx->pc == 0x16A080u) {
        ctx->pc = 0x16A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A07Cu;
        // 0x16a080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A084u;
        goto label_16a084;
    }
    ctx->pc = 0x16A07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A07Cu;
        // 0x16a080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A084u;
label_16a084:
    // 0x16a084: 0x0  nop
    ctx->pc = 0x16a084u;
    // NOP
    ctx->pc = 0x16a088u;
}

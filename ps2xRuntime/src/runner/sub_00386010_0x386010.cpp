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

// Function: sub_00386010
// Address: 0x386010 - 0x3860b8
void sub_00386010_0x386010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386010_0x386010");
#endif

    switch (ctx->pc) {
        case 0x386010u: goto label_386010;
        case 0x386014u: goto label_386014;
        case 0x386018u: goto label_386018;
        case 0x38601cu: goto label_38601c;
        case 0x386020u: goto label_386020;
        case 0x386024u: goto label_386024;
        case 0x386028u: goto label_386028;
        case 0x38602cu: goto label_38602c;
        case 0x386030u: goto label_386030;
        case 0x386034u: goto label_386034;
        case 0x386038u: goto label_386038;
        case 0x38603cu: goto label_38603c;
        case 0x386040u: goto label_386040;
        case 0x386044u: goto label_386044;
        case 0x386048u: goto label_386048;
        case 0x38604cu: goto label_38604c;
        case 0x386050u: goto label_386050;
        case 0x386054u: goto label_386054;
        case 0x386058u: goto label_386058;
        case 0x38605cu: goto label_38605c;
        case 0x386060u: goto label_386060;
        case 0x386064u: goto label_386064;
        case 0x386068u: goto label_386068;
        case 0x38606cu: goto label_38606c;
        case 0x386070u: goto label_386070;
        case 0x386074u: goto label_386074;
        case 0x386078u: goto label_386078;
        case 0x38607cu: goto label_38607c;
        case 0x386080u: goto label_386080;
        case 0x386084u: goto label_386084;
        case 0x386088u: goto label_386088;
        case 0x38608cu: goto label_38608c;
        case 0x386090u: goto label_386090;
        case 0x386094u: goto label_386094;
        case 0x386098u: goto label_386098;
        case 0x38609cu: goto label_38609c;
        case 0x3860a0u: goto label_3860a0;
        case 0x3860a4u: goto label_3860a4;
        case 0x3860a8u: goto label_3860a8;
        case 0x3860acu: goto label_3860ac;
        case 0x3860b0u: goto label_3860b0;
        case 0x3860b4u: goto label_3860b4;
        default: break;
    }

    ctx->pc = 0x386010u;

label_386010:
    // 0x386010: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x386010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_386014:
    // 0x386014: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x386014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_386018:
    // 0x386018: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x386018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_38601c:
    // 0x38601c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x38601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_386020:
    // 0x386020: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x386020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_386024:
    // 0x386024: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x386024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_386028:
    // 0x386028: 0xc0e4060  jal         func_390180
label_38602c:
    if (ctx->pc == 0x38602Cu) {
        ctx->pc = 0x38602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386028u;
        // 0x38602c: 0xafa50044  sw          $a1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386030u;
        goto label_386030;
    }
    ctx->pc = 0x386028u;
    SET_GPR_U32(ctx, 31, 0x386030u);
    ctx->pc = 0x38602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386028u;
    // 0x38602c: 0xafa50044  sw          $a1, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x386028u, 0x386030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386030u;
label_386030:
    // 0x386030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x386030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386034:
    // 0x386034: 0xc0e4060  jal         func_390180
label_386038:
    if (ctx->pc == 0x386038u) {
        ctx->pc = 0x386038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386034u;
        // 0x386038: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38603Cu;
        goto label_38603c;
    }
    ctx->pc = 0x386034u;
    SET_GPR_U32(ctx, 31, 0x38603Cu);
    ctx->pc = 0x386038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386034u;
    // 0x386038: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x386034u, 0x38603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38603Cu;
label_38603c:
    // 0x38603c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_386040:
    if (ctx->pc == 0x386040u) {
        ctx->pc = 0x386040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38603Cu;
        // 0x386040: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386044u;
        goto label_386044;
    }
    ctx->pc = 0x38603Cu;
    {
        const bool branch_taken_0x38603c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38603Cu;
        // 0x386040: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38603c) {
            ctx->pc = 0x3860A0u;
            goto label_3860a0;
        }
    }
    ctx->pc = 0x386044u;
label_386044:
    // 0x386044: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_386048:
    if (ctx->pc == 0x386048u) {
        ctx->pc = 0x386048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386044u;
        // 0x386048: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38604Cu;
        goto label_38604c;
    }
    ctx->pc = 0x386044u;
    {
        const bool branch_taken_0x386044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x386048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386044u;
        // 0x386048: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386044) {
            ctx->pc = 0x3860A0u;
            goto label_3860a0;
        }
    }
    ctx->pc = 0x38604Cu;
label_38604c:
    // 0x38604c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38604cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_386050:
    // 0x386050: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x386050u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_386054:
    // 0x386054: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x386054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_386058:
    // 0x386058: 0x60f809  jalr        $v1
label_38605c:
    if (ctx->pc == 0x38605Cu) {
        ctx->pc = 0x38605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386058u;
        // 0x38605c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386060u;
        goto label_386060;
    }
    ctx->pc = 0x386058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386060u);
        ctx->pc = 0x38605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386058u;
        // 0x38605c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386058u, 0x386060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386060u;
label_386060:
    // 0x386060: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x386060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_386064:
    // 0x386064: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x386064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_386068:
    // 0x386068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x386068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38606c:
    // 0x38606c: 0x84c500a0  lh          $a1, 0xA0($a2)
    ctx->pc = 0x38606cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 160)));
label_386070:
    // 0x386070: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x386070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_386074:
    // 0x386074: 0x40f809  jalr        $v0
label_386078:
    if (ctx->pc == 0x386078u) {
        ctx->pc = 0x386078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386074u;
        // 0x386078: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38607Cu;
        goto label_38607c;
    }
    ctx->pc = 0x386074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38607Cu);
        ctx->pc = 0x386078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386074u;
        // 0x386078: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386074u, 0x38607Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38607Cu;
label_38607c:
    // 0x38607c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38607cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_386080:
    // 0x386080: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x386080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_386084:
    // 0x386084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x386084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386088:
    // 0x386088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x386088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38608c:
    // 0x38608c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x38608cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_386090:
    // 0x386090: 0xc09381e  jal         func_24E078
label_386094:
    if (ctx->pc == 0x386094u) {
        ctx->pc = 0x386094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386090u;
        // 0x386094: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x386098u;
        goto label_386098;
    }
    ctx->pc = 0x386090u;
    SET_GPR_U32(ctx, 31, 0x386098u);
    ctx->pc = 0x386094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386090u;
    // 0x386094: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x386090u, 0x386098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386098u;
label_386098:
    // 0x386098: 0x10000003  b           . + 4 + (0x3 << 2)
label_38609c:
    if (ctx->pc == 0x38609Cu) {
        ctx->pc = 0x38609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386098u;
        // 0x38609c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860A0u;
        goto label_3860a0;
    }
    ctx->pc = 0x386098u;
    {
        const bool branch_taken_0x386098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386098u;
        // 0x38609c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386098) {
            ctx->pc = 0x3860A8u;
            goto label_3860a8;
        }
    }
    ctx->pc = 0x3860A0u;
label_3860a0:
    // 0x3860a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3860a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3860a4:
    // 0x3860a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3860a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3860a8:
    // 0x3860a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3860a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3860ac:
    // 0x3860ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3860acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3860b0:
    // 0x3860b0: 0x3e00008  jr          $ra
label_3860b4:
    if (ctx->pc == 0x3860B4u) {
        ctx->pc = 0x3860B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860B0u;
        // 0x3860b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860B8u;
        goto label_fallthrough_0x3860b0;
    }
    ctx->pc = 0x3860B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3860B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860B0u;
        // 0x3860b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3860B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3860b0:
    ctx->pc = 0x3860B8u;
}

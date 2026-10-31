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

// Function: sub_002AF018
// Address: 0x2af018 - 0x2af0b8
void sub_002AF018_0x2af018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF018_0x2af018");
#endif

    switch (ctx->pc) {
        case 0x2af018u: goto label_2af018;
        case 0x2af01cu: goto label_2af01c;
        case 0x2af020u: goto label_2af020;
        case 0x2af024u: goto label_2af024;
        case 0x2af028u: goto label_2af028;
        case 0x2af02cu: goto label_2af02c;
        case 0x2af030u: goto label_2af030;
        case 0x2af034u: goto label_2af034;
        case 0x2af038u: goto label_2af038;
        case 0x2af03cu: goto label_2af03c;
        case 0x2af040u: goto label_2af040;
        case 0x2af044u: goto label_2af044;
        case 0x2af048u: goto label_2af048;
        case 0x2af04cu: goto label_2af04c;
        case 0x2af050u: goto label_2af050;
        case 0x2af054u: goto label_2af054;
        case 0x2af058u: goto label_2af058;
        case 0x2af05cu: goto label_2af05c;
        case 0x2af060u: goto label_2af060;
        case 0x2af064u: goto label_2af064;
        case 0x2af068u: goto label_2af068;
        case 0x2af06cu: goto label_2af06c;
        case 0x2af070u: goto label_2af070;
        case 0x2af074u: goto label_2af074;
        case 0x2af078u: goto label_2af078;
        case 0x2af07cu: goto label_2af07c;
        case 0x2af080u: goto label_2af080;
        case 0x2af084u: goto label_2af084;
        case 0x2af088u: goto label_2af088;
        case 0x2af08cu: goto label_2af08c;
        case 0x2af090u: goto label_2af090;
        case 0x2af094u: goto label_2af094;
        case 0x2af098u: goto label_2af098;
        case 0x2af09cu: goto label_2af09c;
        case 0x2af0a0u: goto label_2af0a0;
        case 0x2af0a4u: goto label_2af0a4;
        case 0x2af0a8u: goto label_2af0a8;
        case 0x2af0acu: goto label_2af0ac;
        case 0x2af0b0u: goto label_2af0b0;
        case 0x2af0b4u: goto label_2af0b4;
        default: break;
    }

    ctx->pc = 0x2af018u;

label_2af018:
    // 0x2af018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2af018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2af01c:
    // 0x2af01c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2af01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2af020:
    // 0x2af020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2af020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2af024:
    // 0x2af024: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2af024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2af028:
    // 0x2af028: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2af028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2af02c:
    // 0x2af02c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2af030:
    // 0x2af030: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x2af030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
label_2af034:
    // 0x2af034: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
label_2af038:
    if (ctx->pc == 0x2AF038u) {
        ctx->pc = 0x2AF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF034u;
        // 0x2af038: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF03Cu;
        goto label_2af03c;
    }
    ctx->pc = 0x2AF034u;
    {
        const bool branch_taken_0x2af034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF034u;
        // 0x2af038: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af034) {
            ctx->pc = 0x2AF0A8u;
            goto label_2af0a8;
        }
    }
    ctx->pc = 0x2AF03Cu;
label_2af03c:
    // 0x2af03c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2af040:
    // 0x2af040: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2af040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2af044:
    // 0x2af044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2af044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2af048:
    // 0x2af048: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_2af04c:
    if (ctx->pc == 0x2AF04Cu) {
        ctx->pc = 0x2AF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF048u;
        // 0x2af04c: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF050u;
        goto label_2af050;
    }
    ctx->pc = 0x2AF048u;
    {
        const bool branch_taken_0x2af048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2af048) {
            ctx->pc = 0x2AF04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF048u;
            // 0x2af04c: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF050u;
            goto label_2af050;
        }
    }
    ctx->pc = 0x2AF050u;
label_2af050:
    // 0x2af050: 0xc0abc2e  jal         func_2AF0B8
label_2af054:
    if (ctx->pc == 0x2AF054u) {
        ctx->pc = 0x2AF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF050u;
        // 0x2af054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF058u;
        goto label_2af058;
    }
    ctx->pc = 0x2AF050u;
    SET_GPR_U32(ctx, 31, 0x2AF058u);
    ctx->pc = 0x2AF054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF050u;
    // 0x2af054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF0B8u, 0x2AF050u, 0x2AF058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF058u;
label_2af058:
    // 0x2af058: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2af058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2af05c:
    // 0x2af05c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2af05cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2af060:
    // 0x2af060: 0x8e030664  lw          $v1, 0x664($s0)
    ctx->pc = 0x2af060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
label_2af064:
    // 0x2af064: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_2af068:
    if (ctx->pc == 0x2AF068u) {
        ctx->pc = 0x2AF068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF064u;
        // 0x2af068: 0xa2200029  sb          $zero, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF06Cu;
        goto label_2af06c;
    }
    ctx->pc = 0x2AF064u;
    {
        const bool branch_taken_0x2af064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af064) {
            ctx->pc = 0x2AF068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF064u;
            // 0x2af068: 0xa2200029  sb          $zero, 0x29($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF0A4u;
            goto label_2af0a4;
        }
    }
    ctx->pc = 0x2AF06Cu;
label_2af06c:
    // 0x2af06c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2af06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2af070:
    // 0x2af070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af074:
    // 0x2af074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af078:
    // 0x2af078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2af078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af07c:
    // 0x2af07c: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x2af07cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_2af080:
    // 0x2af080: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x2af080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_2af084:
    // 0x2af084: 0x40f809  jalr        $v0
label_2af088:
    if (ctx->pc == 0x2AF088u) {
        ctx->pc = 0x2AF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF084u;
        // 0x2af088: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF08Cu;
        goto label_2af08c;
    }
    ctx->pc = 0x2AF084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AF08Cu);
        ctx->pc = 0x2AF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF084u;
        // 0x2af088: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF084u, 0x2AF08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AF08Cu;
label_2af08c:
    // 0x2af08c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2af08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2af090:
    // 0x2af090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2af094:
    // 0x2af094: 0x24a53f90  addiu       $a1, $a1, 0x3F90
    ctx->pc = 0x2af094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16272));
label_2af098:
    // 0x2af098: 0xc089c7c  jal         func_2271F0
label_2af09c:
    if (ctx->pc == 0x2AF09Cu) {
        ctx->pc = 0x2AF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF098u;
        // 0x2af09c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF0A0u;
        goto label_2af0a0;
    }
    ctx->pc = 0x2AF098u;
    SET_GPR_U32(ctx, 31, 0x2AF0A0u);
    ctx->pc = 0x2AF09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF098u;
    // 0x2af09c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271F0u, 0x2AF098u, 0x2AF0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF0A0u;
label_2af0a0:
    // 0x2af0a0: 0xa2200029  sb          $zero, 0x29($s1)
    ctx->pc = 0x2af0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
label_2af0a4:
    // 0x2af0a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2af0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2af0a8:
    // 0x2af0a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2af0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2af0ac:
    // 0x2af0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2af0b0:
    // 0x2af0b0: 0x3e00008  jr          $ra
label_2af0b4:
    if (ctx->pc == 0x2AF0B4u) {
        ctx->pc = 0x2AF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0B0u;
        // 0x2af0b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF0B8u;
        goto label_fallthrough_0x2af0b0;
    }
    ctx->pc = 0x2AF0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0B0u;
        // 0x2af0b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2af0b0:
    ctx->pc = 0x2AF0B8u;
}

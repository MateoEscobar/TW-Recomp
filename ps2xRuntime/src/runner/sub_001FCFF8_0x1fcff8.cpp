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

// Function: sub_001FCFF8
// Address: 0x1fcff8 - 0x1fd160
void sub_001FCFF8_0x1fcff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCFF8_0x1fcff8");
#endif

    switch (ctx->pc) {
        case 0x1fcff8u: goto label_1fcff8;
        case 0x1fcffcu: goto label_1fcffc;
        case 0x1fd000u: goto label_1fd000;
        case 0x1fd004u: goto label_1fd004;
        case 0x1fd008u: goto label_1fd008;
        case 0x1fd00cu: goto label_1fd00c;
        case 0x1fd010u: goto label_1fd010;
        case 0x1fd014u: goto label_1fd014;
        case 0x1fd018u: goto label_1fd018;
        case 0x1fd01cu: goto label_1fd01c;
        case 0x1fd020u: goto label_1fd020;
        case 0x1fd024u: goto label_1fd024;
        case 0x1fd028u: goto label_1fd028;
        case 0x1fd02cu: goto label_1fd02c;
        case 0x1fd030u: goto label_1fd030;
        case 0x1fd034u: goto label_1fd034;
        case 0x1fd038u: goto label_1fd038;
        case 0x1fd03cu: goto label_1fd03c;
        case 0x1fd040u: goto label_1fd040;
        case 0x1fd044u: goto label_1fd044;
        case 0x1fd048u: goto label_1fd048;
        case 0x1fd04cu: goto label_1fd04c;
        case 0x1fd050u: goto label_1fd050;
        case 0x1fd054u: goto label_1fd054;
        case 0x1fd058u: goto label_1fd058;
        case 0x1fd05cu: goto label_1fd05c;
        case 0x1fd060u: goto label_1fd060;
        case 0x1fd064u: goto label_1fd064;
        case 0x1fd068u: goto label_1fd068;
        case 0x1fd06cu: goto label_1fd06c;
        case 0x1fd070u: goto label_1fd070;
        case 0x1fd074u: goto label_1fd074;
        case 0x1fd078u: goto label_1fd078;
        case 0x1fd07cu: goto label_1fd07c;
        case 0x1fd080u: goto label_1fd080;
        case 0x1fd084u: goto label_1fd084;
        case 0x1fd088u: goto label_1fd088;
        case 0x1fd08cu: goto label_1fd08c;
        case 0x1fd090u: goto label_1fd090;
        case 0x1fd094u: goto label_1fd094;
        case 0x1fd098u: goto label_1fd098;
        case 0x1fd09cu: goto label_1fd09c;
        case 0x1fd0a0u: goto label_1fd0a0;
        case 0x1fd0a4u: goto label_1fd0a4;
        case 0x1fd0a8u: goto label_1fd0a8;
        case 0x1fd0acu: goto label_1fd0ac;
        case 0x1fd0b0u: goto label_1fd0b0;
        case 0x1fd0b4u: goto label_1fd0b4;
        case 0x1fd0b8u: goto label_1fd0b8;
        case 0x1fd0bcu: goto label_1fd0bc;
        case 0x1fd0c0u: goto label_1fd0c0;
        case 0x1fd0c4u: goto label_1fd0c4;
        case 0x1fd0c8u: goto label_1fd0c8;
        case 0x1fd0ccu: goto label_1fd0cc;
        case 0x1fd0d0u: goto label_1fd0d0;
        case 0x1fd0d4u: goto label_1fd0d4;
        case 0x1fd0d8u: goto label_1fd0d8;
        case 0x1fd0dcu: goto label_1fd0dc;
        case 0x1fd0e0u: goto label_1fd0e0;
        case 0x1fd0e4u: goto label_1fd0e4;
        case 0x1fd0e8u: goto label_1fd0e8;
        case 0x1fd0ecu: goto label_1fd0ec;
        case 0x1fd0f0u: goto label_1fd0f0;
        case 0x1fd0f4u: goto label_1fd0f4;
        case 0x1fd0f8u: goto label_1fd0f8;
        case 0x1fd0fcu: goto label_1fd0fc;
        case 0x1fd100u: goto label_1fd100;
        case 0x1fd104u: goto label_1fd104;
        case 0x1fd108u: goto label_1fd108;
        case 0x1fd10cu: goto label_1fd10c;
        case 0x1fd110u: goto label_1fd110;
        case 0x1fd114u: goto label_1fd114;
        case 0x1fd118u: goto label_1fd118;
        case 0x1fd11cu: goto label_1fd11c;
        case 0x1fd120u: goto label_1fd120;
        case 0x1fd124u: goto label_1fd124;
        case 0x1fd128u: goto label_1fd128;
        case 0x1fd12cu: goto label_1fd12c;
        case 0x1fd130u: goto label_1fd130;
        case 0x1fd134u: goto label_1fd134;
        case 0x1fd138u: goto label_1fd138;
        case 0x1fd13cu: goto label_1fd13c;
        case 0x1fd140u: goto label_1fd140;
        case 0x1fd144u: goto label_1fd144;
        case 0x1fd148u: goto label_1fd148;
        case 0x1fd14cu: goto label_1fd14c;
        case 0x1fd150u: goto label_1fd150;
        case 0x1fd154u: goto label_1fd154;
        case 0x1fd158u: goto label_1fd158;
        case 0x1fd15cu: goto label_1fd15c;
        default: break;
    }

    ctx->pc = 0x1fcff8u;

label_1fcff8:
    // 0x1fcff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fcff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fcffc:
    // 0x1fcffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fcffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fd000:
    // 0x1fd000: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fd000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1fd004:
    // 0x1fd004: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd008:
    // 0x1fd008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd00c:
    // 0x1fd00c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1fd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fd010:
    // 0x1fd010: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_1fd014:
    if (ctx->pc == 0x1FD014u) {
        ctx->pc = 0x1FD014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD010u;
        // 0x1fd014: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD018u;
        goto label_1fd018;
    }
    ctx->pc = 0x1FD010u;
    {
        const bool branch_taken_0x1fd010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD010u;
        // 0x1fd014: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd010) {
            ctx->pc = 0x1FD14Cu;
            goto label_1fd14c;
        }
    }
    ctx->pc = 0x1FD018u;
label_1fd018:
    // 0x1fd018: 0xc073462  jal         func_1CD188
label_1fd01c:
    if (ctx->pc == 0x1FD01Cu) {
        ctx->pc = 0x1FD01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD018u;
        // 0x1fd01c: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD020u;
        goto label_1fd020;
    }
    ctx->pc = 0x1FD018u;
    SET_GPR_U32(ctx, 31, 0x1FD020u);
    ctx->pc = 0x1FD01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD018u;
    // 0x1fd01c: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1FD018u, 0x1FD020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD020u;
label_1fd020:
    // 0x1fd020: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1fd020u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1fd024:
    // 0x1fd024: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x1fd024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_1fd028:
    // 0x1fd028: 0x26107ff0  addiu       $s0, $s0, 0x7FF0
    ctx->pc = 0x1fd028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32752));
label_1fd02c:
    // 0x1fd02c: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x1fd02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1fd030:
    // 0x1fd030: 0xc139138  jal         func_4E44E0
label_1fd034:
    if (ctx->pc == 0x1FD034u) {
        ctx->pc = 0x1FD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD030u;
        // 0x1fd034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD038u;
        goto label_1fd038;
    }
    ctx->pc = 0x1FD030u;
    SET_GPR_U32(ctx, 31, 0x1FD038u);
    ctx->pc = 0x1FD034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD030u;
    // 0x1fd034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1FD030u, 0x1FD038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD038u;
label_1fd038:
    // 0x1fd038: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x1fd038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1fd03c:
    // 0x1fd03c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd040:
    // 0x1fd040: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1fd040u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1fd044:
    // 0x1fd044: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1fd044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1fd048:
    // 0x1fd048: 0x60f809  jalr        $v1
label_1fd04c:
    if (ctx->pc == 0x1FD04Cu) {
        ctx->pc = 0x1FD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD048u;
        // 0x1fd04c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD050u;
        goto label_1fd050;
    }
    ctx->pc = 0x1FD048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD050u);
        ctx->pc = 0x1FD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD048u;
        // 0x1fd04c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD048u, 0x1FD050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD050u;
label_1fd050:
    // 0x1fd050: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1fd050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1fd054:
    // 0x1fd054: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd058:
    // 0x1fd058: 0xc138e72  jal         func_4E39C8
label_1fd05c:
    if (ctx->pc == 0x1FD05Cu) {
        ctx->pc = 0x1FD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD058u;
        // 0x1fd05c: 0x240600f3  addiu       $a2, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD060u;
        goto label_1fd060;
    }
    ctx->pc = 0x1FD058u;
    SET_GPR_U32(ctx, 31, 0x1FD060u);
    ctx->pc = 0x1FD05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD058u;
    // 0x1fd05c: 0x240600f3  addiu       $a2, $zero, 0xF3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1FD058u, 0x1FD060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD060u;
label_1fd060:
    // 0x1fd060: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x1fd060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1fd064:
    // 0x1fd064: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd068:
    // 0x1fd068: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1fd068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1fd06c:
    // 0x1fd06c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1fd06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1fd070:
    // 0x1fd070: 0x60f809  jalr        $v1
label_1fd074:
    if (ctx->pc == 0x1FD074u) {
        ctx->pc = 0x1FD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD070u;
        // 0x1fd074: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD078u;
        goto label_1fd078;
    }
    ctx->pc = 0x1FD070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD078u);
        ctx->pc = 0x1FD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD070u;
        // 0x1fd074: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD070u, 0x1FD078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD078u;
label_1fd078:
    // 0x1fd078: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x1fd078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1fd07c:
    // 0x1fd07c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd080:
    // 0x1fd080: 0xc138e72  jal         func_4E39C8
label_1fd084:
    if (ctx->pc == 0x1FD084u) {
        ctx->pc = 0x1FD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD080u;
        // 0x1fd084: 0x240600f5  addiu       $a2, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD088u;
        goto label_1fd088;
    }
    ctx->pc = 0x1FD080u;
    SET_GPR_U32(ctx, 31, 0x1FD088u);
    ctx->pc = 0x1FD084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD080u;
    // 0x1fd084: 0x240600f5  addiu       $a2, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1FD080u, 0x1FD088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD088u;
label_1fd088:
    // 0x1fd088: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x1fd088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1fd08c:
    // 0x1fd08c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd090:
    // 0x1fd090: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1fd090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1fd094:
    // 0x1fd094: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1fd094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1fd098:
    // 0x1fd098: 0x60f809  jalr        $v1
label_1fd09c:
    if (ctx->pc == 0x1FD09Cu) {
        ctx->pc = 0x1FD09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD098u;
        // 0x1fd09c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD0A0u;
        goto label_1fd0a0;
    }
    ctx->pc = 0x1FD098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD0A0u);
        ctx->pc = 0x1FD09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD098u;
        // 0x1fd09c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD098u, 0x1FD0A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD0A0u;
label_1fd0a0:
    // 0x1fd0a0: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x1fd0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1fd0a4:
    // 0x1fd0a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0a8:
    // 0x1fd0a8: 0xc138e72  jal         func_4E39C8
label_1fd0ac:
    if (ctx->pc == 0x1FD0ACu) {
        ctx->pc = 0x1FD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0A8u;
        // 0x1fd0ac: 0x240600f7  addiu       $a2, $zero, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD0B0u;
        goto label_1fd0b0;
    }
    ctx->pc = 0x1FD0A8u;
    SET_GPR_U32(ctx, 31, 0x1FD0B0u);
    ctx->pc = 0x1FD0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0A8u;
    // 0x1fd0ac: 0x240600f7  addiu       $a2, $zero, 0xF7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1FD0A8u, 0x1FD0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0B0u;
label_1fd0b0:
    // 0x1fd0b0: 0x8e2500a8  lw          $a1, 0xA8($s1)
    ctx->pc = 0x1fd0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1fd0b4:
    // 0x1fd0b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd0b8:
    // 0x1fd0b8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1fd0b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1fd0bc:
    // 0x1fd0bc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1fd0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1fd0c0:
    // 0x1fd0c0: 0x60f809  jalr        $v1
label_1fd0c4:
    if (ctx->pc == 0x1FD0C4u) {
        ctx->pc = 0x1FD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0C0u;
        // 0x1fd0c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD0C8u;
        goto label_1fd0c8;
    }
    ctx->pc = 0x1FD0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD0C8u);
        ctx->pc = 0x1FD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0C0u;
        // 0x1fd0c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD0C0u, 0x1FD0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD0C8u;
label_1fd0c8:
    // 0x1fd0c8: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x1fd0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1fd0cc:
    // 0x1fd0cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0d0:
    // 0x1fd0d0: 0xc138e72  jal         func_4E39C8
label_1fd0d4:
    if (ctx->pc == 0x1FD0D4u) {
        ctx->pc = 0x1FD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0D0u;
        // 0x1fd0d4: 0x240600f9  addiu       $a2, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD0D8u;
        goto label_1fd0d8;
    }
    ctx->pc = 0x1FD0D0u;
    SET_GPR_U32(ctx, 31, 0x1FD0D8u);
    ctx->pc = 0x1FD0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0D0u;
    // 0x1fd0d4: 0x240600f9  addiu       $a2, $zero, 0xF9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1FD0D0u, 0x1FD0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0D8u;
label_1fd0d8:
    // 0x1fd0d8: 0x8e2500c8  lw          $a1, 0xC8($s1)
    ctx->pc = 0x1fd0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_1fd0dc:
    // 0x1fd0dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd0e0:
    // 0x1fd0e0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1fd0e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1fd0e4:
    // 0x1fd0e4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1fd0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1fd0e8:
    // 0x1fd0e8: 0x60f809  jalr        $v1
label_1fd0ec:
    if (ctx->pc == 0x1FD0ECu) {
        ctx->pc = 0x1FD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0E8u;
        // 0x1fd0ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD0F0u;
        goto label_1fd0f0;
    }
    ctx->pc = 0x1FD0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD0F0u);
        ctx->pc = 0x1FD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0E8u;
        // 0x1fd0ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD0E8u, 0x1FD0F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD0F0u;
label_1fd0f0:
    // 0x1fd0f0: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x1fd0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_1fd0f4:
    // 0x1fd0f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0f8:
    // 0x1fd0f8: 0xc139fe8  jal         func_4E7FA0
label_1fd0fc:
    if (ctx->pc == 0x1FD0FCu) {
        ctx->pc = 0x1FD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0F8u;
        // 0x1fd0fc: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD100u;
        goto label_1fd100;
    }
    ctx->pc = 0x1FD0F8u;
    SET_GPR_U32(ctx, 31, 0x1FD100u);
    ctx->pc = 0x1FD0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0F8u;
    // 0x1fd0fc: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x1FD0F8u, 0x1FD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD100u;
label_1fd100:
    // 0x1fd100: 0xc073462  jal         func_1CD188
label_1fd104:
    if (ctx->pc == 0x1FD104u) {
        ctx->pc = 0x1FD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD100u;
        // 0x1fd104: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD108u;
        goto label_1fd108;
    }
    ctx->pc = 0x1FD100u;
    SET_GPR_U32(ctx, 31, 0x1FD108u);
    ctx->pc = 0x1FD104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD100u;
    // 0x1fd104: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1FD100u, 0x1FD108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD108u;
label_1fd108:
    // 0x1fd108: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x1fd108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1fd10c:
    // 0x1fd10c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd110:
    // 0x1fd110: 0xc139138  jal         func_4E44E0
label_1fd114:
    if (ctx->pc == 0x1FD114u) {
        ctx->pc = 0x1FD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD110u;
        // 0x1fd114: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD118u;
        goto label_1fd118;
    }
    ctx->pc = 0x1FD110u;
    SET_GPR_U32(ctx, 31, 0x1FD118u);
    ctx->pc = 0x1FD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD110u;
    // 0x1fd114: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1FD110u, 0x1FD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD118u;
label_1fd118:
    // 0x1fd118: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1fd118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1fd11c:
    // 0x1fd11c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd120:
    // 0x1fd120: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1fd120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1fd124:
    // 0x1fd124: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1fd124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1fd128:
    // 0x1fd128: 0x60f809  jalr        $v1
label_1fd12c:
    if (ctx->pc == 0x1FD12Cu) {
        ctx->pc = 0x1FD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD128u;
        // 0x1fd12c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD130u;
        goto label_1fd130;
    }
    ctx->pc = 0x1FD128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD130u);
        ctx->pc = 0x1FD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD128u;
        // 0x1fd12c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD128u, 0x1FD130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD130u;
label_1fd130:
    // 0x1fd130: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x1fd130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1fd134:
    // 0x1fd134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd138:
    // 0x1fd138: 0xc139fc8  jal         func_4E7F20
label_1fd13c:
    if (ctx->pc == 0x1FD13Cu) {
        ctx->pc = 0x1FD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD138u;
        // 0x1fd13c: 0x24060102  addiu       $a2, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD140u;
        goto label_1fd140;
    }
    ctx->pc = 0x1FD138u;
    SET_GPR_U32(ctx, 31, 0x1FD140u);
    ctx->pc = 0x1FD13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD138u;
    // 0x1fd13c: 0x24060102  addiu       $a2, $zero, 0x102 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x1FD138u, 0x1FD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD140u;
label_1fd140:
    // 0x1fd140: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1fd140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1fd144:
    // 0x1fd144: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1fd144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1fd148:
    // 0x1fd148: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fd148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd14c:
    // 0x1fd14c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd150:
    // 0x1fd150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd154:
    // 0x1fd154: 0x3e00008  jr          $ra
label_1fd158:
    if (ctx->pc == 0x1FD158u) {
        ctx->pc = 0x1FD158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD154u;
        // 0x1fd158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD15Cu;
        goto label_1fd15c;
    }
    ctx->pc = 0x1FD154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD154u;
        // 0x1fd158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD15Cu;
label_1fd15c:
    // 0x1fd15c: 0x0  nop
    ctx->pc = 0x1fd15cu;
    // NOP
    ctx->pc = 0x1fd160u;
}

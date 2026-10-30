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

// Function: sub_0041CFF0
// Address: 0x41cff0 - 0x41d080
void sub_0041CFF0_0x41cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CFF0_0x41cff0");
#endif

    switch (ctx->pc) {
        case 0x41cff0u: goto label_41cff0;
        case 0x41cff4u: goto label_41cff4;
        case 0x41cff8u: goto label_41cff8;
        case 0x41cffcu: goto label_41cffc;
        case 0x41d000u: goto label_41d000;
        case 0x41d004u: goto label_41d004;
        case 0x41d008u: goto label_41d008;
        case 0x41d00cu: goto label_41d00c;
        case 0x41d010u: goto label_41d010;
        case 0x41d014u: goto label_41d014;
        case 0x41d018u: goto label_41d018;
        case 0x41d01cu: goto label_41d01c;
        case 0x41d020u: goto label_41d020;
        case 0x41d024u: goto label_41d024;
        case 0x41d028u: goto label_41d028;
        case 0x41d02cu: goto label_41d02c;
        case 0x41d030u: goto label_41d030;
        case 0x41d034u: goto label_41d034;
        case 0x41d038u: goto label_41d038;
        case 0x41d03cu: goto label_41d03c;
        case 0x41d040u: goto label_41d040;
        case 0x41d044u: goto label_41d044;
        case 0x41d048u: goto label_41d048;
        case 0x41d04cu: goto label_41d04c;
        case 0x41d050u: goto label_41d050;
        case 0x41d054u: goto label_41d054;
        case 0x41d058u: goto label_41d058;
        case 0x41d05cu: goto label_41d05c;
        case 0x41d060u: goto label_41d060;
        case 0x41d064u: goto label_41d064;
        case 0x41d068u: goto label_41d068;
        case 0x41d06cu: goto label_41d06c;
        case 0x41d070u: goto label_41d070;
        case 0x41d074u: goto label_41d074;
        case 0x41d078u: goto label_41d078;
        case 0x41d07cu: goto label_41d07c;
        default: break;
    }

    ctx->pc = 0x41cff0u;

label_41cff0:
    // 0x41cff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41cff4:
    // 0x41cff4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41cff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41cff8:
    // 0x41cff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41cffc:
    // 0x41cffc: 0xc0e409a  jal         func_390268
label_41d000:
    if (ctx->pc == 0x41D000u) {
        ctx->pc = 0x41D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFFCu;
        // 0x41d000: 0x24840280  addiu       $a0, $a0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D004u;
        goto label_41d004;
    }
    ctx->pc = 0x41CFFCu;
    SET_GPR_U32(ctx, 31, 0x41D004u);
    ctx->pc = 0x41D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CFFCu;
    // 0x41d000: 0x24840280  addiu       $a0, $a0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41CFFCu, 0x41D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D004u;
label_41d004:
    // 0x41d004: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_41d008:
    if (ctx->pc == 0x41D008u) {
        ctx->pc = 0x41D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D004u;
        // 0x41d008: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D00Cu;
        goto label_41d00c;
    }
    ctx->pc = 0x41D004u;
    {
        const bool branch_taken_0x41d004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D004u;
        // 0x41d008: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d004) {
            ctx->pc = 0x41D070u;
            goto label_41d070;
        }
    }
    ctx->pc = 0x41D00Cu;
label_41d00c:
    // 0x41d00c: 0xc087502  jal         func_21D408
label_41d010:
    if (ctx->pc == 0x41D010u) {
        ctx->pc = 0x41D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D00Cu;
        // 0x41d010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D014u;
        goto label_41d014;
    }
    ctx->pc = 0x41D00Cu;
    SET_GPR_U32(ctx, 31, 0x41D014u);
    ctx->pc = 0x41D010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D00Cu;
    // 0x41d010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41D00Cu, 0x41D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D014u;
label_41d014:
    // 0x41d014: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41d014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41d018:
    // 0x41d018: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x41d018u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_41d01c:
    // 0x41d01c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_41d020:
    if (ctx->pc == 0x41D020u) {
        ctx->pc = 0x41D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D01Cu;
        // 0x41d020: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D024u;
        goto label_41d024;
    }
    ctx->pc = 0x41D01Cu;
    {
        const bool branch_taken_0x41d01c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x41D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D01Cu;
        // 0x41d020: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d01c) {
            ctx->pc = 0x41D030u;
            goto label_41d030;
        }
    }
    ctx->pc = 0x41D024u;
label_41d024:
    // 0x41d024: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x41d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_41d028:
    // 0x41d028: 0x10000002  b           . + 4 + (0x2 << 2)
label_41d02c:
    if (ctx->pc == 0x41D02Cu) {
        ctx->pc = 0x41D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D028u;
        // 0x41d02c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D030u;
        goto label_41d030;
    }
    ctx->pc = 0x41D028u;
    {
        const bool branch_taken_0x41d028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D028u;
        // 0x41d02c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d028) {
            ctx->pc = 0x41D034u;
            goto label_41d034;
        }
    }
    ctx->pc = 0x41D030u;
label_41d030:
    // 0x41d030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41d030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d034:
    // 0x41d034: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
label_41d038:
    if (ctx->pc == 0x41D038u) {
        ctx->pc = 0x41D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D034u;
        // 0x41d038: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D03Cu;
        goto label_41d03c;
    }
    ctx->pc = 0x41D034u;
    {
        const bool branch_taken_0x41d034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d034) {
            ctx->pc = 0x41D038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41D034u;
            // 0x41d038: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41D070u;
            goto label_41d070;
        }
    }
    ctx->pc = 0x41D03Cu;
label_41d03c:
    // 0x41d03c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x41d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_41d040:
    // 0x41d040: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x41d040u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_41d044:
    // 0x41d044: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x41d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_41d048:
    // 0x41d048: 0x40f809  jalr        $v0
label_41d04c:
    if (ctx->pc == 0x41D04Cu) {
        ctx->pc = 0x41D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D048u;
        // 0x41d04c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D050u;
        goto label_41d050;
    }
    ctx->pc = 0x41D048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D050u);
        ctx->pc = 0x41D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D048u;
        // 0x41d04c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D048u, 0x41D050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D050u;
label_41d050:
    // 0x41d050: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x41d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_41d054:
    // 0x41d054: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_41d058:
    if (ctx->pc == 0x41D058u) {
        ctx->pc = 0x41D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D054u;
        // 0x41d058: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D05Cu;
        goto label_41d05c;
    }
    ctx->pc = 0x41D054u;
    {
        const bool branch_taken_0x41d054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x41d054) {
            ctx->pc = 0x41D058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41D054u;
            // 0x41d058: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41D070u;
            goto label_41d070;
        }
    }
    ctx->pc = 0x41D05Cu;
label_41d05c:
    // 0x41d05c: 0xc0a36c8  jal         func_28DB20
label_41d060:
    if (ctx->pc == 0x41D060u) {
        ctx->pc = 0x41D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D05Cu;
        // 0x41d060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D064u;
        goto label_41d064;
    }
    ctx->pc = 0x41D05Cu;
    SET_GPR_U32(ctx, 31, 0x41D064u);
    ctx->pc = 0x41D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D05Cu;
    // 0x41d060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x41D05Cu, 0x41D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D064u;
label_41d064:
    // 0x41d064: 0xc0a35f6  jal         func_28D7D8
label_41d068:
    if (ctx->pc == 0x41D068u) {
        ctx->pc = 0x41D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D064u;
        // 0x41d068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D06Cu;
        goto label_41d06c;
    }
    ctx->pc = 0x41D064u;
    SET_GPR_U32(ctx, 31, 0x41D06Cu);
    ctx->pc = 0x41D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D064u;
    // 0x41d068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x41D064u, 0x41D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D06Cu;
label_41d06c:
    // 0x41d06c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41d06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d070:
    // 0x41d070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d074:
    // 0x41d074: 0x3e00008  jr          $ra
label_41d078:
    if (ctx->pc == 0x41D078u) {
        ctx->pc = 0x41D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D074u;
        // 0x41d078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D07Cu;
        goto label_41d07c;
    }
    ctx->pc = 0x41D074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D074u;
        // 0x41d078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D07Cu;
label_41d07c:
    // 0x41d07c: 0x0  nop
    ctx->pc = 0x41d07cu;
    // NOP
    ctx->pc = 0x41d080u;
}

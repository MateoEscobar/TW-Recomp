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

// Function: sub_0020D028
// Address: 0x20d028 - 0x20d080
void sub_0020D028_0x20d028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D028_0x20d028");
#endif

    switch (ctx->pc) {
        case 0x20d028u: goto label_20d028;
        case 0x20d02cu: goto label_20d02c;
        case 0x20d030u: goto label_20d030;
        case 0x20d034u: goto label_20d034;
        case 0x20d038u: goto label_20d038;
        case 0x20d03cu: goto label_20d03c;
        case 0x20d040u: goto label_20d040;
        case 0x20d044u: goto label_20d044;
        case 0x20d048u: goto label_20d048;
        case 0x20d04cu: goto label_20d04c;
        case 0x20d050u: goto label_20d050;
        case 0x20d054u: goto label_20d054;
        case 0x20d058u: goto label_20d058;
        case 0x20d05cu: goto label_20d05c;
        case 0x20d060u: goto label_20d060;
        case 0x20d064u: goto label_20d064;
        case 0x20d068u: goto label_20d068;
        case 0x20d06cu: goto label_20d06c;
        case 0x20d070u: goto label_20d070;
        case 0x20d074u: goto label_20d074;
        case 0x20d078u: goto label_20d078;
        case 0x20d07cu: goto label_20d07c;
        default: break;
    }

    ctx->pc = 0x20d028u;

label_20d028:
    // 0x20d028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20d02c:
    // 0x20d02c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20d030:
    // 0x20d030: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20d030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20d034:
    // 0x20d034: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x20d034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_20d038:
    // 0x20d038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20d03c:
    // 0x20d03c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d040:
    // 0x20d040: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x20d040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_20d044:
    // 0x20d044: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20d044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d048:
    // 0x20d048: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x20d048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20d04c:
    // 0x20d04c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x20d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20d050:
    // 0x20d050: 0xa0f809  jalr        $a1
label_20d054:
    if (ctx->pc == 0x20D054u) {
        ctx->pc = 0x20D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D050u;
        // 0x20d054: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D058u;
        goto label_20d058;
    }
    ctx->pc = 0x20D050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20D058u);
        ctx->pc = 0x20D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D050u;
        // 0x20d054: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D050u, 0x20D058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D058u;
label_20d058:
    // 0x20d058: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d05c:
    // 0x20d05c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20d05cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20d060:
    // 0x20d060: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20d064:
    // 0x20d064: 0x60f809  jalr        $v1
label_20d068:
    if (ctx->pc == 0x20D068u) {
        ctx->pc = 0x20D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D064u;
        // 0x20d068: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D06Cu;
        goto label_20d06c;
    }
    ctx->pc = 0x20D064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D06Cu);
        ctx->pc = 0x20D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D064u;
        // 0x20d068: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D064u, 0x20D06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D06Cu;
label_20d06c:
    // 0x20d06c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x20d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20d070:
    // 0x20d070: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20d070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d074:
    // 0x20d074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20d078:
    // 0x20d078: 0x3e00008  jr          $ra
label_20d07c:
    if (ctx->pc == 0x20D07Cu) {
        ctx->pc = 0x20D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D078u;
        // 0x20d07c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D080u;
        goto label_fallthrough_0x20d078;
    }
    ctx->pc = 0x20D078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D078u;
        // 0x20d07c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20d078:
    ctx->pc = 0x20D080u;
}

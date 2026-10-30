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

// Function: sub_00227010
// Address: 0x227010 - 0x227060
void sub_00227010_0x227010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227010_0x227010");
#endif

    switch (ctx->pc) {
        case 0x227010u: goto label_227010;
        case 0x227014u: goto label_227014;
        case 0x227018u: goto label_227018;
        case 0x22701cu: goto label_22701c;
        case 0x227020u: goto label_227020;
        case 0x227024u: goto label_227024;
        case 0x227028u: goto label_227028;
        case 0x22702cu: goto label_22702c;
        case 0x227030u: goto label_227030;
        case 0x227034u: goto label_227034;
        case 0x227038u: goto label_227038;
        case 0x22703cu: goto label_22703c;
        case 0x227040u: goto label_227040;
        case 0x227044u: goto label_227044;
        case 0x227048u: goto label_227048;
        case 0x22704cu: goto label_22704c;
        case 0x227050u: goto label_227050;
        case 0x227054u: goto label_227054;
        case 0x227058u: goto label_227058;
        case 0x22705cu: goto label_22705c;
        default: break;
    }

    ctx->pc = 0x227010u;

label_227010:
    // 0x227010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_227014:
    // 0x227014: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_227018:
    // 0x227018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22701c:
    // 0x22701c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_227020:
    if (ctx->pc == 0x227020u) {
        ctx->pc = 0x227020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22701Cu;
        // 0x227020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227024u;
        goto label_227024;
    }
    ctx->pc = 0x22701Cu;
    {
        const bool branch_taken_0x22701c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x227020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22701Cu;
        // 0x227020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22701c) {
            ctx->pc = 0x227040u;
            goto label_227040;
        }
    }
    ctx->pc = 0x227024u;
label_227024:
    // 0x227024: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x227024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_227028:
    // 0x227028: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x227028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22702c:
    // 0x22702c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_227030:
    // 0x227030: 0x40f809  jalr        $v0
label_227034:
    if (ctx->pc == 0x227034u) {
        ctx->pc = 0x227034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227030u;
        // 0x227034: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227038u;
        goto label_227038;
    }
    ctx->pc = 0x227030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227038u);
        ctx->pc = 0x227034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227030u;
        // 0x227034: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227030u, 0x227038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227038u;
label_227038:
    // 0x227038: 0x10000004  b           . + 4 + (0x4 << 2)
label_22703c:
    if (ctx->pc == 0x22703Cu) {
        ctx->pc = 0x22703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227038u;
        // 0x22703c: 0xae020338  sw          $v0, 0x338($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227040u;
        goto label_227040;
    }
    ctx->pc = 0x227038u;
    {
        const bool branch_taken_0x227038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227038u;
        // 0x22703c: 0xae020338  sw          $v0, 0x338($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227038) {
            ctx->pc = 0x22704Cu;
            goto label_22704c;
        }
    }
    ctx->pc = 0x227040u;
label_227040:
    // 0x227040: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x227040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_227044:
    // 0x227044: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x227044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_227048:
    // 0x227048: 0xae030338  sw          $v1, 0x338($s0)
    ctx->pc = 0x227048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 3));
label_22704c:
    // 0x22704c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22704cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_227050:
    // 0x227050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227054:
    // 0x227054: 0x3e00008  jr          $ra
label_227058:
    if (ctx->pc == 0x227058u) {
        ctx->pc = 0x227058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227054u;
        // 0x227058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22705Cu;
        goto label_22705c;
    }
    ctx->pc = 0x227054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227054u;
        // 0x227058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22705Cu;
label_22705c:
    // 0x22705c: 0x0  nop
    ctx->pc = 0x22705cu;
    // NOP
    ctx->pc = 0x227060u;
}

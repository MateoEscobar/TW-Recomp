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

// Function: sub_001F31F8
// Address: 0x1f31f8 - 0x1f3250
void sub_001F31F8_0x1f31f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F31F8_0x1f31f8");
#endif

    switch (ctx->pc) {
        case 0x1f31f8u: goto label_1f31f8;
        case 0x1f31fcu: goto label_1f31fc;
        case 0x1f3200u: goto label_1f3200;
        case 0x1f3204u: goto label_1f3204;
        case 0x1f3208u: goto label_1f3208;
        case 0x1f320cu: goto label_1f320c;
        case 0x1f3210u: goto label_1f3210;
        case 0x1f3214u: goto label_1f3214;
        case 0x1f3218u: goto label_1f3218;
        case 0x1f321cu: goto label_1f321c;
        case 0x1f3220u: goto label_1f3220;
        case 0x1f3224u: goto label_1f3224;
        case 0x1f3228u: goto label_1f3228;
        case 0x1f322cu: goto label_1f322c;
        case 0x1f3230u: goto label_1f3230;
        case 0x1f3234u: goto label_1f3234;
        case 0x1f3238u: goto label_1f3238;
        case 0x1f323cu: goto label_1f323c;
        case 0x1f3240u: goto label_1f3240;
        case 0x1f3244u: goto label_1f3244;
        case 0x1f3248u: goto label_1f3248;
        case 0x1f324cu: goto label_1f324c;
        default: break;
    }

    ctx->pc = 0x1f31f8u;

label_1f31f8:
    // 0x1f31f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f31f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f31fc:
    // 0x1f31fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f3200:
    // 0x1f3200: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f3200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f3204:
    // 0x1f3204: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1f3204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_1f3208:
    // 0x1f3208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f320c:
    // 0x1f320c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f320cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3210:
    // 0x1f3210: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1f3210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1f3214:
    // 0x1f3214: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f3214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3218:
    // 0x1f3218: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1f3218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1f321c:
    // 0x1f321c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1f321cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f3220:
    // 0x1f3220: 0xa0f809  jalr        $a1
label_1f3224:
    if (ctx->pc == 0x1F3224u) {
        ctx->pc = 0x1F3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3220u;
        // 0x1f3224: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3228u;
        goto label_1f3228;
    }
    ctx->pc = 0x1F3220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F3228u);
        ctx->pc = 0x1F3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3220u;
        // 0x1f3224: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3220u, 0x1F3228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3228u;
label_1f3228:
    // 0x1f3228: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f3228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f322c:
    // 0x1f322c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f322cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f3230:
    // 0x1f3230: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f3230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f3234:
    // 0x1f3234: 0x60f809  jalr        $v1
label_1f3238:
    if (ctx->pc == 0x1F3238u) {
        ctx->pc = 0x1F3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3234u;
        // 0x1f3238: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F323Cu;
        goto label_1f323c;
    }
    ctx->pc = 0x1F3234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F323Cu);
        ctx->pc = 0x1F3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3234u;
        // 0x1f3238: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3234u, 0x1F323Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F323Cu;
label_1f323c:
    // 0x1f323c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1f323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1f3240:
    // 0x1f3240: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f3240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3244:
    // 0x1f3244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3248:
    // 0x1f3248: 0x3e00008  jr          $ra
label_1f324c:
    if (ctx->pc == 0x1F324Cu) {
        ctx->pc = 0x1F324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3248u;
        // 0x1f324c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3250u;
        goto label_fallthrough_0x1f3248;
    }
    ctx->pc = 0x1F3248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3248u;
        // 0x1f324c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f3248:
    ctx->pc = 0x1F3250u;
}

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

// Function: sub_001AB838
// Address: 0x1ab838 - 0x1ab880
void sub_001AB838_0x1ab838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB838_0x1ab838");
#endif

    switch (ctx->pc) {
        case 0x1ab838u: goto label_1ab838;
        case 0x1ab83cu: goto label_1ab83c;
        case 0x1ab840u: goto label_1ab840;
        case 0x1ab844u: goto label_1ab844;
        case 0x1ab848u: goto label_1ab848;
        case 0x1ab84cu: goto label_1ab84c;
        case 0x1ab850u: goto label_1ab850;
        case 0x1ab854u: goto label_1ab854;
        case 0x1ab858u: goto label_1ab858;
        case 0x1ab85cu: goto label_1ab85c;
        case 0x1ab860u: goto label_1ab860;
        case 0x1ab864u: goto label_1ab864;
        case 0x1ab868u: goto label_1ab868;
        case 0x1ab86cu: goto label_1ab86c;
        case 0x1ab870u: goto label_1ab870;
        case 0x1ab874u: goto label_1ab874;
        case 0x1ab878u: goto label_1ab878;
        case 0x1ab87cu: goto label_1ab87c;
        default: break;
    }

    ctx->pc = 0x1ab838u;

label_1ab838:
    // 0x1ab838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ab83c:
    // 0x1ab83c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ab83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ab840:
    // 0x1ab840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ab844:
    // 0x1ab844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab848:
    // 0x1ab848: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1ab848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1ab84c:
    // 0x1ab84c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1ab850:
    if (ctx->pc == 0x1AB850u) {
        ctx->pc = 0x1AB850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB84Cu;
        // 0x1ab850: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB854u;
        goto label_1ab854;
    }
    ctx->pc = 0x1AB84Cu;
    {
        const bool branch_taken_0x1ab84c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab84c) {
            ctx->pc = 0x1AB850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB84Cu;
            // 0x1ab850: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB86Cu;
            goto label_1ab86c;
        }
    }
    ctx->pc = 0x1AB854u;
label_1ab854:
    // 0x1ab854: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ab854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ab858:
    // 0x1ab858: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1ab858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1ab85c:
    // 0x1ab85c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1ab85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1ab860:
    // 0x1ab860: 0x60f809  jalr        $v1
label_1ab864:
    if (ctx->pc == 0x1AB864u) {
        ctx->pc = 0x1AB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB860u;
        // 0x1ab864: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB868u;
        goto label_1ab868;
    }
    ctx->pc = 0x1AB860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB868u);
        ctx->pc = 0x1AB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB860u;
        // 0x1ab864: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB860u, 0x1AB868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB868u;
label_1ab868:
    // 0x1ab868: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1ab868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1ab86c:
    // 0x1ab86c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ab86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab870:
    // 0x1ab870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab874:
    // 0x1ab874: 0x3e00008  jr          $ra
label_1ab878:
    if (ctx->pc == 0x1AB878u) {
        ctx->pc = 0x1AB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB874u;
        // 0x1ab878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB87Cu;
        goto label_1ab87c;
    }
    ctx->pc = 0x1AB874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB874u;
        // 0x1ab878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB87Cu;
label_1ab87c:
    // 0x1ab87c: 0x0  nop
    ctx->pc = 0x1ab87cu;
    // NOP
    ctx->pc = 0x1ab880u;
}

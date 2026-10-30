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

// Function: sub_00229820
// Address: 0x229820 - 0x229868
void sub_00229820_0x229820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229820_0x229820");
#endif

    switch (ctx->pc) {
        case 0x229820u: goto label_229820;
        case 0x229824u: goto label_229824;
        case 0x229828u: goto label_229828;
        case 0x22982cu: goto label_22982c;
        case 0x229830u: goto label_229830;
        case 0x229834u: goto label_229834;
        case 0x229838u: goto label_229838;
        case 0x22983cu: goto label_22983c;
        case 0x229840u: goto label_229840;
        case 0x229844u: goto label_229844;
        case 0x229848u: goto label_229848;
        case 0x22984cu: goto label_22984c;
        case 0x229850u: goto label_229850;
        case 0x229854u: goto label_229854;
        case 0x229858u: goto label_229858;
        case 0x22985cu: goto label_22985c;
        case 0x229860u: goto label_229860;
        case 0x229864u: goto label_229864;
        default: break;
    }

    ctx->pc = 0x229820u;

label_229820:
    // 0x229820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x229820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_229824:
    // 0x229824: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x229824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_229828:
    // 0x229828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22982c:
    // 0x22982c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_229830:
    if (ctx->pc == 0x229830u) {
        ctx->pc = 0x229830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22982Cu;
        // 0x229830: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229834u;
        goto label_229834;
    }
    ctx->pc = 0x22982Cu;
    {
        const bool branch_taken_0x22982c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x229830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22982Cu;
        // 0x229830: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22982c) {
            ctx->pc = 0x229854u;
            goto label_229854;
        }
    }
    ctx->pc = 0x229834u;
label_229834:
    // 0x229834: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x229834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_229838:
    // 0x229838: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x229838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_22983c:
    // 0x22983c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x22983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_229840:
    // 0x229840: 0x40f809  jalr        $v0
label_229844:
    if (ctx->pc == 0x229844u) {
        ctx->pc = 0x229844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229840u;
        // 0x229844: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229848u;
        goto label_229848;
    }
    ctx->pc = 0x229840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229848u);
        ctx->pc = 0x229844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229840u;
        // 0x229844: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229840u, 0x229848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229848u;
label_229848:
    // 0x229848: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x229848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_22984c:
    // 0x22984c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_229850:
    if (ctx->pc == 0x229850u) {
        ctx->pc = 0x229850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22984Cu;
        // 0x229850: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229854u;
        goto label_229854;
    }
    ctx->pc = 0x22984Cu;
    {
        const bool branch_taken_0x22984c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22984Cu;
        // 0x229850: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22984c) {
            ctx->pc = 0x229858u;
            goto label_229858;
        }
    }
    ctx->pc = 0x229854u;
label_229854:
    // 0x229854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x229854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229858:
    // 0x229858: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x229858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22985c:
    // 0x22985c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22985cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_229860:
    // 0x229860: 0x3e00008  jr          $ra
label_229864:
    if (ctx->pc == 0x229864u) {
        ctx->pc = 0x229864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229860u;
        // 0x229864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229868u;
        goto label_fallthrough_0x229860;
    }
    ctx->pc = 0x229860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229860u;
        // 0x229864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x229860:
    ctx->pc = 0x229868u;
}

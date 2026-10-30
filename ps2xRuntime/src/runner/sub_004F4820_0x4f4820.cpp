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

// Function: sub_004F4820
// Address: 0x4f4820 - 0x4f48a0
void sub_004F4820_0x4f4820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4820_0x4f4820");
#endif

    switch (ctx->pc) {
        case 0x4f4820u: goto label_4f4820;
        case 0x4f4824u: goto label_4f4824;
        case 0x4f4828u: goto label_4f4828;
        case 0x4f482cu: goto label_4f482c;
        case 0x4f4830u: goto label_4f4830;
        case 0x4f4834u: goto label_4f4834;
        case 0x4f4838u: goto label_4f4838;
        case 0x4f483cu: goto label_4f483c;
        case 0x4f4840u: goto label_4f4840;
        case 0x4f4844u: goto label_4f4844;
        case 0x4f4848u: goto label_4f4848;
        case 0x4f484cu: goto label_4f484c;
        case 0x4f4850u: goto label_4f4850;
        case 0x4f4854u: goto label_4f4854;
        case 0x4f4858u: goto label_4f4858;
        case 0x4f485cu: goto label_4f485c;
        case 0x4f4860u: goto label_4f4860;
        case 0x4f4864u: goto label_4f4864;
        case 0x4f4868u: goto label_4f4868;
        case 0x4f486cu: goto label_4f486c;
        case 0x4f4870u: goto label_4f4870;
        case 0x4f4874u: goto label_4f4874;
        case 0x4f4878u: goto label_4f4878;
        case 0x4f487cu: goto label_4f487c;
        case 0x4f4880u: goto label_4f4880;
        case 0x4f4884u: goto label_4f4884;
        case 0x4f4888u: goto label_4f4888;
        case 0x4f488cu: goto label_4f488c;
        case 0x4f4890u: goto label_4f4890;
        case 0x4f4894u: goto label_4f4894;
        case 0x4f4898u: goto label_4f4898;
        case 0x4f489cu: goto label_4f489c;
        default: break;
    }

    ctx->pc = 0x4f4820u;

label_4f4820:
    // 0x4f4820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f4820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f4824:
    // 0x4f4824: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f4824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f4828:
    // 0x4f4828: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f4828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f482c:
    // 0x4f482c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f482cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4830:
    // 0x4f4830: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f4830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f4834:
    // 0x4f4834: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f4834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f4838:
    // 0x4f4838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f483c:
    // 0x4f483c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4f4840:
    if (ctx->pc == 0x4F4840u) {
        ctx->pc = 0x4F4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F483Cu;
        // 0x4f4840: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4844u;
        goto label_4f4844;
    }
    ctx->pc = 0x4F483Cu;
    {
        const bool branch_taken_0x4f483c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F483Cu;
        // 0x4f4840: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f483c) {
            ctx->pc = 0x4F4884u;
            goto label_4f4884;
        }
    }
    ctx->pc = 0x4F4844u;
label_4f4844:
    // 0x4f4844: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f4844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f4848:
    // 0x4f4848: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f4848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f484c:
    // 0x4f484c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f484cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f4850:
    // 0x4f4850: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f4850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f4854:
    // 0x4f4854: 0x60f809  jalr        $v1
label_4f4858:
    if (ctx->pc == 0x4F4858u) {
        ctx->pc = 0x4F4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4854u;
        // 0x4f4858: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F485Cu;
        goto label_4f485c;
    }
    ctx->pc = 0x4F4854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F485Cu);
        ctx->pc = 0x4F4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4854u;
        // 0x4f4858: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4854u, 0x4F485Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F485Cu;
label_4f485c:
    // 0x4f485c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f485cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f4860:
    // 0x4f4860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f4860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4864:
    // 0x4f4864: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f4864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f4868:
    // 0x4f4868: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f4868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f486c:
    // 0x4f486c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f486cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f4870:
    // 0x4f4870: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f4870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f4874:
    // 0x4f4874: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f4874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f4878:
    // 0x4f4878: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f4878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f487c:
    // 0x4f487c: 0x60f809  jalr        $v1
label_4f4880:
    if (ctx->pc == 0x4F4880u) {
        ctx->pc = 0x4F4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F487Cu;
        // 0x4f4880: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4884u;
        goto label_4f4884;
    }
    ctx->pc = 0x4F487Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F4884u);
        ctx->pc = 0x4F4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F487Cu;
        // 0x4f4880: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F487Cu, 0x4F4884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4884u;
label_4f4884:
    // 0x4f4884: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f4884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4888:
    // 0x4f4888: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f4888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f488c:
    // 0x4f488c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f488cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4890:
    // 0x4f4890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4894:
    // 0x4f4894: 0x3e00008  jr          $ra
label_4f4898:
    if (ctx->pc == 0x4F4898u) {
        ctx->pc = 0x4F4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4894u;
        // 0x4f4898: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F489Cu;
        goto label_4f489c;
    }
    ctx->pc = 0x4F4894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4894u;
        // 0x4f4898: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F489Cu;
label_4f489c:
    // 0x4f489c: 0x0  nop
    ctx->pc = 0x4f489cu;
    // NOP
    ctx->pc = 0x4f48a0u;
}

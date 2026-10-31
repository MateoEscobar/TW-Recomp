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

// Function: sub_004E47E8
// Address: 0x4e47e8 - 0x4e4868
void sub_004E47E8_0x4e47e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E47E8_0x4e47e8");
#endif

    switch (ctx->pc) {
        case 0x4e47e8u: goto label_4e47e8;
        case 0x4e47ecu: goto label_4e47ec;
        case 0x4e47f0u: goto label_4e47f0;
        case 0x4e47f4u: goto label_4e47f4;
        case 0x4e47f8u: goto label_4e47f8;
        case 0x4e47fcu: goto label_4e47fc;
        case 0x4e4800u: goto label_4e4800;
        case 0x4e4804u: goto label_4e4804;
        case 0x4e4808u: goto label_4e4808;
        case 0x4e480cu: goto label_4e480c;
        case 0x4e4810u: goto label_4e4810;
        case 0x4e4814u: goto label_4e4814;
        case 0x4e4818u: goto label_4e4818;
        case 0x4e481cu: goto label_4e481c;
        case 0x4e4820u: goto label_4e4820;
        case 0x4e4824u: goto label_4e4824;
        case 0x4e4828u: goto label_4e4828;
        case 0x4e482cu: goto label_4e482c;
        case 0x4e4830u: goto label_4e4830;
        case 0x4e4834u: goto label_4e4834;
        case 0x4e4838u: goto label_4e4838;
        case 0x4e483cu: goto label_4e483c;
        case 0x4e4840u: goto label_4e4840;
        case 0x4e4844u: goto label_4e4844;
        case 0x4e4848u: goto label_4e4848;
        case 0x4e484cu: goto label_4e484c;
        case 0x4e4850u: goto label_4e4850;
        case 0x4e4854u: goto label_4e4854;
        case 0x4e4858u: goto label_4e4858;
        case 0x4e485cu: goto label_4e485c;
        case 0x4e4860u: goto label_4e4860;
        case 0x4e4864u: goto label_4e4864;
        default: break;
    }

    ctx->pc = 0x4e47e8u;

label_4e47e8:
    // 0x4e47e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e47e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e47ec:
    // 0x4e47ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e47ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e47f0:
    // 0x4e47f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e47f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e47f4:
    // 0x4e47f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e47f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e47f8:
    // 0x4e47f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e47f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e47fc:
    // 0x4e47fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e47fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4800:
    // 0x4e4800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e4804:
    // 0x4e4804: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e4808:
    if (ctx->pc == 0x4E4808u) {
        ctx->pc = 0x4E4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4804u;
        // 0x4e4808: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E480Cu;
        goto label_4e480c;
    }
    ctx->pc = 0x4E4804u;
    {
        const bool branch_taken_0x4e4804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4804u;
        // 0x4e4808: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4804) {
            ctx->pc = 0x4E484Cu;
            goto label_4e484c;
        }
    }
    ctx->pc = 0x4E480Cu;
label_4e480c:
    // 0x4e480c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e4810:
    // 0x4e4810: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e4810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e4814:
    // 0x4e4814: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e4814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e4818:
    // 0x4e4818: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e4818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e481c:
    // 0x4e481c: 0x60f809  jalr        $v1
label_4e4820:
    if (ctx->pc == 0x4E4820u) {
        ctx->pc = 0x4E4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E481Cu;
        // 0x4e4820: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4824u;
        goto label_4e4824;
    }
    ctx->pc = 0x4E481Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4824u);
        ctx->pc = 0x4E4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E481Cu;
        // 0x4e4820: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E481Cu, 0x4E4824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4824u;
label_4e4824:
    // 0x4e4824: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e4824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e4828:
    // 0x4e4828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e4828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e482c:
    // 0x4e482c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e482cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e4830:
    // 0x4e4830: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e4830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e4834:
    // 0x4e4834: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e4834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4838:
    // 0x4e4838: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e4838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e483c:
    // 0x4e483c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e483cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e4840:
    // 0x4e4840: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e4840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e4844:
    // 0x4e4844: 0x60f809  jalr        $v1
label_4e4848:
    if (ctx->pc == 0x4E4848u) {
        ctx->pc = 0x4E4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4844u;
        // 0x4e4848: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E484Cu;
        goto label_4e484c;
    }
    ctx->pc = 0x4E4844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E484Cu);
        ctx->pc = 0x4E4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4844u;
        // 0x4e4848: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4844u, 0x4E484Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E484Cu;
label_4e484c:
    // 0x4e484c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e484cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4850:
    // 0x4e4850: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e4850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e4854:
    // 0x4e4854: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e4854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4858:
    // 0x4e4858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e485c:
    // 0x4e485c: 0x3e00008  jr          $ra
label_4e4860:
    if (ctx->pc == 0x4E4860u) {
        ctx->pc = 0x4E4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E485Cu;
        // 0x4e4860: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4864u;
        goto label_4e4864;
    }
    ctx->pc = 0x4E485Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E485Cu;
        // 0x4e4860: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E485Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4864u;
label_4e4864:
    // 0x4e4864: 0x0  nop
    ctx->pc = 0x4e4864u;
    // NOP
    ctx->pc = 0x4e4868u;
}

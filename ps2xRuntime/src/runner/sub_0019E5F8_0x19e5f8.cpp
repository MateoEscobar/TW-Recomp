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

// Function: sub_0019E5F8
// Address: 0x19e5f8 - 0x19e660
void sub_0019E5F8_0x19e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E5F8_0x19e5f8");
#endif

    switch (ctx->pc) {
        case 0x19e5f8u: goto label_19e5f8;
        case 0x19e5fcu: goto label_19e5fc;
        case 0x19e600u: goto label_19e600;
        case 0x19e604u: goto label_19e604;
        case 0x19e608u: goto label_19e608;
        case 0x19e60cu: goto label_19e60c;
        case 0x19e610u: goto label_19e610;
        case 0x19e614u: goto label_19e614;
        case 0x19e618u: goto label_19e618;
        case 0x19e61cu: goto label_19e61c;
        case 0x19e620u: goto label_19e620;
        case 0x19e624u: goto label_19e624;
        case 0x19e628u: goto label_19e628;
        case 0x19e62cu: goto label_19e62c;
        case 0x19e630u: goto label_19e630;
        case 0x19e634u: goto label_19e634;
        case 0x19e638u: goto label_19e638;
        case 0x19e63cu: goto label_19e63c;
        case 0x19e640u: goto label_19e640;
        case 0x19e644u: goto label_19e644;
        case 0x19e648u: goto label_19e648;
        case 0x19e64cu: goto label_19e64c;
        case 0x19e650u: goto label_19e650;
        case 0x19e654u: goto label_19e654;
        case 0x19e658u: goto label_19e658;
        case 0x19e65cu: goto label_19e65c;
        default: break;
    }

    ctx->pc = 0x19e5f8u;

label_19e5f8:
    // 0x19e5f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19e5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19e5fc:
    // 0x19e5fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_19e600:
    // 0x19e600: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19e600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19e604:
    // 0x19e604: 0x249000d0  addiu       $s0, $a0, 0xD0
    ctx->pc = 0x19e604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_19e608:
    // 0x19e608: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x19e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_19e60c:
    // 0x19e60c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x19e60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e610:
    // 0x19e610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19e614:
    // 0x19e614: 0xc073462  jal         func_1CD188
label_19e618:
    if (ctx->pc == 0x19E618u) {
        ctx->pc = 0x19E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E614u;
        // 0x19e618: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E61Cu;
        goto label_19e61c;
    }
    ctx->pc = 0x19E614u;
    SET_GPR_U32(ctx, 31, 0x19E61Cu);
    ctx->pc = 0x19E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E614u;
    // 0x19e618: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x19E614u, 0x19E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E61Cu;
label_19e61c:
    // 0x19e61c: 0x0  nop
    ctx->pc = 0x19e61cu;
    // NOP
label_19e620:
    // 0x19e620: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19e624:
    // 0x19e624: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e628:
    // 0x19e628: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x19e628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_19e62c:
    // 0x19e62c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x19e62cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_19e630:
    // 0x19e630: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x19e630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_19e634:
    // 0x19e634: 0x40f809  jalr        $v0
label_19e638:
    if (ctx->pc == 0x19E638u) {
        ctx->pc = 0x19E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E634u;
        // 0x19e638: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E63Cu;
        goto label_19e63c;
    }
    ctx->pc = 0x19E634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E63Cu);
        ctx->pc = 0x19E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E634u;
        // 0x19e638: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E634u, 0x19E63Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E63Cu;
label_19e63c:
    // 0x19e63c: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x19e63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19e640:
    // 0x19e640: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_19e644:
    if (ctx->pc == 0x19E644u) {
        ctx->pc = 0x19E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E640u;
        // 0x19e644: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E648u;
        goto label_19e648;
    }
    ctx->pc = 0x19E640u;
    {
        const bool branch_taken_0x19e640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E640u;
        // 0x19e644: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e640) {
            ctx->pc = 0x19E620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e620;
        }
    }
    ctx->pc = 0x19E648u;
label_19e648:
    // 0x19e648: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19e648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19e64c:
    // 0x19e64c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19e64cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19e650:
    // 0x19e650: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19e650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19e654:
    // 0x19e654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e658:
    // 0x19e658: 0x3e00008  jr          $ra
label_19e65c:
    if (ctx->pc == 0x19E65Cu) {
        ctx->pc = 0x19E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E658u;
        // 0x19e65c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E660u;
        goto label_fallthrough_0x19e658;
    }
    ctx->pc = 0x19E658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E658u;
        // 0x19e65c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19e658:
    ctx->pc = 0x19E660u;
}

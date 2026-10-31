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

// Function: sub_001A9608
// Address: 0x1a9608 - 0x1a9678
void sub_001A9608_0x1a9608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9608_0x1a9608");
#endif

    switch (ctx->pc) {
        case 0x1a9608u: goto label_1a9608;
        case 0x1a960cu: goto label_1a960c;
        case 0x1a9610u: goto label_1a9610;
        case 0x1a9614u: goto label_1a9614;
        case 0x1a9618u: goto label_1a9618;
        case 0x1a961cu: goto label_1a961c;
        case 0x1a9620u: goto label_1a9620;
        case 0x1a9624u: goto label_1a9624;
        case 0x1a9628u: goto label_1a9628;
        case 0x1a962cu: goto label_1a962c;
        case 0x1a9630u: goto label_1a9630;
        case 0x1a9634u: goto label_1a9634;
        case 0x1a9638u: goto label_1a9638;
        case 0x1a963cu: goto label_1a963c;
        case 0x1a9640u: goto label_1a9640;
        case 0x1a9644u: goto label_1a9644;
        case 0x1a9648u: goto label_1a9648;
        case 0x1a964cu: goto label_1a964c;
        case 0x1a9650u: goto label_1a9650;
        case 0x1a9654u: goto label_1a9654;
        case 0x1a9658u: goto label_1a9658;
        case 0x1a965cu: goto label_1a965c;
        case 0x1a9660u: goto label_1a9660;
        case 0x1a9664u: goto label_1a9664;
        case 0x1a9668u: goto label_1a9668;
        case 0x1a966cu: goto label_1a966c;
        case 0x1a9670u: goto label_1a9670;
        case 0x1a9674u: goto label_1a9674;
        default: break;
    }

    ctx->pc = 0x1a9608u;

label_1a9608:
    // 0x1a9608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a960c:
    // 0x1a960c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a960cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1a9610:
    // 0x1a9610: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a9610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a9614:
    // 0x1a9614: 0x24900048  addiu       $s0, $a0, 0x48
    ctx->pc = 0x1a9614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_1a9618:
    // 0x1a9618: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a9618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1a961c:
    // 0x1a961c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a961cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9620:
    // 0x1a9620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9624:
    // 0x1a9624: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a9624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9628:
    // 0x1a9628: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a9628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a962c:
    // 0x1a962c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a962cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a9630:
    // 0x1a9630: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1a9630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1a9634:
    // 0x1a9634: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a9634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a9638:
    // 0x1a9638: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1a9638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1a963c:
    // 0x1a963c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1a963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1a9640:
    // 0x1a9640: 0x40f809  jalr        $v0
label_1a9644:
    if (ctx->pc == 0x1A9644u) {
        ctx->pc = 0x1A9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9640u;
        // 0x1a9644: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9648u;
        goto label_1a9648;
    }
    ctx->pc = 0x1A9640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9648u);
        ctx->pc = 0x1A9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9640u;
        // 0x1a9644: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9640u, 0x1A9648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9648u;
label_1a9648:
    // 0x1a9648: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1a9648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a964c:
    // 0x1a964c: 0x2e440046  sltiu       $a0, $s2, 0x46
    ctx->pc = 0x1a964cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
label_1a9650:
    // 0x1a9650: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
label_1a9654:
    if (ctx->pc == 0x1A9654u) {
        ctx->pc = 0x1A9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9650u;
        // 0x1a9654: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9658u;
        goto label_1a9658;
    }
    ctx->pc = 0x1A9650u;
    {
        const bool branch_taken_0x1a9650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9650u;
        // 0x1a9654: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9650) {
            ctx->pc = 0x1A9628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9628;
        }
    }
    ctx->pc = 0x1A9658u;
label_1a9658:
    // 0x1a9658: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a9658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a965c:
    // 0x1a965c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a965cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9660:
    // 0x1a9660: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a9660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9664:
    // 0x1a9664: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a9664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9668:
    // 0x1a9668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a966c:
    // 0x1a966c: 0x3e00008  jr          $ra
label_1a9670:
    if (ctx->pc == 0x1A9670u) {
        ctx->pc = 0x1A9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A966Cu;
        // 0x1a9670: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9674u;
        goto label_1a9674;
    }
    ctx->pc = 0x1A966Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A966Cu;
        // 0x1a9670: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A966Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9674u;
label_1a9674:
    // 0x1a9674: 0x0  nop
    ctx->pc = 0x1a9674u;
    // NOP
    ctx->pc = 0x1a9678u;
}

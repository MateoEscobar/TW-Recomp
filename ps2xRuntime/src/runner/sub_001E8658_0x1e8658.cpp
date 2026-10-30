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

// Function: sub_001E8658
// Address: 0x1e8658 - 0x1e86c8
void sub_001E8658_0x1e8658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8658_0x1e8658");
#endif

    switch (ctx->pc) {
        case 0x1e8658u: goto label_1e8658;
        case 0x1e865cu: goto label_1e865c;
        case 0x1e8660u: goto label_1e8660;
        case 0x1e8664u: goto label_1e8664;
        case 0x1e8668u: goto label_1e8668;
        case 0x1e866cu: goto label_1e866c;
        case 0x1e8670u: goto label_1e8670;
        case 0x1e8674u: goto label_1e8674;
        case 0x1e8678u: goto label_1e8678;
        case 0x1e867cu: goto label_1e867c;
        case 0x1e8680u: goto label_1e8680;
        case 0x1e8684u: goto label_1e8684;
        case 0x1e8688u: goto label_1e8688;
        case 0x1e868cu: goto label_1e868c;
        case 0x1e8690u: goto label_1e8690;
        case 0x1e8694u: goto label_1e8694;
        case 0x1e8698u: goto label_1e8698;
        case 0x1e869cu: goto label_1e869c;
        case 0x1e86a0u: goto label_1e86a0;
        case 0x1e86a4u: goto label_1e86a4;
        case 0x1e86a8u: goto label_1e86a8;
        case 0x1e86acu: goto label_1e86ac;
        case 0x1e86b0u: goto label_1e86b0;
        case 0x1e86b4u: goto label_1e86b4;
        case 0x1e86b8u: goto label_1e86b8;
        case 0x1e86bcu: goto label_1e86bc;
        case 0x1e86c0u: goto label_1e86c0;
        case 0x1e86c4u: goto label_1e86c4;
        default: break;
    }

    ctx->pc = 0x1e8658u;

label_1e8658:
    // 0x1e8658: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e8658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e865c:
    // 0x1e865c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e8660:
    // 0x1e8660: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e8660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e8664:
    // 0x1e8664: 0x24900790  addiu       $s0, $a0, 0x790
    ctx->pc = 0x1e8664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1936));
label_1e8668:
    // 0x1e8668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e866c:
    // 0x1e866c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e866cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8670:
    // 0x1e8670: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e8670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1e8674:
    // 0x1e8674: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e8674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8678:
    // 0x1e8678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e867c:
    // 0x1e867c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e867cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8680:
    // 0x1e8680: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e8680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8684:
    // 0x1e8684: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e8684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e8688:
    // 0x1e8688: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e8688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e868c:
    // 0x1e868c: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1e868cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1e8690:
    // 0x1e8690: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1e8690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1e8694:
    // 0x1e8694: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1e8694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1e8698:
    // 0x1e8698: 0x40f809  jalr        $v0
label_1e869c:
    if (ctx->pc == 0x1E869Cu) {
        ctx->pc = 0x1E869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8698u;
        // 0x1e869c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E86A0u;
        goto label_1e86a0;
    }
    ctx->pc = 0x1E8698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E86A0u);
        ctx->pc = 0x1E869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8698u;
        // 0x1e869c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8698u, 0x1E86A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E86A0u;
label_1e86a0:
    // 0x1e86a0: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1e86a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1e86a4:
    // 0x1e86a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1e86a8:
    if (ctx->pc == 0x1E86A8u) {
        ctx->pc = 0x1E86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86A4u;
        // 0x1e86a8: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E86ACu;
        goto label_1e86ac;
    }
    ctx->pc = 0x1E86A4u;
    {
        const bool branch_taken_0x1e86a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86A4u;
        // 0x1e86a8: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e86a4) {
            ctx->pc = 0x1E8680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8680;
        }
    }
    ctx->pc = 0x1E86ACu;
label_1e86ac:
    // 0x1e86ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e86acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e86b0:
    // 0x1e86b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e86b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e86b4:
    // 0x1e86b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e86b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e86b8:
    // 0x1e86b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e86b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e86bc:
    // 0x1e86bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e86bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e86c0:
    // 0x1e86c0: 0x3e00008  jr          $ra
label_1e86c4:
    if (ctx->pc == 0x1E86C4u) {
        ctx->pc = 0x1E86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86C0u;
        // 0x1e86c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E86C8u;
        goto label_fallthrough_0x1e86c0;
    }
    ctx->pc = 0x1E86C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86C0u;
        // 0x1e86c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E86C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e86c0:
    ctx->pc = 0x1E86C8u;
}

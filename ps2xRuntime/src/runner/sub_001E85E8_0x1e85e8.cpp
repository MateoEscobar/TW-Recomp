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

// Function: sub_001E85E8
// Address: 0x1e85e8 - 0x1e8658
void sub_001E85E8_0x1e85e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E85E8_0x1e85e8");
#endif

    switch (ctx->pc) {
        case 0x1e85e8u: goto label_1e85e8;
        case 0x1e85ecu: goto label_1e85ec;
        case 0x1e85f0u: goto label_1e85f0;
        case 0x1e85f4u: goto label_1e85f4;
        case 0x1e85f8u: goto label_1e85f8;
        case 0x1e85fcu: goto label_1e85fc;
        case 0x1e8600u: goto label_1e8600;
        case 0x1e8604u: goto label_1e8604;
        case 0x1e8608u: goto label_1e8608;
        case 0x1e860cu: goto label_1e860c;
        case 0x1e8610u: goto label_1e8610;
        case 0x1e8614u: goto label_1e8614;
        case 0x1e8618u: goto label_1e8618;
        case 0x1e861cu: goto label_1e861c;
        case 0x1e8620u: goto label_1e8620;
        case 0x1e8624u: goto label_1e8624;
        case 0x1e8628u: goto label_1e8628;
        case 0x1e862cu: goto label_1e862c;
        case 0x1e8630u: goto label_1e8630;
        case 0x1e8634u: goto label_1e8634;
        case 0x1e8638u: goto label_1e8638;
        case 0x1e863cu: goto label_1e863c;
        case 0x1e8640u: goto label_1e8640;
        case 0x1e8644u: goto label_1e8644;
        case 0x1e8648u: goto label_1e8648;
        case 0x1e864cu: goto label_1e864c;
        case 0x1e8650u: goto label_1e8650;
        case 0x1e8654u: goto label_1e8654;
        default: break;
    }

    ctx->pc = 0x1e85e8u;

label_1e85e8:
    // 0x1e85e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e85e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e85ec:
    // 0x1e85ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e85ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e85f0:
    // 0x1e85f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e85f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e85f4:
    // 0x1e85f4: 0x24900490  addiu       $s0, $a0, 0x490
    ctx->pc = 0x1e85f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
label_1e85f8:
    // 0x1e85f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e85f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e85fc:
    // 0x1e85fc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e85fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8600:
    // 0x1e8600: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e8600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1e8604:
    // 0x1e8604: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e8604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8608:
    // 0x1e8608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e860c:
    // 0x1e860c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e860cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8610:
    // 0x1e8610: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e8610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8614:
    // 0x1e8614: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e8614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e8618:
    // 0x1e8618: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e8618u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e861c:
    // 0x1e861c: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1e861cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1e8620:
    // 0x1e8620: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1e8620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1e8624:
    // 0x1e8624: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1e8624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1e8628:
    // 0x1e8628: 0x40f809  jalr        $v0
label_1e862c:
    if (ctx->pc == 0x1E862Cu) {
        ctx->pc = 0x1E862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8628u;
        // 0x1e862c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8630u;
        goto label_1e8630;
    }
    ctx->pc = 0x1E8628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8630u);
        ctx->pc = 0x1E862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8628u;
        // 0x1e862c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8628u, 0x1E8630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8630u;
label_1e8630:
    // 0x1e8630: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1e8630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1e8634:
    // 0x1e8634: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1e8638:
    if (ctx->pc == 0x1E8638u) {
        ctx->pc = 0x1E8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8634u;
        // 0x1e8638: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E863Cu;
        goto label_1e863c;
    }
    ctx->pc = 0x1E8634u;
    {
        const bool branch_taken_0x1e8634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8634u;
        // 0x1e8638: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8634) {
            ctx->pc = 0x1E8610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8610;
        }
    }
    ctx->pc = 0x1E863Cu;
label_1e863c:
    // 0x1e863c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e863cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8640:
    // 0x1e8640: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e8640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8644:
    // 0x1e8644: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8648:
    // 0x1e8648: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e8648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e864c:
    // 0x1e864c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e864cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8650:
    // 0x1e8650: 0x3e00008  jr          $ra
label_1e8654:
    if (ctx->pc == 0x1E8654u) {
        ctx->pc = 0x1E8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8650u;
        // 0x1e8654: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8658u;
        goto label_fallthrough_0x1e8650;
    }
    ctx->pc = 0x1E8650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8650u;
        // 0x1e8654: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e8650:
    ctx->pc = 0x1E8658u;
}

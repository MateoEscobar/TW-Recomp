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

// Function: sub_001AB7F0
// Address: 0x1ab7f0 - 0x1ab838
void sub_001AB7F0_0x1ab7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB7F0_0x1ab7f0");
#endif

    switch (ctx->pc) {
        case 0x1ab7f0u: goto label_1ab7f0;
        case 0x1ab7f4u: goto label_1ab7f4;
        case 0x1ab7f8u: goto label_1ab7f8;
        case 0x1ab7fcu: goto label_1ab7fc;
        case 0x1ab800u: goto label_1ab800;
        case 0x1ab804u: goto label_1ab804;
        case 0x1ab808u: goto label_1ab808;
        case 0x1ab80cu: goto label_1ab80c;
        case 0x1ab810u: goto label_1ab810;
        case 0x1ab814u: goto label_1ab814;
        case 0x1ab818u: goto label_1ab818;
        case 0x1ab81cu: goto label_1ab81c;
        case 0x1ab820u: goto label_1ab820;
        case 0x1ab824u: goto label_1ab824;
        case 0x1ab828u: goto label_1ab828;
        case 0x1ab82cu: goto label_1ab82c;
        case 0x1ab830u: goto label_1ab830;
        case 0x1ab834u: goto label_1ab834;
        default: break;
    }

    ctx->pc = 0x1ab7f0u;

label_1ab7f0:
    // 0x1ab7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ab7f4:
    // 0x1ab7f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ab7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ab7f8:
    // 0x1ab7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ab7fc:
    // 0x1ab7fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab800:
    // 0x1ab800: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1ab800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1ab804:
    // 0x1ab804: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1ab808:
    if (ctx->pc == 0x1AB808u) {
        ctx->pc = 0x1AB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB804u;
        // 0x1ab808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB80Cu;
        goto label_1ab80c;
    }
    ctx->pc = 0x1AB804u;
    {
        const bool branch_taken_0x1ab804 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB804u;
        // 0x1ab808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab804) {
            ctx->pc = 0x1AB824u;
            goto label_1ab824;
        }
    }
    ctx->pc = 0x1AB80Cu;
label_1ab80c:
    // 0x1ab80c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ab80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ab810:
    // 0x1ab810: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1ab810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1ab814:
    // 0x1ab814: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1ab814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1ab818:
    // 0x1ab818: 0x60f809  jalr        $v1
label_1ab81c:
    if (ctx->pc == 0x1AB81Cu) {
        ctx->pc = 0x1AB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB818u;
        // 0x1ab81c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB820u;
        goto label_1ab820;
    }
    ctx->pc = 0x1AB818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB820u);
        ctx->pc = 0x1AB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB818u;
        // 0x1ab81c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB818u, 0x1AB820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB820u;
label_1ab820:
    // 0x1ab820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab824:
    // 0x1ab824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab828:
    // 0x1ab828: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1ab828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1ab82c:
    // 0x1ab82c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ab82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab830:
    // 0x1ab830: 0x3e00008  jr          $ra
label_1ab834:
    if (ctx->pc == 0x1AB834u) {
        ctx->pc = 0x1AB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB830u;
        // 0x1ab834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB838u;
        goto label_fallthrough_0x1ab830;
    }
    ctx->pc = 0x1AB830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB830u;
        // 0x1ab834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ab830:
    ctx->pc = 0x1AB838u;
}

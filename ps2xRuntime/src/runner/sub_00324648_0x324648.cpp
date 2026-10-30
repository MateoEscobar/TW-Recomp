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

// Function: sub_00324648
// Address: 0x324648 - 0x3246c0
void sub_00324648_0x324648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324648_0x324648");
#endif

    switch (ctx->pc) {
        case 0x324670u: goto label_324670;
        case 0x324688u: goto label_324688;
        case 0x324698u: goto label_324698;
        default: break;
    }

    ctx->pc = 0x324648u;

    // 0x324648: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x324648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32464c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x324650: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x324650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x324654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324658: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x324658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x32465c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32465cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324660: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x324660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x324664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324668: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x324668u;
    SET_GPR_U32(ctx, 31, 0x324670u);
    ctx->pc = 0x32466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324668u;
    // 0x32466c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x324668u, 0x324670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324670u;
label_324670:
    // 0x324670: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x324670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324674: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x324674u;
    {
        const bool branch_taken_0x324674 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x324678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324674u;
        // 0x324678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324674) {
            ctx->pc = 0x324688u;
            goto label_324688;
        }
    }
    ctx->pc = 0x32467Cu;
    // 0x32467c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32467cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324680: 0xc0c9130  jal         func_3244C0
    ctx->pc = 0x324680u;
    SET_GPR_U32(ctx, 31, 0x324688u);
    ctx->pc = 0x324684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324680u;
    // 0x324684: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3244C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3244C0u, 0x324680u, 0x324688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324688u;
label_324688:
    // 0x324688: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x324688u;
    {
        const bool branch_taken_0x324688 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x32468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324688u;
        // 0x32468c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324688) {
            ctx->pc = 0x32469Cu;
            goto label_32469c;
        }
    }
    ctx->pc = 0x324690u;
    // 0x324690: 0xc0c8dd2  jal         func_323748
    ctx->pc = 0x324690u;
    SET_GPR_U32(ctx, 31, 0x324698u);
    ctx->pc = 0x324694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324690u;
    // 0x324694: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323748u, 0x324690u, 0x324698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324698u;
label_324698:
    // 0x324698: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x324698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_32469c:
    // 0x32469c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x32469cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3246a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3246a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3246a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3246a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3246a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3246a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3246ac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3246acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3246b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3246b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3246b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3246B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3246B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246B4u;
        // 0x3246b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3246B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3246BCu;
    // 0x3246bc: 0x0  nop
    ctx->pc = 0x3246bcu;
    // NOP
    ctx->pc = 0x3246c0u;
}

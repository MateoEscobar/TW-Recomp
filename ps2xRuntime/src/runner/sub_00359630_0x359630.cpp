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

// Function: sub_00359630
// Address: 0x359630 - 0x3596a8
void sub_00359630_0x359630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359630_0x359630");
#endif

    switch (ctx->pc) {
        case 0x359658u: goto label_359658;
        case 0x359660u: goto label_359660;
        case 0x359674u: goto label_359674;
        case 0x35967cu: goto label_35967c;
        case 0x359688u: goto label_359688;
        default: break;
    }

    ctx->pc = 0x359630u;

    // 0x359630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x359630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x359634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359638: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x359638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35963c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35963cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x359640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359644: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x359644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359648: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x359648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35964c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359650: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359650u;
    SET_GPR_U32(ctx, 31, 0x359658u);
    ctx->pc = 0x359654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359650u;
    // 0x359654: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359650u, 0x359658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359658u;
label_359658:
    // 0x359658: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359658u;
    SET_GPR_U32(ctx, 31, 0x359660u);
    ctx->pc = 0x35965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359658u;
    // 0x35965c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359658u, 0x359660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359660u;
label_359660:
    // 0x359660: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x359660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359664: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x359664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x359668: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x359668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35966c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35966Cu;
    SET_GPR_U32(ctx, 31, 0x359674u);
    ctx->pc = 0x359670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35966Cu;
    // 0x359670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35966Cu, 0x359674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359674u;
label_359674:
    // 0x359674: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x359674u;
    SET_GPR_U32(ctx, 31, 0x35967Cu);
    ctx->pc = 0x359678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359674u;
    // 0x359678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x359674u, 0x35967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35967Cu;
label_35967c:
    // 0x35967c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359680: 0xc08da6e  jal         func_2369B8
    ctx->pc = 0x359680u;
    SET_GPR_U32(ctx, 31, 0x359688u);
    ctx->pc = 0x359684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359680u;
    // 0x359684: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2369B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2369B8u, 0x359680u, 0x359688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359688u;
label_359688:
    // 0x359688: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x359688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35968c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35968cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359690: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x359690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359694: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x359694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35969c: 0x3e00008  jr          $ra
    ctx->pc = 0x35969Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3596A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35969Cu;
        // 0x3596a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35969Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3596A4u;
    // 0x3596a4: 0x0  nop
    ctx->pc = 0x3596a4u;
    // NOP
    ctx->pc = 0x3596a8u;
}

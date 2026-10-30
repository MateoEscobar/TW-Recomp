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

// Function: sub_0035F630
// Address: 0x35f630 - 0x35f668
void sub_0035F630_0x35f630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F630_0x35f630");
#endif

    switch (ctx->pc) {
        case 0x35f644u: goto label_35f644;
        case 0x35f64cu: goto label_35f64c;
        case 0x35f658u: goto label_35f658;
        default: break;
    }

    ctx->pc = 0x35f630u;

    // 0x35f630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f63c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F63Cu;
    SET_GPR_U32(ctx, 31, 0x35F644u);
    ctx->pc = 0x35F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F63Cu;
    // 0x35f640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F63Cu, 0x35F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F644u;
label_35f644:
    // 0x35f644: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F644u;
    SET_GPR_U32(ctx, 31, 0x35F64Cu);
    ctx->pc = 0x35F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F644u;
    // 0x35f648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F644u, 0x35F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F64Cu;
label_35f64c:
    // 0x35f64c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f650: 0xc05ad78  jal         func_16B5E0
    ctx->pc = 0x35F650u;
    SET_GPR_U32(ctx, 31, 0x35F658u);
    ctx->pc = 0x35F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F650u;
    // 0x35f654: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B5E0u, 0x35F650u, 0x35F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F658u;
label_35f658:
    // 0x35f658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f65c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f660: 0x3e00008  jr          $ra
    ctx->pc = 0x35F660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F660u;
        // 0x35f664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F668u;
}

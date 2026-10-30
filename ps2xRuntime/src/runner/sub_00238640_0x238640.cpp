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

// Function: sub_00238640
// Address: 0x238640 - 0x238690
void sub_00238640_0x238640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238640_0x238640");
#endif

    switch (ctx->pc) {
        case 0x238660u: goto label_238660;
        case 0x238668u: goto label_238668;
        case 0x238678u: goto label_238678;
        default: break;
    }

    ctx->pc = 0x238640u;

    // 0x238640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238644: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x238644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x238648: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23864c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23864cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238658: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238658u;
    SET_GPR_U32(ctx, 31, 0x238660u);
    ctx->pc = 0x23865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238658u;
    // 0x23865c: 0x58403  sra         $s0, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238658u, 0x238660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238660u;
label_238660:
    // 0x238660: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238660u;
    SET_GPR_U32(ctx, 31, 0x238668u);
    ctx->pc = 0x238664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238660u;
    // 0x238664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238660u, 0x238668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238668u;
label_238668:
    // 0x238668: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x238668u;
    {
        const bool branch_taken_0x238668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238668) {
            ctx->pc = 0x23866Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238668u;
            // 0x23866c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238680u;
            goto label_238680;
        }
    }
    ctx->pc = 0x238670u;
    // 0x238670: 0xc087502  jal         func_21D408
    ctx->pc = 0x238670u;
    SET_GPR_U32(ctx, 31, 0x238678u);
    ctx->pc = 0x238674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238670u;
    // 0x238674: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x238670u, 0x238678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238678u;
label_238678:
    // 0x238678: 0xac500270  sw          $s0, 0x270($v0)
    ctx->pc = 0x238678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 624), GPR_U32(ctx, 16));
    // 0x23867c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23867cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238680:
    // 0x238680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238684: 0x3e00008  jr          $ra
    ctx->pc = 0x238684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238684u;
        // 0x238688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23868Cu;
    // 0x23868c: 0x0  nop
    ctx->pc = 0x23868cu;
    // NOP
    ctx->pc = 0x238690u;
}

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

// Function: sub_0032D528
// Address: 0x32d528 - 0x32d570
void sub_0032D528_0x32d528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D528_0x32d528");
#endif

    switch (ctx->pc) {
        case 0x32d54cu: goto label_32d54c;
        case 0x32d55cu: goto label_32d55c;
        default: break;
    }

    ctx->pc = 0x32d528u;

    // 0x32d528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d52c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32d52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32d530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32d530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32d534: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d53c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32d53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d540: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32d544: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x32D544u;
    SET_GPR_U32(ctx, 31, 0x32D54Cu);
    ctx->pc = 0x32D548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D544u;
    // 0x32d548: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x32D544u, 0x32D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D54Cu;
label_32d54c:
    // 0x32d54c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x32d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32d550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d554: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x32D554u;
    SET_GPR_U32(ctx, 31, 0x32D55Cu);
    ctx->pc = 0x32D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D554u;
    // 0x32d558: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x32D554u, 0x32D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D55Cu;
label_32d55c:
    // 0x32d55c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32d55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32d560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d568: 0x3e00008  jr          $ra
    ctx->pc = 0x32D568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D568u;
        // 0x32d56c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D570u;
}

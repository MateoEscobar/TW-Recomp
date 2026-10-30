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

// Function: sub_00363530
// Address: 0x363530 - 0x3635d0
void sub_00363530_0x363530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363530_0x363530");
#endif

    switch (ctx->pc) {
        case 0x363558u: goto label_363558;
        case 0x363560u: goto label_363560;
        case 0x363574u: goto label_363574;
        case 0x363588u: goto label_363588;
        case 0x36359cu: goto label_36359c;
        case 0x3635b0u: goto label_3635b0;
        default: break;
    }

    ctx->pc = 0x363530u;

    // 0x363530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x363530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x363534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x363534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363538: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x363538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36353c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36353cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363540: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x363540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x363544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x363544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x363548: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x363548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x36354c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36354cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363550: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363550u;
    SET_GPR_U32(ctx, 31, 0x363558u);
    ctx->pc = 0x363554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363550u;
    // 0x363554: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363550u, 0x363558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363558u;
label_363558:
    // 0x363558: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363558u;
    SET_GPR_U32(ctx, 31, 0x363560u);
    ctx->pc = 0x36355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363558u;
    // 0x36355c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363558u, 0x363560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363560u;
label_363560:
    // 0x363560: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x363560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363568: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x363568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36356c: 0xc102488  jal         func_409220
    ctx->pc = 0x36356Cu;
    SET_GPR_U32(ctx, 31, 0x363574u);
    ctx->pc = 0x363570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36356Cu;
    // 0x363570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36356Cu, 0x363574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363574u;
label_363574:
    // 0x363574: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x363574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36357c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36357cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363580: 0xc102488  jal         func_409220
    ctx->pc = 0x363580u;
    SET_GPR_U32(ctx, 31, 0x363588u);
    ctx->pc = 0x363584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363580u;
    // 0x363584: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363580u, 0x363588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363588u;
label_363588:
    // 0x363588: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x363588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36358c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36358cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363590: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x363590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x363594: 0xc1024c6  jal         func_409318
    ctx->pc = 0x363594u;
    SET_GPR_U32(ctx, 31, 0x36359Cu);
    ctx->pc = 0x363598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363594u;
    // 0x363598: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x363594u, 0x36359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36359Cu;
label_36359c:
    // 0x36359c: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x36359cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3635a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3635a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3635a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3635a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3635a8: 0xc0b4b7e  jal         func_2D2DF8
    ctx->pc = 0x3635A8u;
    SET_GPR_U32(ctx, 31, 0x3635B0u);
    ctx->pc = 0x3635ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3635A8u;
    // 0x3635ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2DF8u, 0x3635A8u, 0x3635B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635B0u;
label_3635b0:
    // 0x3635b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3635b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3635b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3635b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3635b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3635b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3635bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3635bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3635c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3635c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3635c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3635c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3635c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3635C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3635CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3635C8u;
        // 0x3635cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3635C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3635D0u;
}

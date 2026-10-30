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

// Function: sub_003594D8
// Address: 0x3594d8 - 0x359570
void sub_003594D8_0x3594d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003594D8_0x3594d8");
#endif

    switch (ctx->pc) {
        case 0x359504u: goto label_359504;
        case 0x35950cu: goto label_35950c;
        case 0x359520u: goto label_359520;
        case 0x359534u: goto label_359534;
        case 0x35953cu: goto label_35953c;
        case 0x35954cu: goto label_35954c;
        default: break;
    }

    ctx->pc = 0x3594d8u;

    // 0x3594d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3594d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3594dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3594dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3594e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3594e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3594e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3594e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3594e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3594e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3594ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3594f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3594f4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3594f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3594f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3594f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3594fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3594FCu;
    SET_GPR_U32(ctx, 31, 0x359504u);
    ctx->pc = 0x359500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3594FCu;
    // 0x359500: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3594FCu, 0x359504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359504u;
label_359504:
    // 0x359504: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359504u;
    SET_GPR_U32(ctx, 31, 0x35950Cu);
    ctx->pc = 0x359508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359504u;
    // 0x359508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359504u, 0x35950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35950Cu;
label_35950c:
    // 0x35950c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35950cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359514: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x359514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x359518: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359518u;
    SET_GPR_U32(ctx, 31, 0x359520u);
    ctx->pc = 0x35951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359518u;
    // 0x35951c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359518u, 0x359520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359520u;
label_359520:
    // 0x359520: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x359520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359524: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x359524u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35952c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35952Cu;
    SET_GPR_U32(ctx, 31, 0x359534u);
    ctx->pc = 0x359530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35952Cu;
    // 0x359530: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35952Cu, 0x359534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359534u;
label_359534:
    // 0x359534: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359534u;
    SET_GPR_U32(ctx, 31, 0x35953Cu);
    ctx->pc = 0x359538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359534u;
    // 0x359538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359534u, 0x35953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35953Cu;
label_35953c:
    // 0x35953c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35953cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x359540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359544: 0xc08dc76  jal         func_2371D8
    ctx->pc = 0x359544u;
    SET_GPR_U32(ctx, 31, 0x35954Cu);
    ctx->pc = 0x359548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359544u;
    // 0x359548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2371D8u, 0x359544u, 0x35954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35954Cu;
label_35954c:
    // 0x35954c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35954cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x359550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359554: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x359554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x359558: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x359558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35955c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x35955cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359564: 0x3e00008  jr          $ra
    ctx->pc = 0x359564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359564u;
        // 0x359568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35956Cu;
    // 0x35956c: 0x0  nop
    ctx->pc = 0x35956cu;
    // NOP
    ctx->pc = 0x359570u;
}

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

// Function: sub_00359418
// Address: 0x359418 - 0x359478
void sub_00359418_0x359418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359418_0x359418");
#endif

    switch (ctx->pc) {
        case 0x359438u: goto label_359438;
        case 0x359440u: goto label_359440;
        case 0x359454u: goto label_359454;
        case 0x359460u: goto label_359460;
        default: break;
    }

    ctx->pc = 0x359418u;

    // 0x359418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35941c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35941cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359420: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x359424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35942c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359430: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359430u;
    SET_GPR_U32(ctx, 31, 0x359438u);
    ctx->pc = 0x359434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359430u;
    // 0x359434: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359430u, 0x359438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359438u;
label_359438:
    // 0x359438: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359438u;
    SET_GPR_U32(ctx, 31, 0x359440u);
    ctx->pc = 0x35943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359438u;
    // 0x35943c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359438u, 0x359440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359440u;
label_359440:
    // 0x359440: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35944c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35944Cu;
    SET_GPR_U32(ctx, 31, 0x359454u);
    ctx->pc = 0x359450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35944Cu;
    // 0x359450: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35944Cu, 0x359454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359454u;
label_359454:
    // 0x359454: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x359454u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359458: 0xc08d396  jal         func_234E58
    ctx->pc = 0x359458u;
    SET_GPR_U32(ctx, 31, 0x359460u);
    ctx->pc = 0x35945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359458u;
    // 0x35945c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234E58u, 0x359458u, 0x359460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359460u;
label_359460:
    // 0x359460: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35946c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35946cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359470: 0x3e00008  jr          $ra
    ctx->pc = 0x359470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359470u;
        // 0x359474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359478u;
}

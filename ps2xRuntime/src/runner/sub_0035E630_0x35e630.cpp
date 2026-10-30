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

// Function: sub_0035E630
// Address: 0x35e630 - 0x35e690
void sub_0035E630_0x35e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E630_0x35e630");
#endif

    switch (ctx->pc) {
        case 0x35e650u: goto label_35e650;
        case 0x35e658u: goto label_35e658;
        case 0x35e66cu: goto label_35e66c;
        case 0x35e678u: goto label_35e678;
        default: break;
    }

    ctx->pc = 0x35e630u;

    // 0x35e630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e638: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35e638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35e63c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e648: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E648u;
    SET_GPR_U32(ctx, 31, 0x35E650u);
    ctx->pc = 0x35E64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E648u;
    // 0x35e64c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E648u, 0x35E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E650u;
label_35e650:
    // 0x35e650: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35E650u;
    SET_GPR_U32(ctx, 31, 0x35E658u);
    ctx->pc = 0x35E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E650u;
    // 0x35e654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35E650u, 0x35E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E658u;
label_35e658:
    // 0x35e658: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e664: 0xc102488  jal         func_409220
    ctx->pc = 0x35E664u;
    SET_GPR_U32(ctx, 31, 0x35E66Cu);
    ctx->pc = 0x35E668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E664u;
    // 0x35e668: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35E664u, 0x35E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E66Cu;
label_35e66c:
    // 0x35e66c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35e66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e670: 0xc10766a  jal         func_41D9A8
    ctx->pc = 0x35E670u;
    SET_GPR_U32(ctx, 31, 0x35E678u);
    ctx->pc = 0x35E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E670u;
    // 0x35e674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D9A8u, 0x35E670u, 0x35E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E678u;
label_35e678:
    // 0x35e678: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35e678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e67c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e688: 0x3e00008  jr          $ra
    ctx->pc = 0x35E688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E688u;
        // 0x35e68c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E690u;
}

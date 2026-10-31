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

// Function: sub_0014E628
// Address: 0x14e628 - 0x14e6a0
void sub_0014E628_0x14e628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E628_0x14e628");
#endif

    switch (ctx->pc) {
        case 0x14e650u: goto label_14e650;
        case 0x14e658u: goto label_14e658;
        case 0x14e664u: goto label_14e664;
        case 0x14e670u: goto label_14e670;
        case 0x14e678u: goto label_14e678;
        case 0x14e680u: goto label_14e680;
        default: break;
    }

    ctx->pc = 0x14e628u;

    // 0x14e628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14e628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14e62c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14e630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e63c: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x14e63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x14e640: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14E640u;
    {
        const bool branch_taken_0x14e640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E640u;
        // 0x14e644: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e640) {
            ctx->pc = 0x14E688u;
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E648u;
    // 0x14e648: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E648u;
    SET_GPR_U32(ctx, 31, 0x14E650u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E648u, 0x14E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E650u;
label_14e650:
    // 0x14e650: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E650u;
    SET_GPR_U32(ctx, 31, 0x14E658u);
    ctx->pc = 0x14E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E650u;
    // 0x14e654: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E650u, 0x14E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E658u;
label_14e658:
    // 0x14e658: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x14e658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14e65c: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E65Cu;
    SET_GPR_U32(ctx, 31, 0x14E664u);
    ctx->pc = 0x14E660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E65Cu;
    // 0x14e660: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E65Cu, 0x14E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E664u;
label_14e664:
    // 0x14e664: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x14e664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x14e668: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E668u;
    SET_GPR_U32(ctx, 31, 0x14E670u);
    ctx->pc = 0x14E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E668u;
    // 0x14e66c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E668u, 0x14E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E670u;
label_14e670:
    // 0x14e670: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E670u;
    SET_GPR_U32(ctx, 31, 0x14E678u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E670u, 0x14E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E678u;
label_14e678:
    // 0x14e678: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E678u;
    SET_GPR_U32(ctx, 31, 0x14E680u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E678u, 0x14E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E680u;
label_14e680:
    // 0x14e680: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14E680u;
    {
        const bool branch_taken_0x14e680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E680u;
        // 0x14e684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e680) {
            ctx->pc = 0x14E68Cu;
            goto label_14e68c;
        }
    }
    ctx->pc = 0x14E688u;
label_14e688:
    // 0x14e688: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e68c:
    // 0x14e68c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14e68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e698: 0x3e00008  jr          $ra
    ctx->pc = 0x14E698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E698u;
        // 0x14e69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E6A0u;
}

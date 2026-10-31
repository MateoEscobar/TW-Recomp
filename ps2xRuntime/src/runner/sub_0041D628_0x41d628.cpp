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

// Function: sub_0041D628
// Address: 0x41d628 - 0x41d690
void sub_0041D628_0x41d628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D628_0x41d628");
#endif

    switch (ctx->pc) {
        case 0x41d654u: goto label_41d654;
        case 0x41d65cu: goto label_41d65c;
        case 0x41d664u: goto label_41d664;
        case 0x41d66cu: goto label_41d66c;
        case 0x41d674u: goto label_41d674;
        case 0x41d67cu: goto label_41d67c;
        default: break;
    }

    ctx->pc = 0x41d628u;

    // 0x41d628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41d62c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41d630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41d634: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41d634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41d638: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41d638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d640: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41d640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d644: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x41d644u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x41d648: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x41d648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d64c: 0xc0e5f82  jal         func_397E08
    ctx->pc = 0x41D64Cu;
    SET_GPR_U32(ctx, 31, 0x41D654u);
    ctx->pc = 0x41D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D64Cu;
    // 0x41d650: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397E08u, 0x41D64Cu, 0x41D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D654u;
label_41d654:
    // 0x41d654: 0xc10563e  jal         func_4158F8
    ctx->pc = 0x41D654u;
    SET_GPR_U32(ctx, 31, 0x41D65Cu);
    ctx->pc = 0x41D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D654u;
    // 0x41d658: 0x26240002  addiu       $a0, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4158F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4158F8u, 0x41D654u, 0x41D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D65Cu;
label_41d65c:
    // 0x41d65c: 0xc1053da  jal         func_414F68
    ctx->pc = 0x41D65Cu;
    SET_GPR_U32(ctx, 31, 0x41D664u);
    ctx->pc = 0x41D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D65Cu;
    // 0x41d660: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414F68u, 0x41D65Cu, 0x41D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D664u;
label_41d664:
    // 0x41d664: 0xc104c80  jal         func_413200
    ctx->pc = 0x41D664u;
    SET_GPR_U32(ctx, 31, 0x41D66Cu);
    ctx->pc = 0x41D668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D664u;
    // 0x41d668: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x41D664u, 0x41D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D66Cu;
label_41d66c:
    // 0x41d66c: 0xc104c86  jal         func_413218
    ctx->pc = 0x41D66Cu;
    SET_GPR_U32(ctx, 31, 0x41D674u);
    ctx->pc = 0x41D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D66Cu;
    // 0x41d670: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413218u, 0x41D66Cu, 0x41D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D674u;
label_41d674:
    // 0x41d674: 0xc105352  jal         func_414D48
    ctx->pc = 0x41D674u;
    SET_GPR_U32(ctx, 31, 0x41D67Cu);
    ctx->pc = 0x41D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D674u;
    // 0x41d678: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414D48u, 0x41D674u, 0x41D67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D67Cu;
label_41d67c:
    // 0x41d67c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41d67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41d680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41d684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d688: 0x3e00008  jr          $ra
    ctx->pc = 0x41D688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D688u;
        // 0x41d68c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D690u;
}

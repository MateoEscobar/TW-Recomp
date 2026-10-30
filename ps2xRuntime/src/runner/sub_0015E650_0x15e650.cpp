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

// Function: sub_0015E650
// Address: 0x15e650 - 0x15e6b8
void sub_0015E650_0x15e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E650_0x15e650");
#endif

    switch (ctx->pc) {
        case 0x15e664u: goto label_15e664;
        case 0x15e68cu: goto label_15e68c;
        case 0x15e694u: goto label_15e694;
        case 0x15e6a4u: goto label_15e6a4;
        default: break;
    }

    ctx->pc = 0x15e650u;

    // 0x15e650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15e650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e654: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15e654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15e658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e65c: 0xc0579c6  jal         func_15E718
    ctx->pc = 0x15E65Cu;
    SET_GPR_U32(ctx, 31, 0x15E664u);
    ctx->pc = 0x15E660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E65Cu;
    // 0x15e660: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x15E65Cu, 0x15E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E664u;
label_15e664:
    // 0x15e664: 0x8e05c784  lw          $a1, -0x387C($s0)
    ctx->pc = 0x15e664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952836)));
    // 0x15e668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e66c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x15e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x15e670: 0x246366a0  addiu       $v1, $v1, 0x66A0
    ctx->pc = 0x15e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26272));
    // 0x15e674: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x15e674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15e678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e67c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15e67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15e680: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15e680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15e684: 0xc0557fc  jal         func_155FF0
    ctx->pc = 0x15E684u;
    SET_GPR_U32(ctx, 31, 0x15E68Cu);
    ctx->pc = 0x15E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E684u;
    // 0x15e688: 0xae05c784  sw          $a1, -0x387C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952836), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FF0u, 0x15E684u, 0x15E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E68Cu;
label_15e68c:
    // 0x15e68c: 0xc0579c6  jal         func_15E718
    ctx->pc = 0x15E68Cu;
    SET_GPR_U32(ctx, 31, 0x15E694u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x15E68Cu, 0x15E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E694u;
label_15e694:
    // 0x15e694: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E694u;
    {
        const bool branch_taken_0x15e694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e694) {
            ctx->pc = 0x15E698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E694u;
            // 0x15e698: 0x8e02c784  lw          $v0, -0x387C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952836)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E6A8u;
            goto label_15e6a8;
        }
    }
    ctx->pc = 0x15E69Cu;
    // 0x15e69c: 0xc05581e  jal         func_156078
    ctx->pc = 0x15E69Cu;
    SET_GPR_U32(ctx, 31, 0x15E6A4u);
    ctx->pc = 0x15E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E69Cu;
    // 0x15e6a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156078u, 0x15E69Cu, 0x15E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E6A4u;
label_15e6a4:
    // 0x15e6a4: 0x8e02c784  lw          $v0, -0x387C($s0)
    ctx->pc = 0x15e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952836)));
label_15e6a8:
    // 0x15e6a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15e6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x15E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6B0u;
        // 0x15e6b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E6B8u;
}

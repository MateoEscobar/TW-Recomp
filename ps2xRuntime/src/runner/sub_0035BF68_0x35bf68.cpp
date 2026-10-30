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

// Function: sub_0035BF68
// Address: 0x35bf68 - 0x35bfe0
void sub_0035BF68_0x35bf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BF68_0x35bf68");
#endif

    switch (ctx->pc) {
        case 0x35bf88u: goto label_35bf88;
        case 0x35bf90u: goto label_35bf90;
        case 0x35bf98u: goto label_35bf98;
        case 0x35bfa4u: goto label_35bfa4;
        case 0x35bfbcu: goto label_35bfbc;
        case 0x35bfc8u: goto label_35bfc8;
        default: break;
    }

    ctx->pc = 0x35bf68u;

    // 0x35bf68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35bf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35bf6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bf70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35bf74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35bf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35bf7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35bf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35bf80: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BF80u;
    SET_GPR_U32(ctx, 31, 0x35BF88u);
    ctx->pc = 0x35BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF80u;
    // 0x35bf84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BF80u, 0x35BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF88u;
label_35bf88:
    // 0x35bf88: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BF88u;
    SET_GPR_U32(ctx, 31, 0x35BF90u);
    ctx->pc = 0x35BF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF88u;
    // 0x35bf8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BF88u, 0x35BF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF90u;
label_35bf90:
    // 0x35bf90: 0xc08df52  jal         func_237D48
    ctx->pc = 0x35BF90u;
    SET_GPR_U32(ctx, 31, 0x35BF98u);
    ctx->pc = 0x35BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF90u;
    // 0x35bf94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237D48u, 0x35BF90u, 0x35BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF98u;
label_35bf98:
    // 0x35bf98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35bf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf9c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35BF9Cu;
    SET_GPR_U32(ctx, 31, 0x35BFA4u);
    ctx->pc = 0x35BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF9Cu;
    // 0x35bfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35BF9Cu, 0x35BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BFA4u;
label_35bfa4:
    // 0x35bfa4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35BFA4u;
    {
        const bool branch_taken_0x35bfa4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x35BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFA4u;
        // 0x35bfa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bfa4) {
            ctx->pc = 0x35BFC0u;
            goto label_35bfc0;
        }
    }
    ctx->pc = 0x35BFACu;
    // 0x35bfac: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x35bfacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x35bfb0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x35bfb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x35bfb4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x35BFB4u;
    SET_GPR_U32(ctx, 31, 0x35BFBCu);
    ctx->pc = 0x35BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BFB4u;
    // 0x35bfb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x35BFB4u, 0x35BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BFBCu;
label_35bfbc:
    // 0x35bfbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35bfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35bfc0:
    // 0x35bfc0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35BFC0u;
    SET_GPR_U32(ctx, 31, 0x35BFC8u);
    ctx->pc = 0x35BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BFC0u;
    // 0x35bfc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35BFC0u, 0x35BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BFC8u;
label_35bfc8:
    // 0x35bfc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35bfc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35bfcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bfd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35bfd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bfd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x35BFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFD8u;
        // 0x35bfdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BFE0u;
}

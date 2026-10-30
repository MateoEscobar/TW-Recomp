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

// Function: sub_0031B6D0
// Address: 0x31b6d0 - 0x31b768
void sub_0031B6D0_0x31b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B6D0_0x31b6d0");
#endif

    switch (ctx->pc) {
        case 0x31b6e8u: goto label_31b6e8;
        case 0x31b708u: goto label_31b708;
        case 0x31b714u: goto label_31b714;
        case 0x31b720u: goto label_31b720;
        case 0x31b730u: goto label_31b730;
        case 0x31b754u: goto label_31b754;
        default: break;
    }

    ctx->pc = 0x31b6d0u;

    // 0x31b6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b6d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31b6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31b6d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31b6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6e0: 0xc05959e  jal         func_165678
    ctx->pc = 0x31B6E0u;
    SET_GPR_U32(ctx, 31, 0x31B6E8u);
    ctx->pc = 0x31B6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B6E0u;
    // 0x31b6e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31B6E0u, 0x31B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6E8u;
label_31b6e8:
    // 0x31b6e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31b6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6ec: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x31B6ECu;
    {
        const bool branch_taken_0x31b6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b6ec) {
            ctx->pc = 0x31B6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B6ECu;
            // 0x31b6f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B718u;
            goto label_31b718;
        }
    }
    ctx->pc = 0x31B6F4u;
    // 0x31b6f4: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x31b6f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x31b6f8: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31B6F8u;
    {
        const bool branch_taken_0x31b6f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31b6f8) {
            ctx->pc = 0x31B6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B6F8u;
            // 0x31b6fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B718u;
            goto label_31b718;
        }
    }
    ctx->pc = 0x31B700u;
    // 0x31b700: 0xc08750a  jal         func_21D428
    ctx->pc = 0x31B700u;
    SET_GPR_U32(ctx, 31, 0x31B708u);
    ctx->pc = 0x31B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B700u;
    // 0x31b704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x31B700u, 0x31B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B708u;
label_31b708:
    // 0x31b708: 0x86050034  lh          $a1, 0x34($s0)
    ctx->pc = 0x31b708u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x31b70c: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x31B70Cu;
    SET_GPR_U32(ctx, 31, 0x31B714u);
    ctx->pc = 0x31B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B70Cu;
    // 0x31b710: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31B70Cu, 0x31B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B714u;
label_31b714:
    // 0x31b714: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31b714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31b718:
    // 0x31b718: 0xc059646  jal         func_165918
    ctx->pc = 0x31B718u;
    SET_GPR_U32(ctx, 31, 0x31B720u);
    ctx->pc = 0x31B71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B718u;
    // 0x31b71c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165918u, 0x31B718u, 0x31B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B720u;
label_31b720:
    // 0x31b720: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b724: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x31b724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x31b728: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x31B728u;
    SET_GPR_U32(ctx, 31, 0x31B730u);
    ctx->pc = 0x31B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B728u;
    // 0x31b72c: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x31B728u, 0x31B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B730u;
label_31b730:
    // 0x31b730: 0x9203003c  lbu         $v1, 0x3C($s0)
    ctx->pc = 0x31b730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x31b734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b738: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31B738u;
    {
        const bool branch_taken_0x31b738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B738u;
        // 0x31b73c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b738) {
            ctx->pc = 0x31B758u;
            goto label_31b758;
        }
    }
    ctx->pc = 0x31B740u;
    // 0x31b740: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x31b740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x31b744: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31b744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b748: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x31b748u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x31b74c: 0xc04773c  jal         func_11DCF0
    ctx->pc = 0x31B74Cu;
    SET_GPR_U32(ctx, 31, 0x31B754u);
    ctx->pc = 0x31B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B74Cu;
    // 0x31b750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DCF0u, 0x31B74Cu, 0x31B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B754u;
label_31b754:
    // 0x31b754: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31b754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31b758:
    // 0x31b758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b75c: 0x3e00008  jr          $ra
    ctx->pc = 0x31B75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B75Cu;
        // 0x31b760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B764u;
    // 0x31b764: 0x0  nop
    ctx->pc = 0x31b764u;
    // NOP
    ctx->pc = 0x31b768u;
}

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

// Function: sub_0022DC40
// Address: 0x22dc40 - 0x22dd08
void sub_0022DC40_0x22dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DC40_0x22dc40");
#endif

    switch (ctx->pc) {
        case 0x22dc6cu: goto label_22dc6c;
        case 0x22dc74u: goto label_22dc74;
        case 0x22dc8cu: goto label_22dc8c;
        case 0x22dc94u: goto label_22dc94;
        case 0x22dcacu: goto label_22dcac;
        case 0x22dcb4u: goto label_22dcb4;
        case 0x22dcccu: goto label_22dccc;
        case 0x22dcd4u: goto label_22dcd4;
        case 0x22dcf0u: goto label_22dcf0;
        default: break;
    }

    ctx->pc = 0x22dc40u;

    // 0x22dc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22dc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22dc44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22dc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22dc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22dc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22dc4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22dc4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22dc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22dc54: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22dc54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x22dc58: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22dc58u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22dc5c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x22DC5Cu;
    {
        const bool branch_taken_0x22dc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC5Cu;
        // 0x22dc60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc5c) {
            ctx->pc = 0x22DCF0u;
            goto label_22dcf0;
        }
    }
    ctx->pc = 0x22DC64u;
    // 0x22dc64: 0xc095fce  jal         func_257F38
    ctx->pc = 0x22DC64u;
    SET_GPR_U32(ctx, 31, 0x22DC6Cu);
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x22DC64u, 0x22DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC6Cu;
label_22dc6c:
    // 0x22dc6c: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x22DC6Cu;
    SET_GPR_U32(ctx, 31, 0x22DC74u);
    ctx->pc = 0x22DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC6Cu;
    // 0x22dc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DC6Cu, 0x22DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC74u;
label_22dc74:
    // 0x22dc74: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x22dc74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x22dc78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22dc7c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DC7Cu;
    {
        const bool branch_taken_0x22dc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC7Cu;
        // 0x22dc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc7c) {
            ctx->pc = 0x22DC8Cu;
            goto label_22dc8c;
        }
    }
    ctx->pc = 0x22DC84u;
    // 0x22dc84: 0xc08b766  jal         func_22DD98
    ctx->pc = 0x22DC84u;
    SET_GPR_U32(ctx, 31, 0x22DC8Cu);
    ctx->pc = 0x22DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC84u;
    // 0x22dc88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DD98u, 0x22DC84u, 0x22DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC8Cu;
label_22dc8c:
    // 0x22dc8c: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x22DC8Cu;
    SET_GPR_U32(ctx, 31, 0x22DC94u);
    ctx->pc = 0x22DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC8Cu;
    // 0x22dc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DC8Cu, 0x22DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC94u;
label_22dc94:
    // 0x22dc94: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x22dc94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x22dc98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22dc9c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DC9Cu;
    {
        const bool branch_taken_0x22dc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC9Cu;
        // 0x22dca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc9c) {
            ctx->pc = 0x22DCACu;
            goto label_22dcac;
        }
    }
    ctx->pc = 0x22DCA4u;
    // 0x22dca4: 0xc08b5e4  jal         func_22D790
    ctx->pc = 0x22DCA4u;
    SET_GPR_U32(ctx, 31, 0x22DCACu);
    ctx->pc = 0x22DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCA4u;
    // 0x22dca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D790u, 0x22DCA4u, 0x22DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCACu;
label_22dcac:
    // 0x22dcac: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x22DCACu;
    SET_GPR_U32(ctx, 31, 0x22DCB4u);
    ctx->pc = 0x22DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCACu;
    // 0x22dcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DCACu, 0x22DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCB4u;
label_22dcb4:
    // 0x22dcb4: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x22dcb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x22dcb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22dcbc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DCBCu;
    {
        const bool branch_taken_0x22dcbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCBCu;
        // 0x22dcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dcbc) {
            ctx->pc = 0x22DCCCu;
            goto label_22dccc;
        }
    }
    ctx->pc = 0x22DCC4u;
    // 0x22dcc4: 0xc08b7e2  jal         func_22DF88
    ctx->pc = 0x22DCC4u;
    SET_GPR_U32(ctx, 31, 0x22DCCCu);
    ctx->pc = 0x22DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCC4u;
    // 0x22dcc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DF88u, 0x22DCC4u, 0x22DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCCCu;
label_22dccc:
    // 0x22dccc: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x22DCCCu;
    SET_GPR_U32(ctx, 31, 0x22DCD4u);
    ctx->pc = 0x22DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCCCu;
    // 0x22dcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DCCCu, 0x22DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCD4u;
label_22dcd4:
    // 0x22dcd4: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x22dcd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x22dcd8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22dcdc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DCDCu;
    {
        const bool branch_taken_0x22dcdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22dcdc) {
            ctx->pc = 0x22DCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DCDCu;
            // 0x22dce0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DCF4u;
            goto label_22dcf4;
        }
    }
    ctx->pc = 0x22DCE4u;
    // 0x22dce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22dce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dce8: 0xc08b930  jal         func_22E4C0
    ctx->pc = 0x22DCE8u;
    SET_GPR_U32(ctx, 31, 0x22DCF0u);
    ctx->pc = 0x22DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCE8u;
    // 0x22dcec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E4C0u, 0x22DCE8u, 0x22DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCF0u;
label_22dcf0:
    // 0x22dcf0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22dcf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22dcf4:
    // 0x22dcf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22dcf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dcf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22dcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x22DCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCFCu;
        // 0x22dd00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DD04u;
    // 0x22dd04: 0x0  nop
    ctx->pc = 0x22dd04u;
    // NOP
    ctx->pc = 0x22dd08u;
}

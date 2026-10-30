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

// Function: sub_0040CE30
// Address: 0x40ce30 - 0x40cf18
void sub_0040CE30_0x40ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CE30_0x40ce30");
#endif

    switch (ctx->pc) {
        case 0x40ce44u: goto label_40ce44;
        case 0x40ce58u: goto label_40ce58;
        case 0x40ce64u: goto label_40ce64;
        case 0x40ce70u: goto label_40ce70;
        case 0x40ce7cu: goto label_40ce7c;
        case 0x40ce88u: goto label_40ce88;
        case 0x40ce94u: goto label_40ce94;
        case 0x40cea0u: goto label_40cea0;
        case 0x40ceacu: goto label_40ceac;
        case 0x40ceb8u: goto label_40ceb8;
        case 0x40cec4u: goto label_40cec4;
        case 0x40ced0u: goto label_40ced0;
        case 0x40cedcu: goto label_40cedc;
        case 0x40cee8u: goto label_40cee8;
        case 0x40cef4u: goto label_40cef4;
        case 0x40cf00u: goto label_40cf00;
        case 0x40cf08u: goto label_40cf08;
        default: break;
    }

    ctx->pc = 0x40ce30u;

    // 0x40ce30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40ce34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40ce34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40ce38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40ce3c: 0xc051048  jal         func_144120
    ctx->pc = 0x40CE3Cu;
    SET_GPR_U32(ctx, 31, 0x40CE44u);
    ctx->pc = 0x40CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CE3Cu;
    // 0x40ce40: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x40CE3Cu, 0x40CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE44u;
label_40ce44:
    // 0x40ce44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40ce44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ce48: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40CE48u;
    {
        const bool branch_taken_0x40ce48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ce48) {
            ctx->pc = 0x40CE5Cu;
            goto label_40ce5c;
        }
    }
    ctx->pc = 0x40CE50u;
    // 0x40ce50: 0xc1033d0  jal         func_40CF40
    ctx->pc = 0x40CE50u;
    SET_GPR_U32(ctx, 31, 0x40CE58u);
    ctx->pc = 0x40CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CE50u;
    // 0x40ce54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CF40u, 0x40CE50u, 0x40CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE58u;
label_40ce58:
    // 0x40ce58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40ce58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40ce5c:
    // 0x40ce5c: 0xc051028  jal         func_1440A0
    ctx->pc = 0x40CE5Cu;
    SET_GPR_U32(ctx, 31, 0x40CE64u);
    ctx->pc = 0x1440A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440A0u, 0x40CE5Cu, 0x40CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE64u;
label_40ce64:
    // 0x40ce64: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x40ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x40ce68: 0xc051048  jal         func_144120
    ctx->pc = 0x40CE68u;
    SET_GPR_U32(ctx, 31, 0x40CE70u);
    ctx->pc = 0x40CE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CE68u;
    // 0x40ce6c: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x40CE68u, 0x40CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE70u;
label_40ce70:
    // 0x40ce70: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x40ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x40ce74: 0xc051048  jal         func_144120
    ctx->pc = 0x40CE74u;
    SET_GPR_U32(ctx, 31, 0x40CE7Cu);
    ctx->pc = 0x40CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CE74u;
    // 0x40ce78: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x40CE74u, 0x40CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE7Cu;
label_40ce7c:
    // 0x40ce7c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x40ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x40ce80: 0xc051048  jal         func_144120
    ctx->pc = 0x40CE80u;
    SET_GPR_U32(ctx, 31, 0x40CE88u);
    ctx->pc = 0x40CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CE80u;
    // 0x40ce84: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x40CE80u, 0x40CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE88u;
label_40ce88:
    // 0x40ce88: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x40ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x40ce8c: 0xc051048  jal         func_144120
    ctx->pc = 0x40CE8Cu;
    SET_GPR_U32(ctx, 31, 0x40CE94u);
    ctx->pc = 0x40CE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CE8Cu;
    // 0x40ce90: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x40CE8Cu, 0x40CE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE94u;
label_40ce94:
    // 0x40ce94: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x40ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x40ce98: 0xc051048  jal         func_144120
    ctx->pc = 0x40CE98u;
    SET_GPR_U32(ctx, 31, 0x40CEA0u);
    ctx->pc = 0x40CE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CE98u;
    // 0x40ce9c: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x40CE98u, 0x40CEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CEA0u;
label_40cea0:
    // 0x40cea0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x40cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x40cea4: 0xc051048  jal         func_144120
    ctx->pc = 0x40CEA4u;
    SET_GPR_U32(ctx, 31, 0x40CEACu);
    ctx->pc = 0x40CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CEA4u;
    // 0x40cea8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x40CEA4u, 0x40CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CEACu;
label_40ceac:
    // 0x40ceac: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x40ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x40ceb0: 0xc051048  jal         func_144120
    ctx->pc = 0x40CEB0u;
    SET_GPR_U32(ctx, 31, 0x40CEB8u);
    ctx->pc = 0x40CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CEB0u;
    // 0x40ceb4: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x40CEB0u, 0x40CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CEB8u;
label_40ceb8:
    // 0x40ceb8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x40ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x40cebc: 0xc051048  jal         func_144120
    ctx->pc = 0x40CEBCu;
    SET_GPR_U32(ctx, 31, 0x40CEC4u);
    ctx->pc = 0x40CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CEBCu;
    // 0x40cec0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x40CEBCu, 0x40CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CEC4u;
label_40cec4:
    // 0x40cec4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x40cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x40cec8: 0xc051048  jal         func_144120
    ctx->pc = 0x40CEC8u;
    SET_GPR_U32(ctx, 31, 0x40CED0u);
    ctx->pc = 0x40CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CEC8u;
    // 0x40cecc: 0x24040053  addiu       $a0, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x40CEC8u, 0x40CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CED0u;
label_40ced0:
    // 0x40ced0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40ced0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ced4: 0xc103422  jal         func_40D088
    ctx->pc = 0x40CED4u;
    SET_GPR_U32(ctx, 31, 0x40CEDCu);
    ctx->pc = 0x40CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CED4u;
    // 0x40ced8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D088u, 0x40CED4u, 0x40CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CEDCu;
label_40cedc:
    // 0x40cedc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x40cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x40cee0: 0xc103376  jal         func_40CDD8
    ctx->pc = 0x40CEE0u;
    SET_GPR_U32(ctx, 31, 0x40CEE8u);
    ctx->pc = 0x40CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CEE0u;
    // 0x40cee4: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CDD8u, 0x40CEE0u, 0x40CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CEE8u;
label_40cee8:
    // 0x40cee8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x40cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x40ceec: 0xc103376  jal         func_40CDD8
    ctx->pc = 0x40CEECu;
    SET_GPR_U32(ctx, 31, 0x40CEF4u);
    ctx->pc = 0x40CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CEECu;
    // 0x40cef0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CDD8u, 0x40CEECu, 0x40CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CEF4u;
label_40cef4:
    // 0x40cef4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x40cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x40cef8: 0xc103376  jal         func_40CDD8
    ctx->pc = 0x40CEF8u;
    SET_GPR_U32(ctx, 31, 0x40CF00u);
    ctx->pc = 0x40CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CEF8u;
    // 0x40cefc: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CDD8u, 0x40CEF8u, 0x40CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CF00u;
label_40cf00:
    // 0x40cf00: 0xc051032  jal         func_1440C8
    ctx->pc = 0x40CF00u;
    SET_GPR_U32(ctx, 31, 0x40CF08u);
    ctx->pc = 0x40CF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CF00u;
    // 0x40cf04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1440C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440C8u, 0x40CF00u, 0x40CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CF08u;
label_40cf08:
    // 0x40cf08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40cf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40cf0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40cf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40cf10: 0x3e00008  jr          $ra
    ctx->pc = 0x40CF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CF10u;
        // 0x40cf14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CF18u;
}

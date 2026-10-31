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

// Function: sub_0044CA18
// Address: 0x44ca18 - 0x44caa8
void sub_0044CA18_0x44ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044CA18_0x44ca18");
#endif

    switch (ctx->pc) {
        case 0x44ca30u: goto label_44ca30;
        case 0x44ca3cu: goto label_44ca3c;
        case 0x44ca4cu: goto label_44ca4c;
        case 0x44ca58u: goto label_44ca58;
        case 0x44ca64u: goto label_44ca64;
        case 0x44ca74u: goto label_44ca74;
        case 0x44ca84u: goto label_44ca84;
        case 0x44ca90u: goto label_44ca90;
        default: break;
    }

    ctx->pc = 0x44ca18u;

    // 0x44ca18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ca18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44ca1c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x44ca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44ca20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44ca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44ca24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44ca28: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CA28u;
    SET_GPR_U32(ctx, 31, 0x44CA30u);
    ctx->pc = 0x44CA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CA28u;
    // 0x44ca2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CA28u, 0x44CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CA30u;
label_44ca30:
    // 0x44ca30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44ca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ca34: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CA34u;
    SET_GPR_U32(ctx, 31, 0x44CA3Cu);
    ctx->pc = 0x44CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CA34u;
    // 0x44ca38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CA34u, 0x44CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CA3Cu;
label_44ca3c:
    // 0x44ca3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44CA3Cu;
    {
        const bool branch_taken_0x44ca3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CA3Cu;
        // 0x44ca40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ca3c) {
            ctx->pc = 0x44CA68u;
            goto label_44ca68;
        }
    }
    ctx->pc = 0x44CA44u;
    // 0x44ca44: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CA44u;
    SET_GPR_U32(ctx, 31, 0x44CA4Cu);
    ctx->pc = 0x44CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CA44u;
    // 0x44ca48: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CA44u, 0x44CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CA4Cu;
label_44ca4c:
    // 0x44ca4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44ca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ca50: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CA50u;
    SET_GPR_U32(ctx, 31, 0x44CA58u);
    ctx->pc = 0x44CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CA50u;
    // 0x44ca54: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CA50u, 0x44CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CA58u;
label_44ca58:
    // 0x44ca58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44ca58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ca5c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CA5Cu;
    SET_GPR_U32(ctx, 31, 0x44CA64u);
    ctx->pc = 0x44CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CA5Cu;
    // 0x44ca60: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CA5Cu, 0x44CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CA64u;
label_44ca64:
    // 0x44ca64: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x44ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_44ca68:
    // 0x44ca68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44ca68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ca6c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CA6Cu;
    SET_GPR_U32(ctx, 31, 0x44CA74u);
    ctx->pc = 0x44CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CA6Cu;
    // 0x44ca70: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CA6Cu, 0x44CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CA74u;
label_44ca74:
    // 0x44ca74: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x44ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x44ca78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44ca78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ca7c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CA7Cu;
    SET_GPR_U32(ctx, 31, 0x44CA84u);
    ctx->pc = 0x44CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CA7Cu;
    // 0x44ca80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CA7Cu, 0x44CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CA84u;
label_44ca84:
    // 0x44ca84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44ca84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ca88: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CA88u;
    SET_GPR_U32(ctx, 31, 0x44CA90u);
    ctx->pc = 0x44CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CA88u;
    // 0x44ca8c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CA88u, 0x44CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CA90u;
label_44ca90:
    // 0x44ca90: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x44ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x44ca94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44ca94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44ca98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44ca98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44ca9c: 0x3e00008  jr          $ra
    ctx->pc = 0x44CA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CA9Cu;
        // 0x44caa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44CAA4u;
    // 0x44caa4: 0x0  nop
    ctx->pc = 0x44caa4u;
    // NOP
    ctx->pc = 0x44caa8u;
}

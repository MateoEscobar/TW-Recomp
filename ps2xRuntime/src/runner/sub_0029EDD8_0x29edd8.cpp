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

// Function: sub_0029EDD8
// Address: 0x29edd8 - 0x29ee30
void sub_0029EDD8_0x29edd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EDD8_0x29edd8");
#endif

    switch (ctx->pc) {
        case 0x29edd8u: goto label_29edd8;
        case 0x29eddcu: goto label_29eddc;
        case 0x29ede0u: goto label_29ede0;
        case 0x29ede4u: goto label_29ede4;
        case 0x29ede8u: goto label_29ede8;
        case 0x29edecu: goto label_29edec;
        case 0x29edf0u: goto label_29edf0;
        case 0x29edf4u: goto label_29edf4;
        case 0x29edf8u: goto label_29edf8;
        case 0x29edfcu: goto label_29edfc;
        case 0x29ee00u: goto label_29ee00;
        case 0x29ee04u: goto label_29ee04;
        case 0x29ee08u: goto label_29ee08;
        case 0x29ee0cu: goto label_29ee0c;
        case 0x29ee10u: goto label_29ee10;
        case 0x29ee14u: goto label_29ee14;
        case 0x29ee18u: goto label_29ee18;
        case 0x29ee1cu: goto label_29ee1c;
        case 0x29ee20u: goto label_29ee20;
        case 0x29ee24u: goto label_29ee24;
        case 0x29ee28u: goto label_29ee28;
        case 0x29ee2cu: goto label_29ee2c;
        default: break;
    }

    ctx->pc = 0x29edd8u;

label_29edd8:
    // 0x29edd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29edd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29eddc:
    // 0x29eddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ede0:
    // 0x29ede0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29ede0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_29ede4:
    // 0x29ede4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29ede8:
    // 0x29ede8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ede8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29edec:
    // 0x29edec: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x29edecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_29edf0:
    // 0x29edf0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_29edf4:
    if (ctx->pc == 0x29EDF4u) {
        ctx->pc = 0x29EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDF0u;
        // 0x29edf4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDF8u;
        goto label_29edf8;
    }
    ctx->pc = 0x29EDF0u;
    {
        const bool branch_taken_0x29edf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDF0u;
        // 0x29edf4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29edf0) {
            ctx->pc = 0x29EE0Cu;
            goto label_29ee0c;
        }
    }
    ctx->pc = 0x29EDF8u;
label_29edf8:
    // 0x29edf8: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x29edf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_29edfc:
    // 0x29edfc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x29edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_29ee00:
    // 0x29ee00: 0x60f809  jalr        $v1
label_29ee04:
    if (ctx->pc == 0x29EE04u) {
        ctx->pc = 0x29EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE00u;
        // 0x29ee04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE08u;
        goto label_29ee08;
    }
    ctx->pc = 0x29EE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29EE08u);
        ctx->pc = 0x29EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE00u;
        // 0x29ee04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EE00u, 0x29EE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EE08u;
label_29ee08:
    // 0x29ee08: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29ee0c:
    // 0x29ee0c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x29ee0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_29ee10:
    // 0x29ee10: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x29ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_29ee14:
    // 0x29ee14: 0x60f809  jalr        $v1
label_29ee18:
    if (ctx->pc == 0x29EE18u) {
        ctx->pc = 0x29EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE14u;
        // 0x29ee18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE1Cu;
        goto label_29ee1c;
    }
    ctx->pc = 0x29EE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29EE1Cu);
        ctx->pc = 0x29EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE14u;
        // 0x29ee18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EE14u, 0x29EE1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EE1Cu;
label_29ee1c:
    // 0x29ee1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29ee1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29ee20:
    // 0x29ee20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ee20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ee24:
    // 0x29ee24: 0x3e00008  jr          $ra
label_29ee28:
    if (ctx->pc == 0x29EE28u) {
        ctx->pc = 0x29EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE24u;
        // 0x29ee28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE2Cu;
        goto label_29ee2c;
    }
    ctx->pc = 0x29EE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE24u;
        // 0x29ee28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EE2Cu;
label_29ee2c:
    // 0x29ee2c: 0x0  nop
    ctx->pc = 0x29ee2cu;
    // NOP
    ctx->pc = 0x29ee30u;
}

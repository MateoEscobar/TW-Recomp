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

// Function: sub_0019BE28
// Address: 0x19be28 - 0x19be98
void sub_0019BE28_0x19be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BE28_0x19be28");
#endif

    switch (ctx->pc) {
        case 0x19be28u: goto label_19be28;
        case 0x19be2cu: goto label_19be2c;
        case 0x19be30u: goto label_19be30;
        case 0x19be34u: goto label_19be34;
        case 0x19be38u: goto label_19be38;
        case 0x19be3cu: goto label_19be3c;
        case 0x19be40u: goto label_19be40;
        case 0x19be44u: goto label_19be44;
        case 0x19be48u: goto label_19be48;
        case 0x19be4cu: goto label_19be4c;
        case 0x19be50u: goto label_19be50;
        case 0x19be54u: goto label_19be54;
        case 0x19be58u: goto label_19be58;
        case 0x19be5cu: goto label_19be5c;
        case 0x19be60u: goto label_19be60;
        case 0x19be64u: goto label_19be64;
        case 0x19be68u: goto label_19be68;
        case 0x19be6cu: goto label_19be6c;
        case 0x19be70u: goto label_19be70;
        case 0x19be74u: goto label_19be74;
        case 0x19be78u: goto label_19be78;
        case 0x19be7cu: goto label_19be7c;
        case 0x19be80u: goto label_19be80;
        case 0x19be84u: goto label_19be84;
        case 0x19be88u: goto label_19be88;
        case 0x19be8cu: goto label_19be8c;
        case 0x19be90u: goto label_19be90;
        case 0x19be94u: goto label_19be94;
        default: break;
    }

    ctx->pc = 0x19be28u;

label_19be28:
    // 0x19be28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19be28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19be2c:
    // 0x19be2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19be2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19be30:
    // 0x19be30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19be30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_19be34:
    // 0x19be34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19be34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19be38:
    // 0x19be38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19be38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19be3c:
    // 0x19be3c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x19be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_19be40:
    // 0x19be40: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x19be40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_19be44:
    // 0x19be44: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x19be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_19be48:
    // 0x19be48: 0x5202000e  beql        $s0, $v0, . + 4 + (0xE << 2)
label_19be4c:
    if (ctx->pc == 0x19BE4Cu) {
        ctx->pc = 0x19BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE48u;
        // 0x19be4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE50u;
        goto label_19be50;
    }
    ctx->pc = 0x19BE48u;
    {
        const bool branch_taken_0x19be48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19be48) {
            ctx->pc = 0x19BE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BE48u;
            // 0x19be4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BE84u;
            goto label_19be84;
        }
    }
    ctx->pc = 0x19BE50u;
label_19be50:
    // 0x19be50: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x19be50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19be54:
    // 0x19be54: 0x0  nop
    ctx->pc = 0x19be54u;
    // NOP
label_19be58:
    // 0x19be58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19be58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19be5c:
    // 0x19be5c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19be5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_19be60:
    // 0x19be60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19be64:
    // 0x19be64: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x19be64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_19be68:
    // 0x19be68: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x19be68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_19be6c:
    // 0x19be6c: 0x60f809  jalr        $v1
label_19be70:
    if (ctx->pc == 0x19BE70u) {
        ctx->pc = 0x19BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE6Cu;
        // 0x19be70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE74u;
        goto label_19be74;
    }
    ctx->pc = 0x19BE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19BE74u);
        ctx->pc = 0x19BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE6Cu;
        // 0x19be70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BE6Cu, 0x19BE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BE74u;
label_19be74:
    // 0x19be74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x19be74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_19be78:
    // 0x19be78: 0x5602fff7  bnel        $s0, $v0, . + 4 + (-0x9 << 2)
label_19be7c:
    if (ctx->pc == 0x19BE7Cu) {
        ctx->pc = 0x19BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE78u;
        // 0x19be7c: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE80u;
        goto label_19be80;
    }
    ctx->pc = 0x19BE78u;
    {
        const bool branch_taken_0x19be78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x19be78) {
            ctx->pc = 0x19BE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BE78u;
            // 0x19be7c: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19be58;
        }
    }
    ctx->pc = 0x19BE80u;
label_19be80:
    // 0x19be80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19be80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19be84:
    // 0x19be84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19be84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19be88:
    // 0x19be88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19be88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19be8c:
    // 0x19be8c: 0x3e00008  jr          $ra
label_19be90:
    if (ctx->pc == 0x19BE90u) {
        ctx->pc = 0x19BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE8Cu;
        // 0x19be90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE94u;
        goto label_19be94;
    }
    ctx->pc = 0x19BE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE8Cu;
        // 0x19be90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BE94u;
label_19be94:
    // 0x19be94: 0x0  nop
    ctx->pc = 0x19be94u;
    // NOP
    ctx->pc = 0x19be98u;
}

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

// Function: sub_00390E20
// Address: 0x390e20 - 0x390e88
void sub_00390E20_0x390e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390E20_0x390e20");
#endif

    switch (ctx->pc) {
        case 0x390e20u: goto label_390e20;
        case 0x390e24u: goto label_390e24;
        case 0x390e28u: goto label_390e28;
        case 0x390e2cu: goto label_390e2c;
        case 0x390e30u: goto label_390e30;
        case 0x390e34u: goto label_390e34;
        case 0x390e38u: goto label_390e38;
        case 0x390e3cu: goto label_390e3c;
        case 0x390e40u: goto label_390e40;
        case 0x390e44u: goto label_390e44;
        case 0x390e48u: goto label_390e48;
        case 0x390e4cu: goto label_390e4c;
        case 0x390e50u: goto label_390e50;
        case 0x390e54u: goto label_390e54;
        case 0x390e58u: goto label_390e58;
        case 0x390e5cu: goto label_390e5c;
        case 0x390e60u: goto label_390e60;
        case 0x390e64u: goto label_390e64;
        case 0x390e68u: goto label_390e68;
        case 0x390e6cu: goto label_390e6c;
        case 0x390e70u: goto label_390e70;
        case 0x390e74u: goto label_390e74;
        case 0x390e78u: goto label_390e78;
        case 0x390e7cu: goto label_390e7c;
        case 0x390e80u: goto label_390e80;
        case 0x390e84u: goto label_390e84;
        default: break;
    }

    ctx->pc = 0x390e20u;

label_390e20:
    // 0x390e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x390e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_390e24:
    // 0x390e24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x390e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_390e28:
    // 0x390e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x390e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_390e2c:
    // 0x390e2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x390e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390e30:
    // 0x390e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_390e34:
    // 0x390e34: 0x10000006  b           . + 4 + (0x6 << 2)
label_390e38:
    if (ctx->pc == 0x390E38u) {
        ctx->pc = 0x390E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E34u;
        // 0x390e38: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390E3Cu;
        goto label_390e3c;
    }
    ctx->pc = 0x390E34u;
    {
        const bool branch_taken_0x390e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E34u;
        // 0x390e38: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e34) {
            ctx->pc = 0x390E50u;
            goto label_390e50;
        }
    }
    ctx->pc = 0x390E3Cu;
label_390e3c:
    // 0x390e3c: 0x0  nop
    ctx->pc = 0x390e3cu;
    // NOP
label_390e40:
    // 0x390e40: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x390e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_390e44:
    // 0x390e44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x390e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_390e48:
    // 0x390e48: 0xc0e41ae  jal         func_3906B8
label_390e4c:
    if (ctx->pc == 0x390E4Cu) {
        ctx->pc = 0x390E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E48u;
        // 0x390e4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390E50u;
        goto label_390e50;
    }
    ctx->pc = 0x390E48u;
    SET_GPR_U32(ctx, 31, 0x390E50u);
    ctx->pc = 0x390E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E48u;
    // 0x390e4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3906B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3906B8u, 0x390E48u, 0x390E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E50u;
label_390e50:
    // 0x390e50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x390e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_390e54:
    // 0x390e54: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x390e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_390e58:
    // 0x390e58: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x390e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_390e5c:
    // 0x390e5c: 0x40f809  jalr        $v0
label_390e60:
    if (ctx->pc == 0x390E60u) {
        ctx->pc = 0x390E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E5Cu;
        // 0x390e60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390E64u;
        goto label_390e64;
    }
    ctx->pc = 0x390E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390E64u);
        ctx->pc = 0x390E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E5Cu;
        // 0x390e60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390E5Cu, 0x390E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390E64u;
label_390e64:
    // 0x390e64: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x390e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_390e68:
    // 0x390e68: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x390e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_390e6c:
    // 0x390e6c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_390e70:
    if (ctx->pc == 0x390E70u) {
        ctx->pc = 0x390E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E6Cu;
        // 0x390e70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390E74u;
        goto label_390e74;
    }
    ctx->pc = 0x390E6Cu;
    {
        const bool branch_taken_0x390e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E6Cu;
        // 0x390e70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e6c) {
            ctx->pc = 0x390E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390e40;
        }
    }
    ctx->pc = 0x390E74u;
label_390e74:
    // 0x390e74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x390e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_390e78:
    // 0x390e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x390e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_390e7c:
    // 0x390e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390e80:
    // 0x390e80: 0x3e00008  jr          $ra
label_390e84:
    if (ctx->pc == 0x390E84u) {
        ctx->pc = 0x390E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E80u;
        // 0x390e84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390E88u;
        goto label_fallthrough_0x390e80;
    }
    ctx->pc = 0x390E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E80u;
        // 0x390e84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x390e80:
    ctx->pc = 0x390E88u;
}

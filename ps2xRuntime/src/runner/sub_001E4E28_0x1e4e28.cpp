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

// Function: sub_001E4E28
// Address: 0x1e4e28 - 0x1e4ea8
void sub_001E4E28_0x1e4e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4E28_0x1e4e28");
#endif

    switch (ctx->pc) {
        case 0x1e4e28u: goto label_1e4e28;
        case 0x1e4e2cu: goto label_1e4e2c;
        case 0x1e4e30u: goto label_1e4e30;
        case 0x1e4e34u: goto label_1e4e34;
        case 0x1e4e38u: goto label_1e4e38;
        case 0x1e4e3cu: goto label_1e4e3c;
        case 0x1e4e40u: goto label_1e4e40;
        case 0x1e4e44u: goto label_1e4e44;
        case 0x1e4e48u: goto label_1e4e48;
        case 0x1e4e4cu: goto label_1e4e4c;
        case 0x1e4e50u: goto label_1e4e50;
        case 0x1e4e54u: goto label_1e4e54;
        case 0x1e4e58u: goto label_1e4e58;
        case 0x1e4e5cu: goto label_1e4e5c;
        case 0x1e4e60u: goto label_1e4e60;
        case 0x1e4e64u: goto label_1e4e64;
        case 0x1e4e68u: goto label_1e4e68;
        case 0x1e4e6cu: goto label_1e4e6c;
        case 0x1e4e70u: goto label_1e4e70;
        case 0x1e4e74u: goto label_1e4e74;
        case 0x1e4e78u: goto label_1e4e78;
        case 0x1e4e7cu: goto label_1e4e7c;
        case 0x1e4e80u: goto label_1e4e80;
        case 0x1e4e84u: goto label_1e4e84;
        case 0x1e4e88u: goto label_1e4e88;
        case 0x1e4e8cu: goto label_1e4e8c;
        case 0x1e4e90u: goto label_1e4e90;
        case 0x1e4e94u: goto label_1e4e94;
        case 0x1e4e98u: goto label_1e4e98;
        case 0x1e4e9cu: goto label_1e4e9c;
        case 0x1e4ea0u: goto label_1e4ea0;
        case 0x1e4ea4u: goto label_1e4ea4;
        default: break;
    }

    ctx->pc = 0x1e4e28u;

label_1e4e28:
    // 0x1e4e28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e4e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e4e2c:
    // 0x1e4e2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e4e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e4e30:
    // 0x1e4e30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e4e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e4e34:
    // 0x1e4e34: 0x24900940  addiu       $s0, $a0, 0x940
    ctx->pc = 0x1e4e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2368));
label_1e4e38:
    // 0x1e4e38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e4e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1e4e3c:
    // 0x1e4e3c: 0x249107a0  addiu       $s1, $a0, 0x7A0
    ctx->pc = 0x1e4e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1952));
label_1e4e40:
    // 0x1e4e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4e44:
    // 0x1e4e44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e4e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e48:
    // 0x1e4e48: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1e4e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_1e4e4c:
    // 0x1e4e4c: 0x0  nop
    ctx->pc = 0x1e4e4cu;
    // NOP
label_1e4e50:
    // 0x1e4e50: 0xc073462  jal         func_1CD188
label_1e4e54:
    if (ctx->pc == 0x1E4E54u) {
        ctx->pc = 0x1E4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E50u;
        // 0x1e4e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E58u;
        goto label_1e4e58;
    }
    ctx->pc = 0x1E4E50u;
    SET_GPR_U32(ctx, 31, 0x1E4E58u);
    ctx->pc = 0x1E4E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E50u;
    // 0x1e4e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1E4E50u, 0x1E4E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E58u;
label_1e4e58:
    // 0x1e4e58: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1e4e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e4e5c:
    // 0x1e4e5c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1e4e60:
    if (ctx->pc == 0x1E4E60u) {
        ctx->pc = 0x1E4E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E5Cu;
        // 0x1e4e60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E64u;
        goto label_1e4e64;
    }
    ctx->pc = 0x1E4E5Cu;
    {
        const bool branch_taken_0x1e4e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e5c) {
            ctx->pc = 0x1E4E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4E5Cu;
            // 0x1e4e60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4E7Cu;
            goto label_1e4e7c;
        }
    }
    ctx->pc = 0x1E4E64u;
label_1e4e64:
    // 0x1e4e64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e4e68:
    // 0x1e4e68: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1e4e68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1e4e6c:
    // 0x1e4e6c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1e4e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1e4e70:
    // 0x1e4e70: 0x60f809  jalr        $v1
label_1e4e74:
    if (ctx->pc == 0x1E4E74u) {
        ctx->pc = 0x1E4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E70u;
        // 0x1e4e74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E78u;
        goto label_1e4e78;
    }
    ctx->pc = 0x1E4E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E4E78u);
        ctx->pc = 0x1E4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E70u;
        // 0x1e4e74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4E70u, 0x1E4E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4E78u;
label_1e4e78:
    // 0x1e4e78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e4e78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e4e7c:
    // 0x1e4e7c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e4e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1e4e80:
    // 0x1e4e80: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1e4e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e4e84:
    // 0x1e4e84: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1e4e88:
    if (ctx->pc == 0x1E4E88u) {
        ctx->pc = 0x1E4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E84u;
        // 0x1e4e88: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E8Cu;
        goto label_1e4e8c;
    }
    ctx->pc = 0x1E4E84u;
    {
        const bool branch_taken_0x1e4e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E84u;
        // 0x1e4e88: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e84) {
            ctx->pc = 0x1E4E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4e50;
        }
    }
    ctx->pc = 0x1E4E8Cu;
label_1e4e8c:
    // 0x1e4e8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e4e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4e90:
    // 0x1e4e90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e4e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4e94:
    // 0x1e4e94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e4e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4e98:
    // 0x1e4e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4e9c:
    // 0x1e4e9c: 0x3e00008  jr          $ra
label_1e4ea0:
    if (ctx->pc == 0x1E4EA0u) {
        ctx->pc = 0x1E4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E9Cu;
        // 0x1e4ea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EA4u;
        goto label_1e4ea4;
    }
    ctx->pc = 0x1E4E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E9Cu;
        // 0x1e4ea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4EA4u;
label_1e4ea4:
    // 0x1e4ea4: 0x0  nop
    ctx->pc = 0x1e4ea4u;
    // NOP
    ctx->pc = 0x1e4ea8u;
}

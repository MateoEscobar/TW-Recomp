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

// Function: sub_002E7E68
// Address: 0x2e7e68 - 0x2e7f50
void sub_002E7E68_0x2e7e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7E68_0x2e7e68");
#endif

    switch (ctx->pc) {
        case 0x2e7ea8u: goto label_2e7ea8;
        case 0x2e7f0cu: goto label_2e7f0c;
        case 0x2e7f1cu: goto label_2e7f1c;
        default: break;
    }

    ctx->pc = 0x2e7e68u;

    // 0x2e7e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e7e6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7e70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e7e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e7e74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e7e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e7e7c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2e7e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e7e80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e7e84: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e7e84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7e88: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2e7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2e7e8c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2e7e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2e7e90: 0x14440016  bne         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E7E90u;
    {
        const bool branch_taken_0x2e7e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E90u;
        // 0x2e7e94: 0x38420012  xori        $v0, $v0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e90) {
            ctx->pc = 0x2E7EECu;
            goto label_2e7eec;
        }
    }
    ctx->pc = 0x2E7E98u;
    // 0x2e7e98: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e7e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2e7e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ea0: 0xc089998  jal         func_226660
    ctx->pc = 0x2E7EA0u;
    SET_GPR_U32(ctx, 31, 0x2E7EA8u);
    ctx->pc = 0x2E7EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7EA0u;
    // 0x2e7ea4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E7EA0u, 0x2E7EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7EA8u;
label_2e7ea8:
    // 0x2e7ea8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2E7EA8u;
    {
        const bool branch_taken_0x2e7ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7ea8) {
            ctx->pc = 0x2E7EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7EA8u;
            // 0x2e7eac: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7EE4u;
            goto label_2e7ee4;
        }
    }
    ctx->pc = 0x2E7EB0u;
    // 0x2e7eb0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2e7eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2e7eb4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2e7eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2e7eb8: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x2e7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2e7ebc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7EBCu;
    {
        const bool branch_taken_0x2e7ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EBCu;
        // 0x2e7ec0: 0x8c420048  lw          $v0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ebc) {
            ctx->pc = 0x2E7ED0u;
            goto label_2e7ed0;
        }
    }
    ctx->pc = 0x2E7EC4u;
    // 0x2e7ec4: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2e7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2e7ec8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E7EC8u;
    {
        const bool branch_taken_0x2e7ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EC8u;
        // 0x2e7ecc: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ec8) {
            ctx->pc = 0x2E7F34u;
            goto label_2e7f34;
        }
    }
    ctx->pc = 0x2E7ED0u;
label_2e7ed0:
    // 0x2e7ed0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2e7ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e7ed4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7ED4u;
    {
        const bool branch_taken_0x2e7ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7ED4u;
        // 0x2e7ed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ed4) {
            ctx->pc = 0x2E7F34u;
            goto label_2e7f34;
        }
    }
    ctx->pc = 0x2E7EDCu;
    // 0x2e7edc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7EDCu;
    {
        const bool branch_taken_0x2e7edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EDCu;
        // 0x2e7ee0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7edc) {
            ctx->pc = 0x2E7F3Cu;
            goto label_2e7f3c;
        }
    }
    ctx->pc = 0x2E7EE4u;
label_2e7ee4:
    // 0x2e7ee4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2e7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2e7ee8: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x2e7ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
label_2e7eec:
    // 0x2e7eec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E7EECu;
    {
        const bool branch_taken_0x2e7eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EECu;
        // 0x2e7ef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7eec) {
            ctx->pc = 0x2E7F38u;
            goto label_2e7f38;
        }
    }
    ctx->pc = 0x2E7EF4u;
    // 0x2e7ef4: 0x3405fc04  ori         $a1, $zero, 0xFC04
    ctx->pc = 0x2e7ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64516);
    // 0x2e7ef8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2e7ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2e7efc: 0x34a5ba00  ori         $a1, $a1, 0xBA00
    ctx->pc = 0x2e7efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47616);
    // 0x2e7f00: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x2e7f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x2e7f04: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2E7F04u;
    SET_GPR_U32(ctx, 31, 0x2E7F0Cu);
    ctx->pc = 0x2E7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F04u;
    // 0x2e7f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2E7F04u, 0x2E7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F0Cu;
label_2e7f0c:
    // 0x2e7f0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E7F0Cu;
    {
        const bool branch_taken_0x2e7f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F0Cu;
        // 0x2e7f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f0c) {
            ctx->pc = 0x2E7F38u;
            goto label_2e7f38;
        }
    }
    ctx->pc = 0x2E7F14u;
    // 0x2e7f14: 0xc089fd0  jal         func_227F40
    ctx->pc = 0x2E7F14u;
    SET_GPR_U32(ctx, 31, 0x2E7F1Cu);
    ctx->pc = 0x2E7F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F14u;
    // 0x2e7f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F40u, 0x2E7F14u, 0x2E7F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F1Cu;
label_2e7f1c:
    // 0x2e7f1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7F1Cu;
    {
        const bool branch_taken_0x2e7f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F1Cu;
        // 0x2e7f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f1c) {
            ctx->pc = 0x2E7F38u;
            goto label_2e7f38;
        }
    }
    ctx->pc = 0x2E7F24u;
    // 0x2e7f24: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2e7f24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2e7f28: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2e7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2e7f2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e7f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e7f30: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2e7f30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2e7f34:
    // 0x2e7f34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e7f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7f38:
    // 0x2e7f38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e7f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e7f3c:
    // 0x2e7f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7f44: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F44u;
        // 0x2e7f48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7F4Cu;
    // 0x2e7f4c: 0x0  nop
    ctx->pc = 0x2e7f4cu;
    // NOP
    ctx->pc = 0x2e7f50u;
}

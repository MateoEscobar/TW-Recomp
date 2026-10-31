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

// Function: sub_00465E78
// Address: 0x465e78 - 0x465f88
void sub_00465E78_0x465e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465E78_0x465e78");
#endif

    ctx->pc = 0x465e78u;

    // 0x465e78: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x465e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x465e7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x465e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x465e80: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x465e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x465e84: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x465e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x465e88: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x465e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x465e8c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x465e8cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x465e90: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x465e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x465e94: 0x1033821  addu        $a3, $t0, $v1
    ctx->pc = 0x465e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x465e98: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x465e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x465e9c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x465e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x465ea0: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x465ea0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x465ea4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x465EA4u;
    {
        const bool branch_taken_0x465ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x465EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465EA4u;
        // 0x465ea8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465ea4) {
            ctx->pc = 0x465EF0u;
            goto label_465ef0;
        }
    }
    ctx->pc = 0x465EACu;
    // 0x465eac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x465eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x465eb0: 0x2442e900  addiu       $v0, $v0, -0x1700
    ctx->pc = 0x465eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961408));
    // 0x465eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x465eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x465eb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x465eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x465ebc: 0x800008  jr          $a0
    ctx->pc = 0x465EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x465EC8u: goto label_465ec8;
            case 0x465ED0u: goto label_465ed0;
            case 0x465ED8u: goto label_465ed8;
            case 0x465EE0u: goto label_465ee0;
            case 0x465EE8u: goto label_465ee8;
            case 0x465EF0u: goto label_465ef0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465EBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x465EC4u;
    // 0x465ec4: 0x0  nop
    ctx->pc = 0x465ec4u;
    // NOP
label_465ec8:
    // 0x465ec8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x465EC8u;
    {
        const bool branch_taken_0x465ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465EC8u;
        // 0x465ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465ec8) {
            ctx->pc = 0x465EF4u;
            goto label_465ef4;
        }
    }
    ctx->pc = 0x465ED0u;
label_465ed0:
    // 0x465ed0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x465ED0u;
    {
        const bool branch_taken_0x465ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465ED0u;
        // 0x465ed4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465ed0) {
            ctx->pc = 0x465EF4u;
            goto label_465ef4;
        }
    }
    ctx->pc = 0x465ED8u;
label_465ed8:
    // 0x465ed8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x465ED8u;
    {
        const bool branch_taken_0x465ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465ED8u;
        // 0x465edc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465ed8) {
            ctx->pc = 0x465EF4u;
            goto label_465ef4;
        }
    }
    ctx->pc = 0x465EE0u;
label_465ee0:
    // 0x465ee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x465EE0u;
    {
        const bool branch_taken_0x465ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465EE0u;
        // 0x465ee4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465ee0) {
            ctx->pc = 0x465EF4u;
            goto label_465ef4;
        }
    }
    ctx->pc = 0x465EE8u;
label_465ee8:
    // 0x465ee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x465EE8u;
    {
        const bool branch_taken_0x465ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465EE8u;
        // 0x465eec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465ee8) {
            ctx->pc = 0x465EF4u;
            goto label_465ef4;
        }
    }
    ctx->pc = 0x465EF0u;
label_465ef0:
    // 0x465ef0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x465ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_465ef4:
    // 0x465ef4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x465ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x465ef8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x465ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x465efc: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x465efcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x465f00: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x465F00u;
    {
        const bool branch_taken_0x465f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x465F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465F00u;
        // 0x465f04: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465f00) {
            ctx->pc = 0x465F48u;
            goto label_465f48;
        }
    }
    ctx->pc = 0x465F08u;
    // 0x465f08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x465f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x465f0c: 0x2442e920  addiu       $v0, $v0, -0x16E0
    ctx->pc = 0x465f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961440));
    // 0x465f10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x465f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x465f14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x465f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x465f18: 0x800008  jr          $a0
    ctx->pc = 0x465F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x465F20u: goto label_465f20;
            case 0x465F28u: goto label_465f28;
            case 0x465F30u: goto label_465f30;
            case 0x465F38u: goto label_465f38;
            case 0x465F40u: goto label_465f40;
            case 0x465F48u: goto label_465f48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465F18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x465F20u;
label_465f20:
    // 0x465f20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x465F20u;
    {
        const bool branch_taken_0x465f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465F20u;
        // 0x465f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465f20) {
            ctx->pc = 0x465F4Cu;
            goto label_465f4c;
        }
    }
    ctx->pc = 0x465F28u;
label_465f28:
    // 0x465f28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x465F28u;
    {
        const bool branch_taken_0x465f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465F28u;
        // 0x465f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465f28) {
            ctx->pc = 0x465F4Cu;
            goto label_465f4c;
        }
    }
    ctx->pc = 0x465F30u;
label_465f30:
    // 0x465f30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x465F30u;
    {
        const bool branch_taken_0x465f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465F30u;
        // 0x465f34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465f30) {
            ctx->pc = 0x465F4Cu;
            goto label_465f4c;
        }
    }
    ctx->pc = 0x465F38u;
label_465f38:
    // 0x465f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x465F38u;
    {
        const bool branch_taken_0x465f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465F38u;
        // 0x465f3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465f38) {
            ctx->pc = 0x465F4Cu;
            goto label_465f4c;
        }
    }
    ctx->pc = 0x465F40u;
label_465f40:
    // 0x465f40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x465F40u;
    {
        const bool branch_taken_0x465f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465F40u;
        // 0x465f44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465f40) {
            ctx->pc = 0x465F4Cu;
            goto label_465f4c;
        }
    }
    ctx->pc = 0x465F48u;
label_465f48:
    // 0x465f48: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x465f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_465f4c:
    // 0x465f4c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x465f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x465f50: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x465f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x465f54: 0x433818  mult        $a3, $v0, $v1
    ctx->pc = 0x465f54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x465f58: 0x2484e620  addiu       $a0, $a0, -0x19E0
    ctx->pc = 0x465f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960672));
    // 0x465f5c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x465f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x465f60: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x465f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x465f64: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x465f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x465f68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x465f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x465f6c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x465f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x465f70: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x465f70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x465f74: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x465f74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x465f78: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x465f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x465f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x465F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465F7Cu;
        // 0x465f80: 0xfca20028  sd          $v0, 0x28($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465F84u;
    // 0x465f84: 0x0  nop
    ctx->pc = 0x465f84u;
    // NOP
    ctx->pc = 0x465f88u;
}

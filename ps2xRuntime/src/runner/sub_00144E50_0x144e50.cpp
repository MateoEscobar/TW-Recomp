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

// Function: sub_00144E50
// Address: 0x144e50 - 0x144ef8
void sub_00144E50_0x144e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144E50_0x144e50");
#endif

    switch (ctx->pc) {
        case 0x144e78u: goto label_144e78;
        case 0x144ec0u: goto label_144ec0;
        default: break;
    }

    ctx->pc = 0x144e50u;

    // 0x144e50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x144e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x144e54: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x144e54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e58: 0x8c42b708  lw          $v0, -0x48F8($v0)
    ctx->pc = 0x144e58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B708u));
    // 0x144e5c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x144e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e60: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x144E60u;
    {
        const bool branch_taken_0x144e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E60u;
        // 0x144e64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e60) {
            ctx->pc = 0x144EA4u;
            goto label_144ea4;
        }
    }
    ctx->pc = 0x144E68u;
    // 0x144e68: 0x8d0b002c  lw          $t3, 0x2C($t0)
    ctx->pc = 0x144e68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x144e6c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x144e6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e70: 0x2509001c  addiu       $t1, $t0, 0x1C
    ctx->pc = 0x144e70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x144e74: 0x0  nop
    ctx->pc = 0x144e74u;
    // NOP
label_144e78:
    // 0x144e78: 0x1661023  subu        $v0, $t3, $a2
    ctx->pc = 0x144e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x144e7c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x144e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x144e80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x144e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x144e84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144e88: 0xca202b  sltu        $a0, $a2, $t2
    ctx->pc = 0x144e88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x144e8c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x144e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x144e90: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144e90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144e94: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x144e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x144e98: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x144e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x144e9c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x144E9Cu;
    {
        const bool branch_taken_0x144e9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x144EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E9Cu;
        // 0x144ea0: 0x653824  and         $a3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e9c) {
            ctx->pc = 0x144E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144e78;
        }
    }
    ctx->pc = 0x144EA4u;
label_144ea4:
    // 0x144ea4: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x144EA4u;
    {
        const bool branch_taken_0x144ea4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x144EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EA4u;
        // 0x144ea8: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ea4) {
            ctx->pc = 0x144EF0u;
            goto label_144ef0;
        }
    }
    ctx->pc = 0x144EACu;
    // 0x144eac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x144EACu;
    {
        const bool branch_taken_0x144eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EACu;
        // 0x144eb0: 0x2504001c  addiu       $a0, $t0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144eac) {
            ctx->pc = 0x144EF0u;
            goto label_144ef0;
        }
    }
    ctx->pc = 0x144EB4u;
    // 0x144eb4: 0x8d07002c  lw          $a3, 0x2C($t0)
    ctx->pc = 0x144eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x144eb8: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x144eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x144ebc: 0x0  nop
    ctx->pc = 0x144ebcu;
    // NOP
label_144ec0:
    // 0x144ec0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x144ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x144ec4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144ec8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x144ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144ecc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144eccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144ed0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x144ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x144ed4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144ED4u;
    {
        const bool branch_taken_0x144ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144ED4u;
        // 0x144ed8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ed4) {
            ctx->pc = 0x144EE4u;
            goto label_144ee4;
        }
    }
    ctx->pc = 0x144EDCu;
    // 0x144edc: 0x3e00008  jr          $ra
    ctx->pc = 0x144EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EDCu;
        // 0x144ee0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144EE4u;
label_144ee4:
    // 0x144ee4: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x144ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x144ee8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x144EE8u;
    {
        const bool branch_taken_0x144ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EE8u;
        // 0x144eec: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ee8) {
            ctx->pc = 0x144EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144ec0;
        }
    }
    ctx->pc = 0x144EF0u;
label_144ef0:
    // 0x144ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x144EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EF0u;
        // 0x144ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144EF8u;
}

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

// Function: sub_0014FA38
// Address: 0x14fa38 - 0x14fac8
void sub_0014FA38_0x14fa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FA38_0x14fa38");
#endif

    switch (ctx->pc) {
        case 0x14fa48u: goto label_14fa48;
        default: break;
    }

    ctx->pc = 0x14fa38u;

    // 0x14fa38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14fa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa3c: 0x2ca20030  sltiu       $v0, $a1, 0x30
    ctx->pc = 0x14fa3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x14fa40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FA40u;
    {
        const bool branch_taken_0x14fa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA40u;
        // 0x14fa44: 0x28a20018  slti        $v0, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa40) {
            ctx->pc = 0x14FA50u;
            goto label_14fa50;
        }
    }
    ctx->pc = 0x14FA48u;
label_14fa48:
    // 0x14fa48: 0x3e00008  jr          $ra
    ctx->pc = 0x14FA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA48u;
        // 0x14fa4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FA50u;
label_14fa50:
    // 0x14fa50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14FA50u;
    {
        const bool branch_taken_0x14fa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA50u;
        // 0x14fa54: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa50) {
            ctx->pc = 0x14FA80u;
            goto label_14fa80;
        }
    }
    ctx->pc = 0x14FA58u;
    // 0x14fa58: 0x9c62c518  lwu         $v0, -0x3AE8($v1)
    ctx->pc = 0x14fa58u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294952216)));
    // 0x14fa5c: 0xa21017  dsrav       $v0, $v0, $a1
    ctx->pc = 0x14fa5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x14fa60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14fa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14fa64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x14fa64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x14fa68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14fa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14fa6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14fa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14fa70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14FA70u;
    {
        const bool branch_taken_0x14fa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA70u;
        // 0x14fa74: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa70) {
            ctx->pc = 0x14FA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fa48;
        }
    }
    ctx->pc = 0x14FA78u;
    // 0x14fa78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14FA78u;
    {
        const bool branch_taken_0x14fa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA78u;
        // 0x14fa7c: 0x2463c248  addiu       $v1, $v1, -0x3DB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa78) {
            ctx->pc = 0x14FAACu;
            goto label_14faac;
        }
    }
    ctx->pc = 0x14FA80u;
label_14fa80:
    // 0x14fa80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14fa84: 0x24a4ffe8  addiu       $a0, $a1, -0x18
    ctx->pc = 0x14fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
    // 0x14fa88: 0x9c43c51c  lwu         $v1, -0x3AE4($v0)
    ctx->pc = 0x14fa88u;
    SET_GPR_ZE32(ctx, 3, FAST_READ32(0x50C51Cu));
    // 0x14fa8c: 0x831817  dsrav       $v1, $v1, $a0
    ctx->pc = 0x14fa8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x14fa90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x14fa90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14fa94: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x14fa94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x14fa98: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fa98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fa9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x14fa9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14faa0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x14FAA0u;
    {
        const bool branch_taken_0x14faa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAA0u;
        // 0x14faa4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14faa0) {
            ctx->pc = 0x14FA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fa48;
        }
    }
    ctx->pc = 0x14FAA8u;
    // 0x14faa8: 0x2463c248  addiu       $v1, $v1, -0x3DB8
    ctx->pc = 0x14faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951496));
label_14faac:
    // 0x14faac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14fab0: 0x3e00008  jr          $ra
    ctx->pc = 0x14FAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAB0u;
        // 0x14fab4: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FAB8u;
    // 0x14fab8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14fab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14fabc: 0x0  nop
    ctx->pc = 0x14fabcu;
    // NOP
    // 0x14fac0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14fac4: 0x0  nop
    ctx->pc = 0x14fac4u;
    // NOP
    ctx->pc = 0x14fac8u;
}

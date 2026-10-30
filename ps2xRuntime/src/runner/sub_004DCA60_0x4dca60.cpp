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

// Function: sub_004DCA60
// Address: 0x4dca60 - 0x4dcaa0
void sub_004DCA60_0x4dca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCA60_0x4dca60");
#endif

    switch (ctx->pc) {
        case 0x4dca60u: goto label_4dca60;
        case 0x4dca64u: goto label_4dca64;
        case 0x4dca68u: goto label_4dca68;
        case 0x4dca6cu: goto label_4dca6c;
        case 0x4dca70u: goto label_4dca70;
        case 0x4dca74u: goto label_4dca74;
        case 0x4dca78u: goto label_4dca78;
        case 0x4dca7cu: goto label_4dca7c;
        case 0x4dca80u: goto label_4dca80;
        case 0x4dca84u: goto label_4dca84;
        case 0x4dca88u: goto label_4dca88;
        case 0x4dca8cu: goto label_4dca8c;
        case 0x4dca90u: goto label_4dca90;
        case 0x4dca94u: goto label_4dca94;
        case 0x4dca98u: goto label_4dca98;
        case 0x4dca9cu: goto label_4dca9c;
        default: break;
    }

    ctx->pc = 0x4dca60u;

label_4dca60:
    // 0x4dca60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dca64:
    // 0x4dca64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dca68:
    // 0x4dca68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dca68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dca6c:
    // 0x4dca6c: 0x84660040  lh          $a2, 0x40($v1)
    ctx->pc = 0x4dca6cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4dca70:
    // 0x4dca70: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4dca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4dca74:
    // 0x4dca74: 0x40f809  jalr        $v0
label_4dca78:
    if (ctx->pc == 0x4DCA78u) {
        ctx->pc = 0x4DCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCA74u;
        // 0x4dca78: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCA7Cu;
        goto label_4dca7c;
    }
    ctx->pc = 0x4DCA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DCA7Cu);
        ctx->pc = 0x4DCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCA74u;
        // 0x4dca78: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCA74u, 0x4DCA7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCA7Cu;
label_4dca7c:
    // 0x4dca7c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x4dca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_4dca80:
    // 0x4dca80: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x4dca80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_4dca84:
    // 0x4dca84: 0xc10acae  jal         func_42B2B8
label_4dca88:
    if (ctx->pc == 0x4DCA88u) {
        ctx->pc = 0x4DCA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCA84u;
        // 0x4dca88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCA8Cu;
        goto label_4dca8c;
    }
    ctx->pc = 0x4DCA84u;
    SET_GPR_U32(ctx, 31, 0x4DCA8Cu);
    ctx->pc = 0x4DCA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCA84u;
    // 0x4dca88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4DCA84u, 0x4DCA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCA8Cu;
label_4dca8c:
    // 0x4dca8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dca8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dca90:
    // 0x4dca90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4dca90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4dca94:
    // 0x4dca94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4dca94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4dca98:
    // 0x4dca98: 0x3e00008  jr          $ra
label_4dca9c:
    if (ctx->pc == 0x4DCA9Cu) {
        ctx->pc = 0x4DCA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCA98u;
        // 0x4dca9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCAA0u;
        goto label_fallthrough_0x4dca98;
    }
    ctx->pc = 0x4DCA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCA98u;
        // 0x4dca9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dca98:
    ctx->pc = 0x4DCAA0u;
}

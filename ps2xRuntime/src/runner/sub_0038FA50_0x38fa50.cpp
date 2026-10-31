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

// Function: sub_0038FA50
// Address: 0x38fa50 - 0x38fab8
void sub_0038FA50_0x38fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FA50_0x38fa50");
#endif

    switch (ctx->pc) {
        case 0x38fa50u: goto label_38fa50;
        case 0x38fa54u: goto label_38fa54;
        case 0x38fa58u: goto label_38fa58;
        case 0x38fa5cu: goto label_38fa5c;
        case 0x38fa60u: goto label_38fa60;
        case 0x38fa64u: goto label_38fa64;
        case 0x38fa68u: goto label_38fa68;
        case 0x38fa6cu: goto label_38fa6c;
        case 0x38fa70u: goto label_38fa70;
        case 0x38fa74u: goto label_38fa74;
        case 0x38fa78u: goto label_38fa78;
        case 0x38fa7cu: goto label_38fa7c;
        case 0x38fa80u: goto label_38fa80;
        case 0x38fa84u: goto label_38fa84;
        case 0x38fa88u: goto label_38fa88;
        case 0x38fa8cu: goto label_38fa8c;
        case 0x38fa90u: goto label_38fa90;
        case 0x38fa94u: goto label_38fa94;
        case 0x38fa98u: goto label_38fa98;
        case 0x38fa9cu: goto label_38fa9c;
        case 0x38faa0u: goto label_38faa0;
        case 0x38faa4u: goto label_38faa4;
        case 0x38faa8u: goto label_38faa8;
        case 0x38faacu: goto label_38faac;
        case 0x38fab0u: goto label_38fab0;
        case 0x38fab4u: goto label_38fab4;
        default: break;
    }

    ctx->pc = 0x38fa50u;

label_38fa50:
    // 0x38fa50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38fa54:
    // 0x38fa54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38fa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_38fa58:
    // 0x38fa58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38fa5c:
    // 0x38fa5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38fa5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fa60:
    // 0x38fa60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38fa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38fa64:
    // 0x38fa64: 0x10000006  b           . + 4 + (0x6 << 2)
label_38fa68:
    if (ctx->pc == 0x38FA68u) {
        ctx->pc = 0x38FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA64u;
        // 0x38fa68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FA6Cu;
        goto label_38fa6c;
    }
    ctx->pc = 0x38FA64u;
    {
        const bool branch_taken_0x38fa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA64u;
        // 0x38fa68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa64) {
            ctx->pc = 0x38FA80u;
            goto label_38fa80;
        }
    }
    ctx->pc = 0x38FA6Cu;
label_38fa6c:
    // 0x38fa6c: 0x0  nop
    ctx->pc = 0x38fa6cu;
    // NOP
label_38fa70:
    // 0x38fa70: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38fa74:
    // 0x38fa74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x38fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38fa78:
    // 0x38fa78: 0xc0e3bd8  jal         func_38EF60
label_38fa7c:
    if (ctx->pc == 0x38FA7Cu) {
        ctx->pc = 0x38FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA78u;
        // 0x38fa7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FA80u;
        goto label_38fa80;
    }
    ctx->pc = 0x38FA78u;
    SET_GPR_U32(ctx, 31, 0x38FA80u);
    ctx->pc = 0x38FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FA78u;
    // 0x38fa7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EF60u, 0x38FA78u, 0x38FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FA80u;
label_38fa80:
    // 0x38fa80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38fa84:
    // 0x38fa84: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x38fa84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_38fa88:
    // 0x38fa88: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38fa8c:
    // 0x38fa8c: 0x40f809  jalr        $v0
label_38fa90:
    if (ctx->pc == 0x38FA90u) {
        ctx->pc = 0x38FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA8Cu;
        // 0x38fa90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FA94u;
        goto label_38fa94;
    }
    ctx->pc = 0x38FA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38FA94u);
        ctx->pc = 0x38FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA8Cu;
        // 0x38fa90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FA8Cu, 0x38FA94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38FA94u;
label_38fa94:
    // 0x38fa94: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x38fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_38fa98:
    // 0x38fa98: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x38fa98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38fa9c:
    // 0x38fa9c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_38faa0:
    if (ctx->pc == 0x38FAA0u) {
        ctx->pc = 0x38FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA9Cu;
        // 0x38faa0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FAA4u;
        goto label_38faa4;
    }
    ctx->pc = 0x38FA9Cu;
    {
        const bool branch_taken_0x38fa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA9Cu;
        // 0x38faa0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa9c) {
            ctx->pc = 0x38FA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fa70;
        }
    }
    ctx->pc = 0x38FAA4u;
label_38faa4:
    // 0x38faa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38faa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38faa8:
    // 0x38faa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38faa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38faac:
    // 0x38faac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38faacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38fab0:
    // 0x38fab0: 0x3e00008  jr          $ra
label_38fab4:
    if (ctx->pc == 0x38FAB4u) {
        ctx->pc = 0x38FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FAB0u;
        // 0x38fab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FAB8u;
        goto label_fallthrough_0x38fab0;
    }
    ctx->pc = 0x38FAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FAB0u;
        // 0x38fab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38fab0:
    ctx->pc = 0x38FAB8u;
}

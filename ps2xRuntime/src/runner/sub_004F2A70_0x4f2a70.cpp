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

// Function: sub_004F2A70
// Address: 0x4f2a70 - 0x4f2ae0
void sub_004F2A70_0x4f2a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2A70_0x4f2a70");
#endif

    switch (ctx->pc) {
        case 0x4f2a70u: goto label_4f2a70;
        case 0x4f2a74u: goto label_4f2a74;
        case 0x4f2a78u: goto label_4f2a78;
        case 0x4f2a7cu: goto label_4f2a7c;
        case 0x4f2a80u: goto label_4f2a80;
        case 0x4f2a84u: goto label_4f2a84;
        case 0x4f2a88u: goto label_4f2a88;
        case 0x4f2a8cu: goto label_4f2a8c;
        case 0x4f2a90u: goto label_4f2a90;
        case 0x4f2a94u: goto label_4f2a94;
        case 0x4f2a98u: goto label_4f2a98;
        case 0x4f2a9cu: goto label_4f2a9c;
        case 0x4f2aa0u: goto label_4f2aa0;
        case 0x4f2aa4u: goto label_4f2aa4;
        case 0x4f2aa8u: goto label_4f2aa8;
        case 0x4f2aacu: goto label_4f2aac;
        case 0x4f2ab0u: goto label_4f2ab0;
        case 0x4f2ab4u: goto label_4f2ab4;
        case 0x4f2ab8u: goto label_4f2ab8;
        case 0x4f2abcu: goto label_4f2abc;
        case 0x4f2ac0u: goto label_4f2ac0;
        case 0x4f2ac4u: goto label_4f2ac4;
        case 0x4f2ac8u: goto label_4f2ac8;
        case 0x4f2accu: goto label_4f2acc;
        case 0x4f2ad0u: goto label_4f2ad0;
        case 0x4f2ad4u: goto label_4f2ad4;
        case 0x4f2ad8u: goto label_4f2ad8;
        case 0x4f2adcu: goto label_4f2adc;
        default: break;
    }

    ctx->pc = 0x4f2a70u;

label_4f2a70:
    // 0x4f2a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f2a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f2a74:
    // 0x4f2a74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f2a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f2a78:
    // 0x4f2a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f2a7c:
    // 0x4f2a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f2a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2a80:
    // 0x4f2a80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f2a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f2a84:
    // 0x4f2a84: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f2a84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f2a88:
    // 0x4f2a88: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f2a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f2a8c:
    // 0x4f2a8c: 0x40f809  jalr        $v0
label_4f2a90:
    if (ctx->pc == 0x4F2A90u) {
        ctx->pc = 0x4F2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2A8Cu;
        // 0x4f2a90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2A94u;
        goto label_4f2a94;
    }
    ctx->pc = 0x4F2A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F2A94u);
        ctx->pc = 0x4F2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2A8Cu;
        // 0x4f2a90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2A8Cu, 0x4F2A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2A94u;
label_4f2a94:
    // 0x4f2a94: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_4f2a98:
    if (ctx->pc == 0x4F2A98u) {
        ctx->pc = 0x4F2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2A94u;
        // 0x4f2a98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2A9Cu;
        goto label_4f2a9c;
    }
    ctx->pc = 0x4F2A94u;
    {
        const bool branch_taken_0x4f2a94 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4F2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2A94u;
        // 0x4f2a98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2a94) {
            ctx->pc = 0x4F2AD0u;
            goto label_4f2ad0;
        }
    }
    ctx->pc = 0x4F2A9Cu;
label_4f2a9c:
    // 0x4f2a9c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4f2a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4f2aa0:
    // 0x4f2aa0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4f2aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f2aa4:
    // 0x4f2aa4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4f2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f2aa8:
    // 0x4f2aa8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f2aac:
    // 0x4f2aac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4f2aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4f2ab0:
    // 0x4f2ab0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f2ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f2ab4:
    // 0x4f2ab4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4f2ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2ab8:
    // 0x4f2ab8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4f2abc:
    if (ctx->pc == 0x4F2ABCu) {
        ctx->pc = 0x4F2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2AB8u;
        // 0x4f2abc: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2AC0u;
        goto label_4f2ac0;
    }
    ctx->pc = 0x4F2AB8u;
    {
        const bool branch_taken_0x4f2ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2AB8u;
        // 0x4f2abc: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2ab8) {
            ctx->pc = 0x4F2AD0u;
            goto label_4f2ad0;
        }
    }
    ctx->pc = 0x4F2AC0u;
label_4f2ac0:
    // 0x4f2ac0: 0xc0e1d26  jal         func_387498
label_4f2ac4:
    if (ctx->pc == 0x4F2AC4u) {
        ctx->pc = 0x4F2AC8u;
        goto label_4f2ac8;
    }
    ctx->pc = 0x4F2AC0u;
    SET_GPR_U32(ctx, 31, 0x4F2AC8u);
    ctx->pc = 0x387498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387498u, 0x4F2AC0u, 0x4F2AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2AC8u;
label_4f2ac8:
    // 0x4f2ac8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4f2acc:
    if (ctx->pc == 0x4F2ACCu) {
        ctx->pc = 0x4F2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2AC8u;
        // 0x4f2acc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2AD0u;
        goto label_4f2ad0;
    }
    ctx->pc = 0x4F2AC8u;
    {
        const bool branch_taken_0x4f2ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2AC8u;
        // 0x4f2acc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2ac8) {
            ctx->pc = 0x4F2AD4u;
            goto label_4f2ad4;
        }
    }
    ctx->pc = 0x4F2AD0u;
label_4f2ad0:
    // 0x4f2ad0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f2ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2ad4:
    // 0x4f2ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f2ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2ad8:
    // 0x4f2ad8: 0x3e00008  jr          $ra
label_4f2adc:
    if (ctx->pc == 0x4F2ADCu) {
        ctx->pc = 0x4F2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2AD8u;
        // 0x4f2adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2AE0u;
        goto label_fallthrough_0x4f2ad8;
    }
    ctx->pc = 0x4F2AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2AD8u;
        // 0x4f2adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f2ad8:
    ctx->pc = 0x4F2AE0u;
}

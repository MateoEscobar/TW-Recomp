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

// Function: sub_00417A60
// Address: 0x417a60 - 0x417aa8
void sub_00417A60_0x417a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417A60_0x417a60");
#endif

    switch (ctx->pc) {
        case 0x417a60u: goto label_417a60;
        case 0x417a64u: goto label_417a64;
        case 0x417a68u: goto label_417a68;
        case 0x417a6cu: goto label_417a6c;
        case 0x417a70u: goto label_417a70;
        case 0x417a74u: goto label_417a74;
        case 0x417a78u: goto label_417a78;
        case 0x417a7cu: goto label_417a7c;
        case 0x417a80u: goto label_417a80;
        case 0x417a84u: goto label_417a84;
        case 0x417a88u: goto label_417a88;
        case 0x417a8cu: goto label_417a8c;
        case 0x417a90u: goto label_417a90;
        case 0x417a94u: goto label_417a94;
        case 0x417a98u: goto label_417a98;
        case 0x417a9cu: goto label_417a9c;
        case 0x417aa0u: goto label_417aa0;
        case 0x417aa4u: goto label_417aa4;
        default: break;
    }

    ctx->pc = 0x417a60u;

label_417a60:
    // 0x417a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x417a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_417a64:
    // 0x417a64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x417a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_417a68:
    // 0x417a68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x417a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_417a6c:
    // 0x417a6c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_417a70:
    if (ctx->pc == 0x417A70u) {
        ctx->pc = 0x417A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417A6Cu;
        // 0x417a70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417A74u;
        goto label_417a74;
    }
    ctx->pc = 0x417A6Cu;
    {
        const bool branch_taken_0x417a6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x417A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417A6Cu;
        // 0x417a70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417a6c) {
            ctx->pc = 0x417A94u;
            goto label_417a94;
        }
    }
    ctx->pc = 0x417A74u;
label_417a74:
    // 0x417a74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x417a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_417a78:
    // 0x417a78: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x417a78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_417a7c:
    // 0x417a7c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x417a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_417a80:
    // 0x417a80: 0x40f809  jalr        $v0
label_417a84:
    if (ctx->pc == 0x417A84u) {
        ctx->pc = 0x417A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417A80u;
        // 0x417a84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417A88u;
        goto label_417a88;
    }
    ctx->pc = 0x417A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x417A88u);
        ctx->pc = 0x417A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417A80u;
        // 0x417a84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417A80u, 0x417A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x417A88u;
label_417a88:
    // 0x417a88: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x417a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_417a8c:
    // 0x417a8c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_417a90:
    if (ctx->pc == 0x417A90u) {
        ctx->pc = 0x417A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417A8Cu;
        // 0x417a90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417A94u;
        goto label_417a94;
    }
    ctx->pc = 0x417A8Cu;
    {
        const bool branch_taken_0x417a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x417A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417A8Cu;
        // 0x417a90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417a8c) {
            ctx->pc = 0x417A98u;
            goto label_417a98;
        }
    }
    ctx->pc = 0x417A94u;
label_417a94:
    // 0x417a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x417a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417a98:
    // 0x417a98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x417a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_417a9c:
    // 0x417a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_417aa0:
    // 0x417aa0: 0x3e00008  jr          $ra
label_417aa4:
    if (ctx->pc == 0x417AA4u) {
        ctx->pc = 0x417AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417AA0u;
        // 0x417aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417AA8u;
        goto label_fallthrough_0x417aa0;
    }
    ctx->pc = 0x417AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417AA0u;
        // 0x417aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x417aa0:
    ctx->pc = 0x417AA8u;
}

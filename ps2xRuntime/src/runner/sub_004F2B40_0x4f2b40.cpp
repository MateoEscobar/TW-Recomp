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

// Function: sub_004F2B40
// Address: 0x4f2b40 - 0x4f2ba0
void sub_004F2B40_0x4f2b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2B40_0x4f2b40");
#endif

    switch (ctx->pc) {
        case 0x4f2b40u: goto label_4f2b40;
        case 0x4f2b44u: goto label_4f2b44;
        case 0x4f2b48u: goto label_4f2b48;
        case 0x4f2b4cu: goto label_4f2b4c;
        case 0x4f2b50u: goto label_4f2b50;
        case 0x4f2b54u: goto label_4f2b54;
        case 0x4f2b58u: goto label_4f2b58;
        case 0x4f2b5cu: goto label_4f2b5c;
        case 0x4f2b60u: goto label_4f2b60;
        case 0x4f2b64u: goto label_4f2b64;
        case 0x4f2b68u: goto label_4f2b68;
        case 0x4f2b6cu: goto label_4f2b6c;
        case 0x4f2b70u: goto label_4f2b70;
        case 0x4f2b74u: goto label_4f2b74;
        case 0x4f2b78u: goto label_4f2b78;
        case 0x4f2b7cu: goto label_4f2b7c;
        case 0x4f2b80u: goto label_4f2b80;
        case 0x4f2b84u: goto label_4f2b84;
        case 0x4f2b88u: goto label_4f2b88;
        case 0x4f2b8cu: goto label_4f2b8c;
        case 0x4f2b90u: goto label_4f2b90;
        case 0x4f2b94u: goto label_4f2b94;
        case 0x4f2b98u: goto label_4f2b98;
        case 0x4f2b9cu: goto label_4f2b9c;
        default: break;
    }

    ctx->pc = 0x4f2b40u;

label_4f2b40:
    // 0x4f2b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f2b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f2b44:
    // 0x4f2b44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4f2b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4f2b48:
    // 0x4f2b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f2b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f2b4c:
    // 0x4f2b4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f2b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f2b50:
    // 0x4f2b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f2b54:
    // 0x4f2b54: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4f2b58:
    if (ctx->pc == 0x4F2B58u) {
        ctx->pc = 0x4F2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B54u;
        // 0x4f2b58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2B5Cu;
        goto label_4f2b5c;
    }
    ctx->pc = 0x4F2B54u;
    {
        const bool branch_taken_0x4f2b54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B54u;
        // 0x4f2b58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2b54) {
            ctx->pc = 0x4F2B8Cu;
            goto label_4f2b8c;
        }
    }
    ctx->pc = 0x4F2B5Cu;
label_4f2b5c:
    // 0x4f2b5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f2b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f2b60:
    // 0x4f2b60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f2b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f2b64:
    // 0x4f2b64: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f2b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f2b68:
    // 0x4f2b68: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f2b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f2b6c:
    // 0x4f2b6c: 0x60f809  jalr        $v1
label_4f2b70:
    if (ctx->pc == 0x4F2B70u) {
        ctx->pc = 0x4F2B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B6Cu;
        // 0x4f2b70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2B74u;
        goto label_4f2b74;
    }
    ctx->pc = 0x4F2B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F2B74u);
        ctx->pc = 0x4F2B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B6Cu;
        // 0x4f2b70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2B6Cu, 0x4F2B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2B74u;
label_4f2b74:
    // 0x4f2b74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f2b78:
    // 0x4f2b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f2b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2b7c:
    // 0x4f2b7c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x4f2b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_4f2b80:
    // 0x4f2b80: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x4f2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_4f2b84:
    // 0x4f2b84: 0x60f809  jalr        $v1
label_4f2b88:
    if (ctx->pc == 0x4F2B88u) {
        ctx->pc = 0x4F2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B84u;
        // 0x4f2b88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2B8Cu;
        goto label_4f2b8c;
    }
    ctx->pc = 0x4F2B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F2B8Cu);
        ctx->pc = 0x4F2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B84u;
        // 0x4f2b88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2B84u, 0x4F2B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2B8Cu;
label_4f2b8c:
    // 0x4f2b8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4f2b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f2b90:
    // 0x4f2b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f2b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2b94:
    // 0x4f2b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f2b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2b98:
    // 0x4f2b98: 0x3e00008  jr          $ra
label_4f2b9c:
    if (ctx->pc == 0x4F2B9Cu) {
        ctx->pc = 0x4F2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B98u;
        // 0x4f2b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2BA0u;
        goto label_fallthrough_0x4f2b98;
    }
    ctx->pc = 0x4F2B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B98u;
        // 0x4f2b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f2b98:
    ctx->pc = 0x4F2BA0u;
}

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

// Function: sub_002D7B50
// Address: 0x2d7b50 - 0x2d7bc8
void sub_002D7B50_0x2d7b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7B50_0x2d7b50");
#endif

    switch (ctx->pc) {
        case 0x2d7b50u: goto label_2d7b50;
        case 0x2d7b54u: goto label_2d7b54;
        case 0x2d7b58u: goto label_2d7b58;
        case 0x2d7b5cu: goto label_2d7b5c;
        case 0x2d7b60u: goto label_2d7b60;
        case 0x2d7b64u: goto label_2d7b64;
        case 0x2d7b68u: goto label_2d7b68;
        case 0x2d7b6cu: goto label_2d7b6c;
        case 0x2d7b70u: goto label_2d7b70;
        case 0x2d7b74u: goto label_2d7b74;
        case 0x2d7b78u: goto label_2d7b78;
        case 0x2d7b7cu: goto label_2d7b7c;
        case 0x2d7b80u: goto label_2d7b80;
        case 0x2d7b84u: goto label_2d7b84;
        case 0x2d7b88u: goto label_2d7b88;
        case 0x2d7b8cu: goto label_2d7b8c;
        case 0x2d7b90u: goto label_2d7b90;
        case 0x2d7b94u: goto label_2d7b94;
        case 0x2d7b98u: goto label_2d7b98;
        case 0x2d7b9cu: goto label_2d7b9c;
        case 0x2d7ba0u: goto label_2d7ba0;
        case 0x2d7ba4u: goto label_2d7ba4;
        case 0x2d7ba8u: goto label_2d7ba8;
        case 0x2d7bacu: goto label_2d7bac;
        case 0x2d7bb0u: goto label_2d7bb0;
        case 0x2d7bb4u: goto label_2d7bb4;
        case 0x2d7bb8u: goto label_2d7bb8;
        case 0x2d7bbcu: goto label_2d7bbc;
        case 0x2d7bc0u: goto label_2d7bc0;
        case 0x2d7bc4u: goto label_2d7bc4;
        default: break;
    }

    ctx->pc = 0x2d7b50u;

label_2d7b50:
    // 0x2d7b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d7b54:
    // 0x2d7b54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d7b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d7b58:
    // 0x2d7b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d7b5c:
    // 0x2d7b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d7b60:
    // 0x2d7b60: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d7b64:
    // 0x2d7b64: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2d7b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2d7b68:
    // 0x2d7b68: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2d7b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2d7b6c:
    // 0x2d7b6c: 0xa0f809  jalr        $a1
label_2d7b70:
    if (ctx->pc == 0x2D7B70u) {
        ctx->pc = 0x2D7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B6Cu;
        // 0x2d7b70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7B74u;
        goto label_2d7b74;
    }
    ctx->pc = 0x2D7B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2D7B74u);
        ctx->pc = 0x2D7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B6Cu;
        // 0x2d7b70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7B6Cu, 0x2D7B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D7B74u;
label_2d7b74:
    // 0x2d7b74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7b78:
    // 0x2d7b78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2d7b7c:
    // 0x2d7b7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d7b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2d7b80:
    // 0x2d7b80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2d7b84:
    if (ctx->pc == 0x2D7B84u) {
        ctx->pc = 0x2D7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B80u;
        // 0x2d7b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7B88u;
        goto label_2d7b88;
    }
    ctx->pc = 0x2D7B80u;
    {
        const bool branch_taken_0x2d7b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B80u;
        // 0x2d7b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b80) {
            ctx->pc = 0x2D7BB8u;
            goto label_2d7bb8;
        }
    }
    ctx->pc = 0x2D7B88u;
label_2d7b88:
    // 0x2d7b88: 0xc0b5ef2  jal         func_2D7BC8
label_2d7b8c:
    if (ctx->pc == 0x2D7B8Cu) {
        ctx->pc = 0x2D7B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B88u;
        // 0x2d7b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7B90u;
        goto label_2d7b90;
    }
    ctx->pc = 0x2D7B88u;
    SET_GPR_U32(ctx, 31, 0x2D7B90u);
    ctx->pc = 0x2D7B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B88u;
    // 0x2d7b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BC8u, 0x2D7B88u, 0x2D7B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B90u;
label_2d7b90:
    // 0x2d7b90: 0x9203003e  lbu         $v1, 0x3E($s0)
    ctx->pc = 0x2d7b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
label_2d7b94:
    // 0x2d7b94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7b98:
    // 0x2d7b98: 0xa0430265  sb          $v1, 0x265($v0)
    ctx->pc = 0x2d7b98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 3));
label_2d7b9c:
    // 0x2d7b9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7ba0:
    // 0x2d7ba0: 0x96040038  lhu         $a0, 0x38($s0)
    ctx->pc = 0x2d7ba0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_2d7ba4:
    // 0x2d7ba4: 0xac640144  sw          $a0, 0x144($v1)
    ctx->pc = 0x2d7ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 4));
label_2d7ba8:
    // 0x2d7ba8: 0x92020046  lbu         $v0, 0x46($s0)
    ctx->pc = 0x2d7ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
label_2d7bac:
    // 0x2d7bac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7bb0:
    // 0x2d7bb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d7bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d7bb4:
    // 0x2d7bb4: 0xa062028d  sb          $v0, 0x28D($v1)
    ctx->pc = 0x2d7bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 653), (uint8_t)GPR_U32(ctx, 2));
label_2d7bb8:
    // 0x2d7bb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d7bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d7bbc:
    // 0x2d7bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d7bc0:
    // 0x2d7bc0: 0x3e00008  jr          $ra
label_2d7bc4:
    if (ctx->pc == 0x2D7BC4u) {
        ctx->pc = 0x2D7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BC0u;
        // 0x2d7bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7BC8u;
        goto label_fallthrough_0x2d7bc0;
    }
    ctx->pc = 0x2D7BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BC0u;
        // 0x2d7bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d7bc0:
    ctx->pc = 0x2D7BC8u;
}

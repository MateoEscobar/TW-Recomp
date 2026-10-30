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

// Function: sub_002B0B60
// Address: 0x2b0b60 - 0x2b0bf0
void sub_002B0B60_0x2b0b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0B60_0x2b0b60");
#endif

    switch (ctx->pc) {
        case 0x2b0b60u: goto label_2b0b60;
        case 0x2b0b64u: goto label_2b0b64;
        case 0x2b0b68u: goto label_2b0b68;
        case 0x2b0b6cu: goto label_2b0b6c;
        case 0x2b0b70u: goto label_2b0b70;
        case 0x2b0b74u: goto label_2b0b74;
        case 0x2b0b78u: goto label_2b0b78;
        case 0x2b0b7cu: goto label_2b0b7c;
        case 0x2b0b80u: goto label_2b0b80;
        case 0x2b0b84u: goto label_2b0b84;
        case 0x2b0b88u: goto label_2b0b88;
        case 0x2b0b8cu: goto label_2b0b8c;
        case 0x2b0b90u: goto label_2b0b90;
        case 0x2b0b94u: goto label_2b0b94;
        case 0x2b0b98u: goto label_2b0b98;
        case 0x2b0b9cu: goto label_2b0b9c;
        case 0x2b0ba0u: goto label_2b0ba0;
        case 0x2b0ba4u: goto label_2b0ba4;
        case 0x2b0ba8u: goto label_2b0ba8;
        case 0x2b0bacu: goto label_2b0bac;
        case 0x2b0bb0u: goto label_2b0bb0;
        case 0x2b0bb4u: goto label_2b0bb4;
        case 0x2b0bb8u: goto label_2b0bb8;
        case 0x2b0bbcu: goto label_2b0bbc;
        case 0x2b0bc0u: goto label_2b0bc0;
        case 0x2b0bc4u: goto label_2b0bc4;
        case 0x2b0bc8u: goto label_2b0bc8;
        case 0x2b0bccu: goto label_2b0bcc;
        case 0x2b0bd0u: goto label_2b0bd0;
        case 0x2b0bd4u: goto label_2b0bd4;
        case 0x2b0bd8u: goto label_2b0bd8;
        case 0x2b0bdcu: goto label_2b0bdc;
        case 0x2b0be0u: goto label_2b0be0;
        case 0x2b0be4u: goto label_2b0be4;
        case 0x2b0be8u: goto label_2b0be8;
        case 0x2b0becu: goto label_2b0bec;
        default: break;
    }

    ctx->pc = 0x2b0b60u;

label_2b0b60:
    // 0x2b0b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b0b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b0b64:
    // 0x2b0b64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b0b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2b0b68:
    // 0x2b0b68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b0b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2b0b6c:
    // 0x2b0b6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b0b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0b70:
    // 0x2b0b70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b0b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2b0b74:
    // 0x2b0b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b0b78:
    // 0x2b0b78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0b7c:
    // 0x2b0b7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2b0b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b0b80:
    // 0x2b0b80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b0b84:
    // 0x2b0b84: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b0b84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b0b88:
    // 0x2b0b88: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b0b8c:
    // 0x2b0b8c: 0x40f809  jalr        $v0
label_2b0b90:
    if (ctx->pc == 0x2B0B90u) {
        ctx->pc = 0x2B0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B8Cu;
        // 0x2b0b90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0B94u;
        goto label_2b0b94;
    }
    ctx->pc = 0x2B0B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0B94u);
        ctx->pc = 0x2B0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B8Cu;
        // 0x2b0b90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0B8Cu, 0x2B0B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0B94u;
label_2b0b94:
    // 0x2b0b94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b0b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0b98:
    // 0x2b0b98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b0b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0b9c:
    // 0x2b0b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ba0:
    // 0x2b0ba0: 0xc08e1a4  jal         func_238690
label_2b0ba4:
    if (ctx->pc == 0x2B0BA4u) {
        ctx->pc = 0x2B0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BA0u;
        // 0x2b0ba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0BA8u;
        goto label_2b0ba8;
    }
    ctx->pc = 0x2B0BA0u;
    SET_GPR_U32(ctx, 31, 0x2B0BA8u);
    ctx->pc = 0x2B0BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0BA0u;
    // 0x2b0ba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2B0BA0u, 0x2B0BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BA8u;
label_2b0ba8:
    // 0x2b0ba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0bac:
    // 0x2b0bac: 0xa2030284  sb          $v1, 0x284($s0)
    ctx->pc = 0x2b0bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 3));
label_2b0bb0:
    // 0x2b0bb0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b0bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b0bb4:
    // 0x2b0bb4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2b0bb8:
    if (ctx->pc == 0x2B0BB8u) {
        ctx->pc = 0x2B0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BB4u;
        // 0x2b0bb8: 0x92220059  lbu         $v0, 0x59($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0BBCu;
        goto label_2b0bbc;
    }
    ctx->pc = 0x2B0BB4u;
    {
        const bool branch_taken_0x2b0bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0bb4) {
            ctx->pc = 0x2B0BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0BB4u;
            // 0x2b0bb8: 0x92220059  lbu         $v0, 0x59($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0BCCu;
            goto label_2b0bcc;
        }
    }
    ctx->pc = 0x2B0BBCu;
label_2b0bbc:
    // 0x2b0bbc: 0xc10586e  jal         func_4161B8
label_2b0bc0:
    if (ctx->pc == 0x2B0BC0u) {
        ctx->pc = 0x2B0BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BBCu;
        // 0x2b0bc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0BC4u;
        goto label_2b0bc4;
    }
    ctx->pc = 0x2B0BBCu;
    SET_GPR_U32(ctx, 31, 0x2B0BC4u);
    ctx->pc = 0x2B0BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0BBCu;
    // 0x2b0bc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2B0BBCu, 0x2B0BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BC4u;
label_2b0bc4:
    // 0x2b0bc4: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2b0bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2b0bc8:
    // 0x2b0bc8: 0x92220059  lbu         $v0, 0x59($s1)
    ctx->pc = 0x2b0bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
label_2b0bcc:
    // 0x2b0bcc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b0bd0:
    if (ctx->pc == 0x2B0BD0u) {
        ctx->pc = 0x2B0BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BCCu;
        // 0x2b0bd0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0BD4u;
        goto label_2b0bd4;
    }
    ctx->pc = 0x2B0BCCu;
    {
        const bool branch_taken_0x2b0bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BCCu;
        // 0x2b0bd0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0bcc) {
            ctx->pc = 0x2B0BD8u;
            goto label_2b0bd8;
        }
    }
    ctx->pc = 0x2B0BD4u;
label_2b0bd4:
    // 0x2b0bd4: 0xa2220059  sb          $v0, 0x59($s1)
    ctx->pc = 0x2b0bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 2));
label_2b0bd8:
    // 0x2b0bd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b0bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b0bdc:
    // 0x2b0bdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b0bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0be0:
    // 0x2b0be0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b0be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0be4:
    // 0x2b0be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0be8:
    // 0x2b0be8: 0x3e00008  jr          $ra
label_2b0bec:
    if (ctx->pc == 0x2B0BECu) {
        ctx->pc = 0x2B0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BE8u;
        // 0x2b0bec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0BF0u;
        goto label_fallthrough_0x2b0be8;
    }
    ctx->pc = 0x2B0BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BE8u;
        // 0x2b0bec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b0be8:
    ctx->pc = 0x2B0BF0u;
}

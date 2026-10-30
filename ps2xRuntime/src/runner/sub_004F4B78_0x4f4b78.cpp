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

// Function: sub_004F4B78
// Address: 0x4f4b78 - 0x4f4bf8
void sub_004F4B78_0x4f4b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4B78_0x4f4b78");
#endif

    switch (ctx->pc) {
        case 0x4f4b78u: goto label_4f4b78;
        case 0x4f4b7cu: goto label_4f4b7c;
        case 0x4f4b80u: goto label_4f4b80;
        case 0x4f4b84u: goto label_4f4b84;
        case 0x4f4b88u: goto label_4f4b88;
        case 0x4f4b8cu: goto label_4f4b8c;
        case 0x4f4b90u: goto label_4f4b90;
        case 0x4f4b94u: goto label_4f4b94;
        case 0x4f4b98u: goto label_4f4b98;
        case 0x4f4b9cu: goto label_4f4b9c;
        case 0x4f4ba0u: goto label_4f4ba0;
        case 0x4f4ba4u: goto label_4f4ba4;
        case 0x4f4ba8u: goto label_4f4ba8;
        case 0x4f4bacu: goto label_4f4bac;
        case 0x4f4bb0u: goto label_4f4bb0;
        case 0x4f4bb4u: goto label_4f4bb4;
        case 0x4f4bb8u: goto label_4f4bb8;
        case 0x4f4bbcu: goto label_4f4bbc;
        case 0x4f4bc0u: goto label_4f4bc0;
        case 0x4f4bc4u: goto label_4f4bc4;
        case 0x4f4bc8u: goto label_4f4bc8;
        case 0x4f4bccu: goto label_4f4bcc;
        case 0x4f4bd0u: goto label_4f4bd0;
        case 0x4f4bd4u: goto label_4f4bd4;
        case 0x4f4bd8u: goto label_4f4bd8;
        case 0x4f4bdcu: goto label_4f4bdc;
        case 0x4f4be0u: goto label_4f4be0;
        case 0x4f4be4u: goto label_4f4be4;
        case 0x4f4be8u: goto label_4f4be8;
        case 0x4f4becu: goto label_4f4bec;
        case 0x4f4bf0u: goto label_4f4bf0;
        case 0x4f4bf4u: goto label_4f4bf4;
        default: break;
    }

    ctx->pc = 0x4f4b78u;

label_4f4b78:
    // 0x4f4b78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f4b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f4b7c:
    // 0x4f4b7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f4b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f4b80:
    // 0x4f4b80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f4b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f4b84:
    // 0x4f4b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f4b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4b88:
    // 0x4f4b88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f4b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f4b8c:
    // 0x4f4b8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f4b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f4b90:
    // 0x4f4b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f4b94:
    // 0x4f4b94: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4f4b98:
    if (ctx->pc == 0x4F4B98u) {
        ctx->pc = 0x4F4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B94u;
        // 0x4f4b98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4B9Cu;
        goto label_4f4b9c;
    }
    ctx->pc = 0x4F4B94u;
    {
        const bool branch_taken_0x4f4b94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B94u;
        // 0x4f4b98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4b94) {
            ctx->pc = 0x4F4BDCu;
            goto label_4f4bdc;
        }
    }
    ctx->pc = 0x4F4B9Cu;
label_4f4b9c:
    // 0x4f4b9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f4b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f4ba0:
    // 0x4f4ba0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f4ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f4ba4:
    // 0x4f4ba4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f4ba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f4ba8:
    // 0x4f4ba8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f4bac:
    // 0x4f4bac: 0x60f809  jalr        $v1
label_4f4bb0:
    if (ctx->pc == 0x4F4BB0u) {
        ctx->pc = 0x4F4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4BACu;
        // 0x4f4bb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4BB4u;
        goto label_4f4bb4;
    }
    ctx->pc = 0x4F4BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F4BB4u);
        ctx->pc = 0x4F4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4BACu;
        // 0x4f4bb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4BACu, 0x4F4BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4BB4u;
label_4f4bb4:
    // 0x4f4bb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f4bb8:
    // 0x4f4bb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f4bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4bbc:
    // 0x4f4bbc: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f4bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f4bc0:
    // 0x4f4bc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f4bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f4bc4:
    // 0x4f4bc4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f4bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f4bc8:
    // 0x4f4bc8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f4bcc:
    // 0x4f4bcc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f4bccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f4bd0:
    // 0x4f4bd0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f4bd4:
    // 0x4f4bd4: 0x60f809  jalr        $v1
label_4f4bd8:
    if (ctx->pc == 0x4F4BD8u) {
        ctx->pc = 0x4F4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4BD4u;
        // 0x4f4bd8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4BDCu;
        goto label_4f4bdc;
    }
    ctx->pc = 0x4F4BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F4BDCu);
        ctx->pc = 0x4F4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4BD4u;
        // 0x4f4bd8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4BD4u, 0x4F4BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4BDCu;
label_4f4bdc:
    // 0x4f4bdc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f4bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4be0:
    // 0x4f4be0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f4be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4be4:
    // 0x4f4be4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f4be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4be8:
    // 0x4f4be8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4bec:
    // 0x4f4bec: 0x3e00008  jr          $ra
label_4f4bf0:
    if (ctx->pc == 0x4F4BF0u) {
        ctx->pc = 0x4F4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4BECu;
        // 0x4f4bf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4BF4u;
        goto label_4f4bf4;
    }
    ctx->pc = 0x4F4BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4BECu;
        // 0x4f4bf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4BF4u;
label_4f4bf4:
    // 0x4f4bf4: 0x0  nop
    ctx->pc = 0x4f4bf4u;
    // NOP
    ctx->pc = 0x4f4bf8u;
}

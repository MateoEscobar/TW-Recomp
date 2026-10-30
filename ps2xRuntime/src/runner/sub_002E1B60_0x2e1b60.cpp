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

// Function: sub_002E1B60
// Address: 0x2e1b60 - 0x2e1c18
void sub_002E1B60_0x2e1b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1B60_0x2e1b60");
#endif

    switch (ctx->pc) {
        case 0x2e1ba0u: goto label_2e1ba0;
        case 0x2e1ba8u: goto label_2e1ba8;
        case 0x2e1bb0u: goto label_2e1bb0;
        case 0x2e1bccu: goto label_2e1bcc;
        default: break;
    }

    ctx->pc = 0x2e1b60u;

    // 0x2e1b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e1b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e1b64: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2e1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e1b68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e1b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e1b6c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2e1b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2e1b70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e1b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e1b74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e1b7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e1b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e1b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2e1b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1b88: 0x24734b00  addiu       $s3, $v1, 0x4B00
    ctx->pc = 0x2e1b88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2e1b8c: 0xa2020038  sb          $v0, 0x38($s0)
    ctx->pc = 0x2e1b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1b90: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2e1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2e1b94: 0x24920048  addiu       $s2, $a0, 0x48
    ctx->pc = 0x2e1b94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x2e1b98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e1b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b9c: 0x0  nop
    ctx->pc = 0x2e1b9cu;
    // NOP
label_2e1ba0:
    // 0x2e1ba0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2E1BA0u;
    SET_GPR_U32(ctx, 31, 0x2E1BA8u);
    ctx->pc = 0x2E1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1BA0u;
    // 0x2e1ba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2E1BA0u, 0x2E1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BA8u;
label_2e1ba8:
    // 0x2e1ba8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2E1BA8u;
    SET_GPR_U32(ctx, 31, 0x2E1BB0u);
    ctx->pc = 0x2E1BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1BA8u;
    // 0x2e1bac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E1BA8u, 0x2E1BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BB0u;
label_2e1bb0:
    // 0x2e1bb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1BB0u;
    {
        const bool branch_taken_0x2e1bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BB0u;
        // 0x2e1bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1bb0) {
            ctx->pc = 0x2E1BD0u;
            goto label_2e1bd0;
        }
    }
    ctx->pc = 0x2E1BB8u;
    // 0x2e1bb8: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x2e1bb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2e1bbc: 0x92060038  lbu         $a2, 0x38($s0)
    ctx->pc = 0x2e1bbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e1bc0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e1bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e1bc4: 0xc0b866c  jal         func_2E19B0
    ctx->pc = 0x2E1BC4u;
    SET_GPR_U32(ctx, 31, 0x2E1BCCu);
    ctx->pc = 0x2E1BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1BC4u;
    // 0x2e1bc8: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19B0u, 0x2E1BC4u, 0x2E1BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BCCu;
label_2e1bcc:
    // 0x2e1bcc: 0xa2020038  sb          $v0, 0x38($s0)
    ctx->pc = 0x2e1bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 2));
label_2e1bd0:
    // 0x2e1bd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e1bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e1bd4: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x2e1bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e1bd8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E1BD8u;
    {
        const bool branch_taken_0x2e1bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BD8u;
        // 0x2e1bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1bd8) {
            ctx->pc = 0x2E1BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1ba0;
        }
    }
    ctx->pc = 0x2E1BE0u;
    // 0x2e1be0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2e1be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e1be4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1be8: 0x92030038  lbu         $v1, 0x38($s0)
    ctx->pc = 0x2e1be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e1bec: 0x94a40032  lhu         $a0, 0x32($a1)
    ctx->pc = 0x2e1becu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x2e1bf0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e1bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1bf4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2e1bf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e1bf8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e1bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1bfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1c00: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2e1c00u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2e1c04: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e1c04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C0Cu;
        // 0x2e1c10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1C14u;
    // 0x2e1c14: 0x0  nop
    ctx->pc = 0x2e1c14u;
    // NOP
    ctx->pc = 0x2e1c18u;
}

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

// Function: sub_00462BC0
// Address: 0x462bc0 - 0x462cc8
void sub_00462BC0_0x462bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462BC0_0x462bc0");
#endif

    switch (ctx->pc) {
        case 0x462c20u: goto label_462c20;
        case 0x462c38u: goto label_462c38;
        default: break;
    }

    ctx->pc = 0x462bc0u;

    // 0x462bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x462bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x462bc4: 0x8f828890  lw          $v0, -0x7770($gp)
    ctx->pc = 0x462bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936720)));
    // 0x462bc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x462bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x462bcc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x462bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x462bd0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x462bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x462bd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x462bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x462bd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x462bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x462bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x462be0: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x462be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x462be4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x462be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x462be8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x462be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x462bec: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x462becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x462bf0: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x462BF0u;
    {
        const bool branch_taken_0x462bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x462BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462BF0u;
        // 0x462bf4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462bf0) {
            ctx->pc = 0x462CACu;
            goto label_462cac;
        }
    }
    ctx->pc = 0x462BF8u;
    // 0x462bf8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x462bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x462bfc: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x462bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x462c00: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x462C00u;
    {
        const bool branch_taken_0x462c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x462C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462C00u;
        // 0x462c04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462c00) {
            ctx->pc = 0x462CACu;
            goto label_462cac;
        }
    }
    ctx->pc = 0x462C08u;
    // 0x462c08: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x462c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x462c0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x462c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462c10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x462c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x462c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x462c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462c18: 0xc1189b4  jal         func_4626D0
    ctx->pc = 0x462C18u;
    SET_GPR_U32(ctx, 31, 0x462C20u);
    ctx->pc = 0x462C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462C18u;
    // 0x462c1c: 0x8c480020  lw          $t0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4626D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4626D0u, 0x462C18u, 0x462C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462C20u;
label_462c20:
    // 0x462c20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x462c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462c24: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x462c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x462c28: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x462C28u;
    {
        const bool branch_taken_0x462c28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x462C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462C28u;
        // 0x462c2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462c28) {
            ctx->pc = 0x462CA0u;
            goto label_462ca0;
        }
    }
    ctx->pc = 0x462C30u;
    // 0x462c30: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x462c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x462c34: 0x0  nop
    ctx->pc = 0x462c34u;
    // NOP
label_462c38:
    // 0x462c38: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x462c38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x462c3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x462c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x462c40: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x462c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x462c44: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x462c44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x462c48: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x462c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x462c4c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x462c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x462c50: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x462c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x462c54: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x462c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x462c58: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x462c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x462c5c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x462c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x462c60: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x462c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x462c64: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x462c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x462c68: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x462c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x462c6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x462c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x462c70: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x462c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x462c74: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x462c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x462c78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x462c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x462c7c: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x462c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x462c80: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x462c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x462c84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x462c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x462c88: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x462c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x462c8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x462c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x462c90: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x462c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x462c94: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x462c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x462c98: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x462C98u;
    {
        const bool branch_taken_0x462c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x462c98) {
            ctx->pc = 0x462C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x462C98u;
            // 0x462c9c: 0x8cc30010  lw          $v1, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x462C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_462c38;
        }
    }
    ctx->pc = 0x462CA0u;
label_462ca0:
    // 0x462ca0: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x462ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x462ca4: 0xacd10014  sw          $s1, 0x14($a2)
    ctx->pc = 0x462ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 17));
    // 0x462ca8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x462ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_462cac:
    // 0x462cac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x462cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x462cb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x462cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x462cb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x462cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x462cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x462CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462CBCu;
        // 0x462cc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x462CC4u;
    // 0x462cc4: 0x0  nop
    ctx->pc = 0x462cc4u;
    // NOP
    ctx->pc = 0x462cc8u;
}

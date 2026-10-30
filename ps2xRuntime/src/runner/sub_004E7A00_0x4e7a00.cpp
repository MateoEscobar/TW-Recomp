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

// Function: sub_004E7A00
// Address: 0x4e7a00 - 0x4e7bb0
void sub_004E7A00_0x4e7a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7A00_0x4e7a00");
#endif

    switch (ctx->pc) {
        case 0x4e7a54u: goto label_4e7a54;
        case 0x4e7a88u: goto label_4e7a88;
        case 0x4e7ae0u: goto label_4e7ae0;
        case 0x4e7b10u: goto label_4e7b10;
        case 0x4e7b6cu: goto label_4e7b6c;
        case 0x4e7b80u: goto label_4e7b80;
        case 0x4e7b90u: goto label_4e7b90;
        default: break;
    }

    ctx->pc = 0x4e7a00u;

    // 0x4e7a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e7a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e7a04: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4e7a04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7a08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e7a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4e7a0c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e7a0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7a10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e7a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e7a14: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e7a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e7a18: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e7a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e7a1c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e7a20: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E7A20u;
    {
        const bool branch_taken_0x4e7a20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E7A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7A20u;
        // 0x4e7a24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7a20) {
            ctx->pc = 0x4E7A5Cu;
            goto label_4e7a5c;
        }
    }
    ctx->pc = 0x4E7A28u;
    // 0x4e7a28: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4e7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4e7a2c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E7A2Cu;
    {
        const bool branch_taken_0x4e7a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7a2c) {
            ctx->pc = 0x4E7A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7A2Cu;
            // 0x4e7a30: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7A4Cu;
            goto label_4e7a4c;
        }
    }
    ctx->pc = 0x4E7A34u;
    // 0x4e7a34: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e7a38: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4e7a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4e7a3c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e7a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e7a40: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4E7A40u;
    {
        const bool branch_taken_0x4e7a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7a40) {
            ctx->pc = 0x4E7B78u;
            goto label_4e7b78;
        }
    }
    ctx->pc = 0x4E7A48u;
    // 0x4e7a48: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e7a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e7a4c:
    // 0x4e7a4c: 0xc139e2a  jal         func_4E78A8
    ctx->pc = 0x4E7A4Cu;
    SET_GPR_U32(ctx, 31, 0x4E7A54u);
    ctx->pc = 0x4E7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7A4Cu;
    // 0x4e7a50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E78A8u, 0x4E7A4Cu, 0x4E7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7A54u;
label_4e7a54:
    // 0x4e7a54: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4E7A54u;
    {
        const bool branch_taken_0x4e7a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7A54u;
        // 0x4e7a58: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7a54) {
            ctx->pc = 0x4E7B94u;
            goto label_4e7b94;
        }
    }
    ctx->pc = 0x4E7A5Cu;
label_4e7a5c:
    // 0x4e7a5c: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4E7A5Cu;
    {
        const bool branch_taken_0x4e7a5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e7a5c) {
            ctx->pc = 0x4E7A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7A5Cu;
            // 0x4e7a60: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7A90u;
            goto label_4e7a90;
        }
    }
    ctx->pc = 0x4E7A64u;
    // 0x4e7a64: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4e7a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4e7a68: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e7a6c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e7a70: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e7a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e7a74: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4E7A74u;
    {
        const bool branch_taken_0x4e7a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7A74u;
        // 0x4e7a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7a74) {
            ctx->pc = 0x4E7B64u;
            goto label_4e7b64;
        }
    }
    ctx->pc = 0x4E7A7Cu;
    // 0x4e7a7c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e7a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7a80: 0xc139e2a  jal         func_4E78A8
    ctx->pc = 0x4E7A80u;
    SET_GPR_U32(ctx, 31, 0x4E7A88u);
    ctx->pc = 0x4E7A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7A80u;
    // 0x4e7a84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E78A8u, 0x4E7A80u, 0x4E7A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7A88u;
label_4e7a88:
    // 0x4e7a88: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4E7A88u;
    {
        const bool branch_taken_0x4e7a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7A88u;
        // 0x4e7a8c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7a88) {
            ctx->pc = 0x4E7B94u;
            goto label_4e7b94;
        }
    }
    ctx->pc = 0x4E7A90u;
label_4e7a90:
    // 0x4e7a90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e7a94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E7A94u;
    {
        const bool branch_taken_0x4e7a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7A94u;
        // 0x4e7a98: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7a94) {
            ctx->pc = 0x4E7AB8u;
            goto label_4e7ab8;
        }
    }
    ctx->pc = 0x4E7A9Cu;
    // 0x4e7a9c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4e7a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e7aa0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4e7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e7aa4: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E7AA4u;
    {
        const bool branch_taken_0x4e7aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e7aa4) {
            ctx->pc = 0x4E7AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7AA4u;
            // 0x4e7aa8: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7ABCu;
            goto label_4e7abc;
        }
    }
    ctx->pc = 0x4E7AACu;
    // 0x4e7aac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4e7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e7ab0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4E7AB0u;
    {
        const bool branch_taken_0x4e7ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7AB0u;
        // 0x4e7ab4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7ab0) {
            ctx->pc = 0x4E7B28u;
            goto label_4e7b28;
        }
    }
    ctx->pc = 0x4E7AB8u;
label_4e7ab8:
    // 0x4e7ab8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e7abc:
    // 0x4e7abc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e7ac0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4E7AC0u;
    {
        const bool branch_taken_0x4e7ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7ac0) {
            ctx->pc = 0x4E7AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7AC0u;
            // 0x4e7ac4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7B00u;
            goto label_4e7b00;
        }
    }
    ctx->pc = 0x4E7AC8u;
    // 0x4e7ac8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e7ac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7acc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e7accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e7ad0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E7AD0u;
    {
        const bool branch_taken_0x4e7ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7ad0) {
            ctx->pc = 0x4E7AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7AD0u;
            // 0x4e7ad4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7B28u;
            goto label_4e7b28;
        }
    }
    ctx->pc = 0x4E7AD8u;
    // 0x4e7ad8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e7adc: 0x0  nop
    ctx->pc = 0x4e7adcu;
    // NOP
label_4e7ae0:
    // 0x4e7ae0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e7ae4: 0x0  nop
    ctx->pc = 0x4e7ae4u;
    // NOP
    // 0x4e7ae8: 0x0  nop
    ctx->pc = 0x4e7ae8u;
    // NOP
    // 0x4e7aec: 0x0  nop
    ctx->pc = 0x4e7aecu;
    // NOP
    // 0x4e7af0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E7AF0u;
    {
        const bool branch_taken_0x4e7af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7af0) {
            ctx->pc = 0x4E7AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7AF0u;
            // 0x4e7af4: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e7ae0;
        }
    }
    ctx->pc = 0x4E7AF8u;
    // 0x4e7af8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E7AF8u;
    {
        const bool branch_taken_0x4e7af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7AF8u;
        // 0x4e7afc: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7af8) {
            ctx->pc = 0x4E7B28u;
            goto label_4e7b28;
        }
    }
    ctx->pc = 0x4E7B00u;
label_4e7b00:
    // 0x4e7b00: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e7b04: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E7B04u;
    {
        const bool branch_taken_0x4e7b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E7B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7B04u;
        // 0x4e7b08: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7b04) {
            ctx->pc = 0x4E7B28u;
            goto label_4e7b28;
        }
    }
    ctx->pc = 0x4E7B0Cu;
    // 0x4e7b0c: 0x0  nop
    ctx->pc = 0x4e7b0cu;
    // NOP
label_4e7b10:
    // 0x4e7b10: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e7b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e7b14: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e7b18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e7b1c: 0x0  nop
    ctx->pc = 0x4e7b1cu;
    // NOP
    // 0x4e7b20: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E7B20u;
    {
        const bool branch_taken_0x4e7b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7B20u;
        // 0x4e7b24: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7b20) {
            ctx->pc = 0x4E7B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e7b10;
        }
    }
    ctx->pc = 0x4E7B28u;
label_4e7b28:
    // 0x4e7b28: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4e7b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7b2c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e7b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e7b30: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e7b34: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e7b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4e7b38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E7B38u;
    {
        const bool branch_taken_0x4e7b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7B38u;
        // 0x4e7b3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7b38) {
            ctx->pc = 0x4E7B4Cu;
            goto label_4e7b4c;
        }
    }
    ctx->pc = 0x4E7B40u;
    // 0x4e7b40: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e7b44: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4e7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4e7b48: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4e7b48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e7b4c:
    // 0x4e7b4c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4E7B4Cu;
    {
        const bool branch_taken_0x4e7b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7B4Cu;
        // 0x4e7b50: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7b4c) {
            ctx->pc = 0x4E7B88u;
            goto label_4e7b88;
        }
    }
    ctx->pc = 0x4E7B54u;
    // 0x4e7b54: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e7b58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E7B58u;
    {
        const bool branch_taken_0x4e7b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7b58) {
            ctx->pc = 0x4E7B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7B58u;
            // 0x4e7b5c: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7B74u;
            goto label_4e7b74;
        }
    }
    ctx->pc = 0x4E7B60u;
    // 0x4e7b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e7b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e7b64:
    // 0x4e7b64: 0xc139d36  jal         func_4E74D8
    ctx->pc = 0x4E7B64u;
    SET_GPR_U32(ctx, 31, 0x4E7B6Cu);
    ctx->pc = 0x4E7B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7B64u;
    // 0x4e7b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E74D8u, 0x4E7B64u, 0x4E7B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7B6Cu;
label_4e7b6c:
    // 0x4e7b6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E7B6Cu;
    {
        const bool branch_taken_0x4e7b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7B6Cu;
        // 0x4e7b70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7b6c) {
            ctx->pc = 0x4E7B9Cu;
            goto label_4e7b9c;
        }
    }
    ctx->pc = 0x4E7B74u;
label_4e7b74:
    // 0x4e7b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e7b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e7b78:
    // 0x4e7b78: 0xc139d36  jal         func_4E74D8
    ctx->pc = 0x4E7B78u;
    SET_GPR_U32(ctx, 31, 0x4E7B80u);
    ctx->pc = 0x4E7B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7B78u;
    // 0x4e7b7c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E74D8u, 0x4E7B78u, 0x4E7B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7B80u;
label_4e7b80:
    // 0x4e7b80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E7B80u;
    {
        const bool branch_taken_0x4e7b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7B80u;
        // 0x4e7b84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7b80) {
            ctx->pc = 0x4E7B9Cu;
            goto label_4e7b9c;
        }
    }
    ctx->pc = 0x4E7B88u;
label_4e7b88:
    // 0x4e7b88: 0xc139e2a  jal         func_4E78A8
    ctx->pc = 0x4E7B88u;
    SET_GPR_U32(ctx, 31, 0x4E7B90u);
    ctx->pc = 0x4E7B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7B88u;
    // 0x4e7b8c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E78A8u, 0x4E7B88u, 0x4E7B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7B90u;
label_4e7b90:
    // 0x4e7b90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4e7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7b94:
    // 0x4e7b94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e7b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e7b98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e7b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e7b9c:
    // 0x4e7b9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e7b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e7ba0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e7ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e7ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E7BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7BA4u;
        // 0x4e7ba8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E7BACu;
    // 0x4e7bac: 0x0  nop
    ctx->pc = 0x4e7bacu;
    // NOP
    ctx->pc = 0x4e7bb0u;
}

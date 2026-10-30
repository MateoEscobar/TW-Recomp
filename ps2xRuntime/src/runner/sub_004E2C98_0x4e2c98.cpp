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

// Function: sub_004E2C98
// Address: 0x4e2c98 - 0x4e2df0
void sub_004E2C98_0x4e2c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2C98_0x4e2c98");
#endif

    switch (ctx->pc) {
        case 0x4e2cc8u: goto label_4e2cc8;
        case 0x4e2d04u: goto label_4e2d04;
        case 0x4e2d58u: goto label_4e2d58;
        case 0x4e2d88u: goto label_4e2d88;
        case 0x4e2dc0u: goto label_4e2dc0;
        default: break;
    }

    ctx->pc = 0x4e2c98u;

    // 0x4e2c98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e2c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e2c9c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e2c9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2ca0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e2ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e2ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e2ca8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e2ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4e2cac: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e2cacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e2cb0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4e2cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e2cb4: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4E2CB4u;
    {
        const bool branch_taken_0x4e2cb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2CB4u;
        // 0x4e2cb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2cb4) {
            ctx->pc = 0x4E2CE4u;
            goto label_4e2ce4;
        }
    }
    ctx->pc = 0x4E2CBCu;
    // 0x4e2cbc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e2cc0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4e2cc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2cc4: 0x0  nop
    ctx->pc = 0x4e2cc4u;
    // NOP
label_4e2cc8:
    // 0x4e2cc8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e2ccc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4e2cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4e2cd0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E2CD0u;
    {
        const bool branch_taken_0x4e2cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2cd0) {
            ctx->pc = 0x4E2CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2CD0u;
            // 0x4e2cd4: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2CDCu;
            goto label_4e2cdc;
        }
    }
    ctx->pc = 0x4E2CD8u;
    // 0x4e2cd8: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4e2cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e2cdc:
    // 0x4e2cdc: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E2CDCu;
    {
        const bool branch_taken_0x4e2cdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2cdc) {
            ctx->pc = 0x4E2CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2CDCu;
            // 0x4e2ce0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e2cc8;
        }
    }
    ctx->pc = 0x4E2CE4u;
label_4e2ce4:
    // 0x4e2ce4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E2CE4u;
    {
        const bool branch_taken_0x4e2ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2CE4u;
        // 0x4e2ce8: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2ce4) {
            ctx->pc = 0x4E2DA0u;
            goto label_4e2da0;
        }
    }
    ctx->pc = 0x4E2CECu;
    // 0x4e2cec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e2cf0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4e2cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e2cf4: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E2CF4u;
    {
        const bool branch_taken_0x4e2cf4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2CF4u;
        // 0x4e2cf8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2cf4) {
            ctx->pc = 0x4E2D0Cu;
            goto label_4e2d0c;
        }
    }
    ctx->pc = 0x4E2CFCu;
    // 0x4e2cfc: 0xc138a32  jal         func_4E28C8
    ctx->pc = 0x4E2CFCu;
    SET_GPR_U32(ctx, 31, 0x4E2D04u);
    ctx->pc = 0x4E2D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2CFCu;
    // 0x4e2d00: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E28C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E28C8u, 0x4E2CFCu, 0x4E2D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2D04u;
label_4e2d04:
    // 0x4e2d04: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4E2D04u;
    {
        const bool branch_taken_0x4e2d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D04u;
        // 0x4e2d08: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2d04) {
            ctx->pc = 0x4E2DC4u;
            goto label_4e2dc4;
        }
    }
    ctx->pc = 0x4E2D0Cu;
label_4e2d0c:
    // 0x4e2d0c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e2d10: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E2D10u;
    {
        const bool branch_taken_0x4e2d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D10u;
        // 0x4e2d14: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2d10) {
            ctx->pc = 0x4E2D34u;
            goto label_4e2d34;
        }
    }
    ctx->pc = 0x4E2D18u;
    // 0x4e2d18: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4e2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e2d1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e2d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e2d20: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E2D20u;
    {
        const bool branch_taken_0x4e2d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e2d20) {
            ctx->pc = 0x4E2D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2D20u;
            // 0x4e2d24: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2D38u;
            goto label_4e2d38;
        }
    }
    ctx->pc = 0x4E2D28u;
    // 0x4e2d28: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e2d2c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4E2D2Cu;
    {
        const bool branch_taken_0x4e2d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D2Cu;
        // 0x4e2d30: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2d2c) {
            ctx->pc = 0x4E2DA0u;
            goto label_4e2da0;
        }
    }
    ctx->pc = 0x4E2D34u;
label_4e2d34:
    // 0x4e2d34: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e2d38:
    // 0x4e2d38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e2d3c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E2D3Cu;
    {
        const bool branch_taken_0x4e2d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2d3c) {
            ctx->pc = 0x4E2D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2D3Cu;
            // 0x4e2d40: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2D78u;
            goto label_4e2d78;
        }
    }
    ctx->pc = 0x4E2D44u;
    // 0x4e2d44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e2d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2d48: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e2d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e2d4c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4E2D4Cu;
    {
        const bool branch_taken_0x4e2d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2d4c) {
            ctx->pc = 0x4E2D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2D4Cu;
            // 0x4e2d50: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2DA0u;
            goto label_4e2da0;
        }
    }
    ctx->pc = 0x4E2D54u;
    // 0x4e2d54: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e2d58:
    // 0x4e2d58: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e2d5c: 0x0  nop
    ctx->pc = 0x4e2d5cu;
    // NOP
    // 0x4e2d60: 0x0  nop
    ctx->pc = 0x4e2d60u;
    // NOP
    // 0x4e2d64: 0x0  nop
    ctx->pc = 0x4e2d64u;
    // NOP
    // 0x4e2d68: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E2D68u;
    {
        const bool branch_taken_0x4e2d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2d68) {
            ctx->pc = 0x4E2D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2D68u;
            // 0x4e2d6c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e2d58;
        }
    }
    ctx->pc = 0x4E2D70u;
    // 0x4e2d70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E2D70u;
    {
        const bool branch_taken_0x4e2d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D70u;
        // 0x4e2d74: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2d70) {
            ctx->pc = 0x4E2DA0u;
            goto label_4e2da0;
        }
    }
    ctx->pc = 0x4E2D78u;
label_4e2d78:
    // 0x4e2d78: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e2d7c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E2D7Cu;
    {
        const bool branch_taken_0x4e2d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D7Cu;
        // 0x4e2d80: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2d7c) {
            ctx->pc = 0x4E2DA0u;
            goto label_4e2da0;
        }
    }
    ctx->pc = 0x4E2D84u;
    // 0x4e2d84: 0x0  nop
    ctx->pc = 0x4e2d84u;
    // NOP
label_4e2d88:
    // 0x4e2d88: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e2d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e2d8c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e2d90: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e2d94: 0x0  nop
    ctx->pc = 0x4e2d94u;
    // NOP
    // 0x4e2d98: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E2D98u;
    {
        const bool branch_taken_0x4e2d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D98u;
        // 0x4e2d9c: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2d98) {
            ctx->pc = 0x4E2D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e2d88;
        }
    }
    ctx->pc = 0x4E2DA0u;
label_4e2da0:
    // 0x4e2da0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4e2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2da4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e2da8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4e2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4e2dac: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e2dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e2db0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E2DB0u;
    {
        const bool branch_taken_0x4e2db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2db0) {
            ctx->pc = 0x4E2DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2DB0u;
            // 0x4e2db4: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2DD4u;
            goto label_4e2dd4;
        }
    }
    ctx->pc = 0x4E2DB8u;
    // 0x4e2db8: 0xc138a32  jal         func_4E28C8
    ctx->pc = 0x4E2DB8u;
    SET_GPR_U32(ctx, 31, 0x4E2DC0u);
    ctx->pc = 0x4E2DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2DB8u;
    // 0x4e2dbc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E28C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E28C8u, 0x4E2DB8u, 0x4E2DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2DC0u;
label_4e2dc0:
    // 0x4e2dc0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4e2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2dc4:
    // 0x4e2dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e2dc8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e2dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4e2dcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4E2DCCu;
    {
        const bool branch_taken_0x4e2dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2DCCu;
        // 0x4e2dd0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2dcc) {
            ctx->pc = 0x4E2DD8u;
            goto label_4e2dd8;
        }
    }
    ctx->pc = 0x4E2DD4u;
label_4e2dd4:
    // 0x4e2dd4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e2dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e2dd8:
    // 0x4e2dd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e2dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2ddc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e2ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e2de0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e2de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e2de4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E2DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2DE4u;
        // 0x4e2de8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E2DECu;
    // 0x4e2dec: 0x0  nop
    ctx->pc = 0x4e2decu;
    // NOP
    ctx->pc = 0x4e2df0u;
}

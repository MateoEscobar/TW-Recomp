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

// Function: sub_004E8C60
// Address: 0x4e8c60 - 0x4e8db8
void sub_004E8C60_0x4e8c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8C60_0x4e8c60");
#endif

    switch (ctx->pc) {
        case 0x4e8c90u: goto label_4e8c90;
        case 0x4e8cccu: goto label_4e8ccc;
        case 0x4e8d20u: goto label_4e8d20;
        case 0x4e8d50u: goto label_4e8d50;
        case 0x4e8d88u: goto label_4e8d88;
        default: break;
    }

    ctx->pc = 0x4e8c60u;

    // 0x4e8c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e8c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e8c64: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e8c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8c68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e8c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e8c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e8c70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e8c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4e8c74: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e8c74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e8c78: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4e8c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e8c7c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4E8C7Cu;
    {
        const bool branch_taken_0x4e8c7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8C7Cu;
        // 0x4e8c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8c7c) {
            ctx->pc = 0x4E8CACu;
            goto label_4e8cac;
        }
    }
    ctx->pc = 0x4E8C84u;
    // 0x4e8c84: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e8c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e8c88: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4e8c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8c8c: 0x0  nop
    ctx->pc = 0x4e8c8cu;
    // NOP
label_4e8c90:
    // 0x4e8c90: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e8c94: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4e8c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4e8c98: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E8C98u;
    {
        const bool branch_taken_0x4e8c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8c98) {
            ctx->pc = 0x4E8C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8C98u;
            // 0x4e8c9c: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8CA4u;
            goto label_4e8ca4;
        }
    }
    ctx->pc = 0x4E8CA0u;
    // 0x4e8ca0: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4e8ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e8ca4:
    // 0x4e8ca4: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E8CA4u;
    {
        const bool branch_taken_0x4e8ca4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8ca4) {
            ctx->pc = 0x4E8CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8CA4u;
            // 0x4e8ca8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e8c90;
        }
    }
    ctx->pc = 0x4E8CACu;
label_4e8cac:
    // 0x4e8cac: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E8CACu;
    {
        const bool branch_taken_0x4e8cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8CACu;
        // 0x4e8cb0: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8cac) {
            ctx->pc = 0x4E8D68u;
            goto label_4e8d68;
        }
    }
    ctx->pc = 0x4E8CB4u;
    // 0x4e8cb4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e8cb8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4e8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e8cbc: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E8CBCu;
    {
        const bool branch_taken_0x4e8cbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8CBCu;
        // 0x4e8cc0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8cbc) {
            ctx->pc = 0x4E8CD4u;
            goto label_4e8cd4;
        }
    }
    ctx->pc = 0x4E8CC4u;
    // 0x4e8cc4: 0xc13a224  jal         func_4E8890
    ctx->pc = 0x4E8CC4u;
    SET_GPR_U32(ctx, 31, 0x4E8CCCu);
    ctx->pc = 0x4E8CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8CC4u;
    // 0x4e8cc8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8890u, 0x4E8CC4u, 0x4E8CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8CCCu;
label_4e8ccc:
    // 0x4e8ccc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4E8CCCu;
    {
        const bool branch_taken_0x4e8ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8CCCu;
        // 0x4e8cd0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8ccc) {
            ctx->pc = 0x4E8D8Cu;
            goto label_4e8d8c;
        }
    }
    ctx->pc = 0x4E8CD4u;
label_4e8cd4:
    // 0x4e8cd4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e8cd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E8CD8u;
    {
        const bool branch_taken_0x4e8cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8CD8u;
        // 0x4e8cdc: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8cd8) {
            ctx->pc = 0x4E8CFCu;
            goto label_4e8cfc;
        }
    }
    ctx->pc = 0x4E8CE0u;
    // 0x4e8ce0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4e8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e8ce4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e8ce8: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E8CE8u;
    {
        const bool branch_taken_0x4e8ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e8ce8) {
            ctx->pc = 0x4E8CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8CE8u;
            // 0x4e8cec: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8D00u;
            goto label_4e8d00;
        }
    }
    ctx->pc = 0x4E8CF0u;
    // 0x4e8cf0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e8cf4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4E8CF4u;
    {
        const bool branch_taken_0x4e8cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8CF4u;
        // 0x4e8cf8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8cf4) {
            ctx->pc = 0x4E8D68u;
            goto label_4e8d68;
        }
    }
    ctx->pc = 0x4E8CFCu;
label_4e8cfc:
    // 0x4e8cfc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e8cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e8d00:
    // 0x4e8d00: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e8d04: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E8D04u;
    {
        const bool branch_taken_0x4e8d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8d04) {
            ctx->pc = 0x4E8D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8D04u;
            // 0x4e8d08: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8D40u;
            goto label_4e8d40;
        }
    }
    ctx->pc = 0x4E8D0Cu;
    // 0x4e8d0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e8d0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8d10: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e8d14: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4E8D14u;
    {
        const bool branch_taken_0x4e8d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8d14) {
            ctx->pc = 0x4E8D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8D14u;
            // 0x4e8d18: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8D68u;
            goto label_4e8d68;
        }
    }
    ctx->pc = 0x4E8D1Cu;
    // 0x4e8d1c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e8d20:
    // 0x4e8d20: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e8d24: 0x0  nop
    ctx->pc = 0x4e8d24u;
    // NOP
    // 0x4e8d28: 0x0  nop
    ctx->pc = 0x4e8d28u;
    // NOP
    // 0x4e8d2c: 0x0  nop
    ctx->pc = 0x4e8d2cu;
    // NOP
    // 0x4e8d30: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E8D30u;
    {
        const bool branch_taken_0x4e8d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8d30) {
            ctx->pc = 0x4E8D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8D30u;
            // 0x4e8d34: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e8d20;
        }
    }
    ctx->pc = 0x4E8D38u;
    // 0x4e8d38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E8D38u;
    {
        const bool branch_taken_0x4e8d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8D38u;
        // 0x4e8d3c: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8d38) {
            ctx->pc = 0x4E8D68u;
            goto label_4e8d68;
        }
    }
    ctx->pc = 0x4E8D40u;
label_4e8d40:
    // 0x4e8d40: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e8d44: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E8D44u;
    {
        const bool branch_taken_0x4e8d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8D44u;
        // 0x4e8d48: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8d44) {
            ctx->pc = 0x4E8D68u;
            goto label_4e8d68;
        }
    }
    ctx->pc = 0x4E8D4Cu;
    // 0x4e8d4c: 0x0  nop
    ctx->pc = 0x4e8d4cu;
    // NOP
label_4e8d50:
    // 0x4e8d50: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e8d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e8d54: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e8d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e8d58: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e8d5c: 0x0  nop
    ctx->pc = 0x4e8d5cu;
    // NOP
    // 0x4e8d60: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E8D60u;
    {
        const bool branch_taken_0x4e8d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8D60u;
        // 0x4e8d64: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8d60) {
            ctx->pc = 0x4E8D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e8d50;
        }
    }
    ctx->pc = 0x4E8D68u;
label_4e8d68:
    // 0x4e8d68: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4e8d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e8d6c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e8d70: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4e8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4e8d74: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e8d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e8d78: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E8D78u;
    {
        const bool branch_taken_0x4e8d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8d78) {
            ctx->pc = 0x4E8D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8D78u;
            // 0x4e8d7c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8D9Cu;
            goto label_4e8d9c;
        }
    }
    ctx->pc = 0x4E8D80u;
    // 0x4e8d80: 0xc13a224  jal         func_4E8890
    ctx->pc = 0x4E8D80u;
    SET_GPR_U32(ctx, 31, 0x4E8D88u);
    ctx->pc = 0x4E8D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8D80u;
    // 0x4e8d84: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8890u, 0x4E8D80u, 0x4E8D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8D88u;
label_4e8d88:
    // 0x4e8d88: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4e8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8d8c:
    // 0x4e8d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e8d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e8d90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e8d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4e8d94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4E8D94u;
    {
        const bool branch_taken_0x4e8d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8D94u;
        // 0x4e8d98: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8d94) {
            ctx->pc = 0x4E8DA0u;
            goto label_4e8da0;
        }
    }
    ctx->pc = 0x4E8D9Cu;
label_4e8d9c:
    // 0x4e8d9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e8d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e8da0:
    // 0x4e8da0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e8da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8da4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e8da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e8da8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e8da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e8dac: 0x3e00008  jr          $ra
    ctx->pc = 0x4E8DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8DACu;
        // 0x4e8db0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E8DB4u;
    // 0x4e8db4: 0x0  nop
    ctx->pc = 0x4e8db4u;
    // NOP
    ctx->pc = 0x4e8db8u;
}

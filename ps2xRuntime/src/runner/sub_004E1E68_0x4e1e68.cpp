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

// Function: sub_004E1E68
// Address: 0x4e1e68 - 0x4e1fc0
void sub_004E1E68_0x4e1e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1E68_0x4e1e68");
#endif

    switch (ctx->pc) {
        case 0x4e1e98u: goto label_4e1e98;
        case 0x4e1ed4u: goto label_4e1ed4;
        case 0x4e1f28u: goto label_4e1f28;
        case 0x4e1f58u: goto label_4e1f58;
        case 0x4e1f90u: goto label_4e1f90;
        default: break;
    }

    ctx->pc = 0x4e1e68u;

    // 0x4e1e68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e1e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e1e6c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e1e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1e70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e1e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e1e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e1e78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e1e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4e1e7c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e1e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e1e80: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4e1e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e1e84: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4E1E84u;
    {
        const bool branch_taken_0x4e1e84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1E84u;
        // 0x4e1e88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1e84) {
            ctx->pc = 0x4E1EB4u;
            goto label_4e1eb4;
        }
    }
    ctx->pc = 0x4E1E8Cu;
    // 0x4e1e8c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e1e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e1e90: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4e1e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1e94: 0x0  nop
    ctx->pc = 0x4e1e94u;
    // NOP
label_4e1e98:
    // 0x4e1e98: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e1e9c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4e1e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4e1ea0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E1EA0u;
    {
        const bool branch_taken_0x4e1ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1ea0) {
            ctx->pc = 0x4E1EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1EA0u;
            // 0x4e1ea4: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1EACu;
            goto label_4e1eac;
        }
    }
    ctx->pc = 0x4E1EA8u;
    // 0x4e1ea8: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4e1ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e1eac:
    // 0x4e1eac: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E1EACu;
    {
        const bool branch_taken_0x4e1eac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1eac) {
            ctx->pc = 0x4E1EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1EACu;
            // 0x4e1eb0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1e98;
        }
    }
    ctx->pc = 0x4E1EB4u;
label_4e1eb4:
    // 0x4e1eb4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E1EB4u;
    {
        const bool branch_taken_0x4e1eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1EB4u;
        // 0x4e1eb8: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1eb4) {
            ctx->pc = 0x4E1F70u;
            goto label_4e1f70;
        }
    }
    ctx->pc = 0x4E1EBCu;
    // 0x4e1ebc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e1ec0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4e1ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e1ec4: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E1EC4u;
    {
        const bool branch_taken_0x4e1ec4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1EC4u;
        // 0x4e1ec8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1ec4) {
            ctx->pc = 0x4E1EDCu;
            goto label_4e1edc;
        }
    }
    ctx->pc = 0x4E1ECCu;
    // 0x4e1ecc: 0xc1386a6  jal         func_4E1A98
    ctx->pc = 0x4E1ECCu;
    SET_GPR_U32(ctx, 31, 0x4E1ED4u);
    ctx->pc = 0x4E1ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1ECCu;
    // 0x4e1ed0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1A98u, 0x4E1ECCu, 0x4E1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1ED4u;
label_4e1ed4:
    // 0x4e1ed4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4E1ED4u;
    {
        const bool branch_taken_0x4e1ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1ED4u;
        // 0x4e1ed8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1ed4) {
            ctx->pc = 0x4E1F94u;
            goto label_4e1f94;
        }
    }
    ctx->pc = 0x4E1EDCu;
label_4e1edc:
    // 0x4e1edc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e1ee0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E1EE0u;
    {
        const bool branch_taken_0x4e1ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1EE0u;
        // 0x4e1ee4: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1ee0) {
            ctx->pc = 0x4E1F04u;
            goto label_4e1f04;
        }
    }
    ctx->pc = 0x4E1EE8u;
    // 0x4e1ee8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4e1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e1eec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e1eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e1ef0: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E1EF0u;
    {
        const bool branch_taken_0x4e1ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e1ef0) {
            ctx->pc = 0x4E1EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1EF0u;
            // 0x4e1ef4: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1F08u;
            goto label_4e1f08;
        }
    }
    ctx->pc = 0x4E1EF8u;
    // 0x4e1ef8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e1efc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4E1EFCu;
    {
        const bool branch_taken_0x4e1efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1EFCu;
        // 0x4e1f00: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1efc) {
            ctx->pc = 0x4E1F70u;
            goto label_4e1f70;
        }
    }
    ctx->pc = 0x4E1F04u;
label_4e1f04:
    // 0x4e1f04: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e1f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e1f08:
    // 0x4e1f08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e1f0c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E1F0Cu;
    {
        const bool branch_taken_0x4e1f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1f0c) {
            ctx->pc = 0x4E1F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1F0Cu;
            // 0x4e1f10: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1F48u;
            goto label_4e1f48;
        }
    }
    ctx->pc = 0x4E1F14u;
    // 0x4e1f14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e1f14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1f18: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e1f1c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4E1F1Cu;
    {
        const bool branch_taken_0x4e1f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1f1c) {
            ctx->pc = 0x4E1F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1F1Cu;
            // 0x4e1f20: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1F70u;
            goto label_4e1f70;
        }
    }
    ctx->pc = 0x4E1F24u;
    // 0x4e1f24: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e1f28:
    // 0x4e1f28: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e1f2c: 0x0  nop
    ctx->pc = 0x4e1f2cu;
    // NOP
    // 0x4e1f30: 0x0  nop
    ctx->pc = 0x4e1f30u;
    // NOP
    // 0x4e1f34: 0x0  nop
    ctx->pc = 0x4e1f34u;
    // NOP
    // 0x4e1f38: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E1F38u;
    {
        const bool branch_taken_0x4e1f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1f38) {
            ctx->pc = 0x4E1F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1F38u;
            // 0x4e1f3c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1f28;
        }
    }
    ctx->pc = 0x4E1F40u;
    // 0x4e1f40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E1F40u;
    {
        const bool branch_taken_0x4e1f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1F40u;
        // 0x4e1f44: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1f40) {
            ctx->pc = 0x4E1F70u;
            goto label_4e1f70;
        }
    }
    ctx->pc = 0x4E1F48u;
label_4e1f48:
    // 0x4e1f48: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e1f4c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E1F4Cu;
    {
        const bool branch_taken_0x4e1f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1F4Cu;
        // 0x4e1f50: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1f4c) {
            ctx->pc = 0x4E1F70u;
            goto label_4e1f70;
        }
    }
    ctx->pc = 0x4E1F54u;
    // 0x4e1f54: 0x0  nop
    ctx->pc = 0x4e1f54u;
    // NOP
label_4e1f58:
    // 0x4e1f58: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e1f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e1f5c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e1f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e1f60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e1f64: 0x0  nop
    ctx->pc = 0x4e1f64u;
    // NOP
    // 0x4e1f68: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E1F68u;
    {
        const bool branch_taken_0x4e1f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1F68u;
        // 0x4e1f6c: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1f68) {
            ctx->pc = 0x4E1F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1f58;
        }
    }
    ctx->pc = 0x4E1F70u;
label_4e1f70:
    // 0x4e1f70: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4e1f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e1f74: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e1f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e1f78: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4e1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4e1f7c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e1f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e1f80: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E1F80u;
    {
        const bool branch_taken_0x4e1f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1f80) {
            ctx->pc = 0x4E1F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1F80u;
            // 0x4e1f84: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1FA4u;
            goto label_4e1fa4;
        }
    }
    ctx->pc = 0x4E1F88u;
    // 0x4e1f88: 0xc1386a6  jal         func_4E1A98
    ctx->pc = 0x4E1F88u;
    SET_GPR_U32(ctx, 31, 0x4E1F90u);
    ctx->pc = 0x4E1F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1F88u;
    // 0x4e1f8c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1A98u, 0x4E1F88u, 0x4E1F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1F90u;
label_4e1f90:
    // 0x4e1f90: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4e1f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1f94:
    // 0x4e1f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e1f98: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e1f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4e1f9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4E1F9Cu;
    {
        const bool branch_taken_0x4e1f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1F9Cu;
        // 0x4e1fa0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1f9c) {
            ctx->pc = 0x4E1FA8u;
            goto label_4e1fa8;
        }
    }
    ctx->pc = 0x4E1FA4u;
label_4e1fa4:
    // 0x4e1fa4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e1fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e1fa8:
    // 0x4e1fa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e1fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1fac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e1facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e1fb0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e1fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e1fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1FB4u;
        // 0x4e1fb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E1FBCu;
    // 0x4e1fbc: 0x0  nop
    ctx->pc = 0x4e1fbcu;
    // NOP
    ctx->pc = 0x4e1fc0u;
}

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

// Function: sub_004E6EF0
// Address: 0x4e6ef0 - 0x4e7048
void sub_004E6EF0_0x4e6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6EF0_0x4e6ef0");
#endif

    switch (ctx->pc) {
        case 0x4e6f20u: goto label_4e6f20;
        case 0x4e6f5cu: goto label_4e6f5c;
        case 0x4e6fb0u: goto label_4e6fb0;
        case 0x4e6fe0u: goto label_4e6fe0;
        case 0x4e7018u: goto label_4e7018;
        default: break;
    }

    ctx->pc = 0x4e6ef0u;

    // 0x4e6ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e6ef4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e6ef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6ef8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e6ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e6efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e6f00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e6f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4e6f04: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e6f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e6f08: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4e6f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e6f0c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4E6F0Cu;
    {
        const bool branch_taken_0x4e6f0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6F0Cu;
        // 0x4e6f10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6f0c) {
            ctx->pc = 0x4E6F3Cu;
            goto label_4e6f3c;
        }
    }
    ctx->pc = 0x4E6F14u;
    // 0x4e6f14: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e6f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e6f18: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4e6f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6f1c: 0x0  nop
    ctx->pc = 0x4e6f1cu;
    // NOP
label_4e6f20:
    // 0x4e6f20: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e6f24: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4e6f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4e6f28: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E6F28u;
    {
        const bool branch_taken_0x4e6f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6f28) {
            ctx->pc = 0x4E6F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F28u;
            // 0x4e6f2c: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6F34u;
            goto label_4e6f34;
        }
    }
    ctx->pc = 0x4E6F30u;
    // 0x4e6f30: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4e6f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e6f34:
    // 0x4e6f34: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E6F34u;
    {
        const bool branch_taken_0x4e6f34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6f34) {
            ctx->pc = 0x4E6F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F34u;
            // 0x4e6f38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e6f20;
        }
    }
    ctx->pc = 0x4E6F3Cu;
label_4e6f3c:
    // 0x4e6f3c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E6F3Cu;
    {
        const bool branch_taken_0x4e6f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6F3Cu;
        // 0x4e6f40: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6f3c) {
            ctx->pc = 0x4E6FF8u;
            goto label_4e6ff8;
        }
    }
    ctx->pc = 0x4E6F44u;
    // 0x4e6f44: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e6f48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4e6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e6f4c: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E6F4Cu;
    {
        const bool branch_taken_0x4e6f4c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6F4Cu;
        // 0x4e6f50: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6f4c) {
            ctx->pc = 0x4E6F64u;
            goto label_4e6f64;
        }
    }
    ctx->pc = 0x4E6F54u;
    // 0x4e6f54: 0xc139ac8  jal         func_4E6B20
    ctx->pc = 0x4E6F54u;
    SET_GPR_U32(ctx, 31, 0x4E6F5Cu);
    ctx->pc = 0x4E6F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6F54u;
    // 0x4e6f58: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6B20u, 0x4E6F54u, 0x4E6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6F5Cu;
label_4e6f5c:
    // 0x4e6f5c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4E6F5Cu;
    {
        const bool branch_taken_0x4e6f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6F5Cu;
        // 0x4e6f60: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6f5c) {
            ctx->pc = 0x4E701Cu;
            goto label_4e701c;
        }
    }
    ctx->pc = 0x4E6F64u;
label_4e6f64:
    // 0x4e6f64: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e6f68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E6F68u;
    {
        const bool branch_taken_0x4e6f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6F68u;
        // 0x4e6f6c: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6f68) {
            ctx->pc = 0x4E6F8Cu;
            goto label_4e6f8c;
        }
    }
    ctx->pc = 0x4E6F70u;
    // 0x4e6f70: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4e6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e6f74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e6f78: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E6F78u;
    {
        const bool branch_taken_0x4e6f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e6f78) {
            ctx->pc = 0x4E6F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F78u;
            // 0x4e6f7c: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6F90u;
            goto label_4e6f90;
        }
    }
    ctx->pc = 0x4E6F80u;
    // 0x4e6f80: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e6f84: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4E6F84u;
    {
        const bool branch_taken_0x4e6f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6F84u;
        // 0x4e6f88: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6f84) {
            ctx->pc = 0x4E6FF8u;
            goto label_4e6ff8;
        }
    }
    ctx->pc = 0x4E6F8Cu;
label_4e6f8c:
    // 0x4e6f8c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e6f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e6f90:
    // 0x4e6f90: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e6f94: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E6F94u;
    {
        const bool branch_taken_0x4e6f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6f94) {
            ctx->pc = 0x4E6F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F94u;
            // 0x4e6f98: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6FD0u;
            goto label_4e6fd0;
        }
    }
    ctx->pc = 0x4E6F9Cu;
    // 0x4e6f9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e6f9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6fa0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e6fa4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4E6FA4u;
    {
        const bool branch_taken_0x4e6fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6fa4) {
            ctx->pc = 0x4E6FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6FA4u;
            // 0x4e6fa8: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6FF8u;
            goto label_4e6ff8;
        }
    }
    ctx->pc = 0x4E6FACu;
    // 0x4e6fac: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e6facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e6fb0:
    // 0x4e6fb0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e6fb4: 0x0  nop
    ctx->pc = 0x4e6fb4u;
    // NOP
    // 0x4e6fb8: 0x0  nop
    ctx->pc = 0x4e6fb8u;
    // NOP
    // 0x4e6fbc: 0x0  nop
    ctx->pc = 0x4e6fbcu;
    // NOP
    // 0x4e6fc0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E6FC0u;
    {
        const bool branch_taken_0x4e6fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6fc0) {
            ctx->pc = 0x4E6FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6FC0u;
            // 0x4e6fc4: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e6fb0;
        }
    }
    ctx->pc = 0x4E6FC8u;
    // 0x4e6fc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E6FC8u;
    {
        const bool branch_taken_0x4e6fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6FC8u;
        // 0x4e6fcc: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6fc8) {
            ctx->pc = 0x4E6FF8u;
            goto label_4e6ff8;
        }
    }
    ctx->pc = 0x4E6FD0u;
label_4e6fd0:
    // 0x4e6fd0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e6fd4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E6FD4u;
    {
        const bool branch_taken_0x4e6fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6FD4u;
        // 0x4e6fd8: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6fd4) {
            ctx->pc = 0x4E6FF8u;
            goto label_4e6ff8;
        }
    }
    ctx->pc = 0x4E6FDCu;
    // 0x4e6fdc: 0x0  nop
    ctx->pc = 0x4e6fdcu;
    // NOP
label_4e6fe0:
    // 0x4e6fe0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e6fe4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e6fe8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e6fec: 0x0  nop
    ctx->pc = 0x4e6fecu;
    // NOP
    // 0x4e6ff0: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E6FF0u;
    {
        const bool branch_taken_0x4e6ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6FF0u;
        // 0x4e6ff4: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6ff0) {
            ctx->pc = 0x4E6FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e6fe0;
        }
    }
    ctx->pc = 0x4E6FF8u;
label_4e6ff8:
    // 0x4e6ff8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4e6ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6ffc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e7000: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4e7000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4e7004: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e7004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e7008: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E7008u;
    {
        const bool branch_taken_0x4e7008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7008) {
            ctx->pc = 0x4E700Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7008u;
            // 0x4e700c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E702Cu;
            goto label_4e702c;
        }
    }
    ctx->pc = 0x4E7010u;
    // 0x4e7010: 0xc139ac8  jal         func_4E6B20
    ctx->pc = 0x4E7010u;
    SET_GPR_U32(ctx, 31, 0x4E7018u);
    ctx->pc = 0x4E7014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7010u;
    // 0x4e7014: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6B20u, 0x4E7010u, 0x4E7018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7018u;
label_4e7018:
    // 0x4e7018: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4e7018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e701c:
    // 0x4e701c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e7020: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e7020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4e7024: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4E7024u;
    {
        const bool branch_taken_0x4e7024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7024u;
        // 0x4e7028: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7024) {
            ctx->pc = 0x4E7030u;
            goto label_4e7030;
        }
    }
    ctx->pc = 0x4E702Cu;
label_4e702c:
    // 0x4e702c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e702cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e7030:
    // 0x4e7030: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e7030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7034: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e7034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e7038: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e7038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e703c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E703Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E703Cu;
        // 0x4e7040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E703Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E7044u;
    // 0x4e7044: 0x0  nop
    ctx->pc = 0x4e7044u;
    // NOP
    ctx->pc = 0x4e7048u;
}

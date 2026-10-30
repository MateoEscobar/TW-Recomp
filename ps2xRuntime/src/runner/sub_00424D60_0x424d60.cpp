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

// Function: sub_00424D60
// Address: 0x424d60 - 0x424e50
void sub_00424D60_0x424d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424D60_0x424d60");
#endif

    switch (ctx->pc) {
        case 0x424d88u: goto label_424d88;
        case 0x424da0u: goto label_424da0;
        case 0x424dc8u: goto label_424dc8;
        case 0x424e00u: goto label_424e00;
        case 0x424e20u: goto label_424e20;
        default: break;
    }

    ctx->pc = 0x424d60u;

    // 0x424d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x424d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x424d64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x424d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x424d68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x424d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x424d6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x424d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424d70: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x424d70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x424d74: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x424d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x424d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x424d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x424d7c: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x424d7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x424d80: 0xc1078ec  jal         func_41E3B0
    ctx->pc = 0x424D80u;
    SET_GPR_U32(ctx, 31, 0x424D88u);
    ctx->pc = 0x424D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424D80u;
    // 0x424d84: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3B0u, 0x424D80u, 0x424D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424D88u;
label_424d88:
    // 0x424d88: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x424D88u;
    {
        const bool branch_taken_0x424d88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x424D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D88u;
        // 0x424d8c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424d88) {
            ctx->pc = 0x424DE8u;
            goto label_424de8;
        }
    }
    ctx->pc = 0x424D90u;
    // 0x424d90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x424d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424d94: 0x2443e8f8  addiu       $v1, $v0, -0x1708
    ctx->pc = 0x424d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961400));
    // 0x424d98: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x424d98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x424d9c: 0x0  nop
    ctx->pc = 0x424d9cu;
    // NOP
label_424da0:
    // 0x424da0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x424da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x424da4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x424da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x424da8: 0x2c820014  sltiu       $v0, $a0, 0x14
    ctx->pc = 0x424da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x424dac: 0x0  nop
    ctx->pc = 0x424dacu;
    // NOP
    // 0x424db0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x424DB0u;
    {
        const bool branch_taken_0x424db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424DB0u;
        // 0x424db4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424db0) {
            ctx->pc = 0x424DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424da0;
        }
    }
    ctx->pc = 0x424DB8u;
    // 0x424db8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x424db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x424dbc: 0x24c5e948  addiu       $a1, $a2, -0x16B8
    ctx->pc = 0x424dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961480));
    // 0x424dc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x424dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424dc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x424dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_424dc8:
    // 0x424dc8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x424dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x424dcc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x424dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x424dd0: 0x2c820014  sltiu       $v0, $a0, 0x14
    ctx->pc = 0x424dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x424dd4: 0x0  nop
    ctx->pc = 0x424dd4u;
    // NOP
    // 0x424dd8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x424DD8u;
    {
        const bool branch_taken_0x424dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424DD8u;
        // 0x424ddc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424dd8) {
            ctx->pc = 0x424DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424dc8;
        }
    }
    ctx->pc = 0x424DE0u;
    // 0x424de0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x424DE0u;
    {
        const bool branch_taken_0x424de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x424DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424DE0u;
        // 0x424de4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424de0) {
            ctx->pc = 0x424E3Cu;
            goto label_424e3c;
        }
    }
    ctx->pc = 0x424DE8u;
label_424de8:
    // 0x424de8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x424de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x424dec: 0x2445e8f8  addiu       $a1, $v0, -0x1708
    ctx->pc = 0x424decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961400));
    // 0x424df0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x424df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424df4: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x424df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x424df8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x424df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x424dfc: 0x0  nop
    ctx->pc = 0x424dfcu;
    // NOP
label_424e00:
    // 0x424e00: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x424e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x424e04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x424e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x424e08: 0x2c820014  sltiu       $v0, $a0, 0x14
    ctx->pc = 0x424e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x424e0c: 0x0  nop
    ctx->pc = 0x424e0cu;
    // NOP
    // 0x424e10: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x424E10u;
    {
        const bool branch_taken_0x424e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E10u;
        // 0x424e14: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e10) {
            ctx->pc = 0x424E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424e00;
        }
    }
    ctx->pc = 0x424E18u;
    // 0x424e18: 0x24c4e948  addiu       $a0, $a2, -0x16B8
    ctx->pc = 0x424e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961480));
    // 0x424e1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x424e1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424e20:
    // 0x424e20: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x424e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x424e24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x424e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x424e28: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x424e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x424e2c: 0x0  nop
    ctx->pc = 0x424e2cu;
    // NOP
    // 0x424e30: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x424E30u;
    {
        const bool branch_taken_0x424e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E30u;
        // 0x424e34: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e30) {
            ctx->pc = 0x424E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424e20;
        }
    }
    ctx->pc = 0x424E38u;
    // 0x424e38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x424e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_424e3c:
    // 0x424e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x424e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x424e40: 0x3e00008  jr          $ra
    ctx->pc = 0x424E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E40u;
        // 0x424e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424E48u;
    // 0x424e48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x424e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x424e4c: 0x0  nop
    ctx->pc = 0x424e4cu;
    // NOP
    ctx->pc = 0x424e50u;
}

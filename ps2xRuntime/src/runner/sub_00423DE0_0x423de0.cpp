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

// Function: sub_00423DE0
// Address: 0x423de0 - 0x423eb0
void sub_00423DE0_0x423de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423DE0_0x423de0");
#endif

    switch (ctx->pc) {
        case 0x423e18u: goto label_423e18;
        case 0x423e50u: goto label_423e50;
        case 0x423e58u: goto label_423e58;
        default: break;
    }

    ctx->pc = 0x423de0u;

    // 0x423de0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x423de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x423de4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x423de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x423de8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x423de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x423dec: 0x24e2003e  addiu       $v0, $a3, 0x3E
    ctx->pc = 0x423decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 62));
    // 0x423df0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x423df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x423df4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x423df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423df8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x423df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x423dfc: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x423dfcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x423e00: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x423e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x423e04: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x423e04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x423e08: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x423e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x423e0c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x423e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x423e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423e14: 0x0  nop
    ctx->pc = 0x423e14u;
    // NOP
label_423e18:
    // 0x423e18: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x423e18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x423e1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x423e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x423e20: 0x0  nop
    ctx->pc = 0x423e20u;
    // NOP
    // 0x423e24: 0x0  nop
    ctx->pc = 0x423e24u;
    // NOP
    // 0x423e28: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x423E28u;
    {
        const bool branch_taken_0x423e28 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x423E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423E28u;
        // 0x423e2c: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423e28) {
            ctx->pc = 0x423E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423e18;
        }
    }
    ctx->pc = 0x423E30u;
    // 0x423e30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x423e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x423e34: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x423E34u;
    {
        const bool branch_taken_0x423e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423E34u;
        // 0x423e38: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423e34) {
            ctx->pc = 0x423E94u;
            goto label_423e94;
        }
    }
    ctx->pc = 0x423E3Cu;
    // 0x423e3c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x423e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x423e40: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x423E40u;
    {
        const bool branch_taken_0x423e40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x423E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423E40u;
        // 0x423e44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423e40) {
            ctx->pc = 0x423E90u;
            goto label_423e90;
        }
    }
    ctx->pc = 0x423E48u;
    // 0x423e48: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x423e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423e4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x423e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_423e50:
    // 0x423e50: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x423E50u;
    SET_GPR_U32(ctx, 31, 0x423E58u);
    ctx->pc = 0x423E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423E50u;
    // 0x423e54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x423E50u, 0x423E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423E58u;
label_423e58:
    // 0x423e58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x423e58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423e5c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x423e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x423e60: 0x54540007  bnel        $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x423E60u;
    {
        const bool branch_taken_0x423e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x423e60) {
            ctx->pc = 0x423E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423E60u;
            // 0x423e64: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423E80u;
            goto label_423e80;
        }
    }
    ctx->pc = 0x423E68u;
    // 0x423e68: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x423e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x423e6c: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x423E6Cu;
    {
        const bool branch_taken_0x423e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x423e6c) {
            ctx->pc = 0x423E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423E6Cu;
            // 0x423e70: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423E80u;
            goto label_423e80;
        }
    }
    ctx->pc = 0x423E74u;
    // 0x423e74: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x423e74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x423e78: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x423e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x423e7c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x423e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_423e80:
    // 0x423e80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x423e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x423e84: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x423e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x423e88: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x423E88u;
    {
        const bool branch_taken_0x423e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423E88u;
        // 0x423e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423e88) {
            ctx->pc = 0x423E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423e50;
        }
    }
    ctx->pc = 0x423E90u;
label_423e90:
    // 0x423e90: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x423e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_423e94:
    // 0x423e94: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x423e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x423e98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x423e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x423e9c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x423e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x423ea0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x423ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x423ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x423EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423EA8u;
        // 0x423eac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423EB0u;
}

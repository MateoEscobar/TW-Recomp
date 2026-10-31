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

// Function: sub_00423EB0
// Address: 0x423eb0 - 0x423f70
void sub_00423EB0_0x423eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423EB0_0x423eb0");
#endif

    switch (ctx->pc) {
        case 0x423ee0u: goto label_423ee0;
        case 0x423f18u: goto label_423f18;
        case 0x423f20u: goto label_423f20;
        default: break;
    }

    ctx->pc = 0x423eb0u;

    // 0x423eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x423eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x423eb4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x423eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x423eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x423eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x423ebc: 0x24c2003e  addiu       $v0, $a2, 0x3E
    ctx->pc = 0x423ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 62));
    // 0x423ec0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x423ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x423ec4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x423ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423ec8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x423ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x423ecc: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x423eccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x423ed0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x423ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x423ed4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x423ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x423ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423edc: 0x0  nop
    ctx->pc = 0x423edcu;
    // NOP
label_423ee0:
    // 0x423ee0: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x423ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x423ee4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x423ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x423ee8: 0x0  nop
    ctx->pc = 0x423ee8u;
    // NOP
    // 0x423eec: 0x0  nop
    ctx->pc = 0x423eecu;
    // NOP
    // 0x423ef0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x423EF0u;
    {
        const bool branch_taken_0x423ef0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x423EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423EF0u;
        // 0x423ef4: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423ef0) {
            ctx->pc = 0x423EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423ee0;
        }
    }
    ctx->pc = 0x423EF8u;
    // 0x423ef8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x423ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x423efc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x423EFCu;
    {
        const bool branch_taken_0x423efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423EFCu;
        // 0x423f00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423efc) {
            ctx->pc = 0x423F4Cu;
            goto label_423f4c;
        }
    }
    ctx->pc = 0x423F04u;
    // 0x423f04: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x423f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x423f08: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x423F08u;
    {
        const bool branch_taken_0x423f08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x423F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F08u;
        // 0x423f0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423f08) {
            ctx->pc = 0x423F48u;
            goto label_423f48;
        }
    }
    ctx->pc = 0x423F10u;
    // 0x423f10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x423f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x423f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_423f18:
    // 0x423f18: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x423F18u;
    SET_GPR_U32(ctx, 31, 0x423F20u);
    ctx->pc = 0x423F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423F18u;
    // 0x423f1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x423F18u, 0x423F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423F20u;
label_423f20:
    // 0x423f20: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x423f20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x423f24: 0x54730004  bnel        $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x423F24u;
    {
        const bool branch_taken_0x423f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x423f24) {
            ctx->pc = 0x423F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423F24u;
            // 0x423f28: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423F38u;
            goto label_423f38;
        }
    }
    ctx->pc = 0x423F2Cu;
    // 0x423f2c: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x423f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x423f30: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x423f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x423f34: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x423f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_423f38:
    // 0x423f38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x423f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x423f3c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x423f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x423f40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x423F40u;
    {
        const bool branch_taken_0x423f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F40u;
        // 0x423f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423f40) {
            ctx->pc = 0x423F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423f18;
        }
    }
    ctx->pc = 0x423F48u;
label_423f48:
    // 0x423f48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x423f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_423f4c:
    // 0x423f4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x423f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x423f50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x423f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x423f54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x423f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x423f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x423F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F5Cu;
        // 0x423f60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423F64u;
    // 0x423f64: 0x0  nop
    ctx->pc = 0x423f64u;
    // NOP
    // 0x423f68: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x423f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x423f6c: 0x0  nop
    ctx->pc = 0x423f6cu;
    // NOP
    ctx->pc = 0x423f70u;
}

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

// Function: sub_00330ED8
// Address: 0x330ed8 - 0x330f98
void sub_00330ED8_0x330ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330ED8_0x330ed8");
#endif

    switch (ctx->pc) {
        case 0x330f18u: goto label_330f18;
        case 0x330f30u: goto label_330f30;
        case 0x330f48u: goto label_330f48;
        case 0x330f5cu: goto label_330f5c;
        default: break;
    }

    ctx->pc = 0x330ed8u;

    // 0x330ed8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x330ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x330edc: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x330edcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x330ee0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x330ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x330ee4: 0x24c66020  addiu       $a2, $a2, 0x6020
    ctx->pc = 0x330ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24608));
    // 0x330ee8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x330ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x330eec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x330eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ef0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x330ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x330ef4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x330ef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ef8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x330ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x330efc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x330efcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f00: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x330f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x330f04: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x330f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x330f08: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x330f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x330f0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330f10: 0xc0c9154  jal         func_324550
    ctx->pc = 0x330F10u;
    SET_GPR_U32(ctx, 31, 0x330F18u);
    ctx->pc = 0x330F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F10u;
    // 0x330f14: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324550u, 0x330F10u, 0x330F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F18u;
label_330f18:
    // 0x330f18: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x330f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x330f1c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x330F1Cu;
    {
        const bool branch_taken_0x330f1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x330F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F1Cu;
        // 0x330f20: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f1c) {
            ctx->pc = 0x330F70u;
            goto label_330f70;
        }
    }
    ctx->pc = 0x330F24u;
    // 0x330f24: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x330f24u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x330f28: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x330f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x330f2c: 0x0  nop
    ctx->pc = 0x330f2cu;
    // NOP
label_330f30:
    // 0x330f30: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x330f30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x330f34: 0x56360005  bnel        $s1, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x330F34u;
    {
        const bool branch_taken_0x330f34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        if (branch_taken_0x330f34) {
            ctx->pc = 0x330F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330F34u;
            // 0x330f38: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330F4Cu;
            goto label_330f4c;
        }
    }
    ctx->pc = 0x330F3Cu;
    // 0x330f3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f40: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x330F40u;
    SET_GPR_U32(ctx, 31, 0x330F48u);
    ctx->pc = 0x330F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F40u;
    // 0x330f44: 0x26a560e8  addiu       $a1, $s5, 0x60E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 24808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x330F40u, 0x330F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F48u;
label_330f48:
    // 0x330f48: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x330f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_330f4c:
    // 0x330f4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f54: 0xc0c8e50  jal         func_323940
    ctx->pc = 0x330F54u;
    SET_GPR_U32(ctx, 31, 0x330F5Cu);
    ctx->pc = 0x330F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F54u;
    // 0x330f58: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323940u, 0x330F54u, 0x330F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F5Cu;
label_330f5c:
    // 0x330f5c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x330f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x330f60: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x330f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x330f64: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x330F64u;
    {
        const bool branch_taken_0x330f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F64u;
        // 0x330f68: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f64) {
            ctx->pc = 0x330F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330f30;
        }
    }
    ctx->pc = 0x330F6Cu;
    // 0x330f6c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x330f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_330f70:
    // 0x330f70: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x330f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x330f74: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x330f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x330f78: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x330f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x330f7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x330f7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x330f80: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x330f80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330f84: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x330f84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330f88: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x330f88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330f90: 0x3e00008  jr          $ra
    ctx->pc = 0x330F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F90u;
        // 0x330f94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330F98u;
}

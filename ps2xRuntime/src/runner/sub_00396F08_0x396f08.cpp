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

// Function: sub_00396F08
// Address: 0x396f08 - 0x396fa8
void sub_00396F08_0x396f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396F08_0x396f08");
#endif

    switch (ctx->pc) {
        case 0x396f2cu: goto label_396f2c;
        case 0x396f34u: goto label_396f34;
        case 0x396f48u: goto label_396f48;
        case 0x396f5cu: goto label_396f5c;
        case 0x396f68u: goto label_396f68;
        case 0x396f78u: goto label_396f78;
        case 0x396f80u: goto label_396f80;
        case 0x396f8cu: goto label_396f8c;
        default: break;
    }

    ctx->pc = 0x396f08u;

    // 0x396f08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x396f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x396f0c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x396f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x396f10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x396f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x396f14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x396f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396f18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x396f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x396f1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x396f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x396f20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396f24: 0xc0e4060  jal         func_390180
    ctx->pc = 0x396F24u;
    SET_GPR_U32(ctx, 31, 0x396F2Cu);
    ctx->pc = 0x396F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F24u;
    // 0x396f28: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396F24u, 0x396F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F2Cu;
label_396f2c:
    // 0x396f2c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x396F2Cu;
    SET_GPR_U32(ctx, 31, 0x396F34u);
    ctx->pc = 0x396F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F2Cu;
    // 0x396f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x396F2Cu, 0x396F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F34u;
label_396f34:
    // 0x396f34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x396f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396f38: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x396F38u;
    {
        const bool branch_taken_0x396f38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F38u;
        // 0x396f3c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396f38) {
            ctx->pc = 0x396F90u;
            goto label_396f90;
        }
    }
    ctx->pc = 0x396F40u;
    // 0x396f40: 0xc0e4060  jal         func_390180
    ctx->pc = 0x396F40u;
    SET_GPR_U32(ctx, 31, 0x396F48u);
    ctx->pc = 0x396F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F40u;
    // 0x396f44: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396F40u, 0x396F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F48u;
label_396f48:
    // 0x396f48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x396f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396f4c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x396F4Cu;
    {
        const bool branch_taken_0x396f4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x396F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F4Cu;
        // 0x396f50: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396f4c) {
            ctx->pc = 0x396F8Cu;
            goto label_396f8c;
        }
    }
    ctx->pc = 0x396F54u;
    // 0x396f54: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x396F54u;
    SET_GPR_U32(ctx, 31, 0x396F5Cu);
    ctx->pc = 0x396F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F54u;
    // 0x396f58: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x396F54u, 0x396F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F5Cu;
label_396f5c:
    // 0x396f5c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x396f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x396f60: 0xc0e8b70  jal         func_3A2DC0
    ctx->pc = 0x396F60u;
    SET_GPR_U32(ctx, 31, 0x396F68u);
    ctx->pc = 0x396F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F60u;
    // 0x396f64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x396F60u, 0x396F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F68u;
label_396f68:
    // 0x396f68: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x396f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x396f6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x396f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396f70: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x396F70u;
    SET_GPR_U32(ctx, 31, 0x396F78u);
    ctx->pc = 0x396F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F70u;
    // 0x396f74: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x396F70u, 0x396F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F78u;
label_396f78:
    // 0x396f78: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x396F78u;
    SET_GPR_U32(ctx, 31, 0x396F80u);
    ctx->pc = 0x396F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F78u;
    // 0x396f7c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x396F78u, 0x396F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F80u;
label_396f80:
    // 0x396f80: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x396f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x396f84: 0xc0e5b5e  jal         func_396D78
    ctx->pc = 0x396F84u;
    SET_GPR_U32(ctx, 31, 0x396F8Cu);
    ctx->pc = 0x396F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F84u;
    // 0x396f88: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396D78u, 0x396F84u, 0x396F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F8Cu;
label_396f8c:
    // 0x396f8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x396f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_396f90:
    // 0x396f90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x396f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396f94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x396f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396f98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x396F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F9Cu;
        // 0x396fa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396FA4u;
    // 0x396fa4: 0x0  nop
    ctx->pc = 0x396fa4u;
    // NOP
    ctx->pc = 0x396fa8u;
}

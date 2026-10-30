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

// Function: sub_00364A70
// Address: 0x364a70 - 0x364b30
void sub_00364A70_0x364a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364A70_0x364a70");
#endif

    switch (ctx->pc) {
        case 0x364a9cu: goto label_364a9c;
        case 0x364aa4u: goto label_364aa4;
        case 0x364ab8u: goto label_364ab8;
        case 0x364ac0u: goto label_364ac0;
        case 0x364ad4u: goto label_364ad4;
        case 0x364adcu: goto label_364adc;
        case 0x364af4u: goto label_364af4;
        case 0x364afcu: goto label_364afc;
        case 0x364b10u: goto label_364b10;
        default: break;
    }

    ctx->pc = 0x364a70u;

    // 0x364a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x364a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x364a74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364a78: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x364a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x364a7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x364a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x364a80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x364a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x364a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x364a8c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x364a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x364a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364a94: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364A94u;
    SET_GPR_U32(ctx, 31, 0x364A9Cu);
    ctx->pc = 0x364A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A94u;
    // 0x364a98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364A94u, 0x364A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A9Cu;
label_364a9c:
    // 0x364a9c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364A9Cu;
    SET_GPR_U32(ctx, 31, 0x364AA4u);
    ctx->pc = 0x364AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A9Cu;
    // 0x364aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364A9Cu, 0x364AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364AA4u;
label_364aa4:
    // 0x364aa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364aa8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x364aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364aac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x364aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364ab0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364AB0u;
    SET_GPR_U32(ctx, 31, 0x364AB8u);
    ctx->pc = 0x364AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364AB0u;
    // 0x364ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364AB0u, 0x364AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364AB8u;
label_364ab8:
    // 0x364ab8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364AB8u;
    SET_GPR_U32(ctx, 31, 0x364AC0u);
    ctx->pc = 0x364ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364AB8u;
    // 0x364abc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364AB8u, 0x364AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364AC0u;
label_364ac0:
    // 0x364ac0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ac4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x364ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ac8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x364ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364acc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364ACCu;
    SET_GPR_U32(ctx, 31, 0x364AD4u);
    ctx->pc = 0x364AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364ACCu;
    // 0x364ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364ACCu, 0x364AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364AD4u;
label_364ad4:
    // 0x364ad4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x364AD4u;
    SET_GPR_U32(ctx, 31, 0x364ADCu);
    ctx->pc = 0x364AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364AD4u;
    // 0x364ad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x364AD4u, 0x364ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364ADCu;
label_364adc:
    // 0x364adc: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x364adcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x364ae0: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x364ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x364ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x364ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x364ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364aec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364AECu;
    SET_GPR_U32(ctx, 31, 0x364AF4u);
    ctx->pc = 0x364AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364AECu;
    // 0x364af0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364AECu, 0x364AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364AF4u;
label_364af4:
    // 0x364af4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x364AF4u;
    SET_GPR_U32(ctx, 31, 0x364AFCu);
    ctx->pc = 0x364AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364AF4u;
    // 0x364af8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x364AF4u, 0x364AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364AFCu;
label_364afc:
    // 0x364afc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x364afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x364b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x364b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b08: 0xc0bea1e  jal         func_2FA878
    ctx->pc = 0x364B08u;
    SET_GPR_U32(ctx, 31, 0x364B10u);
    ctx->pc = 0x364B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364B08u;
    // 0x364b0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA878u, 0x364B08u, 0x364B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B10u;
label_364b10:
    // 0x364b10: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x364b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x364b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x364b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x364b1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x364b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364b20: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x364b20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364b28: 0x3e00008  jr          $ra
    ctx->pc = 0x364B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364B28u;
        // 0x364b2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364B30u;
}

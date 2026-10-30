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

// Function: sub_00373A88
// Address: 0x373a88 - 0x373b00
void sub_00373A88_0x373a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373A88_0x373a88");
#endif

    switch (ctx->pc) {
        case 0x373ab0u: goto label_373ab0;
        case 0x373ab8u: goto label_373ab8;
        case 0x373accu: goto label_373acc;
        case 0x373ad4u: goto label_373ad4;
        case 0x373ae0u: goto label_373ae0;
        default: break;
    }

    ctx->pc = 0x373a88u;

    // 0x373a88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373a90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x373a94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x373a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373aa0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x373aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373aa8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373AA8u;
    SET_GPR_U32(ctx, 31, 0x373AB0u);
    ctx->pc = 0x373AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373AA8u;
    // 0x373aac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373AA8u, 0x373AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373AB0u;
label_373ab0:
    // 0x373ab0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373AB0u;
    SET_GPR_U32(ctx, 31, 0x373AB8u);
    ctx->pc = 0x373AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373AB0u;
    // 0x373ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373AB0u, 0x373AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373AB8u;
label_373ab8:
    // 0x373ab8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373abc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x373abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ac4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373AC4u;
    SET_GPR_U32(ctx, 31, 0x373ACCu);
    ctx->pc = 0x373AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373AC4u;
    // 0x373ac8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373AC4u, 0x373ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373ACCu;
label_373acc:
    // 0x373acc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373ACCu;
    SET_GPR_U32(ctx, 31, 0x373AD4u);
    ctx->pc = 0x373AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373ACCu;
    // 0x373ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373ACCu, 0x373AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373AD4u;
label_373ad4:
    // 0x373ad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ad8: 0xc05ab10  jal         func_16AC40
    ctx->pc = 0x373AD8u;
    SET_GPR_U32(ctx, 31, 0x373AE0u);
    ctx->pc = 0x373ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373AD8u;
    // 0x373adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AC40u, 0x373AD8u, 0x373AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373AE0u;
label_373ae0:
    // 0x373ae0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x373ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ae8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373aec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373af4: 0x3e00008  jr          $ra
    ctx->pc = 0x373AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373AF4u;
        // 0x373af8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373AFCu;
    // 0x373afc: 0x0  nop
    ctx->pc = 0x373afcu;
    // NOP
    ctx->pc = 0x373b00u;
}

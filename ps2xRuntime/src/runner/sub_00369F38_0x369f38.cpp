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

// Function: sub_00369F38
// Address: 0x369f38 - 0x36a000
void sub_00369F38_0x369f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369F38_0x369f38");
#endif

    switch (ctx->pc) {
        case 0x369f68u: goto label_369f68;
        case 0x369f70u: goto label_369f70;
        case 0x369f84u: goto label_369f84;
        case 0x369f8cu: goto label_369f8c;
        case 0x369fa0u: goto label_369fa0;
        case 0x369fa8u: goto label_369fa8;
        case 0x369fbcu: goto label_369fbc;
        case 0x369fc4u: goto label_369fc4;
        case 0x369fd8u: goto label_369fd8;
        default: break;
    }

    ctx->pc = 0x369f38u;

    // 0x369f38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x369f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x369f3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x369f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369f40: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x369f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x369f44: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x369f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x369f48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x369f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x369f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x369f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x369f54: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x369f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x369f58: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x369f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x369f5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x369f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x369f60: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369F60u;
    SET_GPR_U32(ctx, 31, 0x369F68u);
    ctx->pc = 0x369F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F60u;
    // 0x369f64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369F60u, 0x369F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F68u;
label_369f68:
    // 0x369f68: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369F68u;
    SET_GPR_U32(ctx, 31, 0x369F70u);
    ctx->pc = 0x369F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F68u;
    // 0x369f6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369F68u, 0x369F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F70u;
label_369f70:
    // 0x369f70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x369f74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x369f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369f7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369F7Cu;
    SET_GPR_U32(ctx, 31, 0x369F84u);
    ctx->pc = 0x369F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F7Cu;
    // 0x369f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369F7Cu, 0x369F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F84u;
label_369f84:
    // 0x369f84: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369F84u;
    SET_GPR_U32(ctx, 31, 0x369F8Cu);
    ctx->pc = 0x369F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F84u;
    // 0x369f88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369F84u, 0x369F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F8Cu;
label_369f8c:
    // 0x369f8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x369f90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x369f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x369f98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369F98u;
    SET_GPR_U32(ctx, 31, 0x369FA0u);
    ctx->pc = 0x369F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F98u;
    // 0x369f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369F98u, 0x369FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369FA0u;
label_369fa0:
    // 0x369fa0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369FA0u;
    SET_GPR_U32(ctx, 31, 0x369FA8u);
    ctx->pc = 0x369FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369FA0u;
    // 0x369fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369FA0u, 0x369FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369FA8u;
label_369fa8:
    // 0x369fa8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369fac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x369facu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369fb4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369FB4u;
    SET_GPR_U32(ctx, 31, 0x369FBCu);
    ctx->pc = 0x369FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369FB4u;
    // 0x369fb8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369FB4u, 0x369FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369FBCu;
label_369fbc:
    // 0x369fbc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369FBCu;
    SET_GPR_U32(ctx, 31, 0x369FC4u);
    ctx->pc = 0x369FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369FBCu;
    // 0x369fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369FBCu, 0x369FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369FC4u;
label_369fc4:
    // 0x369fc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x369fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369fc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x369fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369fcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x369fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369fd0: 0xc08a2b6  jal         func_228AD8
    ctx->pc = 0x369FD0u;
    SET_GPR_U32(ctx, 31, 0x369FD8u);
    ctx->pc = 0x369FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369FD0u;
    // 0x369fd4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228AD8u, 0x369FD0u, 0x369FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369FD8u;
label_369fd8:
    // 0x369fd8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x369fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x369fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x369fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369fe0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x369fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x369fe4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x369fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369fe8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x369fe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369fec: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x369fecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x369FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369FF4u;
        // 0x369ff8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369FFCu;
    // 0x369ffc: 0x0  nop
    ctx->pc = 0x369ffcu;
    // NOP
    ctx->pc = 0x36a000u;
}

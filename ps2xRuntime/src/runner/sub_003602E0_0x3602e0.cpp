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

// Function: sub_003602E0
// Address: 0x3602e0 - 0x3603a8
void sub_003602E0_0x3602e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003602E0_0x3602e0");
#endif

    switch (ctx->pc) {
        case 0x360310u: goto label_360310;
        case 0x360318u: goto label_360318;
        case 0x36032cu: goto label_36032c;
        case 0x360334u: goto label_360334;
        case 0x360348u: goto label_360348;
        case 0x360350u: goto label_360350;
        case 0x360364u: goto label_360364;
        case 0x36036cu: goto label_36036c;
        case 0x360380u: goto label_360380;
        default: break;
    }

    ctx->pc = 0x3602e0u;

    // 0x3602e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3602e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3602e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3602e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3602e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3602e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3602ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3602ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3602f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3602f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3602f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3602f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3602f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3602f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3602fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3602fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x360300: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x360300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x360304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360308: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360308u;
    SET_GPR_U32(ctx, 31, 0x360310u);
    ctx->pc = 0x36030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360308u;
    // 0x36030c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360308u, 0x360310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360310u;
label_360310:
    // 0x360310: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360310u;
    SET_GPR_U32(ctx, 31, 0x360318u);
    ctx->pc = 0x360314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360310u;
    // 0x360314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360310u, 0x360318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360318u;
label_360318:
    // 0x360318: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36031c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36031cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360320: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x360320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x360324: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360324u;
    SET_GPR_U32(ctx, 31, 0x36032Cu);
    ctx->pc = 0x360328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360324u;
    // 0x360328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360324u, 0x36032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36032Cu;
label_36032c:
    // 0x36032c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36032Cu;
    SET_GPR_U32(ctx, 31, 0x360334u);
    ctx->pc = 0x360330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36032Cu;
    // 0x360330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36032Cu, 0x360334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360334u;
label_360334:
    // 0x360334: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360338: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x360338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36033c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36033cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360340: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360340u;
    SET_GPR_U32(ctx, 31, 0x360348u);
    ctx->pc = 0x360344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360340u;
    // 0x360344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360340u, 0x360348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360348u;
label_360348:
    // 0x360348: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360348u;
    SET_GPR_U32(ctx, 31, 0x360350u);
    ctx->pc = 0x36034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360348u;
    // 0x36034c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360348u, 0x360350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360350u;
label_360350:
    // 0x360350: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360354: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x360354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36035c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36035Cu;
    SET_GPR_U32(ctx, 31, 0x360364u);
    ctx->pc = 0x360360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36035Cu;
    // 0x360360: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36035Cu, 0x360364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360364u;
label_360364:
    // 0x360364: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360364u;
    SET_GPR_U32(ctx, 31, 0x36036Cu);
    ctx->pc = 0x360368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360364u;
    // 0x360368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360364u, 0x36036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36036Cu;
label_36036c:
    // 0x36036c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360370: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x360370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360374: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x360374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360378: 0xc0b7116  jal         func_2DC458
    ctx->pc = 0x360378u;
    SET_GPR_U32(ctx, 31, 0x360380u);
    ctx->pc = 0x36037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360378u;
    // 0x36037c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC458u, 0x360378u, 0x360380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360380u;
label_360380:
    // 0x360380: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x360380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x360384: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360388: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x360388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36038c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36038cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360390: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x360390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360394: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x360394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36039c: 0x3e00008  jr          $ra
    ctx->pc = 0x36039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3603A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36039Cu;
        // 0x3603a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36039Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3603A4u;
    // 0x3603a4: 0x0  nop
    ctx->pc = 0x3603a4u;
    // NOP
    ctx->pc = 0x3603a8u;
}

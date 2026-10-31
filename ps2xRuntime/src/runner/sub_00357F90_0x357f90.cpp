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

// Function: sub_00357F90
// Address: 0x357f90 - 0x358028
void sub_00357F90_0x357f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357F90_0x357f90");
#endif

    switch (ctx->pc) {
        case 0x357fb0u: goto label_357fb0;
        case 0x357fc8u: goto label_357fc8;
        case 0x357fdcu: goto label_357fdc;
        case 0x357ff0u: goto label_357ff0;
        case 0x358000u: goto label_358000;
        case 0x358008u: goto label_358008;
        default: break;
    }

    ctx->pc = 0x357f90u;

    // 0x357f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357f94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357f98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x357f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x357f9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357fa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357fa8: 0xc1024a0  jal         func_409280
    ctx->pc = 0x357FA8u;
    SET_GPR_U32(ctx, 31, 0x357FB0u);
    ctx->pc = 0x357FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FA8u;
    // 0x357fac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x357FA8u, 0x357FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FB0u;
label_357fb0:
    // 0x357fb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357fb4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x357FB4u;
    {
        const bool branch_taken_0x357fb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x357FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FB4u;
        // 0x357fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357fb4) {
            ctx->pc = 0x357FCCu;
            goto label_357fcc;
        }
    }
    ctx->pc = 0x357FBCu;
    // 0x357fbc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357fc0: 0xc10241a  jal         func_409068
    ctx->pc = 0x357FC0u;
    SET_GPR_U32(ctx, 31, 0x357FC8u);
    ctx->pc = 0x357FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FC0u;
    // 0x357fc4: 0x24a591a0  addiu       $a1, $a1, -0x6E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357FC0u, 0x357FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FC8u;
label_357fc8:
    // 0x357fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357fcc:
    // 0x357fcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x357fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357fd0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x357fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357fd4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x357FD4u;
    SET_GPR_U32(ctx, 31, 0x357FDCu);
    ctx->pc = 0x357FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FD4u;
    // 0x357fd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x357FD4u, 0x357FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FDCu;
label_357fdc:
    // 0x357fdc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357FDCu;
    {
        const bool branch_taken_0x357fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FDCu;
        // 0x357fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357fdc) {
            ctx->pc = 0x357FF4u;
            goto label_357ff4;
        }
    }
    ctx->pc = 0x357FE4u;
    // 0x357fe4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357fe8: 0xc10241a  jal         func_409068
    ctx->pc = 0x357FE8u;
    SET_GPR_U32(ctx, 31, 0x357FF0u);
    ctx->pc = 0x357FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FE8u;
    // 0x357fec: 0x24a59118  addiu       $a1, $a1, -0x6EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357FE8u, 0x357FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FF0u;
label_357ff0:
    // 0x357ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357ff4:
    // 0x357ff4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x357ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357ff8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x357FF8u;
    SET_GPR_U32(ctx, 31, 0x358000u);
    ctx->pc = 0x357FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FF8u;
    // 0x357ffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x357FF8u, 0x358000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358000u;
label_358000:
    // 0x358000: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x358000u;
    SET_GPR_U32(ctx, 31, 0x358008u);
    ctx->pc = 0x358004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358000u;
    // 0x358004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x358000u, 0x358008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358008u;
label_358008:
    // 0x358008: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x358008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x35800c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35800cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358010: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35801c: 0x3e00008  jr          $ra
    ctx->pc = 0x35801Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35801Cu;
        // 0x358020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35801Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358024u;
    // 0x358024: 0x0  nop
    ctx->pc = 0x358024u;
    // NOP
    ctx->pc = 0x358028u;
}

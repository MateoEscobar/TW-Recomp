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

// Function: sub_0011C3B8
// Address: 0x11c3b8 - 0x11c470
void sub_0011C3B8_0x11c3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C3B8_0x11c3b8");
#endif

    switch (ctx->pc) {
        case 0x11c3e0u: goto label_11c3e0;
        case 0x11c3f4u: goto label_11c3f4;
        case 0x11c414u: goto label_11c414;
        case 0x11c418u: goto label_11c418;
        case 0x11c434u: goto label_11c434;
        case 0x11c44cu: goto label_11c44c;
        default: break;
    }

    ctx->pc = 0x11c3b8u;

    // 0x11c3b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c3bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3c0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11c3c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11c3c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11c3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11c3cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11c3d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11c3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11c3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c3d8: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x11C3D8u;
    SET_GPR_U32(ctx, 31, 0x11C3E0u);
    ctx->pc = 0x11C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3D8u;
    // 0x11c3dc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11C3D8u, 0x11C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3E0u;
label_11c3e0:
    // 0x11c3e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3e4: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11C3E4u;
    {
        const bool branch_taken_0x11c3e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3E4u;
        // 0x11c3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3e4) {
            ctx->pc = 0x11C454u;
            goto label_11c454;
        }
    }
    ctx->pc = 0x11C3ECu;
    // 0x11c3ec: 0xc049f52  jal         func_127D48
    ctx->pc = 0x11C3ECu;
    SET_GPR_U32(ctx, 31, 0x11C3F4u);
    ctx->pc = 0x11C3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3ECu;
    // 0x11c3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D48u, 0x11C3ECu, 0x11C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3F4u;
label_11c3f4:
    // 0x11c3f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11c3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c3f8: 0x7a020180  lq          $v0, 0x180($s0)
    ctx->pc = 0x11c3f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x11c3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c400: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c400u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c404: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11c404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c408: 0x7e020240  sq          $v0, 0x240($s0)
    ctx->pc = 0x11c408u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 576), GPR_VEC(ctx, 2));
    // 0x11c40c: 0xc0496d8  jal         func_125B60
    ctx->pc = 0x11C40Cu;
    SET_GPR_U32(ctx, 31, 0x11C414u);
    ctx->pc = 0x11C410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C40Cu;
    // 0x11c410: 0x7e020270  sq          $v0, 0x270($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 624), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125B60u, 0x11C40Cu, 0x11C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C414u;
label_11c414:
    // 0x11c414: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x11c414u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_11c418:
    // 0x11c418: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x11c418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x11c41c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11c41cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11c420: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11c420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11c424: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11C424u;
    {
        const bool branch_taken_0x11c424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C424u;
        // 0x11c428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c424) {
            ctx->pc = 0x11C454u;
            goto label_11c454;
        }
    }
    ctx->pc = 0x11C42Cu;
    // 0x11c42c: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x11C42Cu;
    SET_GPR_U32(ctx, 31, 0x11C434u);
    ctx->pc = 0x11C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C42Cu;
    // 0x11c430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11C42Cu, 0x11C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C434u;
label_11c434:
    // 0x11c434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c438: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C438u;
    {
        const bool branch_taken_0x11c438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C438u;
        // 0x11c43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c438) {
            ctx->pc = 0x11C454u;
            goto label_11c454;
        }
    }
    ctx->pc = 0x11C440u;
    // 0x11c440: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c440u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c444: 0xc0496d8  jal         func_125B60
    ctx->pc = 0x11C444u;
    SET_GPR_U32(ctx, 31, 0x11C44Cu);
    ctx->pc = 0x11C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C444u;
    // 0x11c448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125B60u, 0x11C444u, 0x11C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C44Cu;
label_11c44c:
    // 0x11c44c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x11C44Cu;
    {
        const bool branch_taken_0x11c44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C44Cu;
        // 0x11c450: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c44c) {
            ctx->pc = 0x11C418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c418;
        }
    }
    ctx->pc = 0x11C454u;
label_11c454:
    // 0x11c454: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11c454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c458: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11c458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c45c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11c45cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c464: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c468: 0x3e00008  jr          $ra
    ctx->pc = 0x11C468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C468u;
        // 0x11c46c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C470u;
}

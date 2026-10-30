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

// Function: sub_0036E388
// Address: 0x36e388 - 0x36e438
void sub_0036E388_0x36e388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E388_0x36e388");
#endif

    switch (ctx->pc) {
        case 0x36e3a8u: goto label_36e3a8;
        case 0x36e3c0u: goto label_36e3c0;
        case 0x36e3c8u: goto label_36e3c8;
        case 0x36e3e0u: goto label_36e3e0;
        case 0x36e3e8u: goto label_36e3e8;
        case 0x36e3f8u: goto label_36e3f8;
        case 0x36e40cu: goto label_36e40c;
        default: break;
    }

    ctx->pc = 0x36e388u;

    // 0x36e388: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36e388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36e38c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x36e38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36e390: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36e390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36e394: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36e39c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36e39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e3a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36e3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36e3a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36e3a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36e3a8:
    // 0x36e3a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e3ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e3b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e3b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e3b8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36E3B8u;
    SET_GPR_U32(ctx, 31, 0x36E3C0u);
    ctx->pc = 0x36E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E3B8u;
    // 0x36e3bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36E3B8u, 0x36E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E3C0u;
label_36e3c0:
    // 0x36e3c0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E3C0u;
    SET_GPR_U32(ctx, 31, 0x36E3C8u);
    ctx->pc = 0x36E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E3C0u;
    // 0x36e3c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E3C0u, 0x36E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E3C8u;
label_36e3c8:
    // 0x36e3c8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36e3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36e3cc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36e3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36e3d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36E3D0u;
    {
        const bool branch_taken_0x36e3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E3D0u;
        // 0x36e3d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e3d0) {
            ctx->pc = 0x36E3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e3a8;
        }
    }
    ctx->pc = 0x36E3D8u;
    // 0x36e3d8: 0xc094392  jal         func_250E48
    ctx->pc = 0x36E3D8u;
    SET_GPR_U32(ctx, 31, 0x36E3E0u);
    ctx->pc = 0x36E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E3D8u;
    // 0x36e3dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250E48u, 0x36E3D8u, 0x36E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E3E0u;
label_36e3e0:
    // 0x36e3e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e3e4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36e3e8:
    // 0x36e3e8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x36e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x36e3ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e3f0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36E3F0u;
    SET_GPR_U32(ctx, 31, 0x36E3F8u);
    ctx->pc = 0x36E3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E3F0u;
    // 0x36e3f4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36E3F0u, 0x36E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E3F8u;
label_36e3f8:
    // 0x36e3f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36e3f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e3fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e400: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e404: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36E404u;
    SET_GPR_U32(ctx, 31, 0x36E40Cu);
    ctx->pc = 0x36E408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E404u;
    // 0x36e408: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36E404u, 0x36E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E40Cu;
label_36e40c:
    // 0x36e40c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36e40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36e410: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36E410u;
    {
        const bool branch_taken_0x36e410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E410u;
        // 0x36e414: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e410) {
            ctx->pc = 0x36E3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e3e8;
        }
    }
    ctx->pc = 0x36E418u;
    // 0x36e418: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36e418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36e41c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e420: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36e420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36e424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36e428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e42c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E42Cu;
        // 0x36e430: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E434u;
    // 0x36e434: 0x0  nop
    ctx->pc = 0x36e434u;
    // NOP
    ctx->pc = 0x36e438u;
}

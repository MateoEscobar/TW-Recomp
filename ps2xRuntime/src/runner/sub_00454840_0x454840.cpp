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

// Function: sub_00454840
// Address: 0x454840 - 0x454918
void sub_00454840_0x454840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00454840_0x454840");
#endif

    switch (ctx->pc) {
        case 0x45485cu: goto label_45485c;
        case 0x454870u: goto label_454870;
        case 0x454884u: goto label_454884;
        case 0x45489cu: goto label_45489c;
        case 0x4548b4u: goto label_4548b4;
        case 0x4548bcu: goto label_4548bc;
        case 0x4548d8u: goto label_4548d8;
        case 0x4548ecu: goto label_4548ec;
        case 0x4548fcu: goto label_4548fc;
        default: break;
    }

    ctx->pc = 0x454840u;

    // 0x454840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x454840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x454844: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x454844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x454848: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x454848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x45484c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x454850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x454850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x454854: 0xc1295ce  jal         func_4A5738
    ctx->pc = 0x454854u;
    SET_GPR_U32(ctx, 31, 0x45485Cu);
    ctx->pc = 0x4A5738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5738u, 0x454854u, 0x45485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45485Cu;
label_45485c:
    // 0x45485c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45485cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454860: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x454860u;
    {
        const bool branch_taken_0x454860 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x454864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454860u;
        // 0x454864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454860) {
            ctx->pc = 0x454900u;
            goto label_454900;
        }
    }
    ctx->pc = 0x454868u;
    // 0x454868: 0xc129ae6  jal         func_4A6B98
    ctx->pc = 0x454868u;
    SET_GPR_U32(ctx, 31, 0x454870u);
    ctx->pc = 0x45486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454868u;
    // 0x45486c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6B98u, 0x454868u, 0x454870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454870u;
label_454870:
    // 0x454870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x454870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454874: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x454874u;
    {
        const bool branch_taken_0x454874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x454874) {
            ctx->pc = 0x4548F4u;
            goto label_4548f4;
        }
    }
    ctx->pc = 0x45487Cu;
    // 0x45487c: 0xc11dad8  jal         func_476B60
    ctx->pc = 0x45487Cu;
    SET_GPR_U32(ctx, 31, 0x454884u);
    ctx->pc = 0x476B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476B60u, 0x45487Cu, 0x454884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454884u;
label_454884:
    // 0x454884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x454884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x454888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45488c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45488cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454890: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x454890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454894: 0xc129b4a  jal         func_4A6D28
    ctx->pc = 0x454894u;
    SET_GPR_U32(ctx, 31, 0x45489Cu);
    ctx->pc = 0x454898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454894u;
    // 0x454898: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6D28u, 0x454894u, 0x45489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45489Cu;
label_45489c:
    // 0x45489c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45489cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4548a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4548a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4548a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4548a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4548a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4548a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4548ac: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x4548ACu;
    SET_GPR_U32(ctx, 31, 0x4548B4u);
    ctx->pc = 0x4548B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4548ACu;
    // 0x4548b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x4548ACu, 0x4548B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4548B4u;
label_4548b4:
    // 0x4548b4: 0xc12995a  jal         func_4A6568
    ctx->pc = 0x4548B4u;
    SET_GPR_U32(ctx, 31, 0x4548BCu);
    ctx->pc = 0x4548B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4548B4u;
    // 0x4548b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6568u, 0x4548B4u, 0x4548BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4548BCu;
label_4548bc:
    // 0x4548bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4548bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4548c0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x4548C0u;
    {
        const bool branch_taken_0x4548c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4548C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4548C0u;
        // 0x4548c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4548c0) {
            ctx->pc = 0x4548F4u;
            goto label_4548f4;
        }
    }
    ctx->pc = 0x4548C8u;
    // 0x4548c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4548c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4548cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4548ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4548d0: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x4548D0u;
    SET_GPR_U32(ctx, 31, 0x4548D8u);
    ctx->pc = 0x4548D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4548D0u;
    // 0x4548d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x4548D0u, 0x4548D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4548D8u;
label_4548d8:
    // 0x4548d8: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x4548d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x4548dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4548dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4548e0: 0x24c64298  addiu       $a2, $a2, 0x4298
    ctx->pc = 0x4548e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17048));
    // 0x4548e4: 0xc11dadc  jal         func_476B70
    ctx->pc = 0x4548E4u;
    SET_GPR_U32(ctx, 31, 0x4548ECu);
    ctx->pc = 0x4548E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4548E4u;
    // 0x4548e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476B70u, 0x4548E4u, 0x4548ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4548ECu;
label_4548ec:
    // 0x4548ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4548ECu;
    {
        const bool branch_taken_0x4548ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4548F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4548ECu;
        // 0x4548f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4548ec) {
            ctx->pc = 0x454900u;
            goto label_454900;
        }
    }
    ctx->pc = 0x4548F4u;
label_4548f4:
    // 0x4548f4: 0xc1295f2  jal         func_4A57C8
    ctx->pc = 0x4548F4u;
    SET_GPR_U32(ctx, 31, 0x4548FCu);
    ctx->pc = 0x4548F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4548F4u;
    // 0x4548f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x4548F4u, 0x4548FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4548FCu;
label_4548fc:
    // 0x4548fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4548fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454900:
    // 0x454900: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x454900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x454904: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x454904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x454908: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x454908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45490c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45490cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x454910: 0x3e00008  jr          $ra
    ctx->pc = 0x454910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454910u;
        // 0x454914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x454910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x454918u;
}

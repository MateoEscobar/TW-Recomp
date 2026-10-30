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

// Function: sub_001906E8
// Address: 0x1906e8 - 0x190770
void sub_001906E8_0x1906e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001906E8_0x1906e8");
#endif

    switch (ctx->pc) {
        case 0x190708u: goto label_190708;
        case 0x190718u: goto label_190718;
        case 0x190730u: goto label_190730;
        case 0x190740u: goto label_190740;
        case 0x190750u: goto label_190750;
        case 0x19075cu: goto label_19075c;
        default: break;
    }

    ctx->pc = 0x1906e8u;

    // 0x1906e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1906e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1906ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1906ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1906f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1906f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1906f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1906f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1906fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1906fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190700: 0xc065f7c  jal         func_197DF0
    ctx->pc = 0x190700u;
    SET_GPR_U32(ctx, 31, 0x190708u);
    ctx->pc = 0x190704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190700u;
    // 0x190704: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197DF0u, 0x190700u, 0x190708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190708u;
label_190708:
    // 0x190708: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x190708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19070c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190710: 0xc11fc7e  jal         func_47F1F8
    ctx->pc = 0x190710u;
    SET_GPR_U32(ctx, 31, 0x190718u);
    ctx->pc = 0x190714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190710u;
    // 0x190714: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F1F8u, 0x190710u, 0x190718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190718u;
label_190718:
    // 0x190718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19071c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x19071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x190720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190724: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x190724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190728: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x190728u;
    SET_GPR_U32(ctx, 31, 0x190730u);
    ctx->pc = 0x19072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190728u;
    // 0x19072c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x190728u, 0x190730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190730u;
label_190730:
    // 0x190730: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190730u;
    {
        const bool branch_taken_0x190730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190730u;
        // 0x190734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190730) {
            ctx->pc = 0x190748u;
            goto label_190748;
        }
    }
    ctx->pc = 0x190738u;
    // 0x190738: 0xc12043e  jal         func_4810F8
    ctx->pc = 0x190738u;
    SET_GPR_U32(ctx, 31, 0x190740u);
    ctx->pc = 0x19073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190738u;
    // 0x19073c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4810F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4810F8u, 0x190738u, 0x190740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190740u;
label_190740:
    // 0x190740: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x190740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190748:
    // 0x190748: 0xc11fcaa  jal         func_47F2A8
    ctx->pc = 0x190748u;
    SET_GPR_U32(ctx, 31, 0x190750u);
    ctx->pc = 0x19074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190748u;
    // 0x19074c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F2A8u, 0x190748u, 0x190750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190750u;
label_190750:
    // 0x190750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190754: 0xc051052  jal         func_144148
    ctx->pc = 0x190754u;
    SET_GPR_U32(ctx, 31, 0x19075Cu);
    ctx->pc = 0x190758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190754u;
    // 0x190758: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144148u, 0x190754u, 0x19075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19075Cu;
label_19075c:
    // 0x19075c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19075cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190760: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x190760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190764: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190768: 0x3e00008  jr          $ra
    ctx->pc = 0x190768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190768u;
        // 0x19076c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190770u;
}

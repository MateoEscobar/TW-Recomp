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

// Function: sub_00378700
// Address: 0x378700 - 0x378790
void sub_00378700_0x378700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378700_0x378700");
#endif

    switch (ctx->pc) {
        case 0x378728u: goto label_378728;
        case 0x378730u: goto label_378730;
        case 0x378744u: goto label_378744;
        case 0x37874cu: goto label_37874c;
        case 0x378760u: goto label_378760;
        case 0x378770u: goto label_378770;
        default: break;
    }

    ctx->pc = 0x378700u;

    // 0x378700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x378700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x378704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x378704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378708: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x378708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37870c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x378710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x378710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378714: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x378714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378718: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x378718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37871c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37871cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378720: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378720u;
    SET_GPR_U32(ctx, 31, 0x378728u);
    ctx->pc = 0x378724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378720u;
    // 0x378724: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378720u, 0x378728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378728u;
label_378728:
    // 0x378728: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378728u;
    SET_GPR_U32(ctx, 31, 0x378730u);
    ctx->pc = 0x37872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378728u;
    // 0x37872c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378728u, 0x378730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378730u;
label_378730:
    // 0x378730: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x378730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378734: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x378734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378738: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37873c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37873Cu;
    SET_GPR_U32(ctx, 31, 0x378744u);
    ctx->pc = 0x378740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37873Cu;
    // 0x378740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37873Cu, 0x378744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378744u;
label_378744:
    // 0x378744: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378744u;
    SET_GPR_U32(ctx, 31, 0x37874Cu);
    ctx->pc = 0x378748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378744u;
    // 0x378748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378744u, 0x37874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37874Cu;
label_37874c:
    // 0x37874c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37874cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378754: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x378754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x378758: 0xc1024c6  jal         func_409318
    ctx->pc = 0x378758u;
    SET_GPR_U32(ctx, 31, 0x378760u);
    ctx->pc = 0x37875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378758u;
    // 0x37875c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x378758u, 0x378760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378760u;
label_378760:
    // 0x378760: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x378760u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x378764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378768: 0xc0e37f8  jal         func_38DFE0
    ctx->pc = 0x378768u;
    SET_GPR_U32(ctx, 31, 0x378770u);
    ctx->pc = 0x37876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378768u;
    // 0x37876c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DFE0u, 0x378768u, 0x378770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378770u;
label_378770:
    // 0x378770: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x378770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378778: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x378778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37877c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37877cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378784: 0x3e00008  jr          $ra
    ctx->pc = 0x378784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378784u;
        // 0x378788: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37878Cu;
    // 0x37878c: 0x0  nop
    ctx->pc = 0x37878cu;
    // NOP
    ctx->pc = 0x378790u;
}

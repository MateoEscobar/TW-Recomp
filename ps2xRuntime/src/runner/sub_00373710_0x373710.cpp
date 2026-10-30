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

// Function: sub_00373710
// Address: 0x373710 - 0x373788
void sub_00373710_0x373710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373710_0x373710");
#endif

    switch (ctx->pc) {
        case 0x373738u: goto label_373738;
        case 0x373740u: goto label_373740;
        case 0x373758u: goto label_373758;
        case 0x373760u: goto label_373760;
        case 0x37376cu: goto label_37376c;
        default: break;
    }

    ctx->pc = 0x373710u;

    // 0x373710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373718: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37371c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37371cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373720: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373724: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x373724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373728: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37372c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37372cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373730: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373730u;
    SET_GPR_U32(ctx, 31, 0x373738u);
    ctx->pc = 0x373734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373730u;
    // 0x373734: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373730u, 0x373738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373738u;
label_373738:
    // 0x373738: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373738u;
    SET_GPR_U32(ctx, 31, 0x373740u);
    ctx->pc = 0x37373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373738u;
    // 0x37373c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373738u, 0x373740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373740u;
label_373740:
    // 0x373740: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x373740u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373744: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373748: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x373748u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x37374c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373750: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373750u;
    SET_GPR_U32(ctx, 31, 0x373758u);
    ctx->pc = 0x373754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373750u;
    // 0x373754: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373750u, 0x373758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373758u;
label_373758:
    // 0x373758: 0xc10b108  jal         func_42C420
    ctx->pc = 0x373758u;
    SET_GPR_U32(ctx, 31, 0x373760u);
    ctx->pc = 0x37375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373758u;
    // 0x37375c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x373758u, 0x373760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373760u;
label_373760:
    // 0x373760: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373764: 0xc05a94e  jal         func_16A538
    ctx->pc = 0x373764u;
    SET_GPR_U32(ctx, 31, 0x37376Cu);
    ctx->pc = 0x373768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373764u;
    // 0x373768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A538u, 0x373764u, 0x37376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37376Cu;
label_37376c:
    // 0x37376c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37376cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373774: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373778: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37377c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37377cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373780: 0x3e00008  jr          $ra
    ctx->pc = 0x373780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373780u;
        // 0x373784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373788u;
}

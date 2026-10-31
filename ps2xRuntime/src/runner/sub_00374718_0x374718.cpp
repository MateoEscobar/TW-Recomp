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

// Function: sub_00374718
// Address: 0x374718 - 0x374780
void sub_00374718_0x374718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374718_0x374718");
#endif

    switch (ctx->pc) {
        case 0x374738u: goto label_374738;
        case 0x374740u: goto label_374740;
        case 0x374758u: goto label_374758;
        case 0x374764u: goto label_374764;
        default: break;
    }

    ctx->pc = 0x374718u;

    // 0x374718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37471c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37471cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374720: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x374724: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374728: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x374728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37472c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374730: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374730u;
    SET_GPR_U32(ctx, 31, 0x374738u);
    ctx->pc = 0x374734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374730u;
    // 0x374734: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374730u, 0x374738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374738u;
label_374738:
    // 0x374738: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374738u;
    SET_GPR_U32(ctx, 31, 0x374740u);
    ctx->pc = 0x37473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374738u;
    // 0x37473c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374738u, 0x374740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374740u;
label_374740:
    // 0x374740: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x374740u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x374744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374748: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x374748u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x37474c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37474cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374750: 0xc1024c6  jal         func_409318
    ctx->pc = 0x374750u;
    SET_GPR_U32(ctx, 31, 0x374758u);
    ctx->pc = 0x374754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374750u;
    // 0x374754: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x374750u, 0x374758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374758u;
label_374758:
    // 0x374758: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x374758u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37475c: 0xc05afb8  jal         func_16BEE0
    ctx->pc = 0x37475Cu;
    SET_GPR_U32(ctx, 31, 0x374764u);
    ctx->pc = 0x374760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37475Cu;
    // 0x374760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BEE0u, 0x37475Cu, 0x374764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374764u;
label_374764:
    // 0x374764: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x374764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37476c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37476cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374774: 0x3e00008  jr          $ra
    ctx->pc = 0x374774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374774u;
        // 0x374778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37477Cu;
    // 0x37477c: 0x0  nop
    ctx->pc = 0x37477cu;
    // NOP
    ctx->pc = 0x374780u;
}

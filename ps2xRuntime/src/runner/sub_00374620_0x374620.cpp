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

// Function: sub_00374620
// Address: 0x374620 - 0x374688
void sub_00374620_0x374620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374620_0x374620");
#endif

    switch (ctx->pc) {
        case 0x374640u: goto label_374640;
        case 0x374648u: goto label_374648;
        case 0x374660u: goto label_374660;
        case 0x37466cu: goto label_37466c;
        default: break;
    }

    ctx->pc = 0x374620u;

    // 0x374620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x374624: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37462c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37462cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374630: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x374630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x374634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374638: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374638u;
    SET_GPR_U32(ctx, 31, 0x374640u);
    ctx->pc = 0x37463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374638u;
    // 0x37463c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374638u, 0x374640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374640u;
label_374640:
    // 0x374640: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374640u;
    SET_GPR_U32(ctx, 31, 0x374648u);
    ctx->pc = 0x374644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374640u;
    // 0x374644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374640u, 0x374648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374648u;
label_374648:
    // 0x374648: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x374648u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37464c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374650: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x374650u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x374654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374658: 0xc1024c6  jal         func_409318
    ctx->pc = 0x374658u;
    SET_GPR_U32(ctx, 31, 0x374660u);
    ctx->pc = 0x37465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374658u;
    // 0x37465c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x374658u, 0x374660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374660u;
label_374660:
    // 0x374660: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x374660u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x374664: 0xc05af7a  jal         func_16BDE8
    ctx->pc = 0x374664u;
    SET_GPR_U32(ctx, 31, 0x37466Cu);
    ctx->pc = 0x374668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374664u;
    // 0x374668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BDE8u, 0x374664u, 0x37466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37466Cu;
label_37466c:
    // 0x37466c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37466cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37467c: 0x3e00008  jr          $ra
    ctx->pc = 0x37467Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37467Cu;
        // 0x374680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37467Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374684u;
    // 0x374684: 0x0  nop
    ctx->pc = 0x374684u;
    // NOP
    ctx->pc = 0x374688u;
}

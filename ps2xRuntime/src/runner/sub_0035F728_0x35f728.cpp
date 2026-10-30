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

// Function: sub_0035F728
// Address: 0x35f728 - 0x35f790
void sub_0035F728_0x35f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F728_0x35f728");
#endif

    switch (ctx->pc) {
        case 0x35f748u: goto label_35f748;
        case 0x35f750u: goto label_35f750;
        case 0x35f768u: goto label_35f768;
        case 0x35f774u: goto label_35f774;
        default: break;
    }

    ctx->pc = 0x35f728u;

    // 0x35f728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f72c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f738: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35f738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35f73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f740: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F740u;
    SET_GPR_U32(ctx, 31, 0x35F748u);
    ctx->pc = 0x35F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F740u;
    // 0x35f744: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F740u, 0x35F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F748u;
label_35f748:
    // 0x35f748: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F748u;
    SET_GPR_U32(ctx, 31, 0x35F750u);
    ctx->pc = 0x35F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F748u;
    // 0x35f74c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F748u, 0x35F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F750u;
label_35f750:
    // 0x35f750: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f750u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f758: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f758u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f75c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35f75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f760: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35F760u;
    SET_GPR_U32(ctx, 31, 0x35F768u);
    ctx->pc = 0x35F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F760u;
    // 0x35f764: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35F760u, 0x35F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F768u;
label_35f768:
    // 0x35f768: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35f768u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f76c: 0xc05aeb0  jal         func_16BAC0
    ctx->pc = 0x35F76Cu;
    SET_GPR_U32(ctx, 31, 0x35F774u);
    ctx->pc = 0x35F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F76Cu;
    // 0x35f770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BAC0u, 0x35F76Cu, 0x35F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F774u;
label_35f774:
    // 0x35f774: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35f774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f784: 0x3e00008  jr          $ra
    ctx->pc = 0x35F784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F784u;
        // 0x35f788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F78Cu;
    // 0x35f78c: 0x0  nop
    ctx->pc = 0x35f78cu;
    // NOP
    ctx->pc = 0x35f790u;
}

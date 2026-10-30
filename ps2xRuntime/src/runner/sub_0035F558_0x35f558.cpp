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

// Function: sub_0035F558
// Address: 0x35f558 - 0x35f5c0
void sub_0035F558_0x35f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F558_0x35f558");
#endif

    switch (ctx->pc) {
        case 0x35f578u: goto label_35f578;
        case 0x35f580u: goto label_35f580;
        case 0x35f598u: goto label_35f598;
        case 0x35f5a4u: goto label_35f5a4;
        default: break;
    }

    ctx->pc = 0x35f558u;

    // 0x35f558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f55c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f568: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35f56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f570: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F570u;
    SET_GPR_U32(ctx, 31, 0x35F578u);
    ctx->pc = 0x35F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F570u;
    // 0x35f574: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F570u, 0x35F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F578u;
label_35f578:
    // 0x35f578: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F578u;
    SET_GPR_U32(ctx, 31, 0x35F580u);
    ctx->pc = 0x35F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F578u;
    // 0x35f57c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F578u, 0x35F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F580u;
label_35f580:
    // 0x35f580: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f580u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f588: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f588u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f58c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f590: 0xc102488  jal         func_409220
    ctx->pc = 0x35F590u;
    SET_GPR_U32(ctx, 31, 0x35F598u);
    ctx->pc = 0x35F594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F590u;
    // 0x35f594: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35F590u, 0x35F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F598u;
label_35f598:
    // 0x35f598: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35f598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f59c: 0xc05aca0  jal         func_16B280
    ctx->pc = 0x35F59Cu;
    SET_GPR_U32(ctx, 31, 0x35F5A4u);
    ctx->pc = 0x35F5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F59Cu;
    // 0x35f5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B280u, 0x35F59Cu, 0x35F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F5A4u;
label_35f5a4:
    // 0x35f5a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35f5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f5a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f5ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x35F5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F5B4u;
        // 0x35f5b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F5BCu;
    // 0x35f5bc: 0x0  nop
    ctx->pc = 0x35f5bcu;
    // NOP
    ctx->pc = 0x35f5c0u;
}
